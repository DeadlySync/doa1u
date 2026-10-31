/* Offline guest switch-entry regression; no game/window/save access. */
#include "recomp/gen/recomp_types.h"
#include <stdio.h>
#include <stdlib.h>
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_fs_base,g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
volatile uint32_t g_icall_trace[16],g_icall_trace_idx;
volatile uint64_t g_icall_count;
static unsigned char memory[0x700000];
static unsigned sounds, resets, exits;
extern recomp_func_t recomp_lookup_manual(uint32_t);
static void require(int ok) { if(!ok) { fprintf(stderr,"training stage entry regression failed\n"); exit(1); } }
void sub_0003DDE0(void) { ++sounds; g_esp+=4; }
void sub_00030450(void) { ++resets; g_esp+=4; }
void sub_00054190(void) { g_esp+=4; }
void sub_00053530(void) { g_esp+=4; }
void sub_0001A7E0(void) { g_esp+=4; }
void sub_00044C40(void) { g_esp+=4; }
void sub_0003E39F(void) {
    ++exits; require(g_seh_ebp==0x12345678);
    POP32(g_esp,g_ebx); g_esp+=0x24;
}
void sub_0003E49C(void) { sub_0003E39F(); }
static void run(unsigned input,unsigned current,unsigned selected) {
    g_esp=0x100000; g_ebx=0; g_seh_ebp=0x12345678;
    MEM32(g_esp)=0x76543210;
    MEM16(0x335AE0)=0; MEM32(0x30F9B0)=1;
    MEM32(0x6E9A98+0x2C)=input;
    MEM8(0x336A0C)=current; MEM8(0x336A0D)=selected;
    sounds=resets=exits=0;
    recomp_func_t fn=recomp_lookup_manual(0x3E404);
    require(fn!=NULL); fn();
    require(exits==1 && g_esp==0x100028 && g_ebx==0x76543210);
}
int main(void) {
    g_xbox_mem_offset=(ptrdiff_t)(uintptr_t)memory;
    require(recomp_lookup_manual(0)==NULL);
    run(0,0,0); require(!sounds && !resets);
    run(4,0,0); require(MEM8(0x336A0D)==1 && !resets);
    run(8,1,1); require(MEM8(0x336A0D)==0 && !resets);
    run(0x100,0,1); require(sounds==1 && !resets);
    run(0x10,0,0); require(sounds==1 && resets==1 && MEM8(0x336A0C)==1 && MEM8(0x30554D)==2);
    run(0x100,1,1); require(sounds==1 && resets==1 && MEM8(0x336A0C)==0);
    puts("training stage change: highlight, directions, confirmation and guest stack passed");
    return 0;
}
