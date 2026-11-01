#ifndef DOA1U_SOFDEC_H
#define DOA1U_SOFDEC_H

#include <stddef.h>
#include <stdint.h>
typedef struct Sofdec Sofdec;

/* Full Xbox path, acquired through native Xbox file APIs (image or folder).
 * Owns demuxed video and decoded ADX PCM until close. No guest/GPU calls. */
Sofdec *sofdec_open(const char *path);

void sofdec_close(Sofdec *movie);
const uint8_t *sofdec_next_frame(Sofdec *movie);

unsigned sofdec_width(const Sofdec *movie);
unsigned sofdec_height(const Sofdec *movie);

double sofdec_fps(const Sofdec *movie);
const int16_t *sofdec_audio(const Sofdec *movie, unsigned *rate, unsigned *channels, size_t *samples);

#endif
