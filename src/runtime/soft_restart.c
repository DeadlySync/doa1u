/* Restart in a fresh host process: all guest threads, audio and TLS reset. */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include "runtime/soft_restart.h"

#define RESTART_PARENT_ENV L"DOA1U_RESTART_PARENT_PID"

void game_restart_wait_for_parent(void)
{
    wchar_t value[32];
    DWORD length = GetEnvironmentVariableW(RESTART_PARENT_ENV, value, 32);
    if (!length || length >= 32) return;
    SetEnvironmentVariableW(RESTART_PARENT_ENV, NULL);
    DWORD pid = wcstoul(value, NULL, 10);
    if (!pid || pid == GetCurrentProcessId()) return;
    HANDLE parent = OpenProcess(SYNCHRONIZE, FALSE, pid);
    if (parent) {
        /* Wait before opening run.log/run.err or starting any audio. */
        DWORD status = WaitForSingleObject(parent, 5000);
        CloseHandle(parent);
        if (status != WAIT_OBJECT_0) ExitProcess(1);
    }
}

void game_soft_restart(void)
{
    wchar_t path[32768], parent[32];
    if (!GetModuleFileNameW(NULL, path, 32768)) return;
    wchar_t *command = _wcsdup(GetCommandLineW());
    if (!command) return;
    swprintf(parent, 32, L"%lu", GetCurrentProcessId());
    if (!SetEnvironmentVariableW(RESTART_PARENT_ENV, parent)) { free(command); return; }
    STARTUPINFOW startup = {0};
    PROCESS_INFORMATION process = {0};
    startup.cb = sizeof startup;
    BOOL started = CreateProcessW(path, command, NULL, NULL, FALSE, 0,
                                  NULL, NULL, &startup, &process);
    DWORD error = started ? 0 : GetLastError();
    SetEnvironmentVariableW(RESTART_PARENT_ENV, NULL);
    free(command);
    if (!started) {
        fprintf(stderr, "[RESTART] launch failed: %lu\n", error);
        return; /* Keep current game alive if relaunch fails. */
    }
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    /* Child waits for this process to exit; avoid shutdown deadlocks in guest
     * threads. Saved files remain on disk; unsaved match state is discarded. */
    fflush(stdout); fflush(stderr);
    TerminateProcess(GetCurrentProcess(), 0);
}
