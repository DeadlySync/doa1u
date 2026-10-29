/* Standalone diagnostic check: synthetic fault metadata, no game/GPU launch.
 * Build with crash_capture.c, /I src, and dbghelp.lib; run in a scratch folder.
 */
#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <string.h>
#include "runtime/crash_capture.h"

int main(int argc, char **argv)
{
    int known_read = argc > 1 && strcmp(argv[1], "--known-read") == 0;
    /* Separate process: exercise the actual last-chance filter, not a direct
     * helper call. Parent/checker inspects the emitted dump offline. */
    if (argc > 1 && !known_read) {
        SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
        crash_capture_init();
        RaiseException(0xE042444F, EXCEPTION_NONCONTINUABLE, 0, NULL);
        return 7;
    }
    EXCEPTION_RECORD record = {0};
    CONTEXT context = {0};
    EXCEPTION_POINTERS pointers = {&record, &context};
    RtlCaptureContext(&context);
    record.ExceptionCode = EXCEPTION_ACCESS_VIOLATION;
    record.NumberParameters = 2;
    record.ExceptionInformation[0] = 0;
    context.Rip = 0;
    crash_capture_init();
    if (crash_capture_null_execute(&pointers)) return 1;
    if (known_read) {
        context.Rip = 0x1234;
        record.ExceptionAddress = (void *)0x1234;
        record.ExceptionInformation[1] = 0x1998A0C;
        if (crash_capture_known_fault(&pointers)) return 2;
        if (!crash_capture_known_fault(&pointers)) return 3;
    } else {
        record.ExceptionInformation[0] = 8;
        if (crash_capture_null_execute(&pointers)) return 2;
        if (!crash_capture_null_execute(&pointers)) return 3;
    }

    WIN32_FIND_DATAW found;
    wchar_t pattern[100];
    swprintf_s(pattern, 100, L"doa1u-crash-*-%lu.dmp", GetCurrentProcessId());
    HANDLE search = FindFirstFileW(pattern, &found);
    if (search == INVALID_HANDLE_VALUE) return 4;
    FindClose(search);
    HANDLE file = CreateFileW(found.cFileName, GENERIC_READ, FILE_SHARE_READ,
                              NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    HANDLE mapping = CreateFileMappingW(file, NULL, PAGE_READONLY, 0, 0, NULL);
    void *view = MapViewOfFile(mapping, FILE_MAP_READ, 0, 0, 0);
    MINIDUMP_DIRECTORY *directory;
    MINIDUMP_EXCEPTION_STREAM *exception;
    ULONG size;
    if (!view || !MiniDumpReadDumpStream(view, ExceptionStream, &directory,
                                         (void **)&exception, &size)) return 5;
    int valid = exception->ThreadId == GetCurrentThreadId()
        && exception->ExceptionRecord.ExceptionCode == EXCEPTION_ACCESS_VIOLATION
        && exception->ExceptionRecord.ExceptionAddress == (known_read ? 0x1234 : 0)
        && exception->ExceptionRecord.ExceptionInformation[0] == (known_read ? 0 : 8);
    CONTEXT *saved = (CONTEXT *)((char *)view + exception->ThreadContext.Rva);
    valid = valid && saved->Rip == context.Rip && saved->Rsp == context.Rsp;
    UnmapViewOfFile(view);
    CloseHandle(mapping);
    CloseHandle(file);
    if (!valid) return 6;
    puts(known_read ? "PASS native dump: explicitly identified read fault, original thread/context, repeat suppression"
        : "PASS native dump: first NULL execute, original thread/context, repeat suppression, read-fault exclusion");
    return 0;
}
