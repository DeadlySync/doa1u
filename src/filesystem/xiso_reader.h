#ifndef DOA1U_XISO_READER_H
#define DOA1U_XISO_READER_H

#include <stddef.h>
#include <stdint.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct xiso_image xiso_image;
typedef enum xiso_result {
    XISO_OK = 0,
    XISO_INVALID_ARGUMENT,
    XISO_IO_ERROR,
    XISO_INVALID_IMAGE,
    XISO_LIMIT_EXCEEDED,
    XISO_OUT_OF_MEMORY,
    XISO_NOT_FOUND,
    XISO_NOT_DIRECTORY,
    XISO_IS_DIRECTORY
} xiso_result;

/* IDs and borrowed strings are immutable and valid until unmount. Root ID is 0.
 * Paths/names retain original disc spelling; '/' separates path components.
 * Sizes and offsets are bytes, not sectors. Directory size is its table size. */
typedef struct xiso_entry {
    uint32_t id;
    uint32_t parent_id;
    const char *name;
    const char *path;
    uint64_t image_offset;
    uint64_t size;
    uint8_t attributes;
    int is_directory;
} xiso_entry;

typedef struct xiso_info {
    uint64_t image_size;
    uint64_t partition_offset;
    uint64_t volume_timestamp;
    uint64_t metadata_bytes_read;
    uint32_t file_count;
    uint32_t directory_count; /* Includes root and empty directories. */
} xiso_info;

/* Read-only Win32 mount. No payload scan, extraction, or persistent cache.
 * Failure leaves *out_image NULL. Optional error text is always NUL-terminated.
 * Resource limits: 1M entries, 64MiB total directory metadata, 1MiB/table,
 * 4096-byte paths and 256 directory levels. Excess returns LIMIT_EXCEEDED.
 * Format names are treated as byte strings; case folding is ASCII-only. */
xiso_result xiso_mount(const wchar_t *path, xiso_image **out_image,
                       char *error_text, size_t error_capacity);
void xiso_unmount(xiso_image *image);
xiso_result xiso_get_info(const xiso_image *image, xiso_info *out_info);
xiso_result xiso_get_entry(const xiso_image *image, uint32_t id, xiso_entry *out_entry);

/* Disc-relative paths only (drive/device routing belongs to the Xbox adapter).
 * ASCII case-insensitive; accepts either separator, repeated/leading/trailing
 * separators and '.'. Rejects '..', drive prefixes and embedded control bytes.
 * Empty path is root. */
xiso_result xiso_lookup(const xiso_image *image, const char *path, xiso_entry *out_entry);
xiso_result xiso_child_count(const xiso_image *image, uint32_t directory_id, size_t *out_count);
xiso_result xiso_child_at(const xiso_image *image, uint32_t directory_id,
                         size_t ordinal, xiso_entry *out_entry);

/* Stateless explicit-offset read: independent opens/positions belong to the
 * Xbox adapter. Safe for concurrent reads/lookups on a mounted image.
 * EOF is OK with zero bytes; reads crossing EOF are shortened. Never crosses
 * an entry's extent. Directories cannot be read as files. On failure *out_read
 * records bytes already copied, if any. NULL buffer is allowed only for length 0.
 * Caller MUST finish all calls/handles before unmount (unmount is not concurrent).
 */
xiso_result xiso_read(const xiso_image *image, uint32_t entry_id, uint64_t offset,
                      void *buffer, size_t length, size_t *out_read);
const char *xiso_result_string(xiso_result result);

#ifdef __cplusplus
}
#endif
#endif
