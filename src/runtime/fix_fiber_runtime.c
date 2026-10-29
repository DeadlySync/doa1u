/* Win32-backed guest fibers. Preserve guest registers across host fiber switches. */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <windows.h>

#include "common/guest_runtime.h"
#include "runtime/crash_capture.h"

#define MAX_FIBERS 64

/* Generated bodies kept for guest-side bookkeeping (via --manual-functions). */
extern void sub_000ADA63_gen(void);   /* CreateFiber            */
extern void sub_000ADAEF_gen(void);   /* DeleteFiber            */
extern void sub_000ADB48_gen(void);   /* ConvertThreadToFiber   */

typedef struct {
    uint32_t guest_struct;   /* guest fiber-struct VA (what the engine passes) */
    uint32_t start_routine;  /* guest LPFIBER_START_ROUTINE VA (fresh fibers)  */
    uint32_t param;          /* guest lpParameter                              */
    void    *host_fiber;     /* Win32 fiber                                    */
    int      started;        /* has its start routine begun running?           */
    int      is_main;        /* came from ConvertThreadToFiber                 */
    /* saved guest register file while this fiber is not the running one */
    uint32_t eax, ecx, edx, ebx, esi, edi, ebp, esp, seh_ebp;
    void *stack_page;        /* top native page; optional inactive-stack trap */
    volatile LONG stack_guarded;
} GuestFiber;

static GuestFiber s_fibers[MAX_FIBERS];
static int        s_fiber_count;
static GuestFiber *s_current_fiber;   /* only the one fiber-thread touches these */
static GuestFiber *s_guard_pending;
static int s_stack_guard_enabled;
static DWORD s_fiber_owner;

static void fiber_stack_access(GuestFiber *f, int writable)
{
    DWORD old;
    if (!s_stack_guard_enabled || !f || f->is_main || !f->stack_page) return;
    if (!!f->stack_guarded == !writable) return;
    if (!VirtualProtect(f->stack_page, 4096,
                        writable ? PAGE_READWRITE : PAGE_READONLY, &old)) {
        fprintf(stderr, "[FIBER guard] VirtualProtect failed: %lu\n", GetLastError());
        return;
    }
    InterlockedExchange(&f->stack_guarded, !writable);
}

static void fiber_guard_outgoing(void)
{
    GuestFiber *outgoing = s_guard_pending;
    s_guard_pending = NULL;
    /* Runs on the NEW stack, never write-protect the executing stack. */
    fiber_stack_access(outgoing, 0);
}

static LONG CALLBACK fiber_stack_fault(EXCEPTION_POINTERS *ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION
        && ep->ExceptionRecord->NumberParameters >= 2
        && ep->ExceptionRecord->ExceptionInformation[0] == 1) {
        uintptr_t address = ep->ExceptionRecord->ExceptionInformation[1];
        for (int i = 0; i < s_fiber_count; ++i) {
            GuestFiber *f = &s_fibers[i];
            uintptr_t page = (uintptr_t)f->stack_page;
            if (f->stack_guarded && address >= page && address - page < 4096) {
                crash_capture_known_fault(ep);
                fprintf(stderr, "[FIBER guard] WRITE TO INACTIVE STACK: guest=%08X page=%p writer=%llX thread=%lu owner=%lu\n",
                        f->guest_struct, f->stack_page,
                        (unsigned long long)ep->ContextRecord->Rip,
                        GetCurrentThreadId(), s_fiber_owner);
                break;
            }
        }
    }
    /* Diagnostic only: never unprotect, skip the write, or resume a fault. */
    return EXCEPTION_CONTINUE_SEARCH;
}

static GuestFiber *fiber_for(uint32_t guest_struct)
{
    int i;
    for (i = 0; i < s_fiber_count; i++)
        if (s_fibers[i].guest_struct == guest_struct)
            return &s_fibers[i];
    return (GuestFiber *)0;
}

static GuestFiber *fiber_alloc(uint32_t guest_struct)
{
    GuestFiber *f = fiber_for(guest_struct);
    if (f) return f;
    /* Deleted tasks leave holes below the high-water mark. MAX_FIBERS limits
     * concurrent tasks, not every task ever created across matches/replays. */
    for (int i = 0; i < s_fiber_count; ++i) {
        if (!s_fibers[i].guest_struct) {
            f = &s_fibers[i];
            memset(f, 0, sizeof *f);
            f->guest_struct = guest_struct;
            return f;
        }
    }
    if (s_fiber_count >= MAX_FIBERS) {
        fprintf(stderr, "[FIBER] out of fiber slots (>%d)\n", MAX_FIBERS);
        return (GuestFiber *)0;
    }
    f = &s_fibers[s_fiber_count++];
    memset(f, 0, sizeof *f);
    f->guest_struct = guest_struct;
    return f;
}

static void fiber_save_regs(GuestFiber *f)
{
    f->eax = g_eax; f->ecx = g_ecx; f->edx = g_edx; f->ebx = g_ebx;
    f->esi = g_esi; f->edi = g_edi; f->ebp = g_ebp; f->esp = g_esp;
    f->seh_ebp = g_seh_ebp;
}
static void fiber_restore_regs(GuestFiber *f)
{
    g_eax = f->eax; g_ecx = f->ecx; g_edx = f->edx; g_ebx = f->ebx;
    g_esi = f->esi; g_edi = f->edi; g_ebp = f->ebp; g_esp = f->esp;
    g_seh_ebp = f->seh_ebp;
}

/* Host fiber entry: first time this fiber is switched to, set up a clean guest
 * stack on the guest stack the engine allocated for it and call the guest
 * start routine via the recompiler. */
static void CALLBACK fiber_trampoline(void *arg)
{
    GuestFiber *f = (GuestFiber *)arg;
    recomp_func_t fn;
    uint32_t stack_top = GMEM32(f->guest_struct + 4);  /* CreateFiber stored it here */

    f->stack_page = (char *)((NT_TIB *)NtCurrentTeb())->StackBase - 4096;
    fiber_guard_outgoing();

    g_esp = stack_top;
    g_esp -= 4; GMEM32(g_esp) = f->param;   /* __stdcall arg */
    g_esp -= 4; GMEM32(g_esp) = 0;          /* sentinel return address */
    g_seh_ebp = g_esp;

    fprintf(stderr, "[FIBER] trampoline ENTER struct=0x%08X start=0x%08X esp=0x%08X\n",
            f->guest_struct, f->start_routine, g_esp);
    fflush(stderr);
    fn = recomp_lookup(f->start_routine);
    if (fn)
        fn();
    else
        fprintf(stderr, "[FIBER] start routine 0x%08X not in dispatch\n",
                f->start_routine);
    fprintf(stderr, "[FIBER] start routine 0x%08X RETURNED (fiber struct=0x%08X done)\n",
            f->start_routine, f->guest_struct);
    fflush(stderr);

    /* The start routine returned: this fiber is done. Hand control back to the
     * main fiber permanently (engine fibers normally loop and never reach here). */
    f->started = 0;
    for (;;) {
        GuestFiber *m = s_fibers[0].is_main ? &s_fibers[0] : (GuestFiber *)0;
        if (m && m != f) {
            fiber_stack_access(m, 1);
            s_guard_pending = f;
            s_current_fiber = m;
            SwitchToFiber(m->host_fiber);
            fiber_guard_outgoing();
        }
        else break;
    }
}

/* ConvertThreadToFiber(lpParameter) -> LPVOID fiber (stdcall, ret 4) */
// FUN_000ADB48
void convert_thread_to_fiber(void)
{
    uint32_t gstruct;
    GuestFiber *f;

    sub_000ADB48_gen();          /* guest bookkeeping; returns struct in g_eax */
    gstruct = g_eax;
    if (!gstruct) return;        /* g_esp already fixed by the gen's ret 4     */

    f = fiber_alloc(gstruct);
    if (f) {
        if (!s_fiber_owner) {
            char guard[2];
            s_fiber_owner = GetCurrentThreadId();
            s_stack_guard_enabled = GetEnvironmentVariableA("RECOMP_FIBER_STACK_GUARD", guard, sizeof guard) == 1 && guard[0] == '1';
            if (s_stack_guard_enabled) {
                if (AddVectoredExceptionHandler(1, fiber_stack_fault))
                    fprintf(stderr, "[FIBER guard] Inactive native stack top-page traps enabled\n");
                else {
                    s_stack_guard_enabled = 0;
                    fprintf(stderr, "[FIBER guard] Cannot install handler: %lu; traps disabled\n", GetLastError());
                }
            }
        }
        f->host_fiber = ConvertThreadToFiber(NULL);
        if (!f->host_fiber && GetLastError() == ERROR_ALREADY_FIBER)
            f->host_fiber = GetCurrentFiber();
        f->is_main = 1;
        f->started = 1;
        s_current_fiber = f;
    }
    fprintf(stderr, "[FIBER] ConvertThreadToFiber -> main fiber struct=0x%08X host=%p\n",
            gstruct, f ? f->host_fiber : NULL);
    fflush(stderr);
    g_eax = gstruct;
}
void sub_000ADB48(void) { convert_thread_to_fiber(); }   /* dispatch/caller symbol */

/* CreateFiber(dwStackSize, lpStartRoutine, lpParameter) -> LPVOID (stdcall, ret 12) */
// FUN_000ADA63
void create_fiber(void)
{
    uint32_t start_routine = GMEM32(g_esp + 8);
    uint32_t param         = GMEM32(g_esp + 12);
    uint32_t gstruct;
    GuestFiber *f;

    sub_000ADA63_gen();          /* allocates guest stack + struct; g_eax = struct, g_esp fixed */
    gstruct = g_eax;
    if (!gstruct) return;

    f = fiber_alloc(gstruct);
    if (f) {
        f->start_routine = start_routine;
        f->param = param;
        f->started = 0;
        /* Generous native stack: the start routine drives deep recompiled C
         * call chains (render, audio, menus). */
        f->host_fiber = CreateFiber(1u << 20, fiber_trampoline, f);
        if (!f->host_fiber)
            fprintf(stderr, "[FIBER] CreateFiber failed for 0x%08X\n", gstruct);
    }
    if (s_fiber_count <= 24)
        fprintf(stderr, "[FIBER] CreateFiber #%d struct=0x%08X start=0x%08X param=0x%08X\n",
                s_fiber_count, gstruct, start_routine, param);
    fflush(stderr);
    g_eax = gstruct;
}
void sub_000ADA63(void) { create_fiber(); }   /* dispatch/caller symbol */

/* DeleteFiber(lpFiber) (stdcall, ret 4) */
// FUN_000ADAEF
void delete_fiber(void)
{
    uint32_t gstruct = GMEM32(g_esp + 4);
    GuestFiber *f = fiber_for(gstruct);
    if (f && f->host_fiber && !f->is_main) {
        fiber_stack_access(f, 1);
        DeleteFiber(f->host_fiber);
        memset(f, 0, sizeof *f); /* release identity, registers and guard state */
    }
    sub_000ADAEF_gen();          /* frees the guest stack + fixes g_esp (ret 4) */
}
void sub_000ADAEF(void) { delete_fiber(); }   /* dispatch/caller symbol */

/* SwitchToFiber(lpFiber) (stdcall, ret 4) -- fully replaced. */
// FUN_000ADB02
void switch_to_fiber(void)
{
    uint32_t target = GMEM32(g_esp + 4);
    GuestFiber *cur = s_current_fiber;
    GuestFiber *tgt = fiber_for(target);

    g_esp += 8;                  /* ret 4: pop return address + the one argument */

    if (!tgt || !tgt->host_fiber) {
        fprintf(stderr, "[FIBER] SwitchToFiber to unknown fiber 0x%08X\n", target);
        return;
    }
    if (tgt == cur) return;

    {
        static uint64_t n_switch;
        if (n_switch < 24 || (n_switch % 1000000) == 0)
            fprintf(stderr, "[FIBER] SwitchToFiber #%llu %s(0x%08X) -> 0x%08X\n",
                    (unsigned long long)n_switch,
                    cur && cur->is_main ? "main" : "task",
                    cur ? cur->guest_struct : 0, target);
        n_switch++;
        fflush(stderr);
    }
    if (cur) fiber_save_regs(cur);
    tgt->started = 1;
    fiber_stack_access(tgt, 1);
    s_guard_pending = cur;
    s_current_fiber = tgt;
    SwitchToFiber(tgt->host_fiber);   /* native stack switch; returns when switched back */
    fiber_guard_outgoing();

    /* Resumed on 'cur': its registers were saved above; put them back. */
    if (cur) fiber_restore_regs(cur);
}
void sub_000ADB02(void) { switch_to_fiber(); }   /* dispatch/caller symbol */
