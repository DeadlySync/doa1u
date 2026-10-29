/* CRI Sofdec MPEG-PS / MPEG-1 video + ordinary (unencrypted) ADX audio.
 * pl_mpeg is MIT licensed; see third_party/pl_mpeg.h. ADX is NOT MPEG audio.
 * ADX layout/predictor reference: FFmpeg libavcodec/adx{,dec}.c; independent
 * implementation of the format's two-pole reconstruction, not an MP2 decoder.
 */
#include "fmv/sofdec.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PL_MPEG_IMPLEMENTATION
#include "third_party/pl_mpeg.h"

struct Sofdec
{
	plm_video_t* video;
	uint8_t* pixels;
	int16_t* pcm;
	size_t samples;
	unsigned width, height, rate, channels;
	double fps;
};

static unsigned be16(const uint8_t* p)
{
	return (unsigned)p[0] * 256 + p[1];
}

static uint32_t be32(const uint8_t* p)
{
	return (uint32_t)be16(p) * 65536 + be16(p + 2);
}

static int decode_adx(Sofdec* m, const uint8_t* data, size_t bytes)
{
	if (bytes < 24 || be16(data) != 0x8000)
		return 0;

	size_t offset = be16(data + 2) + 4;
	unsigned channels = data[7], rate = be32(data + 8);
	size_t samples = be32(data + 12);

	if (offset < 24 || offset > bytes || memcmp(data + offset - 6, "(c)CRI", 6) ||
		data[4] != 3 || data[5] != 18 || data[6] != 4 || channels < 1 || channels > 2 ||
		rate < 8000 || rate > 96000 || data[19] != 0 ||
		samples > ((bytes - offset) / (18 * channels)) * 32)
		return 0;

	int16_t* pcm = calloc(samples * channels, sizeof(*pcm));
	if (!pcm)
		return 0;

	const double root2 = 1.4142135623730951;
	double a = root2 - cos(6.283185307179586 * be16(data + 16) / rate);
	double c = (a - sqrt((a + (root2 - 1)) * (a - (root2 - 1)))) / (root2 - 1);

	int coefficient1 = (int)floor(2 * c * 4096 + 0.5);
	int coefficient2 = (int)floor(-c * c * 4096 + 0.5);
	int history[2][2] = { {0} };

	for (size_t base = 0; base < samples; base += 32) 
	{
		for (unsigned ch = 0; ch < channels; ++ch) 
		{
			const uint8_t* block = data + offset;
			offset += 18;

			int scale = be16(block);
			if (scale & 0x8000) 
			{ 
				free(pcm); 
				return 0; 
			}

			for (unsigned j = 0; j < 32 && base + j < samples; ++j) 
			{
				int nibble = (block[2 + j / 2] >> ((j & 1) ? 0 : 4)) & 15;
				if (nibble >= 8) 
					nibble -= 16;

				int prediction = (coefficient1 * history[ch][0] + coefficient2 * history[ch][1]) >> 12;
				int sample = nibble * scale + prediction;

				if (sample > 32767) 
					sample = 32767;

				if (sample < -32768) 
					sample = -32768;

				history[ch][1] = history[ch][0]; 
				history[ch][0] = sample;
				pcm[(base + j) * channels + ch] = (int16_t)sample;
			}
		}
	}

	m->pcm = pcm; 
	m->samples = samples; 
	m->rate = rate; 
	m->channels = channels;

	return 1;
}

Sofdec* sofdec_open(const char* path) 
{
	FILE* file = fopen(path, "rb");
	if (!file) 
		return NULL;

	if (fseek(file, 0, SEEK_END)) 
	{ 
		fclose(file); 
		return NULL; 
	}

	long length = ftell(file);
	if (length <= 0 || length > 512 * 1024 * 1024) 
	{ 
		fclose(file); 
		return NULL; 
	}

	rewind(file);
	
	uint8_t* bytes = malloc((size_t)length);
	if (!bytes || fread(bytes, 1, (size_t)length, file) != (size_t)length) 
	{
		free(bytes); 
		fclose(file); 
		return NULL;
	}
	fclose(file);

	Sofdec* m = calloc(1, sizeof(*m));
	if (!m) 
	{ 
		free(bytes); 
		return NULL; 
	}

	plm_buffer_t* input = plm_buffer_create_with_memory(bytes, (size_t)length, 1);
	plm_demux_t* demux = plm_demux_create(input, 1);
	plm_buffer_t* video = plm_buffer_create_with_capacity(1024 * 1024);

	/* Audio packets are concatenated BEFORE parsing: ADX blocks cross PES. */
	uint8_t* adx = malloc((size_t)length);
	size_t audio_bytes = 0, video_bytes = 0;
	double first_video_pts = -1, first_audio_pts = -1;

	plm_packet_t* packet;
	while ((packet = plm_demux_decode(demux))) 
	{
		if (packet->type == PLM_DEMUX_PACKET_VIDEO_1) 
		{
			plm_buffer_write(video, packet->data, packet->length);
			video_bytes += packet->length;

			if (first_video_pts < 0) 
				first_video_pts = packet->pts;
		}
		else if (packet->type == PLM_DEMUX_PACKET_AUDIO_1 && adx) 
		{
			if (packet->length > (size_t)length - audio_bytes) 
				break;

			memcpy(adx + audio_bytes, packet->data, packet->length);
			audio_bytes += packet->length;

			if (first_audio_pts < 0) 
				first_audio_pts = packet->pts;
		}
	}

	plm_buffer_signal_end(video);
	plm_demux_destroy(demux);

	m->video = plm_video_create_with_buffer(video, 1);
	m->width = plm_video_get_width(m->video);
	m->height = plm_video_get_height(m->video);
	m->fps = plm_video_get_framerate(m->video);

	if (!video_bytes || !m->width || !m->height || m->width > 1920 || m->height > 1080 || m->fps <= 0) 
	{
		free(adx); 
		sofdec_close(m); 
		return NULL;
	}

	m->pixels = malloc((size_t)m->width * m->height * 4);
	if (!m->pixels) 
	{ 
		free(adx); 
		sofdec_close(m); 
		return NULL; 
	}

	if (audio_bytes && !decode_adx(m, adx, audio_bytes))
		fprintf(stderr, "[FMV] Unsupported/malformed ADX audio in %s\n", path);

	free(adx);
	
	/* DOA1 SFDs start both streams at PTS zero. Log rather than silently assume
	 * sync for any future asset with a different timestamp origin. */
	fprintf(stderr, "[FMV] %s: %ux%u %.3f fps, ADX %u Hz/%uch, %.3fs; PTS %.3f/%.3f\n",
		path, m->width, m->height, m->fps, m->rate, m->channels,
		m->rate ? (double)m->samples / m->rate : 0, first_video_pts, first_audio_pts);

	return m;
}

void sofdec_close(Sofdec* m) 
{
	if (!m) 
		return;

	if (m->video) 
		plm_video_destroy(m->video);

	free(m->pixels); 
	free(m->pcm); 
	free(m);
}

const uint8_t* sofdec_next_frame(Sofdec* m) 
{
	plm_frame_t* frame = plm_video_decode(m->video);
	if (!frame) 
		return NULL;

	plm_frame_to_bgra(frame, m->pixels, m->width * 4);

	return m->pixels;
}

unsigned sofdec_width(const Sofdec* m) { return m->width; }
unsigned sofdec_height(const Sofdec* m) { return m->height; }
double sofdec_fps(const Sofdec* m) { return m->fps; }

const int16_t* sofdec_audio(const Sofdec* m, unsigned* rate, unsigned* channels, size_t* samples) 
{
	*rate = m->rate; 
	*channels = m->channels; 
	*samples = m->samples;

	return m->pcm;
}
