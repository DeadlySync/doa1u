/* Standalone stress check of production fibers: no game, graphics or audio.
 * cl /O2 /Zi /I src tools/fiber_runtime_check.c src/runtime/crash_capture.c
 *    /Fe:build/fiber_check.exe /link dbghelp.lib
 * RECOMP_FIBER_STACK_GUARD=1 also checks inactive-stack protection; --corrupt
 * deliberately faults in this standalone process to verify first-writer dumps.
 */
#include <math.h>
#include <stdlib.h>
#include "../src/runtime/fix_fiber_runtime.c"

RTLS uint32_t g_eax, g_ecx, g_edx, g_esp, g_ebx, g_esi, g_edi, g_ebp;
RTLS uint32_t g_fs_base, g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
static uint32_t next_struct = 0x40000, rounds, task, checks;
static void require(int ok) { if (!ok) { puts("FAIL fiber state"); exit(1); } }
void sub_000ADB48_gen(void) { g_eax=0x10000; g_esp+=8; }
void sub_000ADA63_gen(void) {
    g_eax=next_struct; next_struct+=0x10000;
    GMEM32(g_eax+4)=g_eax-0x10; g_esp+=16;
}
void sub_000ADAEF_gen(void) { g_esp+=8; }
static void change_to(uint32_t target) {
    g_esp-=4; GMEM32(g_esp)=target;
    g_esp-=4; GMEM32(g_esp)=0;
    switch_to_fiber();
}
__declspec(noinline) static double math_work(double x) {
    return ldexp(floor(x)+ceil(x)+fmod(x,7.0),3);
}
static void task_body(void) {
    volatile uint64_t canary[32];
    for (unsigned j=0;j<32;j++) canary[j]=0xC0FFEE1234560000ull+j;
    for (;;) {
        uint32_t esp_before=g_esp;
        g_esi=0x6E9640;g_edi=0x14500AC;g_ebp=0x123456;
        require(isfinite(math_work((double)checks+0.25)));
        change_to(0x10000);
        require(g_esp==esp_before && g_esi==0x6E9640 && g_edi==0x14500AC && g_ebp==0x123456);
        for (unsigned j=0;j<32;j++) require(canary[j]==0xC0FFEE1234560000ull+j);
        checks++;
    }
}
recomp_func_t recomp_lookup(uint32_t va) { return va==0x52230 ? task_body : NULL; }
int main(int argc, char **argv) {
    int corrupt = argc > 1 && strcmp(argv[1], "--corrupt") == 0;
    if (corrupt) {
        SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
        crash_capture_init();
    }
    void *memory=VirtualAlloc(NULL,0x800000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    require(memory!=NULL);g_xbox_mem_offset=(ptrdiff_t)memory;g_esp=0x1FFF0;
    convert_thread_to_fiber();
    g_esp-=4;GMEM32(g_esp)=0;
    g_esp-=4;GMEM32(g_esp)=0x52230;
    g_esp-=4;GMEM32(g_esp)=0x4000;
    g_esp-=4;GMEM32(g_esp)=0;
    create_fiber();task=g_eax;
    for (rounds=0;rounds<200000;rounds++) {
        g_esi=0xABC;g_edi=0xDEF;g_ebp=0x789;
        change_to(task);
        if (corrupt) {
            /* Deliberate out-of-fiber writer; must dump its actual instruction
             * before the suspended fiber can resume with damaged returns. */
            volatile uint8_t *page = (volatile uint8_t *)fiber_for(task)->stack_page;
            require(fiber_for(task)->stack_guarded);
            page[0x100] = 0xCC;
            require(0);
        }
        require(g_esi==0xABC && g_edi==0xDEF && g_ebp==0x789);
        require(isfinite(math_work((double)rounds+0.75)));
    }
    require(checks==199999);
    g_esp-=4;GMEM32(g_esp)=task;g_esp-=4;GMEM32(g_esp)=0;
    delete_fiber();
    puts("PASS 400000 native switches: guest GPR/ESP, native stack canaries, interleaved CRT math");

    /* Production used to exhaust 64 lifetime slots even after deleting tasks.
     * Repeat actual Create/Switch/Delete, not just allocator calls; a reused
     * record must also lose stale native-stack protection and register state. */
    for (unsigned cycle=0;cycle<256;cycle++) {
        next_struct=0x40000+(cycle%64)*0x10000;
        g_esp-=4;GMEM32(g_esp)=0;
        g_esp-=4;GMEM32(g_esp)=0x52230;
        g_esp-=4;GMEM32(g_esp)=0x4000;
        g_esp-=4;GMEM32(g_esp)=0;
        create_fiber();task=g_eax;
        require(fiber_for(task)!=NULL && fiber_for(task)->host_fiber!=NULL);
        require(!fiber_for(task)->started && !fiber_for(task)->stack_guarded);
        require(s_fiber_count==2);
        g_esi=0xABC;g_edi=0xDEF;g_ebp=0x789;
        change_to(task);
        require(g_esi==0xABC && g_edi==0xDEF && g_ebp==0x789);
        g_esp-=4;GMEM32(g_esp)=task;g_esp-=4;GMEM32(g_esp)=0;
        delete_fiber();
        require(fiber_for(task)==NULL);
    }
    puts("PASS 256 task lifecycles: deleted slots reused, fresh native/guest state, no lifetime exhaustion");
    return 0;
}
