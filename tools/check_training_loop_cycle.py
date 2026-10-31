"""Stress the actual Training loop bodies without a renderer or game process."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
s=(root/'src/recomp/gen/recomp_0005.c').read_text()
a=s.index('/* GEN-EDIT: constant-stack training')
b=s.index('\n}\n',s.index('static void training_body_000445DF(uint32_t *next)\n{',a))+3
body=s[a:b]
header=r'''
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <intrin.h>
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS int g_fp_top,g_fp_cmp;
RECOMP_TLS uint16_t g_fp_control_word=0x37F,g_fp_cc;
ptrdiff_t g_xbox_mem_offset;
static jmp_buf done;
static unsigned frames;
static uintptr_t low_sp,high_sp;
static uint32_t frame_esp;
static void require(int ok) { if(!ok) { puts("FAIL Training stack/state"); exit(1); } }
__declspec(noinline) static void mock(uint32_t va) {
    uintptr_t sp=(uintptr_t)_AddressOfReturnAddress();
    if(sp<low_sp)low_sp=sp;
    if(sp>high_sp)high_sp=sp;
    if(va==0x520A0) {
        if(!frames)frame_esp=esp;
        else { if(esp!=frame_esp)printf("ESP %x expected %x\n",esp,frame_esp); require(esp==frame_esp); }
    }
    if(va==0x9C5F0 && ++frames==1000000)longjmp(done,1);
    esp+=4;
    eax=0;
}
#undef RECOMP_ABI_CALL
#define RECOMP_ABI_CALL(va,fn) mock(va)
'''
footer=r'''
int main(void) {
    g_xbox_mem_offset=(ptrdiff_t)calloc(1,0x800000);require(g_xbox_mem_offset!=0);
    for(unsigned entry=0;entry<3;entry++) {
        frames=0;low_sp=UINTPTR_MAX;high_sp=0;
        esp=0x80000;ebx=eax=0;ecx=0x10014;esi=0x10000;g_ebp=g_seh_ebp=0;
        if(setjmp(done)==0) {
            if(entry==0)sub_00044320();else if(entry==1)sub_000443A0();else sub_000445DF();
            require(0);
        }
        require(high_sp-low_sp<4096);
        printf("PASS Training entry %u: %u frames, native stack span %llu bytes, stable guest ESP\n",
            entry,frames,(unsigned long long)(high_sp-low_sp));
    }
    free((void*)g_xbox_mem_offset);
    return 0;
}
'''
p=root/'build/training_loop_cycle_check.c'
p.write_text(header+body+footer)
print(p)
