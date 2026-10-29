#ifndef DOA1U_FMV_H
#define DOA1U_FMV_H
#include <stdint.h>

/* Poll-thread mailbox: acquire MUST be paired with release, even if NULL.
 * Decoder owns BGRA bytes; never call guest code from the GPU thread. */
const uint8_t *fmv_frame_acquire(unsigned *width, unsigned *height, uint64_t *serial, float display_rect[4]);
void fmv_frame_release(void);

#endif
