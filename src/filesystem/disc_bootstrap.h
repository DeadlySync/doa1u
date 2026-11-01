#ifndef DOA1U_DISC_BOOTSTRAP_H
#define DOA1U_DISC_BOOTSTRAP_H
#include <stddef.h>
#include <wchar.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct doa1u_boot_source {
    void *xbe_data;
    size_t xbe_size;
    int image_mode;
} doa1u_boot_source;
/* Pass NULL to discover beside this process's EXE, never the working directory.
 * A non-NULL absolute directory is for offline checks. Output must be empty.
 * Success retains the adapter mount until close; only one source may be open.
 * Failure logs the source filename and reason and leaves an empty output. */
int doa1u_boot_open(const wchar_t *directory, doa1u_boot_source *out);
/* Call after kernel/file users finish. Existing adapter handles pin their mount.
 * ESC launches a new process; F1 does not call either bootstrap function. */
void doa1u_boot_close(doa1u_boot_source *source);
#ifdef __cplusplus
}
#endif
#endif
