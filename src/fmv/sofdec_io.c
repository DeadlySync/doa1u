/* Movie acquisition only. The demuxer/decoders remain buffer-backed. */
#include "fmv/sofdec_io.h"
#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sofdec_read_file(const char *path, uint8_t **out_data, size_t *out_size)
{
    HANDLE file = NULL;
    uint8_t *data = NULL;
    const char *reason = "invalid path";
    NTSTATUS status = STATUS_INVALID_PARAMETER;
    size_t path_length = 0, size = 0, done = 0;
    XBOX_ANSI_STRING name = {0};
    XBOX_OBJECT_ATTRIBUTES oa = {0};
    XBOX_IO_STATUS_BLOCK ios = {0};
    XBOX_FILE_STANDARD_INFORMATION info = {0};

    if (!out_data || !out_size) return 0;
    *out_data = NULL; *out_size = 0;
    if (!path) return 0;
    /* Matches the existing internal Xbox path budget; do not silently truncate. */
    while (path_length < 512 && path[path_length]) ++path_length;
    if (!path_length || path_length >= 512) goto fail;
    name.Buffer = (PCHAR)path;
    name.Length = (USHORT)path_length;
    name.MaximumLength = (USHORT)(path_length + 1);
    oa.ObjectName = &name;
    reason = "open";
    status = xbox_NtCreateFile(&file, XBOX_GENERIC_READ | XBOX_SYNCHRONIZE, &oa, &ios,
        NULL, 0, FILE_SHARE_READ, XBOX_FILE_OPEN,
        XBOX_FILE_NON_DIRECTORY_FILE | XBOX_FILE_SYNCHRONOUS_IO_NONALERT);
    if (status != STATUS_SUCCESS || ios.Status != STATUS_SUCCESS || !file || file == INVALID_HANDLE_VALUE) goto fail;

    reason = "query size";
    status = xbox_NtQueryInformationFile(file, &ios, &info, sizeof(info), XboxFileStandardInformation);
    if (status != STATUS_SUCCESS || ios.Status != STATUS_SUCCESS || ios.Information != sizeof(info)) goto fail;
    reason = "invalid size/directory (expected 1..512 MiB)";
    if (info.Directory || info.EndOfFile.QuadPart <= 0 || info.EndOfFile.QuadPart > 512ll * 1024 * 1024) {
        status = STATUS_INVALID_PARAMETER; goto fail;
    }
    size = (size_t)info.EndOfFile.QuadPart;
    data = malloc(size);
    reason = "allocation";
    if (!data) { status = STATUS_INSUFFICIENT_RESOURCES; goto fail; }

    reason = "read (truncated, invalid count or incomplete synchronous I/O)";
    while (done < size) {
        LARGE_INTEGER offset;
        ULONG chunk = (ULONG)((size - done > 1024 * 1024) ? 1024 * 1024 : size - done);
        offset.QuadPart = (LONGLONG)done;
        memset(&ios, 0, sizeof(ios));
        status = xbox_NtReadFile(file, NULL, NULL, NULL, &ios, data + done, chunk, &offset);
        /* Never treat STATUS_PENDING as completed native I/O. Positive short
         * reads are valid; zero progress/EOF before the queried end is not. */
        if (status != STATUS_SUCCESS || ios.Status != STATUS_SUCCESS || !ios.Information || ios.Information > chunk) goto fail;
        done += (size_t)ios.Information;
    }
    reason = "close";
    status = xbox_NtClose(file);
    file = NULL; // Exactly one close attempt, including failure.
    if (status != STATUS_SUCCESS) goto fail;
    *out_data = data; *out_size = size;
    return 1;

fail:
    fprintf(stderr, "[FMV] Cannot acquire %.*s: %s (status=0x%08lX, read=%zu/%zu)\n",
        (int)path_length, path, reason, (unsigned long)status, done, size);
    if (file && file != INVALID_HANDLE_VALUE) xbox_NtClose(file);
    free(data);
    return 0;
}
