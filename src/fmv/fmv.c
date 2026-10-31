/* Native shadows for the game-level CRI movie API. Ghidra evidence in
 * tools/reference/investigations/fmv. Preserve the original caller's yielding/input loop;
 * only replace the unavailable CRI decoder, not front-end sequencing. */
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <string.h>
#include "game/game_driver.h"
#include "fmv/sofdec.h"
#include "fmv/fmv.h"

static SRWLOCK s_frame_lock = SRWLOCK_INIT;

static int s_playing, s_audio_prepared, s_music_paused, s_video_ended;
static const uint8_t* s_frame;
static float s_display_rect[4];
static double s_audio_duration;

static Sofdec* s_movie;
static uint64_t s_serial, s_decoded;

static LARGE_INTEGER s_started, s_frequency;
static HWAVEOUT s_audio;
static int s_host_paused;
static LARGE_INTEGER s_pause_started;
void fmv_host_pause(int paused)
{
    AcquireSRWLockExclusive(&s_frame_lock);
    if((paused!=0)!=s_host_paused){
        LARGE_INTEGER now;QueryPerformanceCounter(&now);
        if(paused){s_pause_started=now;if(s_audio)waveOutPause(s_audio);}
        else {if(s_playing)s_started.QuadPart+=now.QuadPart-s_pause_started.QuadPart;if(s_audio)waveOutRestart(s_audio);}
        s_host_paused=paused!=0;
    }
    ReleaseSRWLockExclusive(&s_frame_lock);
}
static WAVEHDR s_audio_header;

const uint8_t* fmv_frame_acquire(unsigned* w, unsigned* h, uint64_t* serial, float rect[4])
{
	AcquireSRWLockShared(&s_frame_lock);

	if (!s_playing || !s_frame)
		return NULL;

	*w = sofdec_width(s_movie);
	*h = sofdec_height(s_movie);
	*serial = s_serial;

	memcpy(rect, s_display_rect, sizeof(s_display_rect));

	return s_frame;
}

void fmv_frame_release(void) { ReleaseSRWLockShared(&s_frame_lock); }

static uint32_t guest_call(uint32_t va)
{
	gd_guest_call(va, 0, NULL, va);
	return g_eax;
}

static void close_movie(void)
{
	AcquireSRWLockExclusive(&s_frame_lock);

	s_playing = 0;
	s_frame = NULL;

	if (s_audio)
	{
		waveOutReset(s_audio);

		if (s_audio_prepared)
			waveOutUnprepareHeader(s_audio, &s_audio_header, sizeof(s_audio_header));

		waveOutClose(s_audio);
		s_audio = NULL;
		s_audio_prepared = 0;
	}

	sofdec_close(s_movie);
	s_movie = NULL;

	ReleaseSRWLockExclusive(&s_frame_lock);

	GMEM32(0x6E94CC) = 0; 
	GMEM32(0x6E9450) = 0;
	GMEM32(0x6E94C0) = 3; 
	GMEM32(0x6E94C8) = 0xFFFFFFFFu;

	if (s_music_paused) 
	{ 
		guest_call(0x4C950); 
		s_music_paused = 0; 
	}
}

/* 0x51B70: cdecl movie id, filename pointer table 0x2E13F8 (21 entries).
 * Retain XBOX "D:\" -> XISO mapping, including DOA1\ss_opn/end.sfd, not hardcoded IDs. */
void cri_movie_start(void) 
{
	uint32_t id = GMEM32(g_esp + 4);
	close_movie();

	if (id > 20 || !GMEM32(0x2E13F8 + id * 4)) 
		id = 0;

	uint32_t address = GMEM32(0x2E13F8 + id * 4);
	char path[MAX_PATH]; 
	size_t n = 0;

	if (gmem_ok(address)) 
	{
		if (GMEM8(address + 1) == ':') 
			address += 2;

		while (GMEM8(address) == '\\' || GMEM8(address) == '/') 
			++address;

		while (n < sizeof(path) - 1 && gmem_ok(address + n) && GMEM8(address + n)) 
		{
			char c = (char)GMEM8(address + n); 
			path[n++] = (c == '\\') ? '/' : c;
		}
	}

	path[n] = 0;
	GMEM32(0x6E94C8) = id;

	/* Keep the ORIGINAL movie-specific and widescreen/overscan layout. */
	const uint32_t quad_address = 0x6E9460;
	gd_guest_call(0x514D0, 1, &quad_address, 0x51A60);
	uint32_t rectangle_words[4] = 
	{ 
		GMEM32(quad_address),
		GMEM32(quad_address + 4),
		GMEM32(quad_address + 24),
		GMEM32(quad_address + 52) 
	};

	/* Preserve the sound manager's stop/pause/resume semantics, without CRI
	 * workspace allocation or DSP polling from the old movie implementation. */
	guest_call(0x4C970);

	if (guest_call(0x4C9E0)) 
	{ 
		guest_call(0x4C930); 
		s_music_paused = 1; 
	}

	AcquireSRWLockExclusive(&s_frame_lock);
	memcpy(s_display_rect, rectangle_words, sizeof(s_display_rect));

	s_movie = n ? sofdec_open(path) : NULL;
	if (s_movie) 
	{
		s_frame = sofdec_next_frame(s_movie);
		s_playing = (s_frame != NULL); 
		s_decoded = 1; 
		++s_serial;

		s_video_ended = 0; 
		s_audio_duration = 0;

		unsigned rate, channels; size_t samples;
		const int16_t* pcm = sofdec_audio(s_movie, &rate, &channels, &samples);

		if (rate) 
			s_audio_duration = (double)samples / rate;

		if (pcm && samples) 
		{
			WAVEFORMATEX format = { 0 };
			format.wFormatTag = WAVE_FORMAT_PCM; format.nChannels = (WORD)channels;
			format.nSamplesPerSec = rate; format.wBitsPerSample = 16;
			format.nBlockAlign = (WORD)(channels * 2);
			format.nAvgBytesPerSec = rate * format.nBlockAlign;

			MMRESULT result = waveOutOpen(&s_audio, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL);
			if (result == MMSYSERR_NOERROR) 
			{
				waveOutPause(s_audio);
				memset(&s_audio_header, 0, sizeof(s_audio_header));

				s_audio_header.lpData = (LPSTR)pcm;
				s_audio_header.dwBufferLength = (DWORD)(samples * channels * 2);
				result = waveOutPrepareHeader(s_audio, &s_audio_header, sizeof(s_audio_header));

				s_audio_prepared = (result == MMSYSERR_NOERROR);
				if (s_audio_prepared) 
					result = waveOutWrite(s_audio, &s_audio_header, sizeof(s_audio_header));
			}

			if (result != MMSYSERR_NOERROR)
				fprintf(stderr, "[FMV] Audio output error %u; video uses host clock\n", result);
			else 
				fprintf(stderr, "[FMV] audio queued: %zu samples, %u Hz, %u channels\n", samples, rate, channels);
		}

		QueryPerformanceFrequency(&s_frequency); QueryPerformanceCounter(&s_started);
		if (s_audio) 
			if(!s_host_paused)waveOutRestart(s_audio);
	}

	ReleaseSRWLockExclusive(&s_frame_lock);
	GMEM32(0x6E94C8) = id; GMEM32(0x6E94CC) = s_playing;
	GMEM32(0x6E94C0) = s_playing ? 2 : 3;

	fprintf(stderr, "[FMV] start id=%u path=%s %s\n", id, path, s_playing ? "playing" : "FAILED");
	fprintf(stderr, "[FMV] original display rectangle %.1f,%.1f -> %.1f,%.1f\n",
		s_display_rect[0], s_display_rect[1], s_display_rect[2], s_display_rect[3]);
	fflush(stderr);

	/* cdecl ret, caller owns movie-id argument */
	g_eax = s_playing; g_esp += 4; 
}

/* 0x51E10: zero while playing, one at EOF/error. No unconditional skip.
 * Advance by the audio device sample clock, falling back to QPC if unavailable.
 * Host time is independent of the match-only 300-frame pause harness. */
void cri_movie_update(void) 
{
	AcquireSRWLockExclusive(&s_frame_lock);

	if (s_playing && !s_host_paused)
	{
		LARGE_INTEGER now; 
		QueryPerformanceCounter(&now);

		double elapsed = (double)(now.QuadPart - s_started.QuadPart) / s_frequency.QuadPart;

		if (s_audio && s_audio_prepared && !(s_audio_header.dwFlags & WHDR_DONE)) 
		{
			MMTIME position = { 0 }; 
			position.wType = TIME_SAMPLES;

			if (!waveOutGetPosition(s_audio, &position, sizeof(position)) && position.wType == TIME_SAMPLES) 
			{
				unsigned rate, channels; size_t samples;
				sofdec_audio(s_movie, &rate, &channels, &samples);
				elapsed = (double)position.u.sample / rate;
			}
		}

		while (!s_video_ended && elapsed >= (double)s_decoded / sofdec_fps(s_movie)) 
		{
			const uint8_t* next = sofdec_next_frame(s_movie);
			if (!next) 
				s_video_ended = 1;
			else 
			{ 
				s_frame = next; 
				++s_decoded; 
				++s_serial; 
			}
		}

		/* ss_opn has ~0.68s more audio than video. Hold the final picture
		 * rather than truncating the song or stalling on its final sample. */
		if (s_video_ended && elapsed >= s_audio_duration) 
		{
			s_playing = 0;
			fprintf(stderr, "[FMV] completed %llu frames at %.3fs\n", s_decoded, elapsed);
		}
	}

	int finished = !s_playing;
	ReleaseSRWLockExclusive(&s_frame_lock);

	GMEM32(0x6E94CC) = !finished; 
	GMEM32(0x6E94C0) = finished ? 3 : 2;

	g_eax = finished; g_esp += 4;
}

void cri_movie_stop(void) 
{
	fprintf(stderr, "[FMV] stop (%llu decoded frames)\n", s_decoded);
	close_movie(); g_eax = 0; g_esp += 4;
}

void sub_00051B70(void) { cri_movie_start(); }
void sub_00051E10(void) { cri_movie_update(); }
void sub_00051F50(void) { cri_movie_stop(); }
