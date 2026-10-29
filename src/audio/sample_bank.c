/* Host output for game-owned Xbox ADPCM buffers; streaming ADX is native. */
#include <windows.h>
#include <mmsystem.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common/guest_runtime.h"
#include "common/guest_addresses.h"
#include "audio/xbox_adpcm.h"

#define BANK_VOICE_COUNT 64

extern void sub_0004E2F0_gen(void);
extern void sub_0004F2B0_gen(void);
extern void sub_001ADACB_gen(void);
extern void sub_001AB2BB_gen(void);
extern void sub_001AB39F_gen(void);
extern void sub_001AB3BB_gen(void);
extern void sub_001AB3DB_gen(void);
extern void sub_001AB1F7_gen(void);
extern void sub_001AD0B3_gen(void);
extern void sub_001AB37F_gen(void);
extern void sub_001AB303_gen(void);
extern void sub_001AB31B_gen(void);
extern void sub_001AB33F_gen(void);
extern void sub_001A8E34_gen(void);

typedef struct BankVoice 
{
    uint32_t handle, rate, channels, position, loop_start, loop_frames;
    uint32_t start_frame;

    int playing, looping, paused;

    HWAVEOUT output;
    WAVEHDR headers[2];

    int16_t *pcm, *play_pcm;
    int32_t volume_db;
    size_t frames;

} BankVoice;

static BankVoice voices[BANK_VOICE_COUNT];
static SRWLOCK voice_lock = SRWLOCK_INIT;

static uint32_t arg(unsigned n) 
{ 
    return GMEM32(g_esp + 4 + n*4); 
}

static void result(uint32_t value, unsigned args) 
{ 
    g_eax = value; 
    g_esp += 4 + args*4; 
}

static BankVoice *find_voice(uint32_t handle)
{
    for (unsigned i = 0; i < BANK_VOICE_COUNT; ++i)
        if (handle && voices[i].handle == handle) 
            return &voices[i];

    return NULL;
}

static void reset_output(BankVoice *v)
{
    if (v->output) 
    {
        waveOutReset(v->output);

        for (unsigned i = 0; i < 2; ++i)
            if (v->headers[i].dwFlags & WHDR_PREPARED)
                waveOutUnprepareHeader(v->output, &v->headers[i], sizeof(WAVEHDR));
    }

    memset(v->headers, 0, sizeof(v->headers));
    v->playing = v->paused = 0;
}

static uint32_t cursor(BankVoice *v)
{
    if (!v->playing || !v->output) 
        return v->position;

    MMTIME time = {0};
    time.wType = TIME_SAMPLES;
    if (waveOutGetPosition(v->output, &time, sizeof time) != MMSYSERR_NOERROR)
        return v->position;

    uint32_t elapsed = time.wType == TIME_SAMPLES ? time.u.sample :
        time.wType == TIME_BYTES ? time.u.cb / (2*v->channels) :
        (uint32_t)((uint64_t)time.u.ms*v->rate/1000);

    uint32_t frame = v->start_frame + elapsed;
    if (v->looping && v->loop_frames && frame >= v->loop_start)
        frame = v->loop_start + (frame-v->loop_start)%v->loop_frames;
    else if 
        (frame >= v->frames) frame = (uint32_t)v->frames;

    return frame;
}

static MMRESULT queue_pcm(BankVoice *v, unsigned index, uint32_t first, uint32_t frames, int loop)
{
    WAVEHDR *h = &v->headers[index];
    h->lpData = (LPSTR)(v->play_pcm + (size_t)first*v->channels);
    h->dwBufferLength = frames*v->channels*2;
    h->dwFlags = loop ? WHDR_BEGINLOOP | WHDR_ENDLOOP : 0;
    h->dwLoops = loop ? 0xFFFFFFFFu : 0;

    MMRESULT error = waveOutPrepareHeader(v->output, h, sizeof *h);
    if (!error) 
        error = waveOutWrite(v->output, h, sizeof *h);

    return error;
}

static uint32_t play_voice(BankVoice *v, uint32_t flags)
{
    uint32_t first = v->position;
    reset_output(v);

    if (!v->output || !v->pcm || first >= v->frames)
        return 0x80004005u;

    if (!v->play_pcm) 
        v->play_pcm = malloc(v->frames*v->channels*2);

    if (!v->play_pcm) 
        return 0x8007000Eu;

    double gain = v->volume_db <= -10000 ? 0.0 : 
                  v->volume_db >= 0 ? 1.0 :
                  pow(10.0, v->volume_db/2000.0);

    for (size_t i = 0; i < v->frames*v->channels; ++i)
        v->play_pcm[i] = (int16_t)(v->pcm[i]*gain);

    v->start_frame = first;
    v->looping = (flags & 1) != 0;
    uint32_t end = v->loop_start + v->loop_frames;

    if (!v->loop_frames || end > v->frames)
        v->loop_start = 0; v->loop_frames = (uint32_t)v->frames;
    
    MMRESULT error;
    waveOutPause(v->output);
    if (v->looping) 
    {
        if (first >= v->loop_start + v->loop_frames) 
            first = v->loop_start;

        unsigned index = 0;
        if (first != v->loop_start) 
        {
            uint32_t until = first < v->loop_start ? v->loop_start :
                                     v->loop_start + v->loop_frames;

            error = queue_pcm(v, index++, first, until-first, 0);
            if (error) 
            { 
                reset_output(v); 
                return 0x80004005u; 
            }
        }

        error = queue_pcm(v, index, v->loop_start, v->loop_frames, 1);
    } 
    else 
        error = queue_pcm(v, 0, first, (uint32_t)v->frames-first, 0);

    if (error) 
    { 
        reset_output(v); 
        return 0x80004005u; 
    }

    v->playing = 1;
    waveOutRestart(v->output);

    return 0;
}

/* Allocate through the original pool, then attach only its ADPCM buffers. */
void allocate_bank_sound_buffer(void)
{
	uint32_t format = arg(0);
    uint32_t rate = GMEM32(format+4);
	
    uint16_t tag = *DOA1U_GUEST_PTR(format, uint16_t);
    uint16_t channels = *DOA1U_GUEST_PTR(format+2, uint16_t);

    sub_0004E2F0_gen();

    if (g_eax >= BANK_VOICE_COUNT || tag != 0x69 || channels < 1 || channels > 2) 
        return;

    uint32_t handle = GMEM32(DOA1U_SOUND_BUFFER_POOL_VA + g_eax*0x60);
    AcquireSRWLockExclusive(&voice_lock);
    BankVoice *v = &voices[g_eax];

    if (v->handle != handle || v->rate != rate || v->channels != channels) 
    {
        reset_output(v);

        if (v->output) 
            waveOutClose(v->output);

        free(v->pcm); free(v->play_pcm);
        memset(v, 0, sizeof *v);
        v->handle = handle; v->channels = channels; v->rate = rate;

        WAVEFORMATEX wave = 
        {
            WAVE_FORMAT_PCM, 
            channels, rate, 
            rate*channels*2,
            (WORD)(channels*2), 16, 0
        };

        MMRESULT error = waveOutOpen(&v->output, WAVE_MAPPER, &wave, 0, 0, CALLBACK_NULL);

        if (error) 
        {
            fprintf(stderr, "[AUDIO] bank output open failed: %u\n", error);
            memset(v, 0, sizeof *v); /* Fall back to original APU on open failure. */
        }
    }
    ReleaseSRWLockExclusive(&voice_lock);
}
void sub_0004E2F0(void) { allocate_bank_sound_buffer(); }

/* Unmapped handles retain the original DirectSound/APU implementation. */
static void bank_buffer_call(unsigned operation, unsigned args, recomp_func_t fallback)
{
    uint32_t handle = arg(0), value = args > 1 ? arg(1) : 0;
    AcquireSRWLockExclusive(&voice_lock);
    BankVoice *v = find_voice(handle);

    if (!v)
    { 
        ReleaseSRWLockExclusive(&voice_lock); fallback(); 
        return; 
    }

    uint32_t status = 0;
    switch (operation) 
    {
        /* SetBufferData: copy/decode before guest bank can be replaced. */
        case 0: 
        {
            uint32_t bytes = arg(2);
            reset_output(v); 
            free(v->pcm); free(v->play_pcm);

            v->pcm = v->play_pcm = NULL; 
            v->frames = 0;
            v->position = v->loop_start = v->loop_frames = 0;

            if (value && bytes) 
            {
                size_t frames = (size_t)bytes / (36*v->channels)*64;

                if (frames && bytes <= 16*1024*1024 && gmem_ok(value) && gmem_ok(value+bytes-1)) 
                {
                    v->pcm = malloc(frames*v->channels*2);

                    if (v->pcm) 
                        v->frames = xbox_adpcm_decode(DOA1U_GUEST_PTR(value, uint8_t), bytes, v->channels, v->pcm);
                }

                if (!v->frames) 
                    status = 0x8007000Eu;
            }
            break;
        }

        case 1: 
            status = play_voice(v, arg(3)); 
        break;

        /* GetStatus */
        case 2:
            if (v->playing && !v->looping && (v->headers[0].dwFlags & WHDR_DONE))
                v->playing = 0;

            if (value) 
                GMEM32(value) = v->playing ? (1u | (v->looping ? 4u : 0u)) : 0;
        break;

        /* GetCurrentPosition: guest expects encoded bytes. */
        case 3: 
        { 
            uint32_t bytes = cursor(v) / 64*(36*v->channels);
            if (value) 
                GMEM32(value) = bytes;

            if (arg(2)) 
                GMEM32(arg(2)) = bytes;

            break;
        }

        case 4:
            v->position = value / (36*v->channels)*64;
            if (v->playing) 
                status = play_voice(v, v->looping ? 1 : 0);

            break;

        /* Scale each voice, never change shared waveOut device gain. */
        case 5: 
        { 
            int32_t db = (int32_t)value;
            if (db != v->volume_db) 
            {
                int playing = v->playing, paused = v->paused;
                uint32_t flags = v->looping ? 1 : 0;

                if (playing)
                    v->position = cursor(v);

                v->volume_db = db;
                if (playing) 
                {
                    status = play_voice(v, flags);
                    if (paused) 
                    { 
                        waveOutPause(v->output); 
                        v->paused = 1; 
                    }
                }
            }
            break;
        }

        case 6:
            waveOutSetPlaybackRate(v->output, value ? (DWORD)((uint64_t)value*65536/v->rate) : 65536);
            break;

        case 7:
            v->loop_start = value / (36*v->channels)*64;
            v->loop_frames = arg(2) / (36*v->channels)*64;
            break;

        case 8: 
        case 9:
            v->position = cursor(v); 
            reset_output(v); 
            break;

        case 10:
            v->paused = value != 0;
            if (v->paused) 
                waveOutPause(v->output); 
            else 
                waveOutRestart(v->output);
            break;
    }

    ReleaseSRWLockExclusive(&voice_lock);
    result(status, args);
}

void sub_001ADACB(void) { bank_buffer_call(0,3,sub_001ADACB_gen); }
void sub_001AB2BB(void) { bank_buffer_call(1,4,sub_001AB2BB_gen); }
void sub_001AB39F(void) { bank_buffer_call(2,2,sub_001AB39F_gen); }
void sub_001AB3BB(void) { bank_buffer_call(3,3,sub_001AB3BB_gen); }
void sub_001AB3DB(void) { bank_buffer_call(4,2,sub_001AB3DB_gen); }
void sub_001AB1F7(void) { bank_buffer_call(5,2,sub_001AB1F7_gen); }
void sub_001AD0B3(void) { bank_buffer_call(6,2,sub_001AD0B3_gen); }
void sub_001AB37F(void) { bank_buffer_call(7,3,sub_001AB37F_gen); }
void sub_001AB303(void) { bank_buffer_call(8,1,sub_001AB303_gen); }
void sub_001AB31B(void) { bank_buffer_call(9,4,sub_001AB31B_gen); }
void sub_001AB33F(void) { bank_buffer_call(10,2,sub_001AB33F_gen); }

void sub_001A8E34(void)
{
    uint32_t handle = arg(0);
    sub_001A8E34_gen();

    if (g_eax) 
        return; /* Keep shared buffers alive until final guest Release. */

    AcquireSRWLockExclusive(&voice_lock);
    BankVoice *v = find_voice(handle);

    if (v) 
    {
        reset_output(v);
        if (v->output) 
            waveOutClose(v->output);

        free(v->pcm); 
        free(v->play_pcm); 
        memset(v, 0, sizeof *v);
    }

    ReleaseSRWLockExclusive(&voice_lock);
}

/* Bounded cue summary permits a user-run CPU-voice test without a capture. */
void play_bank_sample(void)
{
    static volatile LONG reported_banks, failures;
    uint32_t cue = arg(1), bank = arg(5);
    sub_0004F2B0_gen();

    if (g_eax < BANK_VOICE_COUNT && bank < 7) 
    {
        LONG mask = 1L << bank;
        if (!(InterlockedOr(&reported_banks, mask) & mask)) 
        {
            uint32_t entry = DOA1U_SOUND_BUFFER_POOL_VA + g_eax*0x60;
            fprintf(stderr, "[AUDIO] bank=%u first cue=%04X slot=%u volume=%d dB/100\n", bank, cue, g_eax, (int32_t)GMEM32(entry+0x50));
        }
    } 
    else if (InterlockedIncrement(&failures) <= 8) 
        fprintf(stderr, "[AUDIO] bank sample failed: bank=%u cue=%04X result=%08X\n", bank, cue, g_eax);
}
void sub_0004F2B0(void) { play_bank_sample(); }
