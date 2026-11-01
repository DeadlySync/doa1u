#ifndef DOA1U_SOFDEC_IO_H
#define DOA1U_SOFDEC_IO_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Private acquisition seam, not a replacement filesystem API. Uses native Xbox
 * open/query/read/close with a full Xbox path; never guest thunks or host stdio.
 * Keeps the existing 512 MiB buffered-movie limit. On success caller owns/free()s
 * the complete buffer. Failure leaves NULL/zero outputs and closes the handle. */
int sofdec_read_file(const char *xbox_path, uint8_t **data, size_t *size);
#ifdef __cplusplus
}
#endif
#endif
