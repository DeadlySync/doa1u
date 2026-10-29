/* Offline bank/decoder validation. Usage: audio_bank_check.exe <bank.bin> ... */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "audio/xbox_adpcm.h"

static uint32_t u32(const uint8_t *p)
{
    return (uint32_t)p[0] | (uint32_t)p[1]<<8 | (uint32_t)p[2]<<16 | (uint32_t)p[3]<<24;
}
static unsigned u16(const uint8_t *p) { return p[0] | p[1]<<8; }

int main(int argc, char **argv)
{
    uint8_t block[72] = {0};
    int16_t vector[129];
    memset(vector, 0x55, sizeof vector);
    block[0] = 0xE8; block[1] = 3; /* predictor 1000, zero nibbles, step=7 */
    block[4] = 0x18; block[5] = 0xFC; /* stereo right predictor -1000 */
    if (xbox_adpcm_decode(block, 72, 2, vector) != 64) return 1;
    for (unsigned i = 0; i < 128; ++i)
        if (vector[i] != (i&1 ? -1000 : 1000)) return 2;
    if (vector[128] != 0x5555) return 3;
    memset(block, 0, sizeof block); block[4] = 0x77;
    if (xbox_adpcm_decode(block, 36, 1, vector) != 64 ||
        vector[0] != 0 || vector[1] != 11 || vector[2] != 41) return 4;
    unsigned entries = 0;
    for (int a = 1; a < argc; ++a) {
        FILE *f = fopen(argv[a], "rb");
        if (!f) return 5;
        fseek(f, 0, SEEK_END); long size = ftell(f); rewind(f);
        if (size < 4) { fclose(f); return 6; }
        uint8_t *data = malloc(size);
        if (!data || fread(data, 1, size, f) != (size_t)size) return 7;
        fclose(f);
        uint32_t count = u32(data);
        if (count > ((uint32_t)size-4)/4) return 8;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t off = u32(data+4+4*i);
            if (!off) continue;
            if (off > (uint32_t)size-32) return 9;
            uint8_t *entry = data+off;
            uint32_t bytes = u32(entry), channels = u16(entry+6);
            if (u16(entry+4) != 0x69 || channels < 1 || channels > 2 ||
                u16(entry+16) != channels*36 || u16(entry+22) != 64 ||
                bytes > (uint32_t)size-off-32 || bytes % (channels*36)) return 10;
            size_t frames = (size_t)bytes/(channels*36)*64;
            int16_t *pcm = malloc((frames*channels+1)*sizeof *pcm);
            if (!pcm) return 11;
            pcm[frames*channels] = 0x5555;
            if (xbox_adpcm_decode(entry+32, bytes, channels, pcm) != frames ||
                pcm[frames*channels] != 0x5555) return 12;
            free(pcm); ++entries;
        }
        free(data);
    }
    printf("ADPCM known vectors and %u bank entries passed.\n", entries);
    return 0;
}
