#ifndef DOA1U_XBOX_DISC_PATH_H
#define DOA1U_XBOX_DISC_PATH_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Internal adapter seam, not a replacement for the Xbox kernel API.
 * Matches the existing path layer's 512-byte symbolic-link resolution budget. */
#define DOA1U_DISC_PATH_CAPACITY 512
typedef enum doa1u_disc_path_kind {
    DOA1U_PATH_HOST = 0,
    DOA1U_PATH_DISC,
    DOA1U_PATH_RELATIVE,
    DOA1U_PATH_INVALID
} doa1u_disc_path_kind;

/* Pure classification: no mount, file open, directory creation or path hook.
 * Reuses kernel_path.c's registered drive-link resolver before recognizing
 * D: or \\Device\\CdRom0. Other drives/devices remain host-backed, even when
 * the legacy path layer maps them into the extracted game directory.
 *
 * DISC returns a disc-relative '/' path with original filename spelling.
 * RELATIVE requires later classification using RootDirectory's handle type.
 * A bare leading separator is absolute, not a handle-relative child path.
 * Output is empty except on DISC. Invalid/oversized/escaping paths or unresolved
 * link cycles return INVALID. Caller must provide a nonempty output buffer.
 * Registered links with unsupported targets remain HOST, never implicitly DISC.
 */
doa1u_disc_path_kind doa1u_classify_disc_path(const char *xbox_path,
                                             char *relative_path, size_t capacity);

#ifdef __cplusplus
}
#endif
#endif
