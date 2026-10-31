"""Extract the production audio wait for /Od CPU-only bounded-stack testing."""
from pathlib import Path
root = Path(__file__).resolve().parents[1]
source = (root / 'src/recomp/gen/recomp_0060.c').read_text()
start = source.index('void sub_001B5594(void)\n{')
end = source.index('\n}\n', source.index('void sub_001B55AE(void)\n{', start)) + 3
body = source[start:end]
assert 'goto audio_wait_poll;' in body
header = r'''
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <intrin.h>
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
static unsigned calls, limit;
static uintptr_t low_sp,high_sp;
static void require(int ok) { if (!ok) { puts("FAIL audio wait state/stack"); exit(1); } }
void sub_001B4903(void) {
    uintptr_t sp=(uintptr_t)_AddressOfReturnAddress();
    if(sp<low_sp) low_sp=sp;
    if(sp>high_sp) high_sp=sp;
    require(ecx==0x10000 && MEM32(esp)==0x1B55A6);
    calls++;
    if(calls>=limit) MEM16(esi+0x12)&=~0x8000u;
    esp+=4;
    g_seh_ebp=0xBAD0BAD0;
}
'''
footer = r'''
int main(void) {
    g_xbox_mem_offset=(ptrdiff_t)calloc(1,0x100000);
    require(g_xbox_mem_offset!=0);
    for(unsigned entry=0;entry<3;entry++) for(unsigned busy=0;busy<2;busy++) {
        calls=0;limit=busy?1000000:1;low_sp=UINTPTR_MAX;high_sp=0;
        esi=entry==0?0x76543210:0x10000;ecx=0x10000;esp=0x80000;
        g_seh_ebp=0x12345678;g_ebp=0x87654321;
        MEM16(0x10012)=busy?0x8001:1;
        MEM32(esp)=0x76543210;
        if(entry==0) sub_001B5594();
        else if(entry==1) sub_001B559F();
        else sub_001B55A6();
        unsigned expected=busy?1000000:(entry==1?1:0);
        require(calls==expected && esp==0x80000+(entry==0?4:8));
        require(esi==0x76543210 && g_seh_ebp==0x12345678 && g_ebp==0x87654321);
        require(!calls || high_sp-low_sp<4096);
        printf("PASS audio wait entry %u, busy %u: %u polls, stack span %llu bytes\n",
            entry,busy,calls,(unsigned long long)(calls?high_sp-low_sp:0));
    }
    /* Disabled wait must bypass even when pending. */
    calls=0;esi=0x76543210;ecx=0x10000;esp=0x80000;MEM16(0x10012)=0x8000;
    sub_001B5594();require(calls==0 && esp==0x80004 && esi==0x76543210);
    puts("PASS disabled wait bypass");
    free((void*)g_xbox_mem_offset);
    return 0;
}
'''
output=root/'build/audio_wait_cycle_check.c'
output.write_text(header+body+footer)
print(output)
