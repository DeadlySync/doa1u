#ifndef DOA1U_XBOX_ADPCM_H
#define DOA1U_XBOX_ADPCM_H

#include <stddef.h>
#include <stdint.h>

/* Xbox IMA blocks: 36 bytes/channel, 64 output frames (last nibble discarded). */
size_t xbox_adpcm_decode(const uint8_t *source, size_t bytes, unsigned channels, int16_t *pcm);

#endif
