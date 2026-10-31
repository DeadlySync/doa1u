/* Required manual-dispatch hooks and rate-limited guest call failure reporting. */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "common/guest_runtime.h"

/* ── ICALL trace ring buffer ───────────────────────────────────────────────
 *
 * Written by the RECOMP_ICALL macro (recomp_types.h) on every indirect call.
 * The runtime OWNS these (xbox_kernel defines all three in
 * src/kernel/xbox_memory_layout.c); declare, do not define -- a second
 * definition here is a duplicate symbol (LNK2005). */
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;
extern volatile uint64_t g_icall_count;

extern void training_stage_change(void);

/* Most shadows resolve at link time; recover missing interior entries here. */
recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x0003E404u)
        return training_stage_change;
    return (recomp_func_t)0;
}

/* ICALL failure logging  Called when RECOMP_ICALL cannot resolve a target address (vtable dispatch to an address not in the dispatch table, a function pointer from corrupt memory, an unhandled kernel thunk, ...). Rate-limited per address. */
void recomp_icall_fail_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }

    fprintf(stderr, "[ICALL] Failed to resolve VA 0x%08X -- skipped %llu time(s) "
                    "(total calls: %llu)\n",
            va, (unsigned long long)hits[i], (unsigned long long)g_icall_count);

    /* Dump last 16 call targets from the ring buffer */
    fprintf(stderr, "  Recent ICALL targets:\n");
    for (i = 0; i < 16; i++) {
        int idx = (g_icall_trace_idx - 16 + i) & 15;
        if (g_icall_trace[idx])
            fprintf(stderr, "    [%2d] 0x%08X\n", i, g_icall_trace[idx]);
    }
    fflush(stderr);
}

/* An indirect call whose target is not code: a null or wild function pointer. Skipping these is right -- calling a data address is worse -- but skipping them *silently* is not. */
void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }
    fprintf(stderr, "[ICALL] target 0x%08X is not code -- skipped %llu time(s) "
                    "(null or wild function pointer, at call #%llu)\n",
            va, (unsigned long long)hits[i],
            (unsigned long long)g_icall_count);
    fflush(stderr);
}

/* Untranslated instructions  The lifter emits RECOMP_UNIMPL(text, va) at every instruction it has no translation for, in place of the bare comment it used to leave. The instruction is still a no-op; this only stops the omission being silent. */
void recomp_unimpl(const char *text, uint32_t va)
{
    static int printed;
    const char *trap = getenv("RECOMP_UNIMPL_TRAP");
    int stop = trap && *trap && *trap != '0';

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr,
                "[UNIMPL] untranslated instruction REACHED: `%s` at 0x%08X"
                " (a no-op; set RECOMP_UNIMPL_TRAP=1 to stop here)\n",
                text, va);
        fflush(stderr);
    }
    if (stop) abort();
}
