/* Synthetic debugger-filter/restart check. Never launches the game. */
#include <windows.h>
#include <stdio.h>
static LONG single_step_seen;
static LONG CALLBACK check_single_step(EXCEPTION_POINTERS *ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_SINGLE_STEP) {
        InterlockedIncrement(&single_step_seen);
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

static void handled_read(void)
{
    void *page = VirtualAlloc(NULL, 4096, MEM_RESERVE | MEM_COMMIT, PAGE_NOACCESS);
    __try {
        volatile unsigned char value = *(volatile unsigned char *)page;
        (void)value;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        puts("PASS: expected read fault reached application handler");
        fflush(stdout);
    }
    VirtualFree(page, 0, MEM_RELEASE);
}

int main(int argc, char **argv)
{
    (void)argv;
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    AddVectoredExceptionHandler(1, check_single_step);
    RaiseException(EXCEPTION_SINGLE_STEP, 0, 0, NULL);
    if (!single_step_seen) {
        puts("FAIL: debugger swallowed application single-step event");
        return 9;
    }
    puts("PASS: single-step event reached application handler");
    handled_read();
    if (argc > 1) {
        puts("CHILD: raising synthetic fatal exception E0424450");
        fflush(stdout);
        RaiseException(0xE0424450, EXCEPTION_NONCONTINUABLE, 0, NULL);
        return 7;
    }
    char path[MAX_PATH], command[MAX_PATH + 32];
    GetModuleFileNameA(NULL, path, MAX_PATH);
    sprintf_s(command, sizeof command, "\"%s\" --child", path);
    STARTUPINFOA startup = {0};
    PROCESS_INFORMATION process = {0};
    startup.cb = sizeof startup;
    if (!CreateProcessA(path, command, NULL, NULL, FALSE, 0, NULL, NULL,
                        &startup, &process)) return 8;
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    /* Parent exits immediately, as game_soft_restart does. */
    return 0;
}
