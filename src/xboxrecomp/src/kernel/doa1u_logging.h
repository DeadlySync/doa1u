#ifndef DOA1U_LOGGING_H
#define DOA1U_LOGGING_H

/* Private host/runtime policy; not part of the public Xbox API. */
#include <windows.h>
#include <stdlib.h>
#include <wchar.h>

static inline int doa1u_logging_enabled(void)
{
    const char *value = getenv("DOA1U_LOGS");
    if (value) return value[0] == '1' && value[1] == '\0';
#ifdef _DEBUG
    return 1;
#else
    return 0;
#endif
}

/* Logs follow the EXE, never the working directory (also after ESC restart). */
static inline int doa1u_log_path(wchar_t *path, size_t capacity,
                               const wchar_t *name)
{
    DWORD length = GetModuleFileNameW(NULL, path, (DWORD)capacity);
    wchar_t *slash;
    if (!length || length >= capacity) return 0;
    slash = wcsrchr(path, L'\\');
    if (!slash) return 0;
    return wcscpy_s(slash + 1, capacity - (size_t)(slash + 1 - path), name) == 0;
}

#endif
