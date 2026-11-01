#ifndef DOA1U_XBOX_IMAGE_FILE_H
#define DOA1U_XBOX_IMAGE_FILE_H
#include "kernel.h"
#include "xiso_reader.h"
#ifdef __cplusplus
extern "C" {
#endif

/* Internal storage adapter. Startup and Xbox APIs share this one mount.
 * The adapter owns mounts; open objects and in-flight calls retain ownership.
 * Dismount disables new absolute image opens, but existing handles stay valid.
 * Mount replacement is rejected until the current device is dismounted. */
xiso_result doa1u_image_mount(const wchar_t *path, char *error, size_t capacity);
void doa1u_image_unmount(void);
/* Bootstrap acquisition before guest/kernel initialization. Bounded allocation;
 * caller frees the returned original bytes. Uses the adapter-owned index. */
xiso_result doa1u_image_load_file(const char *path, size_t limit, void **data, size_t *size);
int doa1u_image_is_handle(HANDLE handle);
int doa1u_image_size(HANDLE handle, uint64_t *out_size);
int doa1u_image_duplicate(HANDLE source, HANDLE *out, DWORD options);
int doa1u_image_close(HANDLE handle);

/* Dispatch functions return 0 for a host/virtual-disk request, 1 if claimed
 * (including errors). No fake HANDLEs or public Xbox API replacements here. */
int doa1u_image_open(PHANDLE out, ACCESS_MASK access, PXBOX_OBJECT_ATTRIBUTES oa,
    PXBOX_IO_STATUS_BLOCK ios, ULONG share, ULONG disposition, ULONG options, NTSTATUS *status);
int doa1u_image_read(HANDLE handle, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    void *buffer, ULONG length, PLARGE_INTEGER offset, NTSTATUS *status);
int doa1u_image_write(HANDLE handle, HANDLE event, PXBOX_IO_STATUS_BLOCK ios, NTSTATUS *status);
int doa1u_image_query(HANDLE handle, PXBOX_IO_STATUS_BLOCK ios, void *buffer,
    ULONG length, XBOX_FILE_INFORMATION_CLASS cls, int set, NTSTATUS *status);
int doa1u_image_volume(HANDLE handle, PXBOX_IO_STATUS_BLOCK ios, void *buffer,
    ULONG length, XBOX_FS_INFORMATION_CLASS cls, NTSTATUS *status);
int doa1u_image_directory(HANDLE handle, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    void *buffer, ULONG length, XBOX_FILE_INFORMATION_CLASS cls,
    PXBOX_ANSI_STRING pattern, BOOLEAN restart, NTSTATUS *status);
int doa1u_image_attributes(PXBOX_OBJECT_ATTRIBUTES oa,
    PXBOX_FILE_NETWORK_OPEN_INFORMATION info, NTSTATUS *status);
int doa1u_image_delete(PXBOX_OBJECT_ATTRIBUTES oa, NTSTATUS *status);
int doa1u_image_rename(HANDLE source, PXBOX_OBJECT_ATTRIBUTES target, NTSTATUS *status);
int doa1u_image_flush(HANDLE handle, PXBOX_IO_STATUS_BLOCK ios, NTSTATUS *status);
int doa1u_image_control(HANDLE handle, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    ULONG control, void *output, ULONG length, NTSTATUS *status);

#ifdef __cplusplus
}
#endif
#endif
