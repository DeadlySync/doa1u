#!/usr/bin/env python3
"""Generate a CPU-only stress harness containing the actual merged game loop.

Mock only its external guest calls. Exercise both public entries, the prefix,
the body-copy loop and normal back-edge for a million iterations per entry.
Compile the resulting C with /Od: no tail-call optimizer can hide recursion.
"""
from pathlib import Path
import re

root = Path(__file__).resolve().parents[1]
source = (root / "src/recomp/gen/recomp_0001.c").read_text()
start = source.index("/* GEN-EDIT: constant-stack 0001EEF0/0001EF70 cycle")
end = source.index("\n}\n", source.index(
    "static void game_loop_0001EEF0_0001EF70(int from_prefix)\n{", start)) + 3
body = source[start:end]
assert body.count("goto game_loop_0001EEF0;") == 7
assert not re.search(r"sub_0001(?:EEF0|EF70)\(\);", body)
header = r'''
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <intrin.h>
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp;
RECOMP_TLS uint32_t g_seh_ebp,g_fs_base;
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS int g_fp_top,g_fp_cmp;
RECOMP_TLS uint16_t g_fp_control_word=0x37F,g_fp_cc;
ptrdiff_t g_xbox_mem_offset;
static jmp_buf finished;
static unsigned iterations, prefix_calls, body_calls;
static uintptr_t low_sp,high_sp;
static void require(int ok) { if (!ok) { puts("FAIL game-loop state/stack"); exit(1); } }
__declspec(noinline) static void mock_call(uint32_t va) {
    uintptr_t sp=(uintptr_t)_AddressOfReturnAddress();
    if (sp<low_sp) low_sp=sp;
    if (sp>high_sp) high_sp=sp;
    if (va==0x520A0) {
        require(esp==0x7FFF8 && MEM32(esp)==0x1EEF7 && MEM32(esp+4)==1);
        prefix_calls++;
        if (iterations==1000000) longjmp(finished,1);
    } else if (va==0x22BE0 || va==0x1E820) {
        require(esp==0x7FFFC);
        body_calls++;
        if (va==0x1E820) {
            iterations++;
            require(MEM32(0x3049B8)==0x12345678 && MEM32(0x304910)==0x76543210);
            for (unsigned offset=0;offset<0xB4;offset+=0xC) {
                require(MEM32(0x304A20+offset)==0xA000+offset);
                require(MEM32(0x304ADC+offset)==0xD000+offset);
            }
            require(g_seh_ebp==0xFEED0000 && g_ebp==0xABC00000);
        }
    } else require(0);
    esp+=4; /* guest RET; prefix's argument is cdecl/caller-cleaned */
}
#undef RECOMP_ABI_CALL
#define RECOMP_ABI_CALL(va, fn) mock_call(va)
#undef RECOMP_ITAIL
#define RECOMP_ITAIL(va) require(0)
#undef RECOMP_UNIMPL
#define RECOMP_UNIMPL(insn, va) require(0)
void sub_0001F930(void) { require(0); }
'''
footer = r'''
int main(void) {
    g_xbox_mem_offset=(ptrdiff_t)calloc(1,0x800000);
    require(g_xbox_mem_offset!=0);
    MEM8(0x307604)=0; MEM8(0x30AE18)=0;
    MEM32(0x30D9A4)=0x12345678; MEM32(0x30DA04)=0x76543210;
    for (unsigned offset=0;offset<0xB4;offset+=0xC) {
        MEM32(0x30C258+offset)=0xA000+offset;
        MEM32(0x30C314+offset)=0xD000+offset;
    }
    for (unsigned entry=0;entry<2;entry++) {
        iterations=prefix_calls=body_calls=0; low_sp=UINTPTR_MAX; high_sp=0;
        esp=0x80000; eax=ecx=edx=0; g_seh_ebp=0xFEED0000; g_ebp=0xABC00000;
        /* Direct body entry expects the copy state normally established by
         * the prefix; seed its snapshots identically to the prefix entry. */
        MEM32(0x3049B8)=0x12345678; MEM32(0x304910)=0x76543210;
        if (setjmp(finished)==0) {
            if (entry==0) sub_0001EEF0(); else sub_0001EF70();
            require(0);
        }
        require(iterations==1000000 && body_calls==2000000);
        require(prefix_calls==1000001-entry);
        require(high_sp-low_sp<4096);
        printf("PASS entry %s: %u iterations; native stack span %llu bytes; guest ESP stable\n",
            entry ? "1EF70":"1EEF0",iterations,(unsigned long long)(high_sp-low_sp));
    }
    free((void*)g_xbox_mem_offset);
    return 0;
}
'''
output = root / "build/game_loop_cycle_check.c"
output.write_text(header + body + footer)
print(output)
