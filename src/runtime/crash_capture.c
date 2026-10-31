/* Capture the first NULL control transfer without intercepting routine MMIO
 * faults in a debugger. A prestarted worker writes the dump off the fault stack.
 * This is diagnostics only: never repair context, swallow or resume a fault.
 */
#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include "runtime/crash_capture.h"

static HANDLE requested, completed;
static volatile LONG captured;
static int armed;
static uintptr_t crt_begin, crt_end;
static DWORD fault_thread, dump_error;
static EXCEPTION_RECORD fault_record;
static CONTEXT fault_context;
static EXCEPTION_POINTERS fault_pointers;
static wchar_t dump_path[32768];
static LPTOP_LEVEL_EXCEPTION_FILTER previous_filter;
static int capture_fault(EXCEPTION_POINTERS *ep);

/* Last chance only: expected MMIO faults have already been handled by VEH.
 * Preserve read/write failures too, without dumping routine emulated accesses. */
static LONG WINAPI unhandled_fault(EXCEPTION_POINTERS *ep)
{
    capture_fault(ep);
    return previous_filter ? previous_filter(ep) : EXCEPTION_CONTINUE_SEARCH;
}

static DWORD WINAPI dump_worker(void *unused)
{
    (void)unused;
    WaitForSingleObject(requested, INFINITE);
    HANDLE file = CreateFileW(dump_path, GENERIC_WRITE, FILE_SHARE_READ, NULL,
                              CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
    dump_error = file == INVALID_HANDLE_VALUE ? GetLastError() : ERROR_SUCCESS;
    if (file != INVALID_HANDLE_VALUE) {
        MINIDUMP_EXCEPTION_INFORMATION info = {0};
        info.ThreadId = fault_thread;
        info.ExceptionPointers = &fault_pointers;
        info.ClientPointers = FALSE;
        if (!MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), file,
                (MINIDUMP_TYPE)(MiniDumpWithFullMemory | MiniDumpWithThreadInfo
                               | MiniDumpWithUnloadedModules), &info, NULL, NULL))
            dump_error = GetLastError();
        CloseHandle(file);
    }
    SetEvent(completed);
    return 0;
}

void crash_capture_init(void)
{
    /* Resolve before a fault: no loader calls or symbol lookup on its stack. */
    HMODULE crt = GetModuleHandleW(L"ucrtbase.dll");
    if (crt) {
        const IMAGE_DOS_HEADER *dos = (const IMAGE_DOS_HEADER *)crt;
        const IMAGE_NT_HEADERS *nt = (const IMAGE_NT_HEADERS *)
            ((const char *)crt + dos->e_lfanew);
        crt_begin = (uintptr_t)crt;
        crt_end = crt_begin + nt->OptionalHeader.SizeOfImage;
    }
    DWORD length = GetModuleFileNameW(NULL, dump_path, 32768);
    if (!length || length >= 32768) return;
    wchar_t *slash = wcsrchr(dump_path, L'\\');
    if (!slash) return;
    SYSTEMTIME now;
    GetSystemTime(&now);
    size_t remaining = 32768 - (size_t)(slash + 1 - dump_path);
    if (swprintf_s(slash + 1, remaining,
            L"doa1u-crash-%04u%02u%02u-%02u%02u%02u-%lu.dmp",
            now.wYear, now.wMonth, now.wDay, now.wHour, now.wMinute,
            now.wSecond, GetCurrentProcessId()) < 0) return;
    requested = CreateEventW(NULL, FALSE, FALSE, NULL);
    completed = CreateEventW(NULL, TRUE, FALSE, NULL);
    HANDLE thread = NULL;
    if (requested && completed)
        thread = CreateThread(NULL, 0, dump_worker, NULL, 0, NULL);
    if (!thread) {
        DWORD error = GetLastError();
        if (requested) CloseHandle(requested);
        if (completed) CloseHandle(completed);
        requested = completed = NULL;
        fprintf(stderr, "[CRASH capture] Could not arm worker: %lu\n", error);
        return;
    }
    CloseHandle(thread);
    armed = 1;
    previous_filter = SetUnhandledExceptionFilter(unhandled_fault);
    fprintf(stderr, "[CRASH capture] Armed for NULL execute and unhandled faults (no debugger)\n");
}

static int capture_fault(EXCEPTION_POINTERS *ep)
{
    if (!armed) return 0;
    if (InterlockedCompareExchange(&captured, 1, 0)) {
        /* A second fault must not reach process termination while the first
         * thread is still waiting for its dump. All fatal reporters wait. */
        WaitForSingleObject(completed, INFINITE);
        return 1;
    }
    fault_thread = GetCurrentThreadId();
    memcpy(&fault_record, ep->ExceptionRecord, sizeof fault_record);
    memcpy(&fault_context, ep->ContextRecord, sizeof fault_context);
    fault_record.ExceptionRecord = NULL;
    fault_pointers.ExceptionRecord = &fault_record;
    fault_pointers.ContextRecord = &fault_context;
    /* No stdio/stack walking before requesting capture: CRT locks or damaged
     * unwind state on the faulting fiber must not prevent the dump request. */
    SetEvent(requested);
    /* Keep the original fault stack alive until the dump is complete. No
     * timeout that would let exception dispatch overwrite the evidence. */
    WaitForSingleObject(completed, INFINITE);
    fprintf(stderr, "[CRASH capture] First fatal exception 0x%08lX at RIP=0x%llX\n",
            fault_record.ExceptionCode, (unsigned long long)fault_context.Rip);
    if (dump_error)
        fprintf(stderr, "[CRASH capture] Dump failed: %lu\n", dump_error);
    else
        fprintf(stderr, "[CRASH capture] Dump complete: %ls\n", dump_path);
    return 0;
}

int crash_capture_null_execute(void *exception_pointers)
{
    EXCEPTION_POINTERS *ep = (EXCEPTION_POINTERS *)exception_pointers;
    if (ep->ExceptionRecord->ExceptionCode != EXCEPTION_ACCESS_VIOLATION
        || ep->ExceptionRecord->NumberParameters < 2
        || ep->ExceptionRecord->ExceptionInformation[0] != 8
        || ep->ContextRecord->Rip != 0)
        return 0;
    return capture_fault(ep);
}

int crash_capture_known_fault(void *exception_pointers)
{
    return capture_fault((EXCEPTION_POINTERS *)exception_pointers);
}

int crash_capture_crt_read(void *exception_pointers)
{
    EXCEPTION_POINTERS *ep = (EXCEPTION_POINTERS *)exception_pointers;
    uintptr_t ip = (uintptr_t)ep->ContextRecord->Rip;
    /* APU/GPU fault handling precedes this check in the caller. CRT reads are
     * not guest MMIO. Preserve their original context before stdio/unwinding,
     * which can fail again when native state has already been corrupted. */
    if (ep->ExceptionRecord->ExceptionCode != EXCEPTION_ACCESS_VIOLATION
        || ep->ExceptionRecord->NumberParameters < 2
        || ep->ExceptionRecord->ExceptionInformation[0] != 0
        || !crt_begin || ip < crt_begin || ip >= crt_end)
        return 0;
    return capture_fault(ep);
}
