#ifndef XBOX_VIRTUAL_DISK_H
#define XBOX_VIRTUAL_DISK_H
#include "kernel.h"
/* Opt-in per consuming port. Other games retain image-backed devices. */
void xbox_virtual_disk_enable(void);
int xbox_virtual_disk_enabled(void);
int xbox_path_partition_number(const char *path);
uint64_t xbox_path_partition_size(int partition);
void xbox_path_partition_table(unsigned char sector[512]);
#if defined(_WIN32)
NTSTATUS xbox_virtual_disk_open(int part, ACCESS_MASK access, HANDLE *out);
int xbox_virtual_disk_size(HANDLE h, uint64_t *size);
int xbox_virtual_disk_io(HANDLE h, int write, HANDLE event,
                        PXBOX_IO_STATUS_BLOCK ios, void *buffer, ULONG length,
                        PLARGE_INTEGER offset, NTSTATUS *status);
int xbox_virtual_disk_query(HANDLE h, PXBOX_IO_STATUS_BLOCK ios, void *buffer,
                           ULONG length, XBOX_FILE_INFORMATION_CLASS cls,
                           int set, NTSTATUS *status);
int xbox_virtual_disk_close(HANDLE h);
int xbox_virtual_disk_duplicate(HANDLE source, HANDLE *out, DWORD options);
#endif
#endif
