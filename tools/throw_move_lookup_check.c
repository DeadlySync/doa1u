/* Offline production-shadow check against the original CMP/JNE semantics. */
#include "recomp/gen/recomp_types.h"
#include <stdio.h>
#include <stdlib.h>
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_fs_base,g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
static unsigned char memory[0x400000];
extern void sub_000570E0(void);
static void require(int ok) { if (!ok) { fputs("throw lookup FAILED\n",stderr); exit(1); } }
int main(void) {
    unsigned cases=0;
    g_xbox_mem_offset=(ptrdiff_t)(uintptr_t)memory;
    MEM32(0x301E34)=0x10000; MEM32(0x3020C0)=0x11000;
    for(unsigned a=0;a<256;++a) {
        MEM8(0x10000+a*8+4)=(unsigned char)(a^0xA5);
        MEM8(0x11000+a*8+4)=(unsigned char)(a^0x5A);
    }
    for(unsigned p=0;p<2;++p) for(unsigned selector=0;selector<256;++selector)
    for(unsigned action=0;action<256;++action) {
        unsigned chosen=p;
        /* 570D9 cmp selector,1; 570E0 jne skip-xor. */
        if(selector==1) chosen^=1;
        unsigned table=chosen ? 0x11000 : 0x10000;
        unsigned expected=MEM8(table+action*8+4);
        MEM8(p*0x58+0x30D9CB)=selector;
        MEM8(p*0x58+0x30D9CA)=action;
        g_eax=p*0x58; g_ecx=p; g_edx=0xDEADBEEF; g_esp=0x20000;
        g_ebx=0x12345678; g_esi=0x87654321; g_edi=0xAABBCCDD;
        g_ebp=0x10203040; g_seh_ebp=0x50607080;
        sub_000570E0();
        require(g_eax==expected && g_ecx==table && g_esp==0x20004);
        require(g_edx==(chosen ? action : 0xDEADBEEF));
        require(g_ebx==0x12345678 && g_esi==0x87654321 && g_edi==0xAABBCCDD);
        require(g_ebp==0x10203040 && g_seh_ebp==0x50607080);
        ++cases;
    }
    /* Captured Hayabusa DD: own table index5 => E9, wrong table33 => 3F. */
    MEM8(0x10000+0xDD*8+4)=5; MEM8(0x11000+0xDD*8+4)=33;
    MEM8(0x30D9CB)=0; MEM8(0x30D9CA)=0xDD;
    g_eax=g_ecx=0; sub_000570E0(); require(g_eax==5);
    printf("throw lookup: %u player/selector/action cases + captured DD regression passed\n",cases);
    return 0;
}
