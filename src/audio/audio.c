/* CRI audio shadows, cue tracing and optional audition controls. */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "game/game_driver.h"

/* generated bodies (renamed by reapply_gen_edits.py AUDIO-TRACE patches) */
extern void sub_000301F0_gen(void); /* start_stage_bgm        */
extern void sub_0004F050_gen(void); /* snd play funnel        */
extern void sub_0004FC30_gen(void); /* snd entry              */
extern void sub_000501E5_gen(void); /* snd entry (ex)         */
extern void sub_00050790_gen(void); /* snd entry (simple)     */
extern void sub_000509F0_gen(void); /* snd entry (oneshot)    */
extern void sub_00050033_gen(void); /* snd control            */

static int audio_trace(void)
{
    static int v = -1;
    if (v < 0) { 
        const char *e = getenv("RECOMP_AUDIO_TRACE"); 
        v = (e && *e && *e != '0'); 
    }

    return v;
}

/* Log a sound-manager call: name, VA, and the first `nargs` cdecl args (which
 * sit above the return address at g_esp). arg1 is usually a cue/bank/sound id.
 * A per-call-site counter shows frequency. */
static void audio_log(const char *name, uint32_t va, int nargs)
{
    int i;
    uint32_t a[4] = {0,0,0,0};
    uint32_t caller = GMEM32(g_esp);  /* cdecl: return address into the CALLER */

    for (i = 0; i < nargs && i < 4; i++) 
        a[i] = GMEM32(g_esp + 4 + i*4);

    fprintf(stderr, "[AUDIO] %-16s 0x%06X  caller=0x%06X  args: %08X %08X %08X %08X  (a1=%d)\n",
            name, va, caller, a[0], a[1], a[2], a[3], (int)a[0]);
    fflush(stderr);
}

/* playback control (the gate) snd_play_core(cue, type) is THE playback dispatcher, 
so shadowing it lets us decide per call whether a sound actually reaches the engine. 
A blocked call is NOT forwarded to the real body -- the sound simply never plays. */
static int s_mute = 0;
static int s_gate_init = 0;
static unsigned char s_block_cue[256];
static unsigned char s_block_type[256];

static void snd_gate_init(void)
{
    if (s_gate_init) 
        return;

    s_gate_init = 1;
    s_mute = gd_enabled("RECOMP_AUDIO_MUTE");
    gd_parse_id_list("RECOMP_AUDIO_BLOCK_CUES",  s_block_cue);
    gd_parse_id_list("RECOMP_AUDIO_BLOCK_TYPES", s_block_type);
}

/* 1 = let the sound play, 0 = block it. */
static int snd_play_allowed(uint32_t cue, uint32_t type)
{
    snd_gate_init();

    if (s_mute) 
        return 0;

    if (cue  < 256 && s_block_cue[cue])
        return 0;

    if (type < 256 && s_block_type[type]) 
        return 0;

    return 1;
}

/* ── shadows ──────────────────────────────────────────────────────────── *
 * Pattern: log at entry (reads g_esp, no mutation), then the real _gen body
 * (which does the work + its own ret/esp cleanup). */

// FUN_000301F0  start_stage_bgm(stage) -- plays stageSoundTable[stage]
void start_stage_bgm(void)
{
    if (audio_trace()) 
        audio_log("start_stage_bgm", 0x000301F0u, 1);

    sub_000301F0_gen();
}
void sub_000301F0(void) { start_stage_bgm(); }

// FUN_0004F050 THE PLAYBACK DISPATCHER: snd_play_core(cueId, type)
// attract fired cues 9(type1), 6(type1), 0(type2). arg3+ are caller stack noise.
// Gate decides whether the sound plays; cdecl plain `ret`, caller cleans args.
void snd_play_core(void)
{
    uint32_t cue  = GMEM32(g_esp + 4);
    uint32_t type = GMEM32(g_esp + 8);

    if (audio_trace()) 
        audio_log("snd_play_core", 0x0004F050u, 2);

    if (!snd_play_allowed(cue, type)) {
        fprintf(stderr, "[AUDIO] BLOCKED snd_play_core(cue=%u, type=%u)\n", cue, type);
        fflush(stderr);
        g_esp += 4;                /* emulate the cdecl `ret` (pop retaddr)   */
        g_eax  = 0;                /* return "not played"; caller cleans args */
        return;
    }

    sub_0004F050_gen();
}
void sub_0004F050(void) { snd_play_core(); }

// FUN_0004FC30  sound-manager entry
void snd_play(void)
{
    if (audio_trace()) 
        audio_log("snd_play", 0x0004FC30u, 3);

    sub_0004FC30_gen();
}
void sub_0004FC30(void) { snd_play(); }

// FUN_000501E5  per-frame AUDIO SERVICE pump:
// Trace throttled so it doesn't drown the real playback events.
void snd_audio_service(void)
{
    if (audio_trace()) {
        static unsigned long long n;
        if (n < 3 || (n % 1000) == 0) 
            audio_log("snd_audio_service", 0x000501E5u, 4);
        n++;
    }
    sub_000501E5_gen();
}
void sub_000501E5(void) { snd_audio_service(); }

// FUN_00050790  sound-manager entry (simple)
void snd_play_simple(void)
{
    if (audio_trace()) 
        audio_log("snd_play_simple", 0x00050790u, 2);

    sub_00050790_gen();
}
void sub_00050790(void) { snd_play_simple(); }

// FUN_000509F0  sound-manager entry (one-shot)
void snd_oneshot(void)
{
    if (audio_trace()) 
        audio_log("snd_oneshot", 0x000509F0u, 2);

    sub_000509F0_gen();
}
void sub_000509F0(void) { snd_oneshot(); }

// FUN_00050033  sound-manager control (stop / set)
void snd_ctl(void)
{
    if (audio_trace()) 
        audio_log("snd_ctl", 0x00050033u, 2);

    sub_00050033_gen();
}
void sub_00050033(void) { snd_ctl(); }

/* DRIVE: audition cues through the dispatcher  
The snd_play_core(cueId, type) is THE playback dispatcher. 
We call it OURSELVES so the user can hear each cue and label BGM vs voice vs SFX. 
*/
void audio_frame_module(uint64_t frame)
{
    if (!gd_enabled("RECOMP_AUDIO_DRIVE")) 
        return;

    long long at = gd_envll("RECOMP_AUDIO_AT", 600);
    if (at < 0 || frame < (uint64_t)at) 
        return;

    uint32_t type = (uint32_t)gd_envll("RECOMP_AUDIO_TYPE", 1);
    
    if (gd_enabled("RECOMP_AUDIO_SWEEP")) {
        long long every = gd_envll("RECOMP_AUDIO_SWEEP_EVERY", 120);
        long long base  = gd_envll("RECOMP_AUDIO_CUE", 0);
        long long cmax  = gd_envll("RECOMP_AUDIO_CUE_MAX", 32);
        long long delta = (long long)frame - at;
        
        if (every > 0 && (delta % every) == 0) 
        {
            long long cue = base + delta / every;
            if (cue <= cmax) {
                uint32_t args[2] = { (uint32_t)cue, type };
                gd_guest_call(0x0004F050u, 2, args, 0x0004F050u);
                fprintf(stderr, "[AUDIO] DRIVE sweep snd_play_core(cue=%lld, type=%u) @frame %llu\n", cue, type, (unsigned long long)frame);
                fflush(stderr);
            }
        }
    } 
    else 
    {
        static long long fired = -1;
        if (fired != at) 
        {
            fired = at;
            uint32_t cue = (uint32_t)gd_envll("RECOMP_AUDIO_CUE", 6);  /* 6 = known BGM */
            uint32_t args[2] = { cue, type };
            gd_guest_call(0x0004F050u, 2, args, 0x0004F050u);

            fprintf(stderr, "[AUDIO] DRIVE snd_play_core(cue=%u, type=%u) @frame %llu\n", cue, type, (unsigned long long)frame);
            fflush(stderr);
        }
    }
}

/* Launcher pause is independent of the original match pause state. */
extern void bank_host_pause(int paused);
extern void fmv_host_pause(int paused);
void audio_host_pause(int paused)
{
    bank_host_pause(paused);
    fmv_host_pause(paused);
}
