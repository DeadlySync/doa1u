/* Fault-injected checks of production acquisition. Only the four native Xbox
 * calls are mocked; test the same C object compiled into the game. */
#include "fmv/sofdec_io.h"
#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum scenario { NORMAL, SHORT_READS, OPEN_FAIL, OPEN_INVALID, OPEN_PARTIAL_FAIL,
    OPEN_IOS_FAIL, QUERY_FAIL, QUERY_PENDING, QUERY_IOS_FAIL, QUERY_SHORT, QUERY_LONG,
    ZERO_SIZE, NEGATIVE_SIZE, TOO_LARGE, DIRECTORY_FILE, READ_FAIL, READ_AFTER_PARTIAL,
    READ_ZERO, READ_EOF, READ_PENDING, READ_IOS_FAIL, READ_OVERRUN, CLOSE_FAIL };
static enum scenario mode;
static unsigned checks, opens, queries, reads, closes;
static size_t position, expected_size;
static HANDLE token;
static const char *expected_path = "D:\\DOA1\\ss_opn.sfd";
static void check(int ok, const char *why) {
    ++checks; if (!ok) { fprintf(stderr, "FAIL mode=%d: %s\n", mode, why); exit(1); }
}
NTSTATUS __stdcall xbox_NtCreateFile(PHANDLE out, ACCESS_MASK access, PXBOX_OBJECT_ATTRIBUTES oa,
    PXBOX_IO_STATUS_BLOCK ios, PLARGE_INTEGER allocation, ULONG attrs, ULONG share, ULONG disposition, ULONG options)
{
    ++opens;
    check(oa && oa->ObjectName && !oa->RootDirectory && !oa->Attributes, "Unexpected object/root");
    check(oa->ObjectName->Length == strlen(expected_path) &&
        !memcmp(oa->ObjectName->Buffer, expected_path, strlen(expected_path)), "Movie path changed");
    check(access == (XBOX_GENERIC_READ | XBOX_SYNCHRONIZE) && !allocation && !attrs &&
        share == FILE_SHARE_READ && disposition == XBOX_FILE_OPEN &&
        options == (XBOX_FILE_NON_DIRECTORY_FILE | XBOX_FILE_SYNCHRONOUS_IO_NONALERT), "Not read-only synchronous open");
    if (mode == OPEN_FAIL) { *out = NULL; return STATUS_OBJECT_NAME_NOT_FOUND; }
    if (mode == OPEN_INVALID) { *out = INVALID_HANDLE_VALUE; return STATUS_UNSUCCESSFUL; }
    *out = token; ios->Status = mode == OPEN_IOS_FAIL ? STATUS_UNSUCCESSFUL : STATUS_SUCCESS;
    return mode == OPEN_PARTIAL_FAIL ? STATUS_UNSUCCESSFUL : STATUS_SUCCESS;
}
NTSTATUS __stdcall xbox_NtQueryInformationFile(HANDLE file, PXBOX_IO_STATUS_BLOCK ios,
    PVOID data, ULONG length, XBOX_FILE_INFORMATION_CLASS cls)
{
    ++queries;
    check(file == token && length == sizeof(XBOX_FILE_STANDARD_INFORMATION) &&
        cls == XboxFileStandardInformation, "Wrong size query");
    if (mode == QUERY_FAIL) return STATUS_UNSUCCESSFUL;
    if (mode == QUERY_PENDING) return STATUS_PENDING;
    PXBOX_FILE_STANDARD_INFORMATION info = data;
    memset(info, 0, sizeof(*info));
    info->EndOfFile.QuadPart = (LONGLONG)expected_size;
    if (mode == ZERO_SIZE) info->EndOfFile.QuadPart = 0;
    if (mode == NEGATIVE_SIZE) info->EndOfFile.QuadPart = -1;
    if (mode == TOO_LARGE) info->EndOfFile.QuadPart = 512ll * 1024 * 1024 + 1;
    if (mode == DIRECTORY_FILE) info->Directory = TRUE;
    ios->Status = mode == QUERY_IOS_FAIL ? STATUS_UNSUCCESSFUL : STATUS_SUCCESS;
    ios->Information = mode == QUERY_SHORT ? sizeof(*info) - 1 : mode == QUERY_LONG ? sizeof(*info) + 1 : sizeof(*info);
    return STATUS_SUCCESS;
}
NTSTATUS __stdcall xbox_NtReadFile(HANDLE file, HANDLE event, PIO_APC_ROUTINE apc, PVOID context,
    PXBOX_IO_STATUS_BLOCK ios, PVOID buffer, ULONG length, PLARGE_INTEGER offset)
{
    ++reads;
    check(file == token && !event && !apc && !context && offset && offset->QuadPart == (LONGLONG)position &&
        length && length <= 1024 * 1024 && length <= expected_size - position, "Wrong explicit read contract");
    if (mode == READ_FAIL || (mode == READ_AFTER_PARTIAL && reads > 1)) return STATUS_UNSUCCESSFUL;
    if (mode == READ_PENDING) return STATUS_PENDING;
    if (mode == READ_EOF) return STATUS_END_OF_FILE;
    ios->Status = mode == READ_IOS_FAIL ? STATUS_UNSUCCESSFUL : STATUS_SUCCESS;
    if (mode == READ_ZERO) { ios->Information = 0; return STATUS_SUCCESS; }
    if (mode == READ_OVERRUN) { ios->Information = (ULONG_PTR)length + 1; return STATUS_SUCCESS; }
    size_t count = length;
    if ((mode == SHORT_READS || mode == READ_AFTER_PARTIAL) && count > 7) count = 7;
    for (size_t i = 0; i < count; ++i) ((unsigned char *)buffer)[i] = (unsigned char)((position + i) * 37);
    position += count; ios->Information = count;
    return STATUS_SUCCESS;
}
NTSTATUS __stdcall xbox_NtClose(HANDLE file) {
    ++closes; check(file == token && closes == 1, "Wrong/double close");
    return mode == CLOSE_FAIL ? STATUS_UNSUCCESSFUL : STATUS_SUCCESS;
}
static void run(enum scenario test) {
    mode = test; opens = queries = reads = closes = 0; position = 0;
    expected_size = test == NORMAL ? 2 * 1024 * 1024 + 31 : 31;
    unsigned char *data = (unsigned char *)(uintptr_t)1; size_t size = 123;
    int accepted = sofdec_read_file(expected_path, &data, &size);
    check(accepted == (test == NORMAL || test == SHORT_READS), "Wrong success/failure result");
    check(opens == 1 && closes == (test == OPEN_FAIL || test == OPEN_INVALID ? 0u : 1u), "Handle leak/missing close");
    if (accepted) {
        check(data && size == expected_size && position == expected_size, "Wrong complete buffer");
        int matched = 1;
        for (size_t i = 0; i < size; ++i) if (data[i] != (unsigned char)(i * 37)) { matched = 0; break; }
        check(matched, "Partial reads/cursor corrupted data");
        check(reads == (test == NORMAL ? 3u : 5u), "Unexpected chunk/short-read behavior");
        free(data);
    } else check(!data && !size, "Failure exposed partial allocation/output");
}
int main(void) {
    token = (HANDLE)(uintptr_t)0x1234;
    for (int i = NORMAL; i <= CLOSE_FAIL; ++i) run((enum scenario)i);
    unsigned char *data = NULL; size_t size = 123;
    check(!sofdec_read_file(NULL, &data, &size) && !data && !size, "NULL path");
    check(!sofdec_read_file("", &data, &size) && !data && !size, "Empty path");
    check(!sofdec_read_file(expected_path, NULL, &size), "NULL data output");
    check(!sofdec_read_file(expected_path, &data, NULL), "NULL size output");
    char long_path[512]; memset(long_path, 'a', sizeof(long_path));
    unsigned before = opens;
    check(!sofdec_read_file(long_path, &data, &size) && !data && !size && opens == before, "Nonterminated/oversize path reached API");
    printf("PASS: Sofdec native acquisition (%u checks; 23 success/fault scenarios)\n", checks);
    return 0;
}
