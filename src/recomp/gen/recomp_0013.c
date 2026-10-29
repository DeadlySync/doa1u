/**
 * DOAU1 - Recompiled code chunk 13
 * Functions: 250 (0x0007D3B0 - 0x000836E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0007D3B0
 * Original: 0x0007D3B0 - 0x0007D3CC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D3B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D3C9; /* jl: less (signed <) */

loc_0007D3B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D3C9; /* jge: greater or equal (signed >=) */

loc_0007D3C0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007D3C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D3D0
 * Original: 0x0007D3D0 - 0x0007D43C (108 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D3D0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D43B; /* jl: less (signed <) */

loc_0007D3DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D43B; /* jge: greater or equal (signed >=) */

loc_0007D3E2: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x56);
    ecx = MEM32(ecx + 0x91BE7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D3F8; /* je: equal / zero */

loc_0007D3F3: ;
    eax = 0x40;

loc_0007D3F8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0007D3FF; /* jns: not sign (positive) */

loc_0007D3FC: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D3FF: ;
    edx = ecx;
    edx = edx & 0x24000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D412; /* jne: not equal / not zero */

loc_0007D40F: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D412: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D41D; /* je: equal / zero */

loc_0007D41A: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D41D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D43B; /* je: equal / zero */

loc_0007D422: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D42D; /* je: equal / zero */

loc_0007D42A: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D42D: ;
    ecx = ecx & 0x8000010;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D43B; /* jne: not equal / not zero */

loc_0007D438: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D43B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D440
 * Original: 0x0007D440 - 0x0007D4D2 (146 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x2E671C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007D4CB; /* jae: above or equal (unsigned >=) */

loc_0007D44F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D4CB; /* jl: less (signed <) */

loc_0007D457: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D4CB; /* jge: greater or equal (signed >=) */

loc_0007D45F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007D493; /* jbe: below or equal (unsigned <=) */

loc_0007D46D: ;
    ebp = MEM32(eax);
    edx = MEM32(eax + 4);
    ecx = 0x915280;

loc_0007D477: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D48B; /* jne: not equal / not zero */

loc_0007D47C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D48B; /* jne: not equal / not zero */

loc_0007D481: ;
    ebx = MEM32(eax + 8);
    ebx = ebx ^ MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D4AA; /* je: equal / zero */

loc_0007D48B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D477; /* jb: below (unsigned <) */

loc_0007D493: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D4CB; /* je: equal / zero */

loc_0007D49B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D4B4; /* je: equal / zero */

loc_0007D4A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007D4AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007D4B4: ;
    eax = MEM32(eax + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D4BDu); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_0007D4BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D4CB; /* je: equal / zero */

loc_0007D4C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007D4CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D4E0
 * Original: 0x0007D4E0 - 0x0007D58F (175 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D4E0: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xBC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007D577; /* je: equal / zero */

loc_0007D500: ;
    ebx = MEM32(esp + 0xB8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007D577; /* jbe: below or equal (unsigned <=) */

loc_0007D50B: ;
    esi = MEM32(esp + 0xB4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D577; /* je: equal / zero */

loc_0007D516: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007D51Du); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0007D51D: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D527u); RECOMP_ABI_CALL(0x001E41EFu, sub_001E41EF); /* call 0x001E41EF */

loc_0007D527: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007D530u); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_0007D530: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D55F; /* je: equal / zero */

loc_0007D534: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007D55F; /* jbe: below or equal (unsigned <=) */

loc_0007D53B: ;
    edx = ZX8(MEM8(esi + 0x35));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x23651C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D550u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007D550: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007D55Fu); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_0007D55F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, 0x0007D570u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007D570: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007D577: ;
    ecx = MEM32(esp + 0xAC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x0007D588u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007D588: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D590
 * Original: 0x0007D590 - 0x0007D5B4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007D590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D5B1; /* jl: less (signed <) */

loc_0007D598: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D5B1; /* jge: greater or equal (signed >=) */

loc_0007D5A0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0007D4E0(); return; /* tail jmp 0x0007D4E0 */

loc_0007D5B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D5C0
 * Original: 0x0007D5C0 - 0x0007D632 (114 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D5C0: ;
    ecx = MEM32(0x2E6708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D62C; /* jl: less (signed <) */

loc_0007D5CA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D62C; /* jl: less (signed <) */

loc_0007D5D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D62C; /* jle: less or equal (signed <=) */

loc_0007D5D6: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007D614; /* je: equal / zero */

loc_0007D5DF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0007D5FC; /* je: equal / zero */

loc_0007D5E2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007D62C; /* jne: not equal / not zero */

loc_0007D5E5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x916278);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D5FBu); RECOMP_ABI_CALL(0x001E4274u, sub_001E4274); /* call 0x001E4274 */

loc_0007D5FB: ;
    esp += 4; return; /* ret */

loc_0007D5FC: ;
    ecx = MEM32(0x916278);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007D613u); RECOMP_ABI_CALL(0x001E4274u, sub_001E4274); /* call 0x001E4274 */

loc_0007D613: ;
    esp += 4; return; /* ret */

loc_0007D614: ;
    edx = MEM32(0x916278);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007D62Bu); RECOMP_ABI_CALL(0x001E4274u, sub_001E4274); /* call 0x001E4274 */

loc_0007D62B: ;
    esp += 4; return; /* ret */

loc_0007D62C: ;
    eax = 0x80004005u;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D640
 * Original: 0x0007D640 - 0x0007D66C (44 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D640: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D669; /* je: equal / zero */

loc_0007D644: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D64Du); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_0007D64D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D669; /* je: equal / zero */

loc_0007D651: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007D669; /* jbe: below or equal (unsigned <=) */

loc_0007D658: ;
    SET_LO8(ecx, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x91E238)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x91E238) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D669; /* jne: not equal / not zero */

loc_0007D663: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007D669: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D670
 * Original: 0x0007D670 - 0x0007D6D9 (105 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007D670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007D6D2; /* je: equal / zero */

loc_0007D679: ;
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, 0x914F90);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007D68Du); RECOMP_ABI_CALL(0x001E4064u, sub_001E4064); /* call 0x001E4064 */

loc_0007D68D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D6C6; /* jge: greater or equal (signed >=) */

loc_0007D693: ;
    PUSH32(esp, 0x914F90);
    PUSH32(esp, 0x0007D69Du); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007D69D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007D6A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D6C2; /* jge: greater or equal (signed >=) */

loc_0007D6A4: ;
    PUSH32(esp, 0x0007D6A9u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007D6A9: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = 0xC;

loc_0007D6C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007D6C6: ;
    MEM32(0x91E06C) = 0xB;
    goto loc_0007D6A0;

loc_0007D6D2: ;
    esi = 0x80004005u;
    goto loc_0007D6A4;

}

/**
 * sub_0007D6E0
 * Original: 0x0007D6E0 - 0x0007D721 (65 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D6E0: ;
    ecx = MEM32(0x2E6708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D71B; /* jl: less (signed <) */

loc_0007D6EA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D71B; /* jl: less (signed <) */

loc_0007D6F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D71B; /* jle: less or equal (signed <=) */

loc_0007D6F6: ;
    ecx = MEM32(0x91B444);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    edx = MEM32(0x916278);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x91B448);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007D71Au); RECOMP_ABI_CALL(0x001E4253u, sub_001E4253); /* call 0x001E4253 */

loc_0007D71A: ;
    esp += 4; return; /* ret */

loc_0007D71B: ;
    eax = 0x80004005u;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D730
 * Original: 0x0007D730 - 0x0007D736 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D730(void)
{

loc_0007D730: ;
    eax = MEM32(0x916294);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D740
 * Original: 0x0007D740 - 0x0007D7CF (143 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x916294)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x916294) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D74F; /* jb: below (unsigned <) */

loc_0007D74C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007D74F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(0x916310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x916310;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D7C4; /* je: equal / zero */

loc_0007D760: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D7C9; /* je: equal / zero */

loc_0007D76A: ;
    /* nop */

loc_0007D770: ;
    edx = ZX8(MEM8(esi + eax + 0x20));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007D7BE; /* ja: above (unsigned >) */

loc_0007D77B: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x7D7D0); /* switch: 10 entries, 9 targets */
    if (_jt == 0x0007D782u) goto loc_0007D782;
    if (_jt == 0x0007D788u) goto loc_0007D788;
    if (_jt == 0x0007D78Eu) goto loc_0007D78E;
    if (_jt == 0x0007D794u) goto loc_0007D794;
    if (_jt == 0x0007D79Au) goto loc_0007D79A;
    if (_jt == 0x0007D7A3u) goto loc_0007D7A3;
    if (_jt == 0x0007D7ACu) goto loc_0007D7AC;
    if (_jt == 0x0007D7B5u) goto loc_0007D7B5;
    if (_jt == 0x0007D7BEu) goto loc_0007D7BE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007D782: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 1 (32-bit) */
    goto loc_0007D7BC;

loc_0007D788: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 2 (32-bit) */
    goto loc_0007D7BC;

loc_0007D78E: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 4 (32-bit) */
    goto loc_0007D7BC;

loc_0007D794: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 8 (32-bit) */
    goto loc_0007D7BC;

loc_0007D79A: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0x400 (32-bit) */
    goto loc_0007D7BC;

loc_0007D7A3: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0x800 (32-bit) */
    goto loc_0007D7BC;

loc_0007D7AC: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0x4000 (32-bit) */
    goto loc_0007D7BC;

loc_0007D7B5: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0x8000 (32-bit) */

loc_0007D7BC: ;
    if (CMP_NE(_fa, _fb)) goto loc_0007D7CB; /* jne: not equal / not zero */

loc_0007D7BE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D770; /* jb: below (unsigned <) */

loc_0007D7C4: ;
    eax = 1;

loc_0007D7C9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007D7CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D800
 * Original: 0x0007D800 - 0x0007D806 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D800(void)
{

loc_0007D800: ;
    eax = MEM32(0x914F80);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D810
 * Original: 0x0007D810 - 0x0007D816 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D810(void)
{

loc_0007D810: ;
    eax = MEM32(0x916278);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D820
 * Original: 0x0007D820 - 0x0007D826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D820(void)
{

loc_0007D820: ;
    eax = MEM32(0x915238);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D830
 * Original: 0x0007D830 - 0x0007D84F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D830: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D849; /* jl: less (signed <) */

loc_0007D838: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x915238)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x915238) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D849; /* jge: greater or equal (signed >=) */

loc_0007D840: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x9147F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x9147F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007D849: ;
    eax = 0x236550;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D850
 * Original: 0x0007D850 - 0x0007D86F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D850: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D869; /* jl: less (signed <) */

loc_0007D858: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x915238)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x915238) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D869; /* jge: greater or equal (signed >=) */

loc_0007D860: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x914808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x914808;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007D869: ;
    eax = 0x236518;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D870
 * Original: 0x0007D870 - 0x0007D897 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D870: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D892; /* jl: less (signed <) */

loc_0007D878: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x915238)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x915238) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D892; /* jge: greater or equal (signed >=) */

loc_0007D880: ;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + 0x9147F0);
    ecx = MEM32(ecx + 0x9147F4);
    edx = ecx;
    esp += 4; return; /* ret */

loc_0007D892: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D8A0
 * Original: 0x0007D8A0 - 0x0007D8D7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D8A0: ;
    edx = MEM32(0x915238);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007D8D1; /* jle: less or equal (signed <=) */

loc_0007D8AE: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    ecx = 0x9147F0;
    goto loc_0007D8C0;

    /* nop */

loc_0007D8C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D8C9; /* jne: not equal / not zero */

loc_0007D8C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D8D4; /* je: equal / zero */

loc_0007D8C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D8C0; /* jl: less (signed <) */

loc_0007D8D1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007D8D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D8E0
 * Original: 0x0007D8E0 - 0x0007D9BC (220 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D8E0: ;
    eax = MEM32(0x915238);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D920; /* jle: less or equal (signed <=) */

loc_0007D8FB: ;
    edx = 0x9147F0;

loc_0007D900: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0007D909; /* jne: not equal / not zero */

loc_0007D904: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0007D913; /* je: equal / zero */

loc_0007D909: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x40)) >> 32) & 1);
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0007D900; /* jl: less (signed <) */

loc_0007D911: ;
    goto loc_0007D920;

loc_0007D913: ;
    edx = ecx;
    if (6) _cf = (int)(((edx) >> (32 - (6))) & 1);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edx + 0x914828);
    esi = ecx;

loc_0007D920: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0007D94B; /* jne: not equal / not zero */

loc_0007D924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0007D92C; /* jae: above or equal (unsigned >=) */

loc_0007D929: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0007D933;

loc_0007D92C: ;
    if (CMP_BE(_fa, _fb)) goto loc_0007D938; /* jbe: below or equal (unsigned <=) */

loc_0007D92E: ;
    eax = 0x1E;

loc_0007D933: ;
    MEM32(0x915238) = eax;

loc_0007D938: ;
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + 0x9147E8);
    MEM8(edi) = 0xFF;
    esi = MEM32(0x915238);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0007D94B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D965; /* jle: less or equal (signed <=) */

loc_0007D94F: ;
    if (6) _cf = (int)(((esi) >> (32 - (6))) & 1);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x9147F0);
    PUSH32(esp, 0x914830);
    PUSH32(esp, 0x0007D962u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0007D962: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007D965: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x9147F0) = ebp;
    MEM32(0x9147F4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007D98A; /* je: equal / zero */

loc_0007D979: ;
    edx = 0x9147F8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0007D980: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007D980; /* jne: not equal / not zero */

loc_0007D98A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D9A8; /* je: equal / zero */

loc_0007D992: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x914808);
    PUSH32(esp, 0x0007D99Du); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0007D99D: ;
    MEM32(0x914828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007D9A8: ;
    MEM32(0x914828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(0x914808) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D9C0
 * Original: 0x0007D9C0 - 0x0007DA23 (99 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D9C0: ;
    edx = MEM32(0x2E6708);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007D9F5; /* jle: less or equal (signed <=) */

loc_0007D9CF: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = 0x91BE60;
    /* nop */

loc_0007D9E0: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D9ED; /* jne: not equal / not zero */

loc_0007D9E6: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D9FB; /* je: equal / zero */

loc_0007D9ED: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x56;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D9E0; /* jl: less (signed <) */

loc_0007D9F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007D9FB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(eax + 0x91BE7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0007DA11; /* jns: not sign (positive) */

loc_0007DA08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007DA11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    eax = 0;
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DA30
 * Original: 0x0007DA30 - 0x0007DAEF (191 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007DA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0007DAE5; /* jl: less (signed <) */

loc_0007DA40: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0007DA4E; /* jle: less or equal (signed <=) */

loc_0007DA45: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0007DAE5; /* jne: not equal / not zero */

loc_0007DA4E: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x914F7C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DA76; /* je: equal / zero */

loc_0007DA69: ;
    PUSH32(esp, 0x914F7C);
    PUSH32(esp, 0x0007DA73u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007DA73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007DA76: ;
    edx = MEM32(ebp * 4 + 0x236470);
    PUSH32(esp, 0x914F7C);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(0x916278);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, ecx);
    MEM32(eax + 8) = ebx;
    PUSH32(esp, 0x0007DAA3u); RECOMP_ABI_CALL(0x001E42FEu, sub_001E42FE); /* call 0x001E42FE */

loc_0007DAA3: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0007DAD4; /* jge: greater or equal (signed >=) */

loc_0007DAA9: ;
    MEM32(0x916280) = edx;
    MEM32(0x91E06C) = 0x21;
    PUSH32(esp, 0x0007DABEu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007DABE: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    eax = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007DAD4: ;
    MEM32(0x91E06C) = 0x20;
    eax = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007DAE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DAF0
 * Original: 0x0007DAF0 - 0x0007DB66 (118 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007DAF0: ;
    eax = MEM32(0x916280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151200u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0007DB30; /* jg: greater (signed >) */

loc_0007DAFC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB2A; /* je: equal / zero */

loc_0007DAFE: ;
    _fb = (uint32_t)(0x7FEAF000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FEAF000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007DB5A; /* ja: above (unsigned >) */

loc_0007DB08: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x7DB68); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0007DB0Fu) goto loc_0007DB0F;
    if (_jt == 0x0007DB12u) goto loc_0007DB12;
    if (_jt == 0x0007DB18u) goto loc_0007DB18;
    if (_jt == 0x0007DB1Eu) goto loc_0007DB1E;
    if (_jt == 0x0007DB24u) goto loc_0007DB24;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007DB0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007DB12: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007DB18: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0007DB1E: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0007DB24: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0007DB2A: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0007DB30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80159003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80159003u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0007DB53; /* jg: greater (signed >) */

loc_0007DB37: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB4D; /* je: equal / zero */

loc_0007DB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8015300Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8015300Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB47; /* je: equal / zero */

loc_0007DB40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80157102u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80157102u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DB5A; /* jne: not equal / not zero */

loc_0007DB47: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_0007DB4D: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0007DB53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB60; /* je: equal / zero */

loc_0007DB5A: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_0007DB60: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0007DB90
 * Original: 0x0007DB90 - 0x0007DBA8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007DB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DB90: ;
    ecx = MEM32(0x916A50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DBA5; /* je: equal / zero */

loc_0007DB9A: ;
    eax = MEM32(0x916278);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007DBA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DBB0
 * Original: 0x0007DBB0 - 0x0007DBCA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DBB0: ;
    eax = MEM32(0x916A50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DBC7; /* je: equal / zero */

loc_0007DBB9: ;
    ecx = MEM32(0x916278);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = ecx + eax + 0xC;
    esp += 4; return; /* ret */

loc_0007DBC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DBD0
 * Original: 0x0007DBD0 - 0x0007DBD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DBD0(void)
{

loc_0007DBD0: ;
    eax = MEM32(0x2E6710);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DBE0
 * Original: 0x0007DBE0 - 0x0007DC07 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DBE0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007DC02; /* jl: less (signed <) */

loc_0007DBE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007DC02; /* jge: greater or equal (signed >=) */

loc_0007DBF0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x56);
    eax = MEM32(ecx + 0x91BE60);
    ecx = MEM32(ecx + 0x91BE64);
    edx = ecx;
    esp += 4; return; /* ret */

loc_0007DC02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DC10
 * Original: 0x0007DC10 - 0x0007DC47 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DC10: ;
    edx = MEM32(0x2E6708);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007DC41; /* jle: less or equal (signed <=) */

loc_0007DC1E: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    ecx = 0x91BE60;
    goto loc_0007DC30;

    /* nop */

loc_0007DC30: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DC39; /* jne: not equal / not zero */

loc_0007DC34: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DC44; /* je: equal / zero */

loc_0007DC39: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x56;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007DC30; /* jl: less (signed <) */

loc_0007DC41: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007DC44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DC50
 * Original: 0x0007DC50 - 0x0007DC56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DC50(void)
{

loc_0007DC50: ;
    eax = 0x91BE60;
    esp += 4; return; /* ret */

}

/**
 * sub_0007DC60
 * Original: 0x0007DC60 - 0x0007DCA8 (72 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DC60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0007DC9C; /* jbe: below or equal (unsigned <=) */

loc_0007DC6A: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DC9C; /* je: equal / zero */

loc_0007DC72: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xBE4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xBE4 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007DC7D; /* jbe: below or equal (unsigned <=) */

loc_0007DC78: ;
    eax = 0xBE4;

loc_0007DC7D: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DC8Bu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0007DC8B: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esi) = edx;
    PUSH32(esp, 0x0007DC9Au); RECOMP_ABI_CALL(0x001E3E9Eu, sub_001E3E9E); /* call 0x001E3E9E */

loc_0007DC9A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007DC9C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DCA6u); RECOMP_ABI_CALL(0x001E3E93u, sub_001E3E93); /* call 0x001E3E93 */

loc_0007DCA6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DCB0
 * Original: 0x0007DCB0 - 0x0007DCFE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007DCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DCB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007DCFB; /* jl: less (signed <) */

loc_0007DCB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007DCFB; /* jge: greater or equal (signed >=) */

loc_0007DCC0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + 0x91BE88;
    ecx = 2;
    edi = 0x91B444;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_0007DCFB; /* jne: not equal / not zero */

loc_0007DCDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DCE5u); RECOMP_ABI_CALL(0x0007C470u, sub_0007C470); /* call 0x0007C470 */

loc_0007DCE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DCFB; /* je: equal / zero */

loc_0007DCEC: ;
    PUSH32(esp, 0x0007DCF1u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007DCF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DCFB; /* je: equal / zero */

loc_0007DCF5: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007DCFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DD00
 * Original: 0x0007DD00 - 0x0007DD23 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007DD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DD00: ;
    PUSH32(esp, 0x0007DD05u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007DD05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DD20; /* je: equal / zero */

loc_0007DD09: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DD13u); RECOMP_ABI_CALL(0x0007DCB0u, sub_0007DCB0); /* call 0x0007DCB0 */

loc_0007DD13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DD20; /* jne: not equal / not zero */

loc_0007DD1A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007DD20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DD30
 * Original: 0x0007DD30 - 0x0007DD43 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007DD30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DD3Au); RECOMP_ABI_CALL(0x0007DCB0u, sub_0007DCB0); /* call 0x0007DCB0 */

loc_0007DD3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DD50
 * Original: 0x0007DD50 - 0x0007DD98 (72 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DD50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    MEM32(esp + 0x30) = 0x91B444;
    MEM32(esp + 0x3C) = 0x916A18;
    PUSH32(esp, 0x0007DD94u); RECOMP_ABI_CALL(0x001CEF64u, sub_001CEF64); /* call 0x001CEF64 */

loc_0007DD94: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DDA0
 * Original: 0x0007DDA0 - 0x0007DDB9 (25 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DDA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DDB1; /* je: equal / zero */

loc_0007DDAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DDB1u); RECOMP_ABI_CALL(0x001CEF80u, sub_001CEF80); /* call 0x001CEF80 */

loc_0007DDB1: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DDC0
 * Original: 0x0007DDC0 - 0x0007DE2F (111 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DDC0: ;
    eax = MEM32(0x916240);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DE2D; /* je: equal / zero */

loc_0007DDCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DE0B; /* je: equal / zero */

loc_0007DDD2: ;
    if (CMP_BE(_fa, _fb)) goto loc_0007DE27; /* jbe: below or equal (unsigned <=) */

loc_0007DDD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007DE27; /* ja: above (unsigned >) */

loc_0007DDD9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DDF9; /* jne: not equal / not zero */

loc_0007DDDD: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x0007DDECu); RECOMP_ABI_CALL(0x001CEF55u, sub_001CEF55); /* call 0x001CEF55 */

loc_0007DDEC: ;
    PUSH32(esp, 0x0007DDF1u); RECOMP_ABI_CALL(0x000715F0u, sub_000715F0); /* call 0x000715F0 */

loc_0007DDF1: ;
    MEM32(0x916240) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007DDF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DE22; /* je: equal / zero */

loc_0007DDFE: ;
    PUSH32(esp, 0x0007DE03u); RECOMP_ABI_CALL(0x000715F0u, sub_000715F0); /* call 0x000715F0 */

loc_0007DE03: ;
    MEM32(0x916240) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007DE0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x0007DE1Du); RECOMP_ABI_CALL(0x001CEF55u, sub_001CEF55); /* call 0x001CEF55 */

loc_0007DE1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DE27; /* jne: not equal / not zero */

loc_0007DE22: ;
    PUSH32(esp, 0x0007DE27u); RECOMP_ABI_CALL(0x00071590u, sub_00071590); /* call 0x00071590 */

loc_0007DE27: ;
    MEM32(0x916240) = esi;

loc_0007DE2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DE30
 * Original: 0x0007DE30 - 0x0007DE36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DE30(void)
{

loc_0007DE30: ;
    eax = MEM32(0x916240);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DE40
 * Original: 0x0007DE40 - 0x0007DE9F (95 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007DE40: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0007DE8A; /* jl: less (signed <) */

loc_0007DE48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0007DE8A; /* jg: greater (signed >) */

loc_0007DE4D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x78000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(0x2E6708);
    _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8000000)) >> 32) & 1);
    ecx = ecx + 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0007DE80; /* jle: less or equal (signed <=) */

loc_0007DE6D: ;
    PUSH32(esp, esi);
    esi = 0x91BE7C;

loc_0007DE73: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DE82; /* jne: not equal / not zero */

loc_0007DE77: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x56)) >> 32) & 1);
    esi = esi + 0x56;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0007DE73; /* jl: less (signed <) */

loc_0007DE7F: ;
    POP32(esp, esi);

loc_0007DE80: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007DE82: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007DE8A: ;
    eax = MEM32(ecx * 4 + 0x2364C8);
    ecx = MEM32(0x916278);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DE9Eu); RECOMP_ABI_CALL(0x001E4133u, sub_001E4133); /* call 0x001E4133 */

loc_0007DE9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007DEA0
 * Original: 0x0007DEA0 - 0x0007DED5 (53 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DEA0: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DECE; /* je: equal / zero */

loc_0007DEAA: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0x18) = 1;
    MEM8(esp + 0x1A) = 0xB;
    PUSH32(esp, 0x0007DECEu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007DECE: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DEE0
 * Original: 0x0007DEE0 - 0x0007DF34 (84 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DEE0: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DF2D; /* je: equal / zero */

loc_0007DEEA: ;
    edx = MEM32(0x916278);
    eax = MEM32(0x916A50);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    MEM16(esp + 0xC) = 9;
    MEM8(esp + 0xE) = 6;
    esi = MEM32(edx + eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x17) = esi;
    eax = MEM32(edx + eax + 4);
    edx = MEM32(0x9162A4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x23) = eax;
    PUSH32(esp, 0x0007DF2Cu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007DF2C: ;
    POP32(esp, esi);

loc_0007DF2D: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DF40
 * Original: 0x0007DF40 - 0x0007DFB2 (114 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DF40: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DFAB; /* je: equal / zero */

loc_0007DF4A: ;
    PUSH32(esp, ebx);
    MEM16(esp + 4) = 2;
    MEM8(esp + 6) = 0xD;
    MEM8(esp + 7) = 0xFF;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007DF63u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007DF63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007DF92; /* jbe: below or equal (unsigned <=) */

loc_0007DF67: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0007DF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007DF76u); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0007DF76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DF8D; /* je: equal / zero */

loc_0007DF7D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esi = ZX8(LO8(ebx));
    PUSH32(esp, 0x0007DF87u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007DF87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007DF70; /* jb: below (unsigned <) */

loc_0007DF8B: ;
    goto loc_0007DF91;

loc_0007DF8D: ;
    MEM8(esp + 0xB) = LO8(ebx);

loc_0007DF91: ;
    POP32(esp, esi);

loc_0007DF92: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DFAAu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007DFAA: ;
    POP32(esp, ebx);

loc_0007DFAB: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007DFC0
 * Original: 0x0007DFC0 - 0x0007DFD2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DFC0: ;
    ecx = MEM32(0x9150CC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DFD1; /* je: equal / zero */

loc_0007DFCC: ;
    eax = 1;

loc_0007DFD1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007DFE0
 * Original: 0x0007DFE0 - 0x0007DFFF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DFE0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x91E078);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007DFFE; /* jae: above or equal (unsigned >=) */

loc_0007DFF0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2F4);
    _fb = (uint32_t)(0x916A58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x916A58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_0007DFFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E000
 * Original: 0x0007E000 - 0x0007E006 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E000(void)
{

loc_0007E000: ;
    eax = MEM32(0x91B440);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E010
 * Original: 0x0007E010 - 0x0007E025 (21 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E010(void)
{

loc_0007E010: ;
    PUSH32(esp, 0x916294);
    PUSH32(esp, 0x916310);
    PUSH32(esp, 0x0007E01Fu); RECOMP_ABI_CALL(0x001E3E16u, sub_001E3E16); /* call 0x001E3E16 */

loc_0007E01F: ;
    eax = MEM32(0x916294);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E030
 * Original: 0x0007E030 - 0x0007E048 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E030: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(0x916294)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916294), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007E03F; /* ja: above (unsigned >) */

loc_0007E03C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007E03F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(0x91631C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91631C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E050
 * Original: 0x0007E050 - 0x0007E073 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E050: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x916294)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x916294) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E06E; /* jae: above or equal (unsigned >=) */

loc_0007E05C: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x916310);
    ecx = MEM32(ecx + 0x916314);
    edx = ecx;
    esp += 4; return; /* ret */

loc_0007E06E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E080
 * Original: 0x0007E080 - 0x0007E0B7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E080: ;
    edx = MEM32(0x916294);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0007E0B1; /* jbe: below or equal (unsigned <=) */

loc_0007E08E: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    ecx = 0x916310;
    goto loc_0007E0A0;

    /* nop */

loc_0007E0A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E0A9; /* jne: not equal / not zero */

loc_0007E0A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E0B4; /* je: equal / zero */

loc_0007E0A9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007E0A0; /* jb: below (unsigned <) */

loc_0007E0B1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007E0B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E0C0
 * Original: 0x0007E0C0 - 0x0007E13D (125 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007E0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x334) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x334;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E0D8u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E0D8: ;
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x10));
    _fb = (uint32_t)(0x12) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x12);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(esp + 0x16) = 0xF;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    PUSH32(esp, 0);
    edx = ecx + 3;
    ecx = ZX16(LO16(ecx));
    ebx = ecx;
    edi = edx + -2;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x1C) = LO16(edi);
    edi = esp + 0x1F;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = ZX16(LO16(edx));
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E126u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E126: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x80004005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E140
 * Original: 0x0007E140 - 0x0007E1BB (123 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007E140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x334) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x334;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E158u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E158: ;
    esi = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x14));
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 3);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(esp + 0x16) = 0x10;
    edi = esp + 0x17;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edx + -2;
    MEM16(esp + 0x1C) = LO16(ecx);
    ecx = MEM32(esi + 0x14);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    edx = ZX16(LO16(edx));
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(0x9162A4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E1A4u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E1A4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x80004005u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E1C0
 * Original: 0x0007E1C0 - 0x0007E225 (101 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E1C0: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x330);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM16(esp + 8) = 0x1A;
    MEM8(esp + 0xA) = 8;
    PUSH32(esp, 0x0007E1E0u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E1E0: ;
    edx = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    MEM8(esp + 0xF) = 0xB;
    esi = MEM32(edx + ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = esi;
    ecx = MEM32(edx + ecx + 4);
    PUSH32(esp, 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0007E21Du); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E21D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E230
 * Original: 0x0007E230 - 0x0007E27F (79 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E230: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0x32;
    MEM8(esp + 0xA) = 0xE;
    PUSH32(esp, 0x0007E249u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0007E249: ;
    edx = MEM32(0x9162A4);
    esi = eax;
    eax = MEM32(esp + 0x338);
    ecx = 0xC;
    edi = esp + 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0007E276u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E276: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E280
 * Original: 0x0007E280 - 0x0007E2EA (106 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E280: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0x32;
    MEM8(esp + 0xA) = 0xE;
    PUSH32(esp, 0x0007E299u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0007E299: ;
    esi = eax;
    ecx = 0xC;
    edi = esp + 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007E2AEu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007E2AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007E2E1; /* jbe: below or equal (unsigned <=) */

loc_0007E2B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007E2B8u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E2B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E2D7; /* je: equal / zero */

loc_0007E2BF: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007E2D7u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E2D7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007E2DDu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007E2DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007E2B2; /* jb: below (unsigned <) */

loc_0007E2E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E2F0
 * Original: 0x0007E2F0 - 0x0007E334 (68 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E330; /* je: equal / zero */

loc_0007E2F9: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007E302u); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_0007E302: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E330; /* je: equal / zero */

loc_0007E306: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007E329; /* jbe: below or equal (unsigned <=) */

loc_0007E30D: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x91E238)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x91E238) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E31F; /* jne: not equal / not zero */

loc_0007E318: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007E31F: ;
    ecx = ZX8(LO8(eax));
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007E329: ;
    eax = 0xFFFFFF9Du;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007E330: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E340
 * Original: 0x0007E340 - 0x0007E364 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007E361; /* jl: less (signed <) */

loc_0007E348: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007E361; /* jge: greater or equal (signed >=) */

loc_0007E350: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0007E2F0(); return; /* tail jmp 0x0007E2F0 */

loc_0007E361: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E370
 * Original: 0x0007E370 - 0x0007E376 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E370(void)
{

loc_0007E370: ;
    eax = MEM32(0x9151FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E380
 * Original: 0x0007E380 - 0x0007E39B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E380: ;
    PUSH32(esp, edi);
    ecx = 0x27;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x915010;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x9151FC) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E3A0
 * Original: 0x0007E3A0 - 0x0007E3AF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007E3A0: ;
    eax = MEM32(0x9151FC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x915010;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E3B0
 * Original: 0x0007E3B0 - 0x0007E3CD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E3B0: ;
    ecx = MEM32(0x9151FC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E3CC; /* je: equal / zero */

loc_0007E3BC: ;
    _fa = (uint32_t)(MEM8(0x915044)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x915044), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E3CC; /* jne: not equal / not zero */

loc_0007E3C5: ;
    eax = ZX8(MEM8(0x915046));

loc_0007E3CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E3D0
 * Original: 0x0007E3D0 - 0x0007E414 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E3D0: ;
    edx = MEM32(0x2E671C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E40E; /* jae: above or equal (unsigned >=) */

loc_0007E3DB: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0007E401; /* jbe: below or equal (unsigned <=) */

loc_0007E3E3: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    eax = 0x915278;

loc_0007E3F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E3F9; /* jne: not equal / not zero */

loc_0007E3F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E406; /* je: equal / zero */

loc_0007E3F9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007E3F0; /* jb: below (unsigned <) */

loc_0007E401: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007E406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    esp += 4; return; /* ret */

loc_0007E40E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E420
 * Original: 0x0007E420 - 0x0007E518 (248 bytes, 85 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E420: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007E43D; /* je: equal / zero */

loc_0007E42C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0007E436; /* je: equal / zero */

loc_0007E42F: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007E436: ;
    eax = 4;
    goto loc_0007E442;

loc_0007E43D: ;
    eax = 3;

loc_0007E442: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x916A10);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x23650C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007E461u); RECOMP_ABI_CALL(0x001E7770u, sub_001E7770); /* call 0x001E7770 */

loc_0007E461: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007E4FA; /* jl: less (signed <) */

loc_0007E46B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E48C; /* jne: not equal / not zero */

loc_0007E470: ;
    ecx = MEM32(0x916A10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007E48Au); RECOMP_ABI_CALL(0x001E77A5u, sub_001E77A5); /* call 0x001E77A5 */

loc_0007E48A: ;
    esi = eax;

loc_0007E48C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007E4FA; /* jl: less (signed <) */

loc_0007E490: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x916A10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007E4ADu); RECOMP_ABI_CALL(0x001E77A5u, sub_001E77A5); /* call 0x001E77A5 */

loc_0007E4AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007E4FA; /* jl: less (signed <) */

loc_0007E4B3: ;
    eax = MEM32(0x916A10);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C2);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0007E4D4u); RECOMP_ABI_CALL(0x001E77A5u, sub_001E77A5); /* call 0x001E77A5 */

loc_0007E4D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007E4FA; /* jl: less (signed <) */

loc_0007E4DA: ;
    edx = MEM32(0x916A10);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007E4F4u); RECOMP_ABI_CALL(0x001E77A5u, sub_001E77A5); /* call 0x001E77A5 */

loc_0007E4F4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007E513; /* jge: greater or equal (signed >=) */

loc_0007E4FA: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E513; /* je: equal / zero */

loc_0007E503: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007E509u); RECOMP_ABI_CALL(0x001E779Au, sub_001E779A); /* call 0x001E779A */

loc_0007E509: ;
    MEM32(0x916A10) = 0;

loc_0007E513: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E520
 * Original: 0x0007E520 - 0x0007E5D5 (181 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E520: ;
    eax = 0x1F48;
    PUSH32(esp, 0x0007E52Au); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_0007E52A: ;
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1F58);
    PUSH32(esp, edi);
    MEM32(esp + 0x1F4C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(0x916278);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007E560u); RECOMP_ABI_CALL(0x001E8F4Eu, sub_001E8F4E); /* call 0x001E8F4E */

loc_0007E560: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E5C0; /* jne: not equal / not zero */

loc_0007E564: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E5BF; /* je: equal / zero */

loc_0007E56D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007E5BF; /* jbe: below or equal (unsigned <=) */

loc_0007E573: ;
    edi = MEM32(esp + 0x1F5C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1F5C);
    edx = esp + 0x14;

loc_0007E586: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E58F; /* jne: not equal / not zero */

loc_0007E58A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E5AE; /* je: equal / zero */

loc_0007E58F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007E586; /* jb: below (unsigned <) */

loc_0007E597: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x1F44);
    PUSH32(esp, 0x0007E5A7u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007E5A7: ;
    _fb = (uint32_t)(0x1F48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1F48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007E5AE: ;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + ecx + 0x14;
    ecx = 0x10;
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, ebx);

loc_0007E5BF: ;
    POP32(esp, esi);

loc_0007E5C0: ;
    ecx = MEM32(esp + 0x1F4C);
    POP32(esp, edi);
    POP32(esp, ebp);
    PUSH32(esp, 0x0007E5CEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007E5CE: ;
    _fb = (uint32_t)(0x1F48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1F48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E5E0
 * Original: 0x0007E5E0 - 0x0007E657 (119 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007E5E0: ;
    eax = MEM32(0x9151F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E5F6; /* je: equal / zero */

loc_0007E5E9: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x0007E5F3u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007E5F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007E5F6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x914F98) = eax;
    edx = MEM32(ecx + 0x20);
    eax = MEM32(0x916278);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007E61Du); RECOMP_ABI_CALL(0x001E91D3u, sub_001E91D3); /* call 0x001E91D3 */

loc_0007E61D: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0007E64A; /* jge: greater or equal (signed >=) */

loc_0007E623: ;
    MEM32(0x916280) = edx;
    PUSH32(esp, 0x0007E62Eu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007E62E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = 0x28;
    eax = edx;
    esp += 4; return; /* ret */

loc_0007E64A: ;
    MEM32(0x91E06C) = 0x26;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E660
 * Original: 0x0007E660 - 0x0007E67A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007E660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E660: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x914FA0);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(0x914FA4);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E680
 * Original: 0x0007E680 - 0x0007E686 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E680(void)
{

loc_0007E680: ;
    eax = MEM32(0x9162A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E690
 * Original: 0x0007E690 - 0x0007E6D6 (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E690: ;
    PUSH32(esp, 0x0007E695u); RECOMP_ABI_CALL(0x0007D800u, sub_0007D800); /* call 0x0007D800 */

loc_0007E695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E6CC; /* je: equal / zero */

loc_0007E699: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E6C4; /* je: equal / zero */

loc_0007E6A1: ;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(eax + ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ecx + 8), 0x80000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007E6C4; /* jne: not equal / not zero */

loc_0007E6B9: ;
    eax = 1;
    MEM32(0x9162A0) = eax;
    esp += 4; return; /* ret */

loc_0007E6C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9162A0) = eax;
    esp += 4; return; /* ret */

loc_0007E6CC: ;
    eax = MEM32(esp + 4);
    MEM32(0x9162A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E6E0
 * Original: 0x0007E6E0 - 0x0007E6FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E6E0: ;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + ecx + 8);
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E700
 * Original: 0x0007E700 - 0x0007E774 (116 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E700: ;
    eax = MEM32(0x916284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E70F; /* jne: not equal / not zero */

loc_0007E709: ;
    eax = 0x80004005u;
    esp += 4; return; /* ret */

loc_0007E70F: ;
    eax = MEM32(0x914F80);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E751; /* je: equal / zero */

loc_0007E71B: ;
    eax = MEM32(0x2E6710);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E751; /* je: equal / zero */

loc_0007E724: ;
    esi = 1;
    PUSH32(esp, 0x0007E72Eu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0007E72E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E737; /* je: equal / zero */

loc_0007E732: ;
    esi = 0x13;

loc_0007E737: ;
    PUSH32(esp, 0x0007E73Cu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0007E73C: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007E751; /* jne: not equal / not zero */

loc_0007E745: ;
    PUSH32(esp, 0x0007E74Au); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_0007E74A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E751; /* je: equal / zero */

loc_0007E74E: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007E751: ;
    eax = MEM32(0x91B448);
    ecx = MEM32(0x91B444);
    edx = MEM32(0x916278);
    PUSH32(esp, 0x91E238);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007E772u); RECOMP_ABI_CALL(0x001E410Fu, sub_001E410F); /* call 0x001E410F */

loc_0007E772: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E780
 * Original: 0x0007E780 - 0x0007E79B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E780: ;
    PUSH32(esp, edi);
    ecx = 0x3E8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x915278;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x2E671C) = 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E7A0
 * Original: 0x0007E7A0 - 0x0007E7BB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E7A0: ;
    PUSH32(esp, edi);
    ecx = 0x866;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x91BE60;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x2E6708) = 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E7C0
 * Original: 0x0007E7C0 - 0x0007E7F7 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E7C0: ;
    PUSH32(esp, edi);
    ecx = 0x1E0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x9147F0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x915238) = 0;
    ecx = 0x91B468;
    POP32(esp, edi);
    /* nop */

loc_0007E7E0: ;
    MEM32(eax + 0x914828) = ecx;
    MEM8(ecx) = 0xFF;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x55) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x55;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007E7E0; /* jb: below (unsigned <) */

loc_0007E7F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E800
 * Original: 0x0007E800 - 0x0007E840 (64 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007E800: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007E818u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_0007E818: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 8);
    if (CMP_B(_fa, _fb)) goto loc_0007E836; /* jb: below (unsigned <) */

loc_0007E824: ;
    if (CMP_A(_fa, _fb)) goto loc_0007E82A; /* ja: above (unsigned >) */

loc_0007E826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0007E836; /* jbe: below or equal (unsigned <=) */

loc_0007E82A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    edx = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007E836: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E840
 * Original: 0x0007E840 - 0x0007E89C (92 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E840: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x330);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x338);
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0x46;
    MEM8(esp + 0xA) = 0x12;
    ecx = 0x11;
    edi = esp + 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0007E874u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E874: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007E895; /* je: equal / zero */

loc_0007E87D: ;
    edx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007E895u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E895: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E8A0
 * Original: 0x0007E8A0 - 0x0007E8FC (92 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E8A0: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x330);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x338);
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0x76;
    MEM8(esp + 0xA) = 0x13;
    ecx = 0x1D;
    edi = esp + 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0007E8D4u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E8D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007E8F5; /* je: equal / zero */

loc_0007E8DD: ;
    edx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007E8F5u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E8F5: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E900
 * Original: 0x0007E900 - 0x0007E95A (90 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007E900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0xC6;
    MEM8(esp + 0xA) = 0x14;
    ecx = 0x31;
    edi = esp + 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E932u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007E932: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E954; /* je: equal / zero */

loc_0007E939: ;
    edx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007E954u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007E954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E960
 * Original: 0x0007E960 - 0x0007E96E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E960: ;
    ecx = MEM32(0x916264);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E970
 * Original: 0x0007E970 - 0x0007E97E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E970: ;
    ecx = MEM32(0x91B42C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E980
 * Original: 0x0007E980 - 0x0007E9FC (124 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E980: ;
    ecx = MEM32(0x91E234);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007E9FB; /* je: equal / zero */

loc_0007E98C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1A6) = esi;
    ecx = MEM32(0x91E234);
    MEM32(ecx + 0x1AA) = edx;
    esi = MEM32(0x91E234);
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1AE) = ecx;
    ecx = MEM32(0x91E234);
    MEM32(ecx + 0x1B2) = edx;
    ecx = MEM32(0x91E234);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1B6) = eax;
    eax = MEM32(0x91E234);
    MEM32(eax + 0x1BA) = edx;
    ecx = MEM32(0x91E234);
    MEM32(ecx + 0x50) = 3;
    POP32(esp, esi);

loc_0007E9FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EA00
 * Original: 0x0007EA00 - 0x0007EA06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EA00(void)
{

loc_0007EA00: ;
    eax = MEM32(0x9150AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EA10
 * Original: 0x0007EA10 - 0x0007EA1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EA10(void)
{

loc_0007EA10: ;
    eax = MEM32(esp + 4);
    MEM32(0x9150C4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EA20
 * Original: 0x0007EA20 - 0x0007EAAB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EA20: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0xCA;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM16(edx) = 0x5E;
    MEM8(edx + 2) = 0x15;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = MEM32(eax + ecx);
    MEM32(edx + 3) = ecx;
    ecx = MEM32(0x916A50);
    eax = MEM32(eax + ecx + 4);
    MEM32(edx + 7) = eax;
    SET_LO8(eax, MEM8(0x91628C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007EAAA; /* je: equal / zero */

loc_0007EA65: ;
    PUSH32(esp, esi);
    esi = edx + 0xB;
    PUSH32(esp, esi);
    MEM8(esi) = LO8(eax);
    PUSH32(esp, 0x0007EA71u); RECOMP_ABI_CALL(0x00075AF0u, sub_00075AF0); /* call 0x00075AF0 */

loc_0007EA71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x916244);
    ecx = esi + 0x27;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007EA82u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0007EA82: ;
    edx = MEM32(0x91B430);
    _fb = (uint32_t)(0x47) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x47;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    eax = MEM32(0x91B434);
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x91B438);
    MEM32(esi + 8) = ecx;
    SET_LO16(edx, MEM16(0x91B43C));
    MEM16(esi + 0xC) = LO16(edx);
    POP32(esp, esi);

loc_0007EAAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EAB0
 * Original: 0x0007EAB0 - 0x0007EAF0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EAB0(void)
{

loc_0007EAB0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(esp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x916244);
    MEM8(0x91628C) = LO8(eax);
    PUSH32(esp, 0x0007EAC8u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0007EAC8: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    MEM32(0x91B430) = eax;
    ecx = MEM32(edx + 4);
    MEM32(0x91B434) = ecx;
    eax = MEM32(edx + 8);
    MEM32(0x91B438) = eax;
    SET_LO16(ecx, MEM16(edx + 0xC));
    MEM16(0x91B43C) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EAF0
 * Original: 0x0007EAF0 - 0x0007EB0D (29 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EAF0(void)
{

loc_0007EAF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007EB0Cu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007EB0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EB10
 * Original: 0x0007EB10 - 0x0007EB6B (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EB10: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007EB1Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007EB1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007EB63; /* jbe: below or equal (unsigned <=) */

loc_0007EB22: ;
    PUSH32(esp, edi);

loc_0007EB23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007EB29u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007EB29: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EB58; /* je: equal / zero */

loc_0007EB32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007EB38u); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0007EB38: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EB4Au); RECOMP_ABI_CALL(0x0007EA20u, sub_0007EA20); /* call 0x0007EA20 */

loc_0007EB4A: ;
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007EB55u); RECOMP_ABI_CALL(0x0007EAF0u, sub_0007EAF0); /* call 0x0007EAF0 */

loc_0007EB55: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007EB58: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007EB5Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007EB5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007EB23; /* jb: below (unsigned <) */

loc_0007EB62: ;
    POP32(esp, edi);

loc_0007EB63: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007EB70
 * Original: 0x0007EB70 - 0x0007EBEA (122 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EB70: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x916278);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    MEM32(esp + 1) = eax;
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    eax = MEM32(0x916A50);
    edx = MEM32(ecx + eax);
    eax = MEM32(ecx + eax + 4);
    PUSH32(esp, esi);
    MEM8(esp + 4) = 0x1A;
    MEM32(esp + 5) = edx;
    MEM32(esp + 9) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007EBB7u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007EBB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007EBE5; /* jbe: below or equal (unsigned <=) */

loc_0007EBBB: ;
    goto loc_0007EBC0;

    /* nop */

loc_0007EBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007EBC6u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007EBC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EBDB; /* je: equal / zero */

loc_0007EBCD: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007EBD8u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_0007EBD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007EBDB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007EBE1u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007EBE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007EBC0; /* jb: below (unsigned <) */

loc_0007EBE5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007EBF0
 * Original: 0x0007EBF0 - 0x0007EC21 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EBF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007EC01u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_0007EC01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EC1F; /* je: equal / zero */

loc_0007EC09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + 0x914828);
    ecx = 0x15;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);

loc_0007EC1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EC30
 * Original: 0x0007EC30 - 0x0007EC59 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EC30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007EC42u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_0007EC42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EC55; /* je: equal / zero */

loc_0007EC4A: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + 0x914828);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007EC55: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EC60
 * Original: 0x0007EC60 - 0x0007EC64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC60(void)
{

loc_0007EC60: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EC70
 * Original: 0x0007EC70 - 0x0007EC74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC70(void)
{

loc_0007EC70: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EC80
 * Original: 0x0007EC80 - 0x0007EC84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC80(void)
{

loc_0007EC80: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EC90
 * Original: 0x0007EC90 - 0x0007EC94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC90(void)
{

loc_0007EC90: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECA0
 * Original: 0x0007ECA0 - 0x0007ECA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECA0(void)
{

loc_0007ECA0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECB0
 * Original: 0x0007ECB0 - 0x0007ECB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECB0(void)
{

loc_0007ECB0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECC0
 * Original: 0x0007ECC0 - 0x0007ECC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECC0(void)
{

loc_0007ECC0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECD0
 * Original: 0x0007ECD0 - 0x0007ECD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECD0(void)
{

loc_0007ECD0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECE0
 * Original: 0x0007ECE0 - 0x0007ECE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECE0(void)
{

loc_0007ECE0: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ECF0
 * Original: 0x0007ECF0 - 0x0007ECF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ECF0(void)
{

loc_0007ECF0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED00
 * Original: 0x0007ED00 - 0x0007ED04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED00(void)
{

loc_0007ED00: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED10
 * Original: 0x0007ED10 - 0x0007ED14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED10(void)
{

loc_0007ED10: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED20
 * Original: 0x0007ED20 - 0x0007ED24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED20(void)
{

loc_0007ED20: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED30
 * Original: 0x0007ED30 - 0x0007ED3F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007ED30: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED40
 * Original: 0x0007ED40 - 0x0007ED47 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007ED40: ;
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED50
 * Original: 0x0007ED50 - 0x0007ED54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED50(void)
{

loc_0007ED50: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED60
 * Original: 0x0007ED60 - 0x0007ED64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED60(void)
{

loc_0007ED60: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED70
 * Original: 0x0007ED70 - 0x0007ED74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED70(void)
{

loc_0007ED70: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED80
 * Original: 0x0007ED80 - 0x0007ED84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED80(void)
{

loc_0007ED80: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007ED90
 * Original: 0x0007ED90 - 0x0007ED97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ED90(void)
{

loc_0007ED90: ;
    eax = MEM32(ecx + 0x19E);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EDA0
 * Original: 0x0007EDA0 - 0x0007EDA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDA0(void)
{

loc_0007EDA0: ;
    eax = MEM32(ecx + 0x1A6);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EDB0
 * Original: 0x0007EDB0 - 0x0007EDB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDB0(void)
{

loc_0007EDB0: ;
    eax = MEM32(ecx + 0x1AE);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EDC0
 * Original: 0x0007EDC0 - 0x0007EDC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDC0(void)
{

loc_0007EDC0: ;
    eax = MEM32(ecx + 0x1BE);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EDD0
 * Original: 0x0007EDD0 - 0x0007EDDF (15 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDD0(void)
{

loc_0007EDD0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + ecx + 0x1C8));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EDE0
 * Original: 0x0007EDE0 - 0x0007EDE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDE0(void)
{

loc_0007EDE0: ;
    eax = MEM32(ecx + 0x1B6);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EDF0
 * Original: 0x0007EDF0 - 0x0007EDF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EDF0(void)
{

loc_0007EDF0: ;
    eax = MEM32(ecx + 0x1D0);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EE00
 * Original: 0x0007EE00 - 0x0007EE04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE00(void)
{

loc_0007EE00: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EE10
 * Original: 0x0007EE10 - 0x0007EE1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE10(void)
{

loc_0007EE10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2EC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EE20
 * Original: 0x0007EE20 - 0x0007EE27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE20(void)
{

loc_0007EE20: ;
    eax = MEM32(ecx + 0x2EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EE30
 * Original: 0x0007EE30 - 0x0007EE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE30(void)
{

loc_0007EE30: ;
    eax = MEM32(ecx + 0x2F0);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EE40
 * Original: 0x0007EE40 - 0x0007EE4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE40(void)
{

loc_0007EE40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2F0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EE50
 * Original: 0x0007EE50 - 0x0007EE68 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EE50: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007EE65; /* jae: above or equal (unsigned >=) */

loc_0007EE5B: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x22);
    eax = edx + ecx + 0x8E;

loc_0007EE65: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EE70
 * Original: 0x0007EE70 - 0x0007EE88 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EE70: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007EE85; /* jae: above or equal (unsigned >=) */

loc_0007EE7B: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x22);
    eax = edx + ecx + 0x1D8;

loc_0007EE85: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EE90
 * Original: 0x0007EE90 - 0x0007EEB1 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007EE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EE90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x1AE)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1AE), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007EEAC; /* ja: above (unsigned >) */

loc_0007EE9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1A6)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1A6) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007EEAC; /* ja: above (unsigned >) */

loc_0007EEA4: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0007EEAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EEC0
 * Original: 0x0007EEC0 - 0x0007EEE1 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EEC0: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x5C));
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x0007EED4u); RECOMP_ABI_CALL(0x0007E3D0u, sub_0007E3D0); /* call 0x0007E3D0 */

loc_0007EED4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, 2);
    if (CMP_NE(_fa, _fb)) goto loc_0007EEDF; /* jne: not equal / not zero */

loc_0007EEDD: ;
    SET_LO8(eax, LO8(ebx));

loc_0007EEDF: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EEF0
 * Original: 0x0007EEF0 - 0x0007EF17 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EEF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 9;
    /* nop */

loc_0007EF00: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EF0E; /* je: equal / zero */

loc_0007EF05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007EF0Bu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007EF0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007EF0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007EF00; /* jne: not equal / not zero */

loc_0007EF14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EF20
 * Original: 0x0007EF20 - 0x0007EFC3 (163 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007EF20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 8) = ebx;
    esi = 0x80004005u;
    PUSH32(esp, 0x0007EF33u); RECOMP_ABI_CALL(0x0007EEF0u, sub_0007EEF0); /* call 0x0007EEF0 */

loc_0007EF33: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    eax = ZX8(LO8(ecx));
    if (CMP_BE(_fa, _fb)) goto loc_0007EF44; /* jbe: below or equal (unsigned <=) */

loc_0007EF3F: ;
    eax = 4;

loc_0007EF44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebx + 0x34) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0007EFBB; /* je: equal / zero */

loc_0007EF4B: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x236430) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x236430;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    SET_LO16(ebp, ZX8(LO8(ecx)));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0007EF60: ;
    ecx = MEM32(esi + 0x236430);
    edx = MEM32(esp + 0x18);
    eax = ebx + esi + 0x236430;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007EF7Cu); RECOMP_ABI_CALL(0x001E9C8Cu, sub_001E9C8C); /* call 0x001E9C8C */

loc_0007EF7C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007EF9E; /* jne: not equal / not zero */

loc_0007EF82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007EF60; /* jb: below (unsigned <) */

loc_0007EF8A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007EF94u); RECOMP_ABI_CALL(0x0007C5B0u, sub_0007C5B0); /* call 0x0007C5B0 */

loc_0007EF94: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0007EF9E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0007EFA7u); RECOMP_ABI_CALL(0x0007EEF0u, sub_0007EEF0); /* call 0x0007EEF0 */

loc_0007EFA7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007EFB1u); RECOMP_ABI_CALL(0x0007C5B0u, sub_0007C5B0); /* call 0x0007C5B0 */

loc_0007EFB1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0007EFBB: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007EFD0
 * Original: 0x0007EFD0 - 0x0007F0E0 (272 bytes, 115 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007EFD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    /* nop */

loc_0007EFE0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F07B; /* je: equal / zero */

loc_0007EFEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EFF0u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007EFF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0007F008; /* je: equal / zero */

loc_0007EFF6: ;
    _fb = (uint32_t)(0x1500EF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1500EF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007F070; /* jne: not equal / not zero */

loc_0007EFFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F003u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007F003: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007F07B;

loc_0007F008: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x34)));
    edx = MEM32(edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007F01Bu); RECOMP_ABI_CALL(0x001E9989u, sub_001E9989); /* call 0x001E9989 */

loc_0007F01B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, MEM8(esi + 0x34));
    if (CMP_GE(_fas, _fbs)) goto loc_0007F045; /* jge: greater or equal (signed >=) */

loc_0007F022: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F067; /* jbe: below or equal (unsigned <=) */

loc_0007F028: ;
    ecx = esi + 0x24;
    goto loc_0007F030;

    /* nop */

loc_0007F030: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007F037; /* jl: less (signed <) */

loc_0007F035: ;
    MEM32(ecx) = eax;

loc_0007F037: ;
    ebp = ZX8(MEM8(esi + 0x34));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F030; /* jb: below (unsigned <) */

loc_0007F043: ;
    goto loc_0007F067;

loc_0007F045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F067; /* jbe: below or equal (unsigned <=) */

loc_0007F04B: ;
    ecx = esi + 0x24;
    edi = edi;

loc_0007F050: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007F05B; /* jl: less (signed <) */

loc_0007F055: ;
    edx = MEM32(esp + eax * 4 + 0x10);
    MEM32(ecx) = edx;

loc_0007F05B: ;
    edx = ZX8(MEM8(esi + 0x34));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F050; /* jb: below (unsigned <) */

loc_0007F067: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F06Du); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007F06D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F070: ;
    ecx = esi;
    PUSH32(esp, 0x0007F077u); RECOMP_ABI_CALL(0x0007C640u, sub_0007C640); /* call 0x0007C640 */

loc_0007F077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F09D; /* jne: not equal / not zero */

loc_0007F07B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007EFE0; /* jb: below (unsigned <) */

loc_0007F088: ;
    ecx = esi;
    PUSH32(esp, 0x0007F08Fu); RECOMP_ABI_CALL(0x0007C590u, sub_0007C590); /* call 0x0007C590 */

loc_0007F08F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F0B7; /* je: equal / zero */

loc_0007F093: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F09D: ;
    ecx = esi;
    PUSH32(esp, 0x0007F0A4u); RECOMP_ABI_CALL(0x0007EEF0u, sub_0007EEF0); /* call 0x0007EEF0 */

loc_0007F0A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F0CF; /* jbe: below or equal (unsigned <=) */

loc_0007F0AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F0B7: ;
    ecx = esi;
    PUSH32(esp, 0x0007F0BEu); RECOMP_ABI_CALL(0x0007C670u, sub_0007C670); /* call 0x0007C670 */

loc_0007F0BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F0A4; /* je: equal / zero */

loc_0007F0C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1500F0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F0CF: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007F0D8u); RECOMP_ABI_CALL(0x0007C610u, sub_0007C610); /* call 0x0007C610 */

loc_0007F0D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007F0E0
 * Original: 0x0007F0E0 - 0x0007F33A (602 bytes, 159 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F0E0: ;
    eax = MEM32(0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F0EFu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007F0EF: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007F10F; /* jge: greater or equal (signed >=) */

loc_0007F0FA: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x9150CC) = ebp;
    MEM32(0x91E06C) = ecx;
    goto loc_0007F323;

loc_0007F10F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F32D; /* je: equal / zero */

loc_0007F115: ;
    edx = MEM32(0x9150CC);
    PUSH32(esp, 0x9147B8);
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007F12Bu); RECOMP_ABI_CALL(0x001E403Bu, sub_001E403B); /* call 0x001E403B */

loc_0007F12B: ;
    ecx = MEM32(0x916240);
    ebx = eax;
    eax = MEM32(0x914F74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edi = ecx;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F198; /* je: equal / zero */

loc_0007F140: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F14E; /* jne: not equal / not zero */

loc_0007F145: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007F14Bu); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0007F14B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F14E: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x0007F158u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_0007F158: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F184; /* je: equal / zero */

loc_0007F15F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    PUSH32(esp, 0x9150CC);
    MEM32(0x91B448) = eax;
    PUSH32(esp, 0x0007F175u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007F175: ;
    ecx = MEM32(esp + 0x18);
    MEM32(0x91E06C) = ecx;
    goto loc_0007F320;

loc_0007F184: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = edx;
    MEM32(0x914F74) = ebp;
    MEM32(0x91B448) = edx;

loc_0007F198: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007F2FF; /* jl: less (signed <) */

loc_0007F1A0: ;
    PUSH32(esp, 0x9147B8);
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, 0x0007F1AFu); RECOMP_ABI_CALL(0x0007C7B0u, sub_0007C7B0); /* call 0x0007C7B0 */

loc_0007F1AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F2FF; /* jne: not equal / not zero */

loc_0007F1BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    eax = MEM32(0x91DFFC);
    ecx = MEM32(0x91E000);
    edx = MEM32(0x9147B8);
    MEM32(0x91B444) = eax;
    eax = MEM32(0x9147BC);
    MEM32(0x91B448) = ecx;
    ecx = MEM32(0x9147C0);
    MEM32(0x916A18) = edx;
    edx = MEM32(0x9147C4);
    MEM32(0x916A1C) = eax;
    MEM32(0x916A20) = ecx;
    MEM32(0x916A24) = edx;
    MEM32(0x914F74) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F225; /* je: equal / zero */

loc_0007F20C: ;
    eax = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007F21B; /* je: equal / zero */

loc_0007F212: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007F225; /* jne: not equal / not zero */

loc_0007F217: ;
    PUSH32(esp, 2);
    goto loc_0007F21D;

loc_0007F21B: ;
    PUSH32(esp, 1);

loc_0007F21D: ;
    PUSH32(esp, 0x0007F222u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0007F222: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F225: ;
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    PUSH32(esp, 0x0007F234u); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0007F234: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F26A; /* je: equal / zero */

loc_0007F23B: ;
    _fa = (uint32_t)(MEM32(0x9151F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9151F0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F253; /* je: equal / zero */

loc_0007F243: ;
    PUSH32(esp, 0x0007F248u); RECOMP_ABI_CALL(0x00075C20u, sub_00075C20); /* call 0x00075C20 */

loc_0007F248: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F253; /* jne: not equal / not zero */

loc_0007F24C: ;
    eax = 1;
    goto loc_0007F255;

loc_0007F253: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007F255: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    PUSH32(esp, 0x0007F265u); RECOMP_ABI_CALL(0x0007BC40u, sub_0007BC40); /* call 0x0007BC40 */

loc_0007F265: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007F296;

loc_0007F26A: ;
    edx = MEM32(0x9151F0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    PUSH32(esp, 0x0007F287u); RECOMP_ABI_CALL(0x0007BC40u, sub_0007BC40); /* call 0x0007BC40 */

loc_0007F287: ;
    PUSH32(esp, 0x0007F28Cu); RECOMP_ABI_CALL(0x00077D60u, sub_00077D60); /* call 0x00077D60 */

loc_0007F28C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007F293u); RECOMP_ABI_CALL(0x00073360u, sub_00073360); /* call 0x00073360 */

loc_0007F293: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F296: ;
    ecx = MEM32(0x91B458);
    edx = MEM32(0x91B45C);
    eax = MEM32(0x91B460);
    MEM32(0x9150B0) = ecx;
    ecx = MEM32(0x91B464);
    MEM32(0x9150B4) = edx;
    MEM32(0x9150B8) = eax;
    MEM32(0x9150BC) = ecx;
    PUSH32(esp, 0x0007F2C9u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_0007F2C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    MEM32(0x91E06C) = 0xA;
    MEM32(0x9150D0) = ebp;
    MEM32(0x9147B4) = ebp;
    PUSH32(esp, 0x0007F2E9u); RECOMP_ABI_CALL(0x00078880u, sub_00078880); /* call 0x00078880 */

loc_0007F2E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007F2EFu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_0007F2EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x916280) = ebx;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007F2FF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = edx;
    PUSH32(esp, 0x9150CC);
    MEM32(0x91B448) = edx;
    PUSH32(esp, 0x0007F317u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007F317: ;
    eax = MEM32(esp + 0x18);
    MEM32(0x91E06C) = eax;

loc_0007F320: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F323: ;
    MEM32(0x91623C) = 6;

loc_0007F32D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x916280) = ebx;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007F340
 * Original: 0x0007F340 - 0x0007F5EA (682 bytes, 169 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F340: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x344) = eax;
    eax = MEM32(0x9150E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F35Du); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007F35D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007F390; /* jge: greater or equal (signed >=) */

loc_0007F364: ;
    MEM32(0x9150E8) = 0;
    MEM32(0x9150D0) = 3;

loc_0007F378: ;
    MEM32(0x916280) = eax;
    ecx = MEM32(esp + 0x344);
    PUSH32(esp, 0x0007F389u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007F389: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F390: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F378; /* je: equal / zero */

loc_0007F392: ;
    ecx = MEM32(0x9150E8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x9147B8);
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007F3A9u); RECOMP_ABI_CALL(0x001E403Bu, sub_001E403B); /* call 0x001E403B */

loc_0007F3A9: ;
    esi = eax;
    eax = MEM32(0x916240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0007F3C7; /* jne: not equal / not zero */

loc_0007F3BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007F3C4u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0007F3C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F3C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007F5A9; /* jl: less (signed <) */

loc_0007F3CF: ;
    PUSH32(esp, 0x9147B8);
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, 0x0007F3DEu); RECOMP_ABI_CALL(0x0007C7B0u, sub_0007C7B0); /* call 0x0007C7B0 */

loc_0007F3DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F5A9; /* jne: not equal / not zero */

loc_0007F3E9: ;
    eax = MEM32(0x916A24);
    edx = MEM32(0x916A20);
    ecx = MEM32(0x91DFFC);
    esi = MEM32(0x91B444);
    MEM32(esp + 0x344) = eax;
    eax = MEM32(0x9147B8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x916A18);
    MEM32(0x916A18) = eax;
    eax = MEM32(0x9147C4);
    PUSH32(esp, ebp);
    ebp = MEM32(0x916A1C);
    MEM32(esp + 0x348) = edx;
    edx = MEM32(0x91E000);
    PUSH32(esp, edi);
    edi = MEM32(0x91B448);
    MEM32(0x916A24) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x91B444) = ecx;
    ecx = MEM32(0x9147BC);
    MEM32(0x91B448) = edx;
    edx = MEM32(0x9147C0);
    MEM32(0x916A1C) = ecx;
    MEM32(0x916A20) = edx;
    MEM32(0x914F74) = 1;
    if ((_fa == 0)) goto loc_0007F47D; /* je: equal / zero */

loc_0007F474: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007F487; /* jne: not equal / not zero */

loc_0007F479: ;
    PUSH32(esp, 2);
    goto loc_0007F47F;

loc_0007F47D: ;
    PUSH32(esp, 1);

loc_0007F47F: ;
    PUSH32(esp, 0x0007F484u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0007F484: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F487: ;
    ecx = MEM32(esp + 0x34C);
    edx = MEM32(esp + 0x350);
    MEM32(0x91B444) = esi;
    MEM32(0x91B448) = edi;
    MEM32(0x916A18) = ebx;
    MEM32(0x916A1C) = ebp;
    MEM32(0x916A20) = ecx;
    MEM32(0x916A24) = edx;
    PUSH32(esp, 0x0007F4BEu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007F4BE: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F4E1; /* jbe: below or equal (unsigned <=) */

loc_0007F4C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007F4CCu); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0007F4CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F4DC; /* jne: not equal / not zero */

loc_0007F4D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007F4D9u); RECOMP_ABI_CALL(0x00070960u, sub_00070960); /* call 0x00070960 */

loc_0007F4D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007F4DC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F4C6; /* jb: below (unsigned <) */

loc_0007F4E1: ;
    PUSH32(esp, 0x0007F4E6u); RECOMP_ABI_CALL(0x00070980u, sub_00070980); /* call 0x00070980 */

loc_0007F4E6: ;
    PUSH32(esp, 0x0007F4EBu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007F4EB: ;
    ecx = MEM32(0x91DFFC);
    edx = MEM32(0x91E000);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5E);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + -2;
    MEM32(esp + 0x2B) = ecx;
    ecx = MEM32(0x9147BC);
    MEM16(esp + 0x18) = LO16(eax);
    eax = MEM32(0x9147B8);
    MEM32(esp + 0x1F) = ecx;
    MEM32(esp + 0x2F) = edx;
    edx = MEM32(0x9147C0);
    MEM32(esp + 0x1B) = eax;
    eax = MEM32(0x9147C4);
    ecx = esp + 0x33;
    PUSH32(esp, ecx);
    MEM8(esp + 0x1E) = 0xC;
    MEM32(esp + 0x27) = edx;
    MEM32(esp + 0x2B) = eax;
    PUSH32(esp, 0x0007F544u); RECOMP_ABI_CALL(0x0007A090u, sub_0007A090); /* call 0x0007A090 */

loc_0007F544: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007F54Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007F54E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F57F; /* jbe: below or equal (unsigned <=) */

loc_0007F552: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F558u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007F558: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F575; /* je: equal / zero */

loc_0007F55F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F575u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007F575: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007F57Bu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007F57B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F552; /* jb: below (unsigned <) */

loc_0007F57F: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x9150D0) = 2;
    MEM32(0x916280) = eax;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x344);
    PUSH32(esp, 0x0007F5A2u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007F5A2: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F5A9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = ecx;
    PUSH32(esp, 0x9150E8);
    MEM32(0x91B448) = ecx;
    PUSH32(esp, 0x0007F5C1u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007F5C1: ;
    ecx = MEM32(esp + 0x34C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x916280) = esi;
    eax = esi;
    MEM32(0x9150D0) = 3;
    POP32(esp, esi);
    PUSH32(esp, 0x0007F5E3u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007F5E3: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007F5F0
 * Original: 0x0007F5F0 - 0x0007F6D1 (225 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007F5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007F5F0: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x0007F5FAu); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_0007F5FA: ;
    eax = MEM32(0x91DFFC);
    ecx = MEM32(0x91E000);
    edx = MEM32(0x9147B8);
    MEM32(0x91B444) = eax;
    eax = MEM32(0x9147BC);
    MEM32(0x91B448) = ecx;
    ecx = MEM32(0x9147C0);
    MEM32(0x916A18) = edx;
    edx = MEM32(0x9147C4);
    MEM32(0x914F74) = 1;
    MEM32(0x916A1C) = eax;
    MEM32(0x916A20) = ecx;
    MEM32(0x916A24) = edx;
    PUSH32(esp, 0x0007F64Du); RECOMP_ABI_CALL(0x00070BD0u, sub_00070BD0); /* call 0x00070BD0 */

loc_0007F64D: ;
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    PUSH32(esp, 0x0007F65Cu); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0007F65C: ;
    eax = MEM32(0x91B458);
    ecx = MEM32(0x91B45C);
    edx = MEM32(0x91B460);
    MEM32(0x9150B0) = eax;
    eax = MEM32(0x91B464);
    MEM32(0x9150B4) = ecx;
    MEM32(0x9150B8) = edx;
    MEM32(0x9150BC) = eax;
    PUSH32(esp, 0x0007F68Du); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_0007F68D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007F69Au); RECOMP_ABI_CALL(0x00078880u, sub_00078880); /* call 0x00078880 */

loc_0007F69A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007F6A1u); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_0007F6A1: ;
    ecx = MEM32(0x9150E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9150D0) = 0;
    MEM32(0x9147B4) = 0;
    MEM32(0x9150CC) = ecx;
    MEM32(0x9150E8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007F6E0
 * Original: 0x0007F6E0 - 0x0007F8BB (475 bytes, 106 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007F6E0: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x91523C;
    MEM32(esp + 0x1C8) = eax;
    MEM32(0x9151F8) = ebx;
    MEM32(0x9150C0) = ebx;
    MEM32(0x91E06C) = ebx;
    MEM32(0x91623C) = ebx;
    MEM32(0x914F80) = ebx;
    MEM32(0x914F74) = ebx;
    MEM32(0x916240) = ebx;
    MEM32(0x916A50) = ebx;
    MEM32(0x916284) = ebx;
    MEM32(0x9150CC) = ebx;
    MEM32(0x914F90) = ebx;
    MEM32(0x914F84) = ebx;
    MEM32(0x91B454) = ebx;
    MEM32(0x916290) = ebx;
    MEM32(0x91E070) = ebx;
    MEM32(0x914F78) = ebx;
    MEM32(0x914F70) = ebx;
    MEM32(0x914F7C) = ebx;
    MEM32(0x9151F4) = ebx;
    MEM32(0x916264) = ebx;
    MEM32(0x91B42C) = ebx;
    PUSH32(esp, 0x0007F77Du); RECOMP_ABI_CALL(0x0007C560u, sub_0007C560); /* call 0x0007C560 */

loc_0007F77D: ;
    MEM32(0x916A10) = ebx;
    PUSH32(esp, 0x0007F788u); RECOMP_ABI_CALL(0x0007E780u, sub_0007E780); /* call 0x0007E780 */

loc_0007F788: ;
    PUSH32(esp, 0x0007F78Du); RECOMP_ABI_CALL(0x0007E7A0u, sub_0007E7A0); /* call 0x0007E7A0 */

loc_0007F78D: ;
    PUSH32(esp, 0x0007F792u); RECOMP_ABI_CALL(0x0007E7C0u, sub_0007E7C0); /* call 0x0007E7C0 */

loc_0007F792: ;
    PUSH32(esp, 0x0007F797u); RECOMP_ABI_CALL(0x0007E380u, sub_0007E380); /* call 0x0007E380 */

loc_0007F797: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 8) = 0xC;
    MEM8(esp + 9) = LO8(ebx);
    PUSH32(esp, 0x0007F7B8u); RECOMP_ABI_CALL(0x001CF6EEu, sub_001CF6EE); /* call 0x001CF6EE */

loc_0007F7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F84A; /* jne: not equal / not zero */

loc_0007F7C0: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x202);
    PUSH32(esp, 0x0007F7CFu); RECOMP_ABI_CALL(0x001CF705u, sub_001CF705); /* call 0x001CF705 */

loc_0007F7CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F84A; /* jne: not equal / not zero */

loc_0007F7D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007F7D9u); RECOMP_ABI_CALL(0x001E56A6u, sub_001E56A6); /* call 0x001E56A6 */

loc_0007F7D9: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0007F7E7u); RECOMP_ABI_CALL(0x001CEFCEu, sub_001CEFCE); /* call 0x001CEFCE */

loc_0007F7E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x9162A4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F84A; /* je: equal / zero */

loc_0007F7F1: ;
    PUSH32(esp, 0x3E8);
    MEM16(0x915228) = 2;
    MEM32(0x91522C) = ebx;
    PUSH32(esp, 0x0007F80Au); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_0007F80A: ;
    PUSH32(esp, 0x10);
    MEM16(0x91522A) = LO16(eax);
    eax = MEM32(0x9162A4);
    PUSH32(esp, 0x915228);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F822u); RECOMP_ABI_CALL(0x001CF02Eu, sub_001CF02E); /* call 0x001CF02E */

loc_0007F822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F84A; /* je: equal / zero */

loc_0007F827: ;
    edx = MEM32(0x9162A4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x0007F845u); RECOMP_ABI_CALL(0x001CEFEFu, sub_001CEFEF); /* call 0x001CEFEF */

loc_0007F845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007F860; /* jne: not equal / not zero */

loc_0007F84A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C4);
    PUSH32(esp, 0x0007F859u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007F859: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007F860: ;
    MEM32(0x9150C0) = 1;
    /* nop */

loc_0007F870: ;
    PUSH32(esp, 0x0007F875u); RECOMP_ABI_CALL(0x00224803u, sub_00224803); /* call 0x00224803 */

loc_0007F875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F870; /* je: equal / zero */

loc_0007F87A: ;
    PUSH32(esp, 0x916294);
    PUSH32(esp, 0x916310);
    PUSH32(esp, 0x0007F889u); RECOMP_ABI_CALL(0x001E3E16u, sub_001E3E16); /* call 0x001E3E16 */

loc_0007F889: ;
    PUSH32(esp, 0x2225E0);
    PUSH32(esp, 0x0007F893u); RECOMP_ABI_CALL(0x00223C92u, sub_00223C92); /* call 0x00223C92 */

loc_0007F893: ;
    PUSH32(esp, 0x0007F898u); RECOMP_ABI_CALL(0x00075FB0u, sub_00075FB0); /* call 0x00075FB0 */

loc_0007F898: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F8A2u); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_0007F8A2: ;
    ecx = MEM32(esp + 0x1C8);
    eax = 0x9150C0;
    POP32(esp, ebx);
    PUSH32(esp, 0x0007F8B4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007F8B4: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007F8C0
 * Original: 0x0007F8C0 - 0x0007F99D (221 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F8C0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x2F0);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    MEM32(esp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0007F8DD; /* je: equal / zero */

loc_0007F8D7: ;
    SET_LO16(eax, MEM16(eax + 0xE));
    goto loc_0007F8E2;

loc_0007F8DD: ;
    eax = 0xFFFF;

loc_0007F8E2: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2F0);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F8F9; /* je: equal / zero */

loc_0007F8F3: ;
    SET_LO16(esi, MEM16(esi + 0xE));
    goto loc_0007F8FE;

loc_0007F8F9: ;
    esi = 0xFFFF;

loc_0007F8FE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007F90A; /* jae: above or equal (unsigned >=) */

loc_0007F903: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007F90A: ;
    if (CMP_BE(_fa, _fb)) goto loc_0007F915; /* jbe: below or equal (unsigned <=) */

loc_0007F90C: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007F915: ;
    eax = MEM32(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F92F; /* je: equal / zero */

loc_0007F91D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = ecx + ecx + -1;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007F92F: ;
    eax = MEM32(edx + 0x5C);
    esi = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F903; /* jb: below (unsigned <) */

loc_0007F939: ;
    if (CMP_A(_fa, _fb)) goto loc_0007F90C; /* ja: above (unsigned >) */

loc_0007F93B: ;
    esi = MEM32(ecx + 0x44);
    ebx = MEM32(edx + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x40);
    MEM32(esp + 0x18) = ebp;
    eax = edi + esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007F983; /* jb: below (unsigned <) */

loc_0007F956: ;
    if (CMP_BE(_fa, _fb)) goto loc_0007F963; /* jbe: below or equal (unsigned <=) */

loc_0007F958: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007F963: ;
    eax = MEM32(ecx + 0x4C);
    ebp = MEM32(ecx + 0x48);
    ecx = MEM32(edx + 0x4C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + 0x48);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007F98C; /* jbe: below or equal (unsigned <=) */

loc_0007F983: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007F98C: ;
    eax = 1;
    if (CMP_B(_fa, _fb)) goto loc_0007F997; /* jb: below (unsigned <) */

loc_0007F993: ;
    eax = MEM32(esp + 0x10);

loc_0007F997: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007F9A0
 * Original: 0x0007F9A0 - 0x0007FE53 (1203 bytes, 250 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F9A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0007FBE3; /* je: equal / zero */

loc_0007F9B7: ;
    eax = MEM32(ebp + 0x20);
    MEM32(0x916288) = eax;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x9151F0) = ecx;
    MEM32(0x91E080) = esi;
    MEM32(0x91E088) = esi;
    MEM32(0x91E08C) = ebx;
    MEM32(0x91E090) = 2;
    edx = MEM32(ebp);
    MEM32(0x91E098) = edx;
    MEM32(0x91E09C) = ebx;
    MEM32(0x91E0A0) = 3;
    eax = MEM32(ebp + 4);
    MEM32(0x91E0A8) = eax;
    MEM32(0x91E0AC) = ebx;
    MEM32(0x91E0B0) = 0x100004;
    ecx = MEM32(ebp + 0x30);
    MEM32(0x91E0B8) = ecx;
    MEM32(0x91E0C4) = esi;
    MEM32(0x91E0C0) = 0x100005;
    PUSH32(esp, 0x0007FA38u); RECOMP_ABI_CALL(0x00070A20u, sub_00070A20); /* call 0x00070A20 */

loc_0007FA38: ;
    MEM32(0x91E0C8) = eax;
    PUSH32(esp, 0x0007FA42u); RECOMP_ABI_CALL(0x00070A30u, sub_00070A30); /* call 0x00070A30 */

loc_0007FA42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, 0x9150F0);
    PUSH32(esp, 0x0007FA52u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007FA52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E1B4) = esi;
    MEM32(0x91E1B0) = 0x100014;
    MEM32(0x91E1B8) = 0x9150F0;
    PUSH32(esp, 0x0007FA74u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_0007FA74: ;
    MEM8(0x91E24C) = LO8(eax);
    MEM32(esp + 0x14) = 0x915110;
    edi = 0x91E0D0;
    goto loc_0007FA90;

    /* nop */
    /* nop */

loc_0007FA90: ;
    edx = MEM32(esi * 4 + 0x2E6720);
    PUSH32(esp, esi);
    MEM32(edi + 4) = 1;
    MEM32(edi) = edx;
    PUSH32(esp, 0x0007FAA6u); RECOMP_ABI_CALL(0x00070950u, sub_00070950); /* call 0x00070950 */

loc_0007FAA6: ;
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0007FAAFu); RECOMP_ABI_CALL(0x00070940u, sub_00070940); /* call 0x00070940 */

loc_0007FAAF: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007FABFu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007FABF: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi * 4 + 0x2E6740);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xF8) = eax;
    MEM8(esi + 0x91E24C) = LO8(ebx);
    MEM32(edi + 0xF4) = 1;
    MEM32(edi + 0xF0) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0007FA90; /* jb: below (unsigned <) */

loc_0007FAF9: ;
    MEM32(0x91E190) = 0x200012;
    MEM32(0x91E198) = 0x91E24C;
    MEM32(0x91E19C) = 8;
    MEM32(0x91E140) = 0xD;
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x91E148) = edx;
    MEM32(0x91E14C) = ebx;
    MEM32(0x91E150) = 0xE;
    eax = MEM32(ebp + 0x14);
    MEM32(0x91E158) = eax;
    MEM32(0x91E15C) = ebx;
    MEM32(0x91E160) = 0xF;
    ecx = MEM32(ebp + 0x18);
    MEM32(0x91E168) = ecx;
    MEM32(0x91E16C) = ebx;
    MEM32(0x91E180) = 0x11;
    edx = MEM32(ebp + 0x28);
    MEM32(0x91E188) = edx;
    edx = MEM32(0x91E088);
    MEM32(0x91E18C) = ebx;
    MEM32(0x91E170) = 0x10;
    eax = MEM32(ebp + 0x24);
    MEM32(0x91E178) = eax;
    MEM32(0x91E17C) = ebx;
    MEM32(0x91E1A0) = 0x13;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(0x91E1A8) = ecx;
    MEM32(0x91E1AC) = ebx;
    PUSH32(esp, 0x0007FBC8u); RECOMP_ABI_CALL(0x00071700u, sub_00071700); /* call 0x00071700 */

loc_0007FBC8: ;
    eax = MEM32(0x916288);
    ecx = MEM32(0x9151F0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007FBDBu); RECOMP_ABI_CALL(0x00071810u, sub_00071810); /* call 0x00071810 */

loc_0007FBDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007FDAE;

loc_0007FBE3: ;
    MEM32(0x916288) = ebx;
    MEM32(0x9151F0) = 8;
    MEM32(0x91E080) = esi;
    MEM32(0x91E088) = esi;
    MEM32(0x91E08C) = ebx;
    MEM32(0x91E090) = 2;
    MEM32(0x91E098) = ebx;
    MEM32(0x91E09C) = ebx;
    MEM32(0x91E0A0) = 3;
    MEM32(0x91E0A8) = ebx;
    MEM32(0x91E0AC) = ebx;
    MEM32(0x91E0B0) = 0x100004;
    MEM32(0x91E0B8) = 0x236554;
    MEM32(0x91E0C4) = esi;
    MEM32(0x91E0C0) = 0x100005;
    PUSH32(esp, 0x0007FC5Au); RECOMP_ABI_CALL(0x00070A20u, sub_00070A20); /* call 0x00070A20 */

loc_0007FC5A: ;
    MEM32(0x91E0C8) = eax;
    PUSH32(esp, 0x0007FC64u); RECOMP_ABI_CALL(0x00070A30u, sub_00070A30); /* call 0x00070A30 */

loc_0007FC64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, 0x9150F0);
    PUSH32(esp, 0x0007FC74u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007FC74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E1B4) = esi;
    MEM32(0x91E1B0) = 0x100014;
    MEM32(0x91E1B8) = 0x9150F0;
    PUSH32(esp, 0x0007FC96u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_0007FC96: ;
    MEM8(0x91E244) = LO8(eax);
    ebp = 0x915110;
    edi = 0x91E0D0;
    goto loc_0007FCB0;

    /* nop */
    edi = edi;

loc_0007FCB0: ;
    edx = MEM32(esi * 4 + 0x2E6720);
    PUSH32(esp, esi);
    MEM32(edi + 4) = 1;
    MEM32(edi) = edx;
    PUSH32(esp, 0x0007FCC6u); RECOMP_ABI_CALL(0x00070950u, sub_00070950); /* call 0x00070950 */

loc_0007FCC6: ;
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0007FCCFu); RECOMP_ABI_CALL(0x00070940u, sub_00070940); /* call 0x00070940 */

loc_0007FCCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007FCDBu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007FCDB: ;
    eax = MEM32(esi * 4 + 0x2E6740);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xF8) = ebp;
    MEM8(esi + 0x91E244) = LO8(ebx);
    MEM32(edi + 0xF4) = 1;
    MEM32(edi + 0xF0) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007FCB0; /* jb: below (unsigned <) */

loc_0007FD0D: ;
    eax = 0x13;
    MEM32(0x91E190) = 0x200012;
    MEM32(0x91E198) = 0x91E244;
    MEM32(0x91E19C) = 8;
    MEM32(0x91E140) = 0xD;
    MEM32(0x91E148) = ebx;
    MEM32(0x91E14C) = ebx;
    MEM32(0x91E150) = 0xE;
    MEM32(0x91E158) = eax;
    MEM32(0x91E15C) = ebx;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E168) = ebx;
    MEM32(0x91E16C) = ebx;
    MEM32(0x91E180) = 0x11;
    MEM32(0x91E188) = ebx;
    MEM32(0x91E18C) = ebx;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E178) = ebx;
    MEM32(0x91E17C) = ebx;
    MEM32(0x91E1A0) = eax;
    MEM32(0x91E1A8) = ebx;
    MEM32(0x91E1AC) = ebx;

loc_0007FDAE: ;
    eax = MEM32(0x9151F0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007FDC2; /* je: equal / zero */

loc_0007FDBB: ;
    edx = 1;
    goto loc_0007FDC7;

loc_0007FDC2: ;
    ecx = 1;

loc_0007FDC7: ;
    esi = MEM32(0x916288);
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007FDE7u); RECOMP_ABI_CALL(0x001E3FFCu, sub_001E3FFC); /* call 0x001E3FFC */

loc_0007FDE7: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0007FDF0;

    /* nop */

loc_0007FDF0: ;
    MEM32(eax + 0x91E084) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007FDF0; /* jb: below (unsigned <) */

loc_0007FE00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007FE32; /* jge: greater or equal (signed >=) */

loc_0007FE04: ;
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, 0x0007FE0Eu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007FE0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x91E06C) = 8;
    MEM32(0x91623C) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007FE32: ;
    PUSH32(esp, 1);
    MEM32(0x91E06C) = 7;
    PUSH32(esp, 0x0007FE43u); RECOMP_ABI_CALL(0x0007CEA0u, sub_0007CEA0); /* call 0x0007CEA0 */

loc_0007FE43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007FE60
 * Original: 0x0007FE60 - 0x00080000 (416 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007FE60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x9150D0) = 3;
    PUSH32(esp, 0x0007FE72u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007FE72: ;
    ebx = eax;
    PUSH32(esp, 0x0007FE79u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0007FE79: ;
    esi = eax;
    eax = 1;
    MEM32(0x91E080) = eax;
    MEM32(0x91E088) = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91E08C) = edi;
    MEM32(0x91E090) = 2;
    eax = ZX8(MEM8(esi + 0x23));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E098) = eax;
    MEM32(0x91E09C) = edx;
    MEM32(0x91E0A0) = 3;
    eax = ZX8(MEM8(esi + 0x24));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E0A8) = eax;
    MEM32(0x91E0AC) = edx;
    MEM32(0x91E0B0) = 0x100004;
    MEM32(0x91E0B8) = esi;
    PUSH32(esp, 0x0007FEDBu); RECOMP_ABI_CALL(0x0007D2B0u, sub_0007D2B0); /* call 0x0007D2B0 */

loc_0007FEDB: ;
    MEM32(0x91E140) = 0xD;
    PUSH32(esp, 0x0007FEEAu); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_0007FEEA: ;
    ecx = ZX8(MEM8(esi + 0x27));
    edx = ZX8(MEM8(esi + 0x26));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 0x25));
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x91E148) = eax;
    eax = MEM32(0x91E234);
    MEM32(0x91E14C) = edi;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = 0x13;
    MEM32(0x91E150) = 0xE;
    if (CMP_NE(_fa, _fb)) goto loc_0007FF64; /* jne: not equal / not zero */

loc_0007FF30: ;
    MEM32(0x91E158) = ecx;
    MEM32(0x91E15C) = edi;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E168) = ecx;
    MEM32(0x91E16C) = edi;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E178) = edi;
    goto loc_0007FFA7;

loc_0007FF64: ;
    edx = MEM32(eax + 0x1A6);
    MEM32(0x91E158) = edx;
    MEM32(0x91E15C) = edi;
    MEM32(0x91E160) = 0xF;
    edx = MEM32(eax + 0x1AE);
    MEM32(0x91E168) = edx;
    MEM32(0x91E16C) = edi;
    MEM32(0x91E170) = 0x10;
    eax = MEM32(eax + 0x1B6);
    MEM32(0x91E178) = eax;

loc_0007FFA7: ;
    MEM32(0x91E17C) = edi;
    MEM32(0x91E180) = 0x11;
    eax = ZX8(MEM8(esi + 0x28));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E188) = eax;
    MEM32(0x91E18C) = edx;
    MEM32(0x91E1A0) = ecx;
    eax = ZX8(MEM8(esi + 0x29));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E1A8) = eax;
    MEM32(0x91E1AC) = edx;
    PUSH32(esp, 0x0007FFE2u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_0007FFE2: ;
    edx = MEM32(0x916288);
    esi = MEM32(0x9151F0);
    PUSH32(esp, 0x9150E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = ebx;

    g_seh_ebp = ebp; sub_00080000(); return; /* fallthrough 0x00080000 */

}

/**
 * sub_00080000
 * Original: 0x00080000 - 0x00080003 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080000: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_00080003(); return; /* fallthrough 0x00080003 */

}

/**
 * sub_00080003
 * Original: 0x00080003 - 0x00080005 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080003(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080003: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_00080005(); return; /* fallthrough 0x00080005 */

}

/**
 * sub_00080005
 * Original: 0x00080005 - 0x00080006 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080005: ;
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_00080006(); return; /* fallthrough 0x00080006 */

}

/**
 * sub_00080006
 * Original: 0x00080006 - 0x00080007 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080006: ;
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_00080007(); return; /* fallthrough 0x00080007 */

}

/**
 * sub_00080007
 * Original: 0x00080007 - 0x0008000E (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080007: ;
    PUSH32(esp, 0x0008000Cu); RECOMP_ABI_CALL(0x001E3FFCu, sub_001E3FFC); /* call 0x001E3FFC */

loc_0008000C: ;
    esi = eax;

    g_seh_ebp = ebp; sub_0008000E(); return; /* fallthrough 0x0008000E */

}

/**
 * sub_0008000E
 * Original: 0x0008000E - 0x00080010 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0008000E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008000E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00080010(); return; /* fallthrough 0x00080010 */

}

/**
 * sub_00080010
 * Original: 0x00080010 - 0x0008005E (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080010: ;
    MEM32(eax + 0x91E084) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080010; /* jb: below (unsigned <) */

loc_00080020: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008003D; /* jge: greater or equal (signed >=) */

loc_00080024: ;
    PUSH32(esp, 0x9150E8);
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0008002E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008003D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(0x9150D0) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_00080052; /* jbe: below or equal (unsigned <=) */

loc_0008004C: ;
    MEM32(0x91627C) = edi;

loc_00080052: ;
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008003C
 * Original: 0x0008003C - 0x0008005E (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008003C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008003C: ;
    esp += 4; return; /* ret */

    MEM32(0x91627C) = edi;

loc_00080052: ;
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008005D
 * Original: 0x0008005D - 0x0008005E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008005D(void)
{

loc_0008005D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080060
 * Original: 0x00080060 - 0x00080064 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080060: ;
    eax = MEM32(esp + 8);

    g_seh_ebp = ebp; sub_00080064(); return; /* fallthrough 0x00080064 */

}

/**
 * sub_00080064
 * Original: 0x00080064 - 0x00080065 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080064(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080064: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_00080065(); return; /* fallthrough 0x00080065 */

}

/**
 * sub_00080065
 * Original: 0x00080065 - 0x0008006A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080065(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080065: ;
    PUSH32(esp, 0x0008006Au); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

    g_seh_ebp = ebp; sub_0008006A(); return; /* fallthrough 0x0008006A */

}

/**
 * sub_0008006A
 * Original: 0x0008006A - 0x0008006D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008006A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0008006D(); return; /* fallthrough 0x0008006D */

}

/**
 * sub_0008006D
 * Original: 0x0008006D - 0x0008006F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008006D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

    g_seh_ebp = ebp; sub_0008006F(); return; /* fallthrough 0x0008006F */

}

/**
 * sub_0008006F
 * Original: 0x0008006F - 0x00080071 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008006F: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00080077(); return; }

    g_seh_ebp = ebp; sub_00080071(); return; /* fallthrough 0x00080071 */

}

/**
 * sub_00080071
 * Original: 0x00080071 - 0x00080076 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080071(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080071: ;
    eax = 0x80004005u;

    g_seh_ebp = ebp; sub_00080076(); return; /* fallthrough 0x00080076 */

}

/**
 * sub_00080076
 * Original: 0x00080076 - 0x00080077 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080076(void)
{

loc_00080076: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080077
 * Original: 0x00080077 - 0x00080080 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080077(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080077: ;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0007CFF0(); return; /* tail jmp 0x0007CFF0 */

}

/**
 * sub_00080080
 * Original: 0x00080080 - 0x000800A2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080080: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM16(esp + 8) = 1;
    MEM8(esp + 0xA) = 5;
    PUSH32(esp, 0x0008009Bu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008009B: ;
    ebp = eax;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00080117(); return; } /* js: sign (negative) */

loc_000800A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_000800A2(); return; /* fallthrough 0x000800A2 */

}

/**
 * sub_000800A2
 * Original: 0x000800A2 - 0x000800E1 (63 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000800A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000800A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000800A8u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_000800A8: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00080109(); return; } /* je: equal / zero */

loc_000800B1: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000800BAu); RECOMP_ABI_CALL(0x000718C0u, sub_000718C0); /* call 0x000718C0 */

loc_000800BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 3);
    ecx = esp + 0x20;
    MEM32(edi + 0xC) = 0;
    edx = MEM32(0x9162A4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000800DEu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_000800DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */

    g_seh_ebp = ebp; sub_000800E1(); return; /* fallthrough 0x000800E1 */

}

/**
 * sub_000800E1
 * Original: 0x000800E1 - 0x000800E3 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800E1: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00080109(); return; }

    g_seh_ebp = ebp; sub_000800E3(); return; /* fallthrough 0x000800E3 */

}

/**
 * sub_000800E3
 * Original: 0x000800E3 - 0x000800E8 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800E3: ;
    PUSH32(esp, 0x000800E8u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

    g_seh_ebp = ebp; sub_000800E8(); return; /* fallthrough 0x000800E8 */

}

/**
 * sub_000800E8
 * Original: 0x000800E8 - 0x000800EA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800E8: ;
    edx = eax;

    g_seh_ebp = ebp; sub_000800EA(); return; /* fallthrough 0x000800EA */

}

/**
 * sub_000800EA
 * Original: 0x000800EA - 0x000800ED (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800EA(void)
{

loc_000800EA: ;
    MEM32(edi + 0xC) = edx;

}

/**
 * sub_000800EB
 * Original: 0x000800EB - 0x000800FC (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800EB: ;
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) | 0xE8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("into", 0x000800EEu); /* TODO: into */
    g_fp_stack[(g_fp_top + 7) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 7) & 7] / fp_top()); fp_pop(); /* fdivp st(7) */
    MEM32(ebp + -2129431360) = MEM32(ebp + -2129431360) + 1;
    _fa = (uint32_t)(MEM32(ebp + -2129431360)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("cli", 0x000800F7u); /* TODO: cli */
    PUSH32(esp, ecx);
    RECOMP_UNIMPL("daa", 0x000800F9u); /* TODO: daa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000800FC(); return; /* fallthrough 0x000800FC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000800FC
 * Original: 0x000800FC - 0x000800FE (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800FC: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00080109(); return; }

    g_seh_ebp = ebp; sub_000800FE(); return; /* fallthrough 0x000800FE */

}

/**
 * sub_000800FE
 * Original: 0x000800FE - 0x000800FF (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000800FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_000800FE: ;
    PUSH32(esp, ebp);

    g_seh_ebp = ebp; sub_000800FF(); return; /* fallthrough 0x000800FF */

}

/**
 * sub_000800FF
 * Original: 0x000800FF - 0x00080109 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800FF: ;
    PUSH32(esp, 0x00080104u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_00080104: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

    g_seh_ebp = ebp; sub_00080109(); return; /* fallthrough 0x00080109 */

}

/**
 * sub_00080109
 * Original: 0x00080109 - 0x00080117 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080109(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080109: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_000800A2(); return; } /* jns: not sign (positive) */

loc_0008010C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00080117(); return; } /* je: equal / zero */

loc_00080112: ;
    PUSH32(esp, 0x00080117u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

    g_seh_ebp = ebp; sub_00080117(); return; /* fallthrough 0x00080117 */

}

/**
 * sub_00080117
 * Original: 0x00080117 - 0x00080120 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080117(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080117: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080120
 * Original: 0x00080120 - 0x00080134 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080120: ;
    PUSH32(esp, 0x00080125u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_00080125: ;
    PUSH32(esp, 0x0008012Au); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008012A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080133; /* je: equal / zero */

loc_0008012E: ;
    g_seh_ebp = ebp; sub_00072860(); return; /* tail jmp 0x00072860 */

loc_00080133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080140
 * Original: 0x00080140 - 0x0008019E (94 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00080140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0008014Au); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008014A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(_fa, _fb)) goto loc_0008017B; /* jbe: below or equal (unsigned <=) */

loc_00080156: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008015Cu); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0008015C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00080171; /* je: equal / zero */

loc_00080163: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00080171; /* jne: not equal / not zero */

loc_0008016A: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00080190; /* je: equal / zero */

loc_00080171: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00080177u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00080177: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00080156; /* jb: below (unsigned <) */

loc_0008017B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00080182u); RECOMP_ABI_CALL(0x0007E3D0u, sub_0007E3D0); /* call 0x0007E3D0 */

loc_00080182: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00080190: ;
    ecx = eax;
    PUSH32(esp, 0x00080197u); RECOMP_ABI_CALL(0x0007EEC0u, sub_0007EEC0); /* call 0x0007EEC0 */

loc_00080197: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000801A0
 * Original: 0x000801A0 - 0x000802A4 (260 bytes, 83 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000801A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000801A0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000801CA; /* jbe: below or equal (unsigned <=) */

loc_000801A9: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000801CA; /* jbe: below or equal (unsigned <=) */

loc_000801B1: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000801CA; /* je: equal / zero */

loc_000801B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000801C3u); RECOMP_ABI_CALL(0x0007E420u, sub_0007E420); /* call 0x0007E420 */

loc_000801C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00080223; /* jl: less (signed <) */

loc_000801CA: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00080223; /* je: equal / zero */

loc_000801D3: ;
    eax = MEM32(0x9151F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000801E9; /* je: equal / zero */

loc_000801DC: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x000801E6u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000801E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000801E9: ;
    eax = MEM32(0x916A10);
    ecx = MEM32(0x91B448);
    edx = MEM32(0x91B444);
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x916278);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x91BE60)) >> 32) & 1);
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080221u); RECOMP_ABI_CALL(0x001EC5D8u, sub_001EC5D8); /* call 0x001EC5D8 */

loc_00080221: ;
    goto loc_0008024C;

loc_00080223: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x91B448);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x56);
    ecx = MEM32(0x91B444);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x91BE60)) >> 32) & 1);
    edx = edx + 0x91BE60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(0x916278);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008024Cu); RECOMP_ABI_CALL(0x001E4232u, sub_001E4232); /* call 0x001E4232 */

loc_0008024C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0008028D; /* jge: greater or equal (signed >=) */

loc_00080252: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00080289; /* je: equal / zero */

loc_0008025B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080261u); RECOMP_ABI_CALL(0x001E779Au, sub_001E779A); /* call 0x001E779A */

loc_00080261: ;
    MEM32(0x916A10) = 0;
    MEM32(0x91E06C) = 0x25;
    PUSH32(esp, 0x0008027Au); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008027A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;

loc_00080289: ;
    eax = esi;

loc_0008028B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008028D: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008028B; /* je: equal / zero */

loc_00080298: ;
    MEM32(0x91E06C) = 0x24;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000802B0
 * Original: 0x000802B0 - 0x00080403 (339 bytes, 115 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000802B0: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000802E1; /* jbe: below or equal (unsigned <=) */

loc_000802BE: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000802E1; /* jbe: below or equal (unsigned <=) */

loc_000802C6: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000802E1; /* je: equal / zero */

loc_000802CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000802D8u); RECOMP_ABI_CALL(0x0007E420u, sub_0007E420); /* call 0x0007E420 */

loc_000802D8: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0008034B; /* jl: less (signed <) */

loc_000802E1: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008034B; /* je: equal / zero */

loc_000802EA: ;
    eax = MEM32(0x9151F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00080300; /* je: equal / zero */

loc_000802F3: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x000802FDu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000802FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00080300: ;
    edx = MEM32(0x916A10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x91B448);
    PUSH32(esp, eax);
    eax = MEM32(0x916278);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x91B444);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00080347u); RECOMP_ABI_CALL(0x001EC5D8u, sub_001EC5D8); /* call 0x001EC5D8 */

loc_00080347: ;
    esi = eax;
    goto loc_000803A7;

loc_0008034B: ;
    edx = MEM32(0x2E6708);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000803A7; /* jle: less or equal (signed <=) */

loc_00080357: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0x91BE60;
    PUSH32(esp, ebp);

loc_00080367: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00080374; /* jne: not equal / not zero */

loc_0008036D: ;
    ebp = MEM32(ecx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008037E; /* je: equal / zero */

loc_00080374: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x56)) >> 32) & 1);
    ecx = ecx + 0x56;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00080367; /* jl: less (signed <) */

loc_0008037C: ;
    goto loc_000803A4;

loc_0008037E: ;
    ecx = MEM32(0x91B448);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    edx = MEM32(0x91B444);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x91BE60)) >> 32) & 1);
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x916278);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000803A2u); RECOMP_ABI_CALL(0x001E4232u, sub_001E4232); /* call 0x001E4232 */

loc_000803A2: ;
    esi = eax;

loc_000803A4: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000803A7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000803E9; /* jge: greater or equal (signed >=) */

loc_000803AB: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000803E2; /* je: equal / zero */

loc_000803B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000803BAu); RECOMP_ABI_CALL(0x001E779Au, sub_001E779A); /* call 0x001E779A */

loc_000803BA: ;
    MEM32(0x916A10) = 0;
    MEM32(0x91E06C) = 0x25;
    PUSH32(esp, 0x000803D3u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000803D3: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;

loc_000803E2: ;
    eax = esi;

loc_000803E4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000803E9: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000803E4; /* je: equal / zero */

loc_000803F4: ;
    MEM32(0x91E06C) = 0x24;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080407
 * Original: 0x00080407 - 0x00080410 (9 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080407(void)
{

loc_00080407: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080410
 * Original: 0x00080410 - 0x000804F9 (233 bytes, 80 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00080410: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_BE(_fa, _fb)) goto loc_00080445; /* jbe: below or equal (unsigned <=) */

loc_00080425: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00080445; /* jbe: below or equal (unsigned <=) */

loc_0008042D: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00080445; /* je: equal / zero */

loc_00080435: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008043Eu); RECOMP_ABI_CALL(0x0007E420u, sub_0007E420); /* call 0x0007E420 */

loc_0008043E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00080489; /* jl: less (signed <) */

loc_00080445: ;
    _fa = (uint32_t)(MEM32(0x916A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916A10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00080489; /* je: equal / zero */

loc_0008044D: ;
    _fa = (uint32_t)(MEM32(0x9151F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9151F4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00080462; /* je: equal / zero */

loc_00080455: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x0008045Fu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0008045F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00080462: ;
    eax = MEM32(0x916A10);
    edx = MEM32(0x916278);
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edi;
    PUSH32(esp, edx);
    MEM32(ecx + 8) = ebx;
    PUSH32(esp, 0x00080487u); RECOMP_ABI_CALL(0x001EC63Bu, sub_001EC63B); /* call 0x001EC63B */

loc_00080487: ;
    goto loc_000804A2;

loc_00080489: ;
    ecx = MEM32(0x916278);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, ecx);
    MEM32(eax + 8) = ebx;
    PUSH32(esp, 0x000804A2u); RECOMP_ABI_CALL(0x001E4205u, sub_001E4205); /* call 0x001E4205 */

loc_000804A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000804C0; /* jl: less (signed <) */

loc_000804A8: ;
    _fa = (uint32_t)(MEM32(0x916A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916A10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000804F5; /* je: equal / zero */

loc_000804B2: ;
    MEM32(0x91E06C) = 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000804C0: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000804D5; /* je: equal / zero */

loc_000804C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000804CFu); RECOMP_ABI_CALL(0x001E779Au, sub_001E779A); /* call 0x001E779A */

loc_000804CF: ;
    MEM32(0x916A10) = ebx;

loc_000804D5: ;
    MEM32(0x91E06C) = 0x25;
    PUSH32(esp, 0x000804E4u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000804E4: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    eax = esi;

loc_000804F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080500
 * Original: 0x00080500 - 0x000805D4 (212 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080500: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xA0) = eax;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000805BB; /* je: equal / zero */

loc_00080520: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x91E238)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x91E238) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080544; /* jne: not equal / not zero */

loc_0008052B: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x9C);
    PUSH32(esp, 0x0008053Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008053D: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00080544: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000805BB; /* je: equal / zero */

loc_00080548: ;
    PUSH32(esp, edi);
    ecx = 0x15;
    edi = esp + 8;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x0008055Bu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008055B: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x64) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x68) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE;
    edi = esp + 0x6C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080586u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_00080586: ;
    esi = MEM32(0x916A50);
    ecx = 0xC;
    edi = esp + 0x74;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = 0x27;
    esi = esp + 8;
    edi = ebx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x9C);
    PUSH32(esp, 0x000805B4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000805B4: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000805BB: ;
    ecx = MEM32(esp + 0xA0);
    eax = 0x80004005u;
    POP32(esp, esi);
    PUSH32(esp, 0x000805CDu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000805CD: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000805E0
 * Original: 0x000805E0 - 0x00080741 (353 bytes, 102 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000805E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000805E0: ;
    eax = MEM32(0x2E6708);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0008073A; /* jl: less (signed <) */

loc_000805EE: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008073A; /* jl: less (signed <) */

loc_000805FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008073A; /* jle: less or equal (signed <=) */

loc_00080602: ;
    eax = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x91BE60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008072A; /* je: equal / zero */

loc_00080618: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00080632; /* je: equal / zero */

loc_0008061B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008073A; /* jne: not equal / not zero */

loc_00080622: ;
    eax = MEM32(0x916278);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080630u); RECOMP_ABI_CALL(0x001E427Fu, sub_001E427F); /* call 0x001E427F */

loc_00080630: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00080632: ;
    ecx = MEM32(0x916278);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080642u); RECOMP_ABI_CALL(0x001E427Fu, sub_001E427F); /* call 0x001E427F */

loc_00080642: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00080725; /* jl: less (signed <) */

loc_0008064C: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00080655u); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_00080655: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080666; /* je: equal / zero */

loc_00080659: ;
    ebx = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0x00080664u); RECOMP_ABI_CALL(0x00080500u, sub_00080500); /* call 0x00080500 */

loc_00080664: ;
    ebx = eax;

loc_00080666: ;
    PUSH32(esp, edi);
    ecx = 0x15;
    edi = 0x915010;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x0008067Au); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008067A: ;
    ecx = MEM32(eax);
    MEM32(0x915068) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x91506C) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x915074);
    MEM32(0x915070) = eax;
    PUSH32(esp, 0x0008069Du); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_0008069D: ;
    eax = MEM32(0x916A50);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(0x91507C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915080) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(0x915084) = ecx;
    edx = eax + 0x70;
    ecx = MEM32(edx);
    MEM32(0x915088) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(0x91508C) = ecx;
    edx = MEM32(edx + 8);
    MEM32(0x915090) = edx;
    ecx = eax + 0xE0;
    edx = MEM32(ecx);
    MEM32(0x915094) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915098) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(0x91509C) = ecx;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(0x9150A0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x9150A4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x9150A8) = edx;
    MEM32(0x9151FC) = 1;
    POP32(esp, edi);

loc_00080725: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008072A: ;
    eax = MEM32(0x916278);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080738u); RECOMP_ABI_CALL(0x001E427Fu, sub_001E427F); /* call 0x001E427F */

loc_00080738: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008073A: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080750
 * Original: 0x00080750 - 0x00080871 (289 bytes, 78 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080750: ;
    eax = MEM32(0x2E6708);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0008086A; /* jl: less (signed <) */

loc_0008075E: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008086A; /* jl: less (signed <) */

loc_0008076A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008086A; /* jle: less or equal (signed <=) */

loc_00080772: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x56);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x91BE60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080786u); RECOMP_ABI_CALL(0x001E40F9u, sub_001E40F9); /* call 0x001E40F9 */

loc_00080786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080799; /* jne: not equal / not zero */

loc_0008078A: ;
    ecx = MEM32(0x916278);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080797u); RECOMP_ABI_CALL(0x001E428Au, sub_001E428A); /* call 0x001E428A */

loc_00080797: ;
    goto loc_000807A4;

loc_00080799: ;
    ebx = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0x000807A4u); RECOMP_ABI_CALL(0x00080500u, sub_00080500); /* call 0x00080500 */

loc_000807A4: ;
    ecx = 0x15;
    edi = 0x915010;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ebx = eax;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x000807B9u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_000807B9: ;
    edx = MEM32(eax);
    MEM32(0x915068) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x91506C) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 0x915074);
    MEM32(0x915070) = edx;
    PUSH32(esp, 0x000807DDu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_000807DD: ;
    eax = MEM32(0x916A50);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(0x91507C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915080) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(0x915084) = ecx;
    edx = eax + 0x70;
    ecx = MEM32(edx);
    MEM32(0x915088) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(0x91508C) = ecx;
    edx = MEM32(edx + 8);
    ecx = eax + 0xE0;
    MEM32(0x915090) = edx;
    edx = MEM32(ecx);
    MEM32(0x915094) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915098) = edx;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91509C) = ecx;
    edx = MEM32(eax);
    MEM32(0x9150A0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x9150A4) = ecx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    MEM32(0x9150A8) = edx;
    MEM32(0x9151FC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008086A: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080880
 * Original: 0x00080880 - 0x0008089E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080880: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91E078)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x91E078) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00080898; /* jae: above or equal (unsigned >=) */

loc_0008088C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F4);
    _fb = (uint32_t)(0x916AC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x916AC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00080898: ;
    eax = 0x236518;
    esp += 4; return; /* ret */

}

/**
 * sub_000808A0
 * Original: 0x000808A0 - 0x00080955 (181 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000808A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000808A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x80004005u;
    PUSH32(esp, 0x000808ADu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_000808AD: ;
    ecx = MEM32(eax);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000808C9; /* jne: not equal / not zero */

loc_000808BB: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000808C9; /* jne: not equal / not zero */

loc_000808C2: ;
    esi = 0x8015200Au;
    goto loc_0008091B;

loc_000808C9: ;
    eax = MEM32(0x914F78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008091B; /* jne: not equal / not zero */

loc_000808D2: ;
    PUSH32(esp, 0x914F78);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000808DEu); RECOMP_ABI_CALL(0x001E42AFu, sub_001E42AF); /* call 0x001E42AF */

loc_000808DE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0008091B; /* jl: less (signed <) */

loc_000808E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = edi;
    MEM32(esi) = eax;
    eax = MEM32(0x916278);
    ecx = ebx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 8) = edx;
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x2364C0); PUSH32(esp, 0x00080908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00080901u); } /* indirect call */
    }

loc_00080908: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00080945; /* jge: greater or equal (signed >=) */

loc_0008090E: ;
    PUSH32(esp, 0x914F78);
    PUSH32(esp, 0x00080918u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00080918: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008091B: ;
    MEM32(0x91E06C) = 0x1E;
    PUSH32(esp, 0x0008092Au); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008092A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x916280) = esi;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00080945: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(0x91E06C) = 0x1D;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080960
 * Original: 0x00080960 - 0x00080975 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080960: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080971u); RECOMP_ABI_CALL(0x000808A0u, sub_000808A0); /* call 0x000808A0 */

loc_00080971: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080980
 * Original: 0x00080980 - 0x00080995 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080980: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080991u); RECOMP_ABI_CALL(0x000808A0u, sub_000808A0); /* call 0x000808A0 */

loc_00080991: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000809A0
 * Original: 0x000809A0 - 0x00080A49 (169 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000809A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000809A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    PUSH32(esp, 0x91B454);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000809BFu); RECOMP_ABI_CALL(0x000714D0u, sub_000714D0); /* call 0x000714D0 */

loc_000809BF: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000809D2u); RECOMP_ABI_CALL(0x001E4428u, sub_001E4428); /* call 0x001E4428 */

loc_000809D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080A2B; /* jne: not equal / not zero */

loc_000809D6: ;
    MEM32(0x91E06C) = 0x13;
    edx = MEM32(esi + 0x14);
    MEM32(0x916A54) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(0x916268) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(0x9150D4) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(0x916A14) = edx;
    eax = MEM32(esi + 0x10);
    edx = esi + 0x1C;
    MEM32(0x914F88) = eax;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x91B44C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x91629C) = ecx;
    MEM32(0x914F8C) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00080A2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x91E06C) = 0x14;
    MEM32(0x91623C) = 6;
    MEM32(0x916280) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080A50
 * Original: 0x00080A50 - 0x00080AB6 (102 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080A50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x91B454);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080A69u); RECOMP_ABI_CALL(0x001E440Eu, sub_001E440E); /* call 0x001E440E */

loc_00080A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080A9B; /* jne: not equal / not zero */

loc_00080A6D: ;
    MEM32(0x91E06C) = 0x15;
    eax = MEM32(esi + 0x24);
    MEM32(0x916298) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(0x915224) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(0x914F88) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x91629C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00080A9B: ;
    MEM32(0x91E06C) = 0x16;
    MEM32(0x91623C) = 6;
    MEM32(0x916280) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080AC0
 * Original: 0x00080AC0 - 0x00080B1C (92 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080AC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x91B42C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080AD9u); RECOMP_ABI_CALL(0x001E440Eu, sub_001E440E); /* call 0x001E440E */

loc_00080AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080B0B; /* jne: not equal / not zero */

loc_00080ADD: ;
    MEM32(0x91DFF8) = 0x15;
    eax = MEM32(esi + 0x24);
    MEM32(0x91626C) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(0x9150C8) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(0x915220) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x91E004) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00080B0B: ;
    MEM32(0x91DFF8) = 0x16;
    MEM32(0x916280) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080B20
 * Original: 0x00080B20 - 0x00080B57 (55 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080B20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, 0x916264);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080B38u); RECOMP_ABI_CALL(0x001E4403u, sub_001E4403); /* call 0x001E4403 */

loc_00080B38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00080B4C; /* jge: greater or equal (signed >=) */

loc_00080B3C: ;
    MEM32(0x91E230) = 0x19;
    MEM32(0x916280) = eax;
    esp += 4; return; /* ret */

loc_00080B4C: ;
    MEM32(0x91E230) = 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00080B60
 * Original: 0x00080B60 - 0x00080BC3 (99 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080B60: ;
    ecx = MEM32(0x91B454);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0x80004005u;
    if (CMP_NE(_fa, _fb)) goto loc_00080BC2; /* jne: not equal / not zero */

loc_00080B6F: ;
    PUSH32(esp, 0x00080B74u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00080B74: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x91B454);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00080B9Au); RECOMP_ABI_CALL(0x001E4446u, sub_001E4446); /* call 0x001E4446 */

loc_00080B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00080BA9; /* jl: less (signed <) */

loc_00080B9E: ;
    MEM32(0x91E06C) = 0x1B;
    esp += 4; return; /* ret */

loc_00080BA9: ;
    MEM32(0x91E06C) = 0x1C;
    MEM32(0x91623C) = 6;
    MEM32(0x916280) = eax;

loc_00080BC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080BD0
 * Original: 0x00080BD0 - 0x00080BDE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080BD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x2E6710) = eax;
    g_seh_ebp = ebp; sub_0007E700(); return; /* tail jmp 0x0007E700 */

}

/**
 * sub_00080BE0
 * Original: 0x00080BE0 - 0x00080C7C (156 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080BE0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00080BF7u); RECOMP_ABI_CALL(0x0007DBE0u, sub_0007DBE0); /* call 0x0007DBE0 */

loc_00080BF7: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00080C6C; /* je: equal / zero */

loc_00080C00: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080C0Cu); RECOMP_ABI_CALL(0x0007E520u, sub_0007E520); /* call 0x0007E520 */

loc_00080C0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00080C6C; /* jl: less (signed <) */

loc_00080C13: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080C6C; /* jb: below (unsigned <) */

loc_00080C1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00080C6C; /* ja: above (unsigned >) */

loc_00080C1F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080C35; /* je: equal / zero */

loc_00080C28: ;
    PUSH32(esp, esi);
    ecx = 0x10;
    esi = esp + 0xC;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_00080C35: ;
    _fa = (uint32_t)(MEM8(esp + 0x2C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x2C), 4 (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00080C6C; /* je: equal / zero */

loc_00080C3D: ;
    PUSH32(esp, 0x00080C42u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00080C42: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080C6C; /* jne: not equal / not zero */

loc_00080C4B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00080C51u); RECOMP_ABI_CALL(0x0007D440u, sub_0007D440); /* call 0x0007D440 */

loc_00080C51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080C6C; /* je: equal / zero */

loc_00080C59: ;
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x00080C68u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00080C68: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00080C6C: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x00080C78u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00080C78: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080C80
 * Original: 0x00080C80 - 0x00080CAA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080C80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00080C83: ;
    eax = MEM32(esi + 0x2364D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080C97; /* je: equal / zero */

loc_00080C8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080C94u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00080C94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00080C97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x34 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080C83; /* jb: below (unsigned <) */

loc_00080C9F: ;
    ecx = 0x91523C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0007EEF0(); return; /* tail jmp 0x0007EEF0 */

}

/**
 * sub_00080CB0
 * Original: 0x00080CB0 - 0x00080CDD (45 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080CB0: ;
    eax = MEM32(0x9162A4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080CBDu); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_00080CBD: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080CC9u); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_00080CC9: ;
    PUSH32(esp, 0x00080CCEu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00080CCE: ;
    PUSH32(esp, 0x00080CD3u); RECOMP_ABI_CALL(0x001E57A3u, sub_001E57A3); /* call 0x001E57A3 */

loc_00080CD3: ;
    PUSH32(esp, 0x00080CD8u); RECOMP_ABI_CALL(0x001CF800u, sub_001CF800); /* call 0x001CF800 */

loc_00080CD8: ;
    g_seh_ebp = ebp; sub_001CF7F3(); return; /* tail jmp 0x001CF7F3 */

}

/**
 * sub_00080CE0
 * Original: 0x00080CE0 - 0x00080D10 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080CE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00080DD5(); return; } /* je: equal / zero */

loc_00080CED: ;
    eax = MEM32(0x916270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00080DD5(); return; } /* jbe: below or equal (unsigned <=) */

loc_00080D02: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x916AA4;
    /* nop */

    g_seh_ebp = ebp; sub_00080D10(); return; /* fallthrough 0x00080D10 */

}

/**
 * sub_00080D10
 * Original: 0x00080D10 - 0x00080DD5 (197 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080D10: ;
    eax = esi + 0x20;
    MEM32(ebx) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + -76;
    ebp = ebx + 0x68;
    /* nop */

loc_00080D20: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080D26u); RECOMP_ABI_CALL(0x0007EE50u, sub_0007EE50); /* call 0x0007EE50 */

loc_00080D26: ;
    MEM32(ebp + -64) = eax;
    edx = ZX8(MEM8(esi + edi + 0x17C));
    PUSH32(esp, edi);
    MEM32(ebp) = edx;
    PUSH32(esp, 0x00080D3Au); RECOMP_ABI_CALL(0x0007EE70u, sub_0007EE70); /* call 0x0007EE70 */

loc_00080D3A: ;
    MEM32(ebp + -32) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080D20; /* jb: below (unsigned <) */

loc_00080D46: ;
    eax = MEM32(esi + -8);
    edi = MEM32(esi + -12);
    edx = MEM32(esi);
    ecx = MEM32(esi + -4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = eax;
    eax = MEM32(esi + -4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = ecx;
    edx = MEM32(esi + 8);
    MEM32(ebx + 0xC) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(ebx + 0x10) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ebx + 0x14) = ecx;
    edx = MEM32(esi + 0x152);
    MEM32(ebx + 0x18) = edx;
    eax = MEM32(esi + 0x16A);
    MEM32(ebx + 0x1C) = eax;
    ecx = MEM32(esi + 0x172);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(esi + -8);
    MEM32(ebx + 0x24) = edx;
    eax = MEM32(esi + 0x2A4);
    MEM32(ebx + 0x8C) = eax;
    ecx = MEM32(esi + 0x184);
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x88) = ecx;
    ecx = MEM32(0x916270);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2F4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00080D10; /* jb: below (unsigned <) */

loc_00080DD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_00080DD5(); return; /* fallthrough 0x00080DD5 */

}

/**
 * sub_00080DD5
 * Original: 0x00080DD5 - 0x00080DD7 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080DD5(void)
{

loc_00080DD5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080DE0
 * Original: 0x00080DE0 - 0x00080EB3 (211 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080DE0: ;
    eax = MEM32(0x91B440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080E16; /* je: equal / zero */

loc_00080DE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080DEFu); RECOMP_ABI_CALL(0x001CEF80u, sub_001CEF80); /* call 0x001CEF80 */

loc_00080DEF: ;
    MEM32(0x91B440) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00080E00;

    /* nop */

loc_00080E00: ;
    MEM32(eax + 0x916D48) = 0;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49D4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080E00; /* jb: below (unsigned <) */

loc_00080E16: ;
    edx = MEM32(0x916270);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00080E57; /* jbe: below or equal (unsigned <=) */

loc_00080E22: ;
    ecx = 0x916A5C;
    PUSH32(esp, edi);
    goto loc_00080E30;

    /* nop */

loc_00080E30: ;
    edi = ecx + 8;
    MEM32(eax * 4 + 0x914FA8) = edi;
    edi = ecx + 0x2C;
    MEM32(eax * 4 + 0x91E008) = ecx;
    MEM32(eax * 4 + 0x9162A8) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080E30; /* jb: below (unsigned <) */

loc_00080E56: ;
    POP32(esp, edi);

loc_00080E57: ;
    PUSH32(esp, 0x91B440);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9162A8);
    PUSH32(esp, 0x91E008);
    PUSH32(esp, 0x914FA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00080E7Fu); RECOMP_ABI_CALL(0x001CEF64u, sub_001CEF64); /* call 0x001CEF64 */

loc_00080E7F: ;
    PUSH32(esp, 0x00080E84u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00080E84: ;
    MEM32(0x916274) = eax;
    eax = MEM32(0x91B440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080EB2; /* je: equal / zero */

loc_00080E92: ;
    edx = MEM32(0x916270);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00080EB2; /* jbe: below or equal (unsigned <=) */

loc_00080E9C: ;
    ecx = 0x916D48;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00080EA4: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00080EA4; /* jne: not equal / not zero */

loc_00080EB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080EC0
 * Original: 0x00080EC0 - 0x00080EF7 (55 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080EC0: ;
    eax = MEM32(0x91B440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080EF6; /* je: equal / zero */

loc_00080EC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080ECFu); RECOMP_ABI_CALL(0x001CEF80u, sub_001CEF80); /* call 0x001CEF80 */

loc_00080ECF: ;
    MEM32(0x91B440) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00080EE0;

    /* nop */

loc_00080EE0: ;
    MEM32(eax + 0x916D48) = 0;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49D4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00080EE0; /* jb: below (unsigned <) */

loc_00080EF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080F00
 * Original: 0x00080F00 - 0x0008100A (266 bytes, 79 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00080F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x915010);
    MEM32(esp + 0xB0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00080F24u); RECOMP_ABI_CALL(0x001E4295u, sub_001E4295); /* call 0x001E4295 */

loc_00080F24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080F7C; /* jne: not equal / not zero */

loc_00080F28: ;
    PUSH32(esp, 0x915074);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00080F32u); RECOMP_ABI_CALL(0x0007E800u, sub_0007E800); /* call 0x0007E800 */

loc_00080F32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00080FE8; /* ja: above (unsigned >) */

loc_00080F41: ;
    if (CMP_B(_fa, _fb)) goto loc_00080F4E; /* jb: below (unsigned <) */

loc_00080F43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C2E2800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C2E2800u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00080FE8; /* ja: above (unsigned >) */

loc_00080F4E: ;
    SET_LO8(eax, MEM8(0x915044));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00080F64; /* jbe: below or equal (unsigned <=) */

loc_00080F57: ;
    SET_LO8(eax, MEM8(0x915045));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x91E238)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x91E238) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080FE1; /* je: equal / zero */

loc_00080F64: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080F77; /* je: equal / zero */

loc_00080F6B: ;
    ecx = 0x27;
    esi = 0x915010;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_00080F77: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00080FEA;

loc_00080F7C: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080FE8; /* je: equal / zero */

loc_00080F83: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00080FE8; /* je: equal / zero */

loc_00080F8A: ;
    ecx = 0x27;
    edi = esp + 8;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = MEM32(esp + 0x60);
    ecx = ecx | MEM32(esp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00080FE8; /* je: equal / zero */

loc_00080F9F: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00080FA9u); RECOMP_ABI_CALL(0x0007E800u, sub_0007E800); /* call 0x0007E800 */

loc_00080FA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00080FE8; /* ja: above (unsigned >) */

loc_00080FB4: ;
    if (CMP_B(_fa, _fb)) goto loc_00080FBD; /* jb: below (unsigned <) */

loc_00080FB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C2E2800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C2E2800u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00080FE8; /* ja: above (unsigned >) */

loc_00080FBD: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00080F77; /* jbe: below or equal (unsigned <=) */

loc_00080FC5: ;
    SET_LO8(eax, MEM8(esp + 0x3D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x91E238)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x91E238) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080F77; /* jne: not equal / not zero */

loc_00080FD1: ;
    ecx = 0x27;
    esi = esp + 8;
    edi = 0x915010;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_00080FE1: ;
    eax = 1;
    goto loc_00080FEA;

loc_00080FE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00080FEA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x9151FC) = ecx;
    ecx = MEM32(esp + 0xAC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081004u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00081004: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00081010
 * Original: 0x00081010 - 0x0008115F (335 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081010: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x15;
    edi = esp + 0xE;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = 0x15;
    esi = esp + 0xE;
    edi = 0x915010;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(0x916A58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x916A58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + 4);
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0x54);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(0x915038) = eax;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x91503C) = ecx;
    MEM8(0x915044) = 2;
    ebx = 1;
    if (CMP_A(_fa, _fb)) goto loc_00081093; /* ja: above (unsigned >) */

loc_0008106F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x81160); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00081076u) goto loc_00081076;
    if (_jt == 0x00081085u) goto loc_00081085;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00081076: ;
    MEM8(0x915045) = 0;
    MEM8(0x915046) = LO8(ebx);
    goto loc_0008109C;

loc_00081085: ;
    MEM8(0x915045) = LO8(ebx);
    MEM8(0x915046) = LO8(ebx);
    goto loc_0008109C;

loc_00081093: ;
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(0x915045) = LO8(edx);

loc_0008109C: ;
    PUSH32(esp, 0x000810A1u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_000810A1: ;
    edx = MEM32(eax);
    MEM32(0x915068) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x91506C) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 0x915074);
    MEM32(0x915070) = edx;
    PUSH32(esp, 0x000810C5u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_000810C5: ;
    eax = MEM32(0x916A50);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(0x91507C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915080) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(0x915084) = ecx;
    edi = MEM32(esp + 0x6C);
    edx = eax + 0x70;
    ecx = MEM32(edx);
    MEM32(0x915088) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(0x91508C) = ecx;
    edx = MEM32(edx + 8);
    MEM32(0x915090) = edx;
    ecx = eax + 0xE0;
    edx = MEM32(ecx);
    MEM32(0x915094) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x915098) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(0x91509C) = ecx;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(0x9150A0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x9150A4) = ecx;
    edx = MEM32(eax + 8);
    ecx = 0x27;
    esi = 0x915010;
    MEM32(0x9150A8) = edx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9151FC) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00081170
 * Original: 0x00081170 - 0x0008126B (251 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0008117Bu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008117B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000811A8; /* jbe: below or equal (unsigned <=) */

loc_0008117F: ;
    /* nop */

loc_00081180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00081186u); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_00081186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008119E; /* je: equal / zero */

loc_0008118D: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008119Bu); RECOMP_ABI_CALL(0x00083EE0u, sub_00083EE0); /* call 0x00083EE0 */

loc_0008119B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008119E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000811A4u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000811A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00081180; /* jb: below (unsigned <) */

loc_000811A8: ;
    PUSH32(esp, 0x000811ADu); RECOMP_ABI_CALL(0x00077D60u, sub_00077D60); /* call 0x00077D60 */

loc_000811AD: ;
    PUSH32(esp, 0x000811B2u); RECOMP_ABI_CALL(0x00072230u, sub_00072230); /* call 0x00072230 */

loc_000811B2: ;
    PUSH32(esp, 0x000811B7u); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_000811B7: ;
    PUSH32(esp, 0x000811BCu); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_000811BC: ;
    PUSH32(esp, 0x000811C1u); RECOMP_ABI_CALL(0x00072FC0u, sub_00072FC0); /* call 0x00072FC0 */

loc_000811C1: ;
    PUSH32(esp, 0x000811C6u); RECOMP_ABI_CALL(0x00070460u, sub_00070460); /* call 0x00070460 */

loc_000811C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000811CCu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_000811CC: ;
    eax = MEM32(0x9150D0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000811E6; /* jne: not equal / not zero */

loc_000811D9: ;
    PUSH32(esp, 0x9150E8);
    PUSH32(esp, 0x000811E3u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000811E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000811E6: ;
    MEM32(0x9150D0) = edi;
    MEM32(0x9147B4) = edi;
    PUSH32(esp, 0x000811F7u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000811F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00081212; /* jbe: below or equal (unsigned <=) */

loc_000811FB: ;
    goto loc_00081200;

    /* nop */

loc_00081200: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081206u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_00081206: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008120Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008120E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00081200; /* ja: above (unsigned >) */

loc_00081212: ;
    PUSH32(esp, 0x00081217u); RECOMP_ABI_CALL(0x000715F0u, sub_000715F0); /* call 0x000715F0 */

loc_00081217: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008121Du); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0008121D: ;
    eax = MEM32(0x914F74);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008123C; /* je: equal / zero */

loc_00081229: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x00081233u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_00081233: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x914F74) = edi;

loc_0008123C: ;
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(0x91B448) = eax;
    MEM32(0x91E234) = edi;
    PUSH32(esp, 0x00081257u); RECOMP_ABI_CALL(0x0007BC40u, sub_0007BC40); /* call 0x0007BC40 */

loc_00081257: ;
    eax = MEM32(0x91623C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008126A; /* je: equal / zero */

loc_00081265: ;
    g_seh_ebp = ebp; sub_0007E700(); return; /* tail jmp 0x0007E700 */

loc_0008126A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00081270
 * Original: 0x00081270 - 0x000812B3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081270: ;
    ecx = MEM32(0x91E234);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081297; /* je: equal / zero */

loc_0008127A: ;
    eax = MEM32(ecx + 0x1B6);
    edx = MEM32(ecx + 0x1AE);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x1A6);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00081297: ;
    eax = MEM32(0x91E178);
    ecx = MEM32(0x91E168);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x91E158);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000812C0
 * Original: 0x000812C0 - 0x000812CF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000812C0(void)
{

loc_000812C0: ;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000812CCu); RECOMP_ABI_CALL(0x0007EF20u, sub_0007EF20); /* call 0x0007EF20 */

loc_000812CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000812D0
 * Original: 0x000812D0 - 0x00081563 (659 bytes, 178 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000812D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000812D0: ;
    eax = MEM32(0x9150CC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000812E9; /* je: equal / zero */

loc_000812DC: ;
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, 0x000812E6u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000812E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000812E9: ;
    PUSH32(esp, 0x000812EEu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_000812EE: ;
    _fa = (uint32_t)(MEM32(0x914F74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914F74), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081315; /* je: equal / zero */

loc_000812F6: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x00081300u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_00081300: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    MEM32(0x914F74) = edi;
    MEM32(0x91B448) = eax;

loc_00081315: ;
    eax = MEM32(0x91E070);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    if (CMP_EQ(_fa, _fb)) goto loc_0008136D; /* je: equal / zero */

loc_00081323: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081329u); RECOMP_ABI_CALL(0x001E4197u, sub_001E4197); /* call 0x001E4197 */

loc_00081329: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081340; /* je: equal / zero */

loc_0008132D: ;
    ecx = MEM32(0x91E070);
    PUSH32(esp, ecx);
    goto loc_00081362;

    goto loc_00081340;

    /* nop */
    /* nop */

loc_00081340: ;
    edx = MEM32(0x91E070);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008134Cu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008134C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008135C; /* je: equal / zero */

loc_00081356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081340; /* jge: greater or equal (signed >=) */

loc_0008135A: ;
    goto loc_00081367;

loc_0008135C: ;
    eax = MEM32(0x91E070);
    PUSH32(esp, eax);

loc_00081362: ;
    PUSH32(esp, 0x00081367u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00081367: ;
    MEM32(0x91E070) = edi;

loc_0008136D: ;
    eax = MEM32(0x916290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000813AA; /* je: equal / zero */

loc_00081376: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081382; /* je: equal / zero */

loc_0008137A: ;
    PUSH32(esp, eax);
    goto loc_0008139F;

loc_0008137D: ;
    eax = MEM32(0x916290);

loc_00081382: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081388u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00081388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081398; /* je: equal / zero */

loc_00081392: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008137D; /* jge: greater or equal (signed >=) */

loc_00081396: ;
    goto loc_000813A4;

loc_00081398: ;
    ecx = MEM32(0x916290);
    PUSH32(esp, ecx);

loc_0008139F: ;
    PUSH32(esp, 0x000813A4u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_000813A4: ;
    MEM32(0x916290) = edi;

loc_000813AA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = MEM32(0x91B42C);
    if (CMP_EQ(_fa, _fb)) goto loc_000813F3; /* je: equal / zero */

loc_000813B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000813CA; /* je: equal / zero */

loc_000813B7: ;
    PUSH32(esp, 0x91B42C);
    PUSH32(esp, 0x000813C1u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000813C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91B42C) = edi;

loc_000813CA: ;
    PUSH32(esp, 0x000813CFu); RECOMP_ABI_CALL(0x000742C0u, sub_000742C0); /* call 0x000742C0 */

loc_000813CF: ;
    _fa = (uint32_t)(MEM32(0x916264)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916264), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081511; /* je: equal / zero */

loc_000813DB: ;
    PUSH32(esp, 0x916264);
    PUSH32(esp, 0x000813E5u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000813E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x916264) = edi;
    goto loc_00081511;

loc_000813F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008147E; /* je: equal / zero */

loc_000813FB: ;
    goto loc_00081400;

    /* nop */

loc_00081400: ;
    edx = MEM32(0x91B42C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008140Cu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008140C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081400; /* je: equal / zero */

loc_00081413: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00081426; /* jge: greater or equal (signed >=) */

loc_00081415: ;
    MEM32(0x91DFF8) = 0x16;
    MEM32(0x916280) = eax;
    goto loc_00081478;

loc_00081426: ;
    eax = MEM32(0x91E004);
    ecx = MEM32(0x915220);
    edx = MEM32(0x91626C);
    PUSH32(esp, eax);
    eax = MEM32(0x9150C8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B42C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008144Cu); RECOMP_ABI_CALL(0x001E4419u, sub_001E4419); /* call 0x001E4419 */

loc_0008144C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081461; /* jge: greater or equal (signed >=) */

loc_00081450: ;
    MEM32(0x91DFF8) = 0x16;
    MEM32(0x916280) = eax;
    goto loc_0008146B;

loc_00081461: ;
    MEM32(0x91DFF8) = 0x17;

loc_0008146B: ;
    PUSH32(esp, 0x91B42C);
    PUSH32(esp, 0x00081475u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00081475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00081478: ;
    MEM32(0x91B42C) = edi;

loc_0008147E: ;
    PUSH32(esp, 0x00081483u); RECOMP_ABI_CALL(0x00074290u, sub_00074290); /* call 0x00074290 */

loc_00081483: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081511; /* jne: not equal / not zero */

loc_0008148B: ;
    PUSH32(esp, esi);
    esi = 0x18;

loc_00081491: ;
    _fa = (uint32_t)(MEM32(0x916264)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916264), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081502; /* je: equal / zero */

loc_00081499: ;
    /* nop */

loc_000814A0: ;
    edx = MEM32(0x916264);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000814ACu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_000814AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000814A0; /* je: equal / zero */

loc_000814B3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000814D6; /* jge: greater or equal (signed >=) */

loc_000814B5: ;
    ebx = MEM32(0x91E230);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x916280) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E230) = ecx;
    goto loc_000814FC;

loc_000814D6: ;
    PUSH32(esp, 0x916264);
    PUSH32(esp, 0x000814E0u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000814E0: ;
    eax = MEM32(0x91E230);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E230) = edx;

loc_000814FC: ;
    MEM32(0x916264) = edi;

loc_00081502: ;
    PUSH32(esp, 0x00081507u); RECOMP_ABI_CALL(0x00079080u, sub_00079080); /* call 0x00079080 */

loc_00081507: ;
    PUSH32(esp, 0x0008150Cu); RECOMP_ABI_CALL(0x00074290u, sub_00074290); /* call 0x00074290 */

loc_0008150C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081491; /* je: equal / zero */

loc_00081510: ;
    POP32(esp, esi);

loc_00081511: ;
    PUSH32(esp, 0x00081516u); RECOMP_ABI_CALL(0x00080EC0u, sub_00080EC0); /* call 0x00080EC0 */

loc_00081516: ;
    PUSH32(esp, 0x0008151Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008151B: ;
    _fa = (uint32_t)(MEM32(0x916284)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916284), edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00081531; /* je: equal / zero */

loc_00081524: ;
    PUSH32(esp, 0x916284);
    PUSH32(esp, 0x0008152Eu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0008152E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00081531: ;
    PUSH32(esp, 0x00081536u); RECOMP_ABI_CALL(0x00084730u, sub_00084730); /* call 0x00084730 */

loc_00081536: ;
    MEM32(0x9151F8) = edi;
    MEM32(0x914F80) = edi;
    MEM32(0x91E06C) = edi;
    MEM32(0x916A50) = edi;
    PUSH32(esp, 0x00081553u); RECOMP_ABI_CALL(0x0007E7A0u, sub_0007E7A0); /* call 0x0007E7A0 */

loc_00081553: ;
    PUSH32(esp, 0x00081558u); RECOMP_ABI_CALL(0x0007E7C0u, sub_0007E7C0); /* call 0x0007E7C0 */

loc_00081558: ;
    PUSH32(esp, 0x0008155Du); RECOMP_ABI_CALL(0x0007E780u, sub_0007E780); /* call 0x0007E780 */

loc_0008155D: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0007E380(); return; /* tail jmp 0x0007E380 */

}

/**
 * sub_00081570
 * Original: 0x00081570 - 0x000817A8 (568 bytes, 135 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081570: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(0x91E06C) = 0xF;
    MEM32(0x91623C) = 0xD;
    PUSH32(esp, 0x00081590u); RECOMP_ABI_CALL(0x00080EC0u, sub_00080EC0); /* call 0x00080EC0 */

loc_00081590: ;
    esi = MEM32(esp + 0x334);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91E078)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x91E078) (32-bit) */
    MEM32(0x9150AC) = 0;
    if (CMP_B(_fa, _fb)) goto loc_000815B6; /* jb: below (unsigned <) */

loc_000815A9: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000815B6: ;
    eax = MEM32(0x914F74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000815E2; /* je: equal / zero */

loc_000815BF: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x000815C9u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_000815C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    MEM32(0x914F74) = 0;
    MEM32(0x91B448) = eax;

loc_000815E2: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x916A88;
    ebx = esi + 0x916A5C;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000815FDu); RECOMP_ABI_CALL(0x0007C7B0u, sub_0007C7B0); /* call 0x0007C7B0 */

loc_000815FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000816C2; /* jne: not equal / not zero */

loc_00081608: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    eax = MEM32(edi);
    ebx = MEM32(esi + 0x916A98);
    MEM32(0x91B444) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(0x91B448) = edx;
    edx = MEM32(edi + 8);
    MEM32(0x916A18) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(0x916A1C) = ecx;
    ecx = MEM32(esi + 0x916AA4);
    edi = esi + 0x916A58;
    MEM32(0x916A20) = edx;
    edx = MEM32(edi + 0x48);
    MEM32(0x916A24) = eax;
    eax = MEM32(edi + 0x44);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(0x914F74) = 1;
    PUSH32(esp, 0x00081668u); RECOMP_ABI_CALL(0x00071810u, sub_00071810); /* call 0x00071810 */

loc_00081668: ;
    ecx = MEM32(esi + 0x916A9C);
    eax = MEM32(esi + 0x916AA4);
    edx = MEM32(esi + 0x916AA0);
    ebx = MEM32(esi + 0x916A98);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x9150B4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x91B444);
    ecx = esi + 0x916A64;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(0x9151F0) = edx;
    MEM32(0x916288) = eax;
    PUSH32(esp, 0x000816A8u); RECOMP_ABI_CALL(0x001CEEEFu, sub_001CEEEF); /* call 0x001CEEEF */

loc_000816A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000816C2; /* jne: not equal / not zero */

loc_000816AC: ;
    _fa = (uint32_t)(MEM32(0x9150B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F000001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150B4), 0x7F000001 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000816D1; /* jne: not equal / not zero */

loc_000816B8: ;
    MEM32(0x9150AC) = 2;

loc_000816C2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0x80004005u;
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000816D1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000816D8u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_000816D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3E8);
    MEM16(0x9150B0) = 2;
    PUSH32(esp, 0x000816EEu); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_000816EE: ;
    SET_LO8(edx, MEM8(esp + 0x340));
    ecx = MEM32(0x916A50);
    MEM16(0x9150B2) = LO16(eax);
    eax = MEM32(0x916278);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    MEM8(esp + 0xE) = LO8(edx);
    edx = eax + ecx + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    MEM16(esp + 0x14) = 0x3A;
    PUSH32(esp, 0x00081723u); RECOMP_ABI_CALL(0x000AEB2Au, sub_000AEB2A); /* call 0x000AEB2A */

loc_00081723: ;
    PUSH32(esp, 0x00081728u); RECOMP_ABI_CALL(0x00070A20u, sub_00070A20); /* call 0x00070A20 */

loc_00081728: ;
    PUSH32(esp, eax);
    ecx = esp + 0x23;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081733u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_00081733: ;
    edx = MEM32(0x916278);
    eax = MEM32(0x916A50);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = MEM32(edx + eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(edx + eax + 4);
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, 0x00081755u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00081755: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x9150B0);
    PUSH32(esp, 0);
    MEM8(esp + 0x4B) = LO8(eax);
    PUSH32(esp, 0x3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081775u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00081775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000816C2; /* jle: less or equal (signed <=) */

loc_0008177D: ;
    MEM32(0x91E06C) = 0xE;
    MEM32(0x916A4C) = 0;
    MEM32(0x91E234) = edi;
    PUSH32(esp, 0x0008179Cu); RECOMP_ABI_CALL(0x00077D60u, sub_00077D60); /* call 0x00077D60 */

loc_0008179C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000817B0
 * Original: 0x000817B0 - 0x00081898 (232 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000817B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000817B0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000817B8u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000817B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000817BE; /* jne: not equal / not zero */

loc_000817BC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000817BE: ;
    PUSH32(esp, 0x000817C3u); RECOMP_ABI_CALL(0x00077D60u, sub_00077D60); /* call 0x00077D60 */

loc_000817C3: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000817F2; /* jne: not equal / not zero */

loc_000817CC: ;
    eax = MEM32(0x9150E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000817F2; /* jne: not equal / not zero */

loc_000817D5: ;
    ecx = 0x9150B0;
    PUSH32(esp, 0x000817DFu); RECOMP_ABI_CALL(0x0007DEE0u, sub_0007DEE0); /* call 0x0007DEE0 */

loc_000817DF: ;
    MEM32(0x91E06C) = 6;
    PUSH32(esp, 0x000817EEu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_000817EE: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000817F2: ;
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, 0x000817FCu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000817FC: ;
    PUSH32(esp, 0x9150E8);
    PUSH32(esp, 0x00081806u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00081806: ;
    eax = MEM32(0x91B448);
    ecx = MEM32(0x91B444);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x914F84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x9150D0) = 0;
    MEM32(0x9147B4) = 0;
    PUSH32(esp, 0x00081836u); RECOMP_ABI_CALL(0x001E4046u, sub_001E4046); /* call 0x001E4046 */

loc_00081836: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFFFF6u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    PUSH32(esp, 0x00081851u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008188F; /* jbe: below or equal (unsigned <=) */

loc_00081856: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008185Fu); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0008185F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081874; /* je: equal / zero */

loc_00081866: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008186Du); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0008186D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081866; /* jne: not equal / not zero */

loc_00081874: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008187Au); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_0008187A: ;
    PUSH32(esp, 0x0008187Fu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0008187F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00081886u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_00081886: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008188Eu); RECOMP_ABI_CALL(0x0007DEA0u, sub_0007DEA0); /* call 0x0007DEA0 */

loc_0008188E: ;
    POP32(esp, esi);

loc_0008188F: ;
    PUSH32(esp, 0x00081894u); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_00081894: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000818A0
 * Original: 0x000818A0 - 0x000818DA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000818A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000818A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000818D3; /* je: equal / zero */

loc_000818A9: ;
    PUSH32(esp, 0x000818AEu); RECOMP_ABI_CALL(0x0007D640u, sub_0007D640); /* call 0x0007D640 */

loc_000818AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000818BD; /* je: equal / zero */

loc_000818B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000818B8u); RECOMP_ABI_CALL(0x0007D670u, sub_0007D670); /* call 0x0007D670 */

loc_000818B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000818BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000818C4u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_000818C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000818CCu); RECOMP_ABI_CALL(0x00080CB0u, sub_00080CB0); /* call 0x00080CB0 */

loc_000818CC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000818D3: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000818E0
 * Original: 0x000818E0 - 0x00081907 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000818E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000818E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00081901; /* jl: less (signed <) */

loc_000818E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2E6708)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2E6708) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081901; /* jge: greater or equal (signed >=) */

loc_000818F0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000818A0(); return; /* tail jmp 0x000818A0 */

loc_00081901: ;
    eax = 0x80004005u;
    esp += 4; return; /* ret */

}

/**
 * sub_00081910
 * Original: 0x00081910 - 0x00081A67 (343 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081910: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008191Cu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0008191C: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00081925u); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_00081925: ;
    ebx = eax;
    PUSH32(esp, 0x0008192Cu); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_0008192C: ;
    edi = MEM32(0x91E078);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000819A9; /* jbe: below or equal (unsigned <=) */

loc_00081938: ;
    ecx = 0x916C0E;
    MEM32(esp + 0x10) = edi;

loc_00081941: ;
    edx = MEM32(ecx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081955; /* je: equal / zero */

loc_0008194A: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081955; /* je: equal / zero */

loc_00081950: ;
    esi = 1;

loc_00081955: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081972; /* je: equal / zero */

loc_0008195B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081964; /* jne: not equal / not zero */

loc_00081960: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008196D; /* je: equal / zero */

loc_00081964: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081972; /* jne: not equal / not zero */

loc_00081969: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081972; /* je: equal / zero */

loc_0008196D: ;
    esi = 1;

loc_00081972: ;
    _fa = (uint32_t)(MEM32(ecx + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -16), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008197C; /* jb: below (unsigned <) */

loc_00081977: ;
    _fa = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00081981; /* jbe: below or equal (unsigned <=) */

loc_0008197C: ;
    esi = 1;

loc_00081981: ;
    edx = MEM32(ecx + -358);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008198D; /* jne: not equal / not zero */

loc_0008198B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008198D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ecx + 0x136) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00081998; /* jne: not equal / not zero */

loc_00081997: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00081998: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_00081941; /* jne: not equal / not zero */

loc_000819A9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(0x916270) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00081A5F; /* je: equal / zero */

loc_000819B7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081A53; /* je: equal / zero */

loc_000819BF: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000819CBu); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000819CB: ;
    ecx = MEM32(0x91E078);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2F4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x916A58;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(0x91E078);
    ecx = MEM32(0x916270);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00081A4A; /* jbe: below or equal (unsigned <=) */

loc_000819FF: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2F4);
    ebx = 0x916A58;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    ebp = ecx;
    MEM32(esp + 0x10) = esi;

loc_00081A14: ;
    ecx = MEM32(edx + 0x2EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edx;
    ecx = 0xBD;
    if (CMP_EQ(_fa, _fb)) goto loc_00081A2F; /* je: equal / zero */

loc_00081A25: ;
    edi = ebp;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2F4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00081A37;

loc_00081A2F: ;
    edi = ebx;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2F4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00081A37: ;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2F4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00081A14; /* jne: not equal / not zero */

loc_00081A4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081A50u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_00081A50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00081A53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00080DE0(); return; /* tail jmp 0x00080DE0 */

loc_00081A5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00081A70
 * Original: 0x00081A70 - 0x00081AD0 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00081A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00081A7Bu); RECOMP_ABI_CALL(0x00072850u, sub_00072850); /* call 0x00072850 */

loc_00081A7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00081ABB; /* je: equal / zero */

loc_00081A82: ;
    PUSH32(esp, esi);
    ecx = 0x91523C;
    PUSH32(esp, 0x00081A8Du); RECOMP_ABI_CALL(0x000812C0u, sub_000812C0); /* call 0x000812C0 */

loc_00081A8D: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00081AC2; /* jge: greater or equal (signed >=) */

loc_00081A93: ;
    MEM32(0x916280) = edx;
    PUSH32(esp, 0x00081A9Eu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00081A9E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = 0x23;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00081ABB: ;
    edx = 0x8015300Fu;
    goto loc_00081A93;

loc_00081AC2: ;
    MEM32(0x91E06C) = 0x22;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00081AD0
 * Original: 0x00081AD0 - 0x00081B40 (112 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081AD0: ;
    eax = MEM32(0x9150CC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00081AEA; /* je: equal / zero */

loc_00081ADD: ;
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, 0x00081AE7u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00081AE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00081AEA: ;
    PUSH32(esp, edi);
    edi = 1;
    MEM32(0x91E080) = edi;
    MEM32(0x91E084) = ebx;
    MEM32(0x91E088) = edi;
    MEM32(0x91E08C) = ebx;
    PUSH32(esp, 0x00081B0Du); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00081B0D: ;
    ecx = MEM32(0x91E098);
    esi = eax;
    MEM32(0x91E090) = 2;
    eax = ZX8(MEM8(esi + 0x23));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081B35; /* jne: not equal / not zero */

loc_00081B28: ;
    eax = MEM32(0x91E09C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CE8(); return; } /* je: equal / zero */

loc_00081B35: ;
    MEM32(0x91E094) = edi;
    eax = ZX8(MEM8(esi + 0x23));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */

    g_seh_ebp = ebp; sub_00081B40(); return; /* fallthrough 0x00081B40 */

}

/**
 * sub_00081B40
 * Original: 0x00081B40 - 0x00081CE8 (424 bytes, 100 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081B40: ;
    MEM32(0x91E098) = eax;
    MEM32(0x91E09C) = edx;
    ecx = MEM32(0x91E0A8);
    MEM32(0x91E0A0) = 3;
    eax = ZX8(MEM8(esi + 0x24));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00081B71; /* jne: not equal / not zero */

loc_00081B64: ;
    eax = MEM32(0x91E0AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CF3(); return; } /* je: equal / zero */

loc_00081B71: ;
    MEM32(0x91E0A4) = edi;
    eax = ZX8(MEM8(esi + 0x24));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E0A8) = eax;
    MEM32(0x91E0AC) = edx;
    MEM32(0x91E0B0) = 0x100004;
    MEM32(0x91E0B4) = edi;
    MEM32(0x91E0B8) = esi;
    MEM32(0x91E1A0) = 0x13;
    eax = ZX8(MEM8(esi + 0x29));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E1A8) = eax;
    MEM32(0x91E1AC) = edx;
    MEM32(0x91E1A4) = edi;
    PUSH32(esp, 0x00081BC2u); RECOMP_ABI_CALL(0x0007D2B0u, sub_0007D2B0); /* call 0x0007D2B0 */

loc_00081BC2: ;
    PUSH32(esp, 0x00081BC7u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00081BC7: ;
    ecx = ZX8(MEM8(esi + 0x27));
    edx = ZX8(MEM8(esi + 0x26));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 0x25));
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(0x91E148);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91E140) = 0xD;
    if (CMP_NE(_fa, _fb)) goto loc_00081C0D; /* jne: not equal / not zero */

loc_00081BFF: ;
    edx = MEM32(0x91E14C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CFE(); return; } /* je: equal / zero */

loc_00081C0D: ;
    MEM32(0x91E144) = edi;
    MEM32(0x91E148) = eax;
    MEM32(0x91E14C) = ecx;
    MEM32(0x91E150) = 0xE;
    MEM32(0x91E154) = ebx;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E164) = ebx;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E174) = ebx;
    MEM32(0x91E180) = 0x11;
    MEM32(0x91E184) = ebx;
    PUSH32(esp, 0x00081C63u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081C63: ;
    edi = MEM32(0x916288);
    esi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00081C72u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081C72: ;
    ecx = MEM32(0x9151F0);
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B444);
    PUSH32(esp, eax);
    eax = MEM32(0x91B448);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081C9Fu); RECOMP_ABI_CALL(0x001E400Bu, sub_001E400B); /* call 0x001E400B */

loc_00081C9F: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    goto loc_00081CB0;

    /* nop */
    /* nop */

loc_00081CB0: ;
    MEM32(eax + 0x91E084) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00081CB0; /* jb: below (unsigned <) */

loc_00081CC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00081CE3; /* jge: greater or equal (signed >=) */

loc_00081CC4: ;
    MEM32(0x91E06C) = 9;
    MEM32(0x91623C) = 6;
    PUSH32(esp, 0x00081CDDu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_00081CDD: ;
    MEM32(0x916280) = esi;

loc_00081CE3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00081B4B
 * Original: 0x00081B4B - 0x00081CE8 (413 bytes, 98 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081B4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081B4B: ;
    ecx = MEM32(0x91E0A8);
    MEM32(0x91E0A0) = 3;
    eax = ZX8(MEM8(esi + 0x24));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00081B71; /* jne: not equal / not zero */

loc_00081B64: ;
    eax = MEM32(0x91E0AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CF3(); return; } /* je: equal / zero */

loc_00081B71: ;
    MEM32(0x91E0A4) = edi;
    eax = ZX8(MEM8(esi + 0x24));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E0A8) = eax;
    MEM32(0x91E0AC) = edx;
    MEM32(0x91E0B0) = 0x100004;
    MEM32(0x91E0B4) = edi;
    MEM32(0x91E0B8) = esi;
    MEM32(0x91E1A0) = 0x13;
    eax = ZX8(MEM8(esi + 0x29));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E1A8) = eax;
    MEM32(0x91E1AC) = edx;
    MEM32(0x91E1A4) = edi;
    PUSH32(esp, 0x00081BC2u); RECOMP_ABI_CALL(0x0007D2B0u, sub_0007D2B0); /* call 0x0007D2B0 */

loc_00081BC2: ;
    PUSH32(esp, 0x00081BC7u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00081BC7: ;
    ecx = ZX8(MEM8(esi + 0x27));
    edx = ZX8(MEM8(esi + 0x26));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 0x25));
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(0x91E148);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91E140) = 0xD;
    if (CMP_NE(_fa, _fb)) goto loc_00081C0D; /* jne: not equal / not zero */

loc_00081BFF: ;
    edx = MEM32(0x91E14C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CFE(); return; } /* je: equal / zero */

loc_00081C0D: ;
    MEM32(0x91E144) = edi;
    MEM32(0x91E148) = eax;
    MEM32(0x91E14C) = ecx;
    MEM32(0x91E150) = 0xE;
    MEM32(0x91E154) = ebx;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E164) = ebx;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E174) = ebx;
    MEM32(0x91E180) = 0x11;
    MEM32(0x91E184) = ebx;
    PUSH32(esp, 0x00081C63u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081C63: ;
    edi = MEM32(0x916288);
    esi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00081C72u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081C72: ;
    ecx = MEM32(0x9151F0);
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B444);
    PUSH32(esp, eax);
    eax = MEM32(0x91B448);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081C9Fu); RECOMP_ABI_CALL(0x001E400Bu, sub_001E400B); /* call 0x001E400B */

loc_00081C9F: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    goto loc_00081CB0;

    /* nop */
    /* nop */

loc_00081CB0: ;
    MEM32(eax + 0x91E084) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00081CB0; /* jb: below (unsigned <) */

loc_00081CC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00081CE3; /* jge: greater or equal (signed >=) */

loc_00081CC4: ;
    MEM32(0x91E06C) = 9;
    MEM32(0x91623C) = 6;
    PUSH32(esp, 0x00081CDDu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_00081CDD: ;
    MEM32(0x916280) = esi;

loc_00081CE3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00081B87
 * Original: 0x00081B87 - 0x00081CE8 (353 bytes, 84 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081B87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081B87: ;
    MEM32(0x91E0B0) = 0x100004;
    MEM32(0x91E0B4) = edi;
    MEM32(0x91E0B8) = esi;
    MEM32(0x91E1A0) = 0x13;
    eax = ZX8(MEM8(esi + 0x29));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x91E1A8) = eax;
    MEM32(0x91E1AC) = edx;
    MEM32(0x91E1A4) = edi;
    PUSH32(esp, 0x00081BC2u); RECOMP_ABI_CALL(0x0007D2B0u, sub_0007D2B0); /* call 0x0007D2B0 */

loc_00081BC2: ;
    PUSH32(esp, 0x00081BC7u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00081BC7: ;
    ecx = ZX8(MEM8(esi + 0x27));
    edx = ZX8(MEM8(esi + 0x26));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 0x25));
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(0x91E148);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91E140) = 0xD;
    if (CMP_NE(_fa, _fb)) goto loc_00081C0D; /* jne: not equal / not zero */

loc_00081BFF: ;
    edx = MEM32(0x91E14C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00081CFE(); return; } /* je: equal / zero */

loc_00081C0D: ;
    MEM32(0x91E144) = edi;
    MEM32(0x91E148) = eax;
    MEM32(0x91E14C) = ecx;
    MEM32(0x91E150) = 0xE;
    MEM32(0x91E154) = ebx;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E164) = ebx;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E174) = ebx;
    MEM32(0x91E180) = 0x11;
    MEM32(0x91E184) = ebx;
    PUSH32(esp, 0x00081C63u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081C63: ;
    edi = MEM32(0x916288);
    esi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00081C72u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081C72: ;
    ecx = MEM32(0x9151F0);
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B444);
    PUSH32(esp, eax);
    eax = MEM32(0x91B448);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081C9Fu); RECOMP_ABI_CALL(0x001E400Bu, sub_001E400B); /* call 0x001E400B */

loc_00081C9F: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    goto loc_00081CB0;

    /* nop */
    /* nop */

loc_00081CB0: ;
    MEM32(eax + 0x91E084) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00081CB0; /* jb: below (unsigned <) */

loc_00081CC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00081CE3; /* jge: greater or equal (signed >=) */

loc_00081CC4: ;
    MEM32(0x91E06C) = 9;
    MEM32(0x91623C) = 6;
    PUSH32(esp, 0x00081CDDu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_00081CDD: ;
    MEM32(0x916280) = esi;

loc_00081CE3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00081C1E
 * Original: 0x00081C1E - 0x00081CE8 (202 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081C1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081C1E: ;
    MEM32(0x91E150) = 0xE;
    MEM32(0x91E154) = ebx;
    MEM32(0x91E160) = 0xF;
    MEM32(0x91E164) = ebx;
    MEM32(0x91E170) = 0x10;
    MEM32(0x91E174) = ebx;
    MEM32(0x91E180) = 0x11;
    MEM32(0x91E184) = ebx;
    PUSH32(esp, 0x00081C63u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081C63: ;
    edi = MEM32(0x916288);
    esi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00081C72u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081C72: ;
    ecx = MEM32(0x9151F0);
    PUSH32(esp, 0x9150CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x91E080);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B444);
    PUSH32(esp, eax);
    eax = MEM32(0x91B448);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00081C9Fu); RECOMP_ABI_CALL(0x001E400Bu, sub_001E400B); /* call 0x001E400B */

loc_00081C9F: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    goto loc_00081CB0;

    /* nop */
    /* nop */

loc_00081CB0: ;
    MEM32(eax + 0x91E084) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00081CB0; /* jb: below (unsigned <) */

loc_00081CC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081CE3; /* jge: greater or equal (signed >=) */

loc_00081CC4: ;
    MEM32(0x91E06C) = 9;
    MEM32(0x91623C) = 6;
    PUSH32(esp, 0x00081CDDu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_00081CDD: ;
    MEM32(0x916280) = esi;

loc_00081CE3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00081CE8
 * Original: 0x00081CE8 - 0x00081CF3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081CE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081CE8: ;
    MEM32(0x91E094) = ebx;
    g_seh_ebp = ebp; sub_00081B4B(); return; /* tail jmp 0x00081B4B */

}

/**
 * sub_00081CF3
 * Original: 0x00081CF3 - 0x00081CFE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081CF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081CF3: ;
    MEM32(0x91E0A4) = ebx;
    g_seh_ebp = ebp; sub_00081B87(); return; /* tail jmp 0x00081B87 */

}

/**
 * sub_00081CFE
 * Original: 0x00081CFE - 0x00081D10 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081CFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081CFE: ;
    MEM32(0x91E144) = ebx;
    g_seh_ebp = ebp; sub_00081C1E(); return; /* tail jmp 0x00081C1E */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00081D10
 * Original: 0x00081D10 - 0x00081D70 (96 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00081D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x1034;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081D20u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_00081D20: ;
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1034) = eax;
    eax = MEM32(0x9162A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000824DE(); return; } /* je: equal / zero */

loc_00081D3D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1030;
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081D65u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_00081D65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000824DE(); return; } /* jle: less or equal (signed <=) */

loc_00081D6D: ;
    /* nop */

    g_seh_ebp = ebp; sub_00081D70(); return; /* fallthrough 0x00081D70 */

}

/**
 * sub_00081D70
 * Original: 0x00081D70 - 0x00081FD0 (608 bytes, 151 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081D70: ;
    SET_LO8(edx, MEM8(esp + 0x3A));
    eax = ZX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_000824AB(); return; } /* ja: above (unsigned >) */

loc_00081D80: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x824F4); /* switch: 2 entries, 1 targets */
    if (_jt == 0x00081D87u) goto loc_00081D87;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00081D87: ;
    PUSH32(esp, 0x00081D8Cu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00081D8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000824AB(); return; } /* je: equal / zero */

loc_00081D94: ;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    esi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081DB9; /* jne: not equal / not zero */

loc_00081DAB: ;
    esi = MEM32(esp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000824AB(); return; } /* je: equal / zero */

loc_00081DB9: ;
    SET_LO8(eax, LO8(edx));
    PUSH32(esp, 0x00081DC0u); RECOMP_ABI_CALL(0x0007C7D0u, sub_0007C7D0); /* call 0x0007C7D0 */

loc_00081DC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081DFC; /* jne: not equal / not zero */

loc_00081DC4: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    edx = esp + 0x1030;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    eax = esp + 0x9D8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0x9E0) = 1;
    MEM8(esp + 0x9E2) = 3;
    PUSH32(esp, 0x00081DF7u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00081DF7: ;
    g_seh_ebp = ebp; sub_000824AB(); return; /* tail jmp 0x000824AB */

loc_00081DFC: ;
    PUSH32(esp, 0x00081E01u); RECOMP_ABI_CALL(0x0007CEB0u, sub_0007CEB0); /* call 0x0007CEB0 */

loc_00081E01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* je: equal / zero */

loc_00081E09: ;
    _fa = (uint32_t)(MEM32(0x9150C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150C4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* je: equal / zero */

loc_00081E16: ;
    PUSH32(esp, 0x00081E1Bu); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00081E1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* jne: not equal / not zero */

loc_00081E23: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081E32u); RECOMP_ABI_CALL(0x00071540u, sub_00071540); /* call 0x00071540 */

loc_00081E32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* jne: not equal / not zero */

loc_00081E3E: ;
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00081E4Du); RECOMP_ABI_CALL(0x00073370u, sub_00073370); /* call 0x00073370 */

loc_00081E4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* je: equal / zero */

loc_00081E59: ;
    PUSH32(esp, 0x00081E5Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081E71; /* jne: not equal / not zero */

loc_00081E63: ;
    PUSH32(esp, 0x00081E68u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00081E68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008203E(); return; } /* jne: not equal / not zero */

loc_00081E71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00081E77u); RECOMP_ABI_CALL(0x0007CEA0u, sub_0007CEA0); /* call 0x0007CEA0 */

loc_00081E77: ;
    SET_LO8(eax, MEM8(esp + 0x3E));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00081E99; /* jne: not equal / not zero */

loc_00081E87: ;
    PUSH32(esp, 0x00081E8Cu); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081E8C: ;
    _fa = (uint32_t)(MEM32(0x916288)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916288), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00081E99; /* jbe: below or equal (unsigned <=) */

loc_00081E94: ;
    MEM8(esp + 0x14) = 1;

loc_00081E99: ;
    eax = MEM32(esp + 0x1030);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x916218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081EACu); RECOMP_ABI_CALL(0x001CF300u, sub_001CF300); /* call 0x001CF300 */

loc_00081EAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008202F(); return; } /* jne: not equal / not zero */

loc_00081EB4: ;
    ecx = MEM32(esp + 0x1030);
    PUSH32(esp, 0x3E8);
    MEM16(0x9150D8) = 2;
    MEM32(0x9150DC) = ecx;
    PUSH32(esp, 0x00081ED4u); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_00081ED4: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x9150D8);
    MEM16(0x9150DA) = LO16(eax);
    eax = esp + 0x43;
    PUSH32(esp, 0x916218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081EF3u); RECOMP_ABI_CALL(0x0007BD30u, sub_0007BD30); /* call 0x0007BD30 */

loc_00081EF3: ;
    PUSH32(esp, 0x00081EF8u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081EF8: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00081F05u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081F05: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x39;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    edx = esp + 0x6AB;
    ecx = ebx + -2;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM16(esp + 0x6AC) = LO16(ecx);
    MEM16(esp + 0x37C) = LO16(eax);
    MEM8(esp + 0x6AE) = 0xA;
    MEM8(esp + 0x37E) = 2;
    PUSH32(esp, 0x00081F42u); RECOMP_ABI_CALL(0x0007A090u, sub_0007A090); /* call 0x0007A090 */

loc_00081F42: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00081F49u); RECOMP_ABI_CALL(0x00070B40u, sub_00070B40); /* call 0x00070B40 */

loc_00081F49: ;
    SET_LO8(eax, MEM8(esp + 0x6B3));
    ecx = MEM32(esp + 0x6B4);
    MEM8(esp + 0x3B4) = LO8(eax);
    MEM32(esp + 0x3B5) = ecx;
    PUSH32(esp, 0x00081F6Au); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081F6A: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x6B8;
    edi = esp + 0x3B9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, 0x00081F90u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00081F90: ;
    esi = eax;
    ecx = 0xC;
    edi = esp + 0x383;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x00081FAEu); RECOMP_ABI_CALL(0x00078880u, sub_00078880); /* call 0x00078880 */

loc_00081FAE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00081FB6u); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_00081FB6: ;
    PUSH32(esp, 0x00081FBBu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00081FBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081FC1u); RECOMP_ABI_CALL(0x00070B30u, sub_00070B30); /* call 0x00070B30 */

loc_00081FC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00081FCBu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00082023(); return; } /* jbe: below or equal (unsigned <=) */

loc_00081FCF: ;
    /* nop */

    g_seh_ebp = ebp; sub_00081FD0(); return; /* fallthrough 0x00081FD0 */

}

/**
 * sub_00081D87
 * Original: 0x00081D87 - 0x000824F1 (1898 bytes, 217 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081D87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081D87: ;
    PUSH32(esp, 0x00081D8Cu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00081D8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00081D94: ;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    esi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081DB9; /* jne: not equal / not zero */

loc_00081DAB: ;
    esi = MEM32(esp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00081DB9: ;
    SET_LO8(eax, LO8(edx));
    PUSH32(esp, 0x00081DC0u); RECOMP_ABI_CALL(0x0007C7D0u, sub_0007C7D0); /* call 0x0007C7D0 */

loc_00081DC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081DFC; /* jne: not equal / not zero */

loc_00081DC4: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    edx = esp + 0x1030;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    eax = esp + 0x9D8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0x9E0) = 1;
    MEM8(esp + 0x9E2) = 3;
    PUSH32(esp, 0x00081DF7u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00081DF7: ;
    goto loc_000824AB;

loc_00081DFC: ;
    PUSH32(esp, 0x00081E01u); RECOMP_ABI_CALL(0x0007CEB0u, sub_0007CEB0); /* call 0x0007CEB0 */

loc_00081E01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008203E; /* je: equal / zero */

loc_00081E09: ;
    _fa = (uint32_t)(MEM32(0x9150C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150C4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008203E; /* je: equal / zero */

loc_00081E16: ;
    PUSH32(esp, 0x00081E1Bu); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00081E1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008203E; /* jne: not equal / not zero */

loc_00081E23: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081E32u); RECOMP_ABI_CALL(0x00071540u, sub_00071540); /* call 0x00071540 */

loc_00081E32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008203E; /* jne: not equal / not zero */

loc_00081E3E: ;
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00081E4Du); RECOMP_ABI_CALL(0x00073370u, sub_00073370); /* call 0x00073370 */

loc_00081E4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008203E; /* je: equal / zero */

loc_00081E59: ;
    PUSH32(esp, 0x00081E5Eu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081E71; /* jne: not equal / not zero */

loc_00081E63: ;
    PUSH32(esp, 0x00081E68u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00081E68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008203E; /* jne: not equal / not zero */

loc_00081E71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00081E77u); RECOMP_ABI_CALL(0x0007CEA0u, sub_0007CEA0); /* call 0x0007CEA0 */

loc_00081E77: ;
    SET_LO8(eax, MEM8(esp + 0x3E));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00081E99; /* jne: not equal / not zero */

loc_00081E87: ;
    PUSH32(esp, 0x00081E8Cu); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00081E8C: ;
    _fa = (uint32_t)(MEM32(0x916288)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916288), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00081E99; /* jbe: below or equal (unsigned <=) */

loc_00081E94: ;
    MEM8(esp + 0x14) = 1;

loc_00081E99: ;
    eax = MEM32(esp + 0x1030);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x916218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081EACu); RECOMP_ABI_CALL(0x001CF300u, sub_001CF300); /* call 0x001CF300 */

loc_00081EAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008202F; /* jne: not equal / not zero */

loc_00081EB4: ;
    ecx = MEM32(esp + 0x1030);
    PUSH32(esp, 0x3E8);
    MEM16(0x9150D8) = 2;
    MEM32(0x9150DC) = ecx;
    PUSH32(esp, 0x00081ED4u); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_00081ED4: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x9150D8);
    MEM16(0x9150DA) = LO16(eax);
    eax = esp + 0x43;
    PUSH32(esp, 0x916218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081EF3u); RECOMP_ABI_CALL(0x0007BD30u, sub_0007BD30); /* call 0x0007BD30 */

loc_00081EF3: ;
    PUSH32(esp, 0x00081EF8u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081EF8: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00081F05u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081F05: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x39;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    edx = esp + 0x6AB;
    ecx = ebx + -2;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM16(esp + 0x6AC) = LO16(ecx);
    MEM16(esp + 0x37C) = LO16(eax);
    MEM8(esp + 0x6AE) = 0xA;
    MEM8(esp + 0x37E) = 2;
    PUSH32(esp, 0x00081F42u); RECOMP_ABI_CALL(0x0007A090u, sub_0007A090); /* call 0x0007A090 */

loc_00081F42: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00081F49u); RECOMP_ABI_CALL(0x00070B40u, sub_00070B40); /* call 0x00070B40 */

loc_00081F49: ;
    SET_LO8(eax, MEM8(esp + 0x6B3));
    ecx = MEM32(esp + 0x6B4);
    MEM8(esp + 0x3B4) = LO8(eax);
    MEM32(esp + 0x3B5) = ecx;
    PUSH32(esp, 0x00081F6Au); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081F6A: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x6B8;
    edi = esp + 0x3B9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, 0x00081F90u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00081F90: ;
    esi = eax;
    ecx = 0xC;
    edi = esp + 0x383;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x00081FAEu); RECOMP_ABI_CALL(0x00078880u, sub_00078880); /* call 0x00078880 */

loc_00081FAE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00081FB6u); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_00081FB6: ;
    PUSH32(esp, 0x00081FBBu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00081FBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081FC1u); RECOMP_ABI_CALL(0x00070B30u, sub_00070B30); /* call 0x00070B30 */

loc_00081FC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00081FCBu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00082023; /* jbe: below or equal (unsigned <=) */

loc_00081FCF: ;
    /* nop */

loc_00081FD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081FD6u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_00081FD6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082019; /* je: equal / zero */

loc_00081FDF: ;
    PUSH32(esp, 0x00081FE4u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081FE4: ;
    PUSH32(esp, 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00082004; /* jne: not equal / not zero */

loc_00081FEE: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(0x9162A4);
    PUSH32(esp, eax);
    ecx = esp + 0x378;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_00082014;

loc_00082004: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, ebx);
    eax = esp + 0x6A8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00082014: ;
    PUSH32(esp, 0x00082019u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00082019: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008201Fu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008201F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00081FD0; /* jb: below (unsigned <) */

loc_00082023: ;
    PUSH32(esp, 0x00082028u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082028: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000824AB;

loc_0008202F: ;
    PUSH32(esp, 0x236568);
    PUSH32(esp, 0x00082039u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_00082039: ;
    goto loc_000824AB;

loc_0008203E: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    edx = esp + 0x1030;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    eax = esp + 0xD08;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0xD10) = 1;
    MEM8(esp + 0xD12) = 0x11;
    PUSH32(esp, 0x00082071u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00082071: ;
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00081FD0
 * Original: 0x00081FD0 - 0x00082023 (83 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081FD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081FD6u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_00081FD6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082019; /* je: equal / zero */

loc_00081FDF: ;
    PUSH32(esp, 0x00081FE4u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00081FE4: ;
    PUSH32(esp, 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00082004; /* jne: not equal / not zero */

loc_00081FEE: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(0x9162A4);
    PUSH32(esp, eax);
    ecx = esp + 0x378;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_00082014;

loc_00082004: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, ebx);
    eax = esp + 0x6A8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00082014: ;
    PUSH32(esp, 0x00082019u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00082019: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008201Fu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008201F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00081FD0; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_00082023(); return; /* fallthrough 0x00082023 */

}

/**
 * sub_00082023
 * Original: 0x00082023 - 0x0008202F (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082023: ;
    PUSH32(esp, 0x00082028u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082028: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000824AB(); return; /* tail jmp 0x000824AB */

}

/**
 * sub_0008202F
 * Original: 0x0008202F - 0x0008203E (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008202F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008202F: ;
    PUSH32(esp, 0x236568);
    PUSH32(esp, 0x00082039u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_00082039: ;
    g_seh_ebp = ebp; sub_000824AB(); return; /* tail jmp 0x000824AB */

}

/**
 * sub_0008203E
 * Original: 0x0008203E - 0x000824DE (1184 bytes, 290 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008203E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008203E: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    edx = esp + 0x1030;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    eax = esp + 0xD08;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0xD10) = 1;
    MEM8(esp + 0xD12) = 0x11;
    PUSH32(esp, 0x00082071u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_00082071: ;
    goto loc_000824AB;

    eax = MEM32(0x91E06C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082099; /* jne: not equal / not zero */

loc_00082080: ;
    PUSH32(esp, 0x00082085u); RECOMP_ABI_CALL(0x00070B20u, sub_00070B20); /* call 0x00070B20 */

loc_00082085: ;
    _fa = (uint32_t)(MEM32(esp + 0x6D)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x6D), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_0008208F: ;
    PUSH32(esp, 0x00082094u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_00082094: ;
    goto loc_000824AB;

loc_00082099: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_000820A2: ;
    edx = MEM32(esp + 0x1030);
    PUSH32(esp, 0x3E8);
    MEM16(0x9150B0) = 2;
    MEM32(0x9150B4) = edx;
    PUSH32(esp, 0x000820C2u); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_000820C2: ;
    MEM16(0x9150B2) = LO16(eax);
    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000820D2u); RECOMP_ABI_CALL(0x0007A1B0u, sub_0007A1B0); /* call 0x0007A1B0 */

loc_000820D2: ;
    PUSH32(esp, 0x000820D7u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_000820D7: ;
    PUSH32(esp, 0x000820DCu); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000820DC: ;
    PUSH32(esp, 0x000820E1u); RECOMP_ABI_CALL(0x00072860u, sub_00072860); /* call 0x00072860 */

loc_000820E1: ;
    PUSH32(esp, 0x000820E6u); RECOMP_ABI_CALL(0x0007EB10u, sub_0007EB10); /* call 0x0007EB10 */

loc_000820E6: ;
    PUSH32(esp, 0x000820EBu); RECOMP_ABI_CALL(0x0007EB70u, sub_0007EB70); /* call 0x0007EB70 */

loc_000820EB: ;
    MEM32(0x91E06C) = 0xA;
    MEM32(0x9150D0) = ebx;
    MEM32(0x9147B4) = ebx;
    MEM32(0x9151F8) = 1;
    PUSH32(esp, 0x00082110u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_00082110: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00082117u); RECOMP_ABI_CALL(0x00073360u, sub_00073360); /* call 0x00073360 */

loc_00082117: ;
    ecx = MEM32(0x91E234);
    eax = MEM32(ecx + 0x50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082178; /* jne: not equal / not zero */

loc_00082127: ;
    ecx = MEM32(0x916278);
    eax = MEM32(0x916A50);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1D) = edx;
    MEM32(esp + 0x21) = edx;
    MEM32(esp + 0x25) = edx;
    MEM32(esp + 0x29) = edx;
    MEM32(esp + 0x2D) = edx;
    MEM32(esp + 0x31) = edx;
    edx = MEM32(ecx + eax);
    eax = MEM32(ecx + eax + 4);
    ecx = esp + 0x102C;
    MEM32(esp + 0x1D) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM8(esp + 0x24) = 0x18;
    MEM32(esp + 0x29) = eax;
    PUSH32(esp, 0x00082175u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_00082175: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00082178: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008217Eu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_0008217E: ;
    goto loc_000824A8;

    PUSH32(esp, 0x00082188u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00082188: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082190: ;
    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008219Au); RECOMP_ABI_CALL(0x0007A0F0u, sub_0007A0F0); /* call 0x0007A0F0 */

loc_0008219A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000821A2u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_000821A2: ;
    PUSH32(esp, 0x000821A7u); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000821A7: ;
    goto loc_000824AB;

    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x11 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x91B444);
    MEM32(0x91E06C) = 0xF;
    MEM32(0x91623C) = 0xD;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9150AC) = ecx;
    PUSH32(esp, 0x000821DBu); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_000821DB: ;
    MEM32(0x914F74) = ebx;
    goto loc_000824A8;

    edx = MEM32(esp + 0x1030);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000821F3u); RECOMP_ABI_CALL(0x00070A90u, sub_00070A90); /* call 0x00070A90 */

loc_000821F3: ;
    goto loc_000824A8;

    eax = MEM32(esp + 0x1030);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082205u); RECOMP_ABI_CALL(0x000718C0u, sub_000718C0); /* call 0x000718C0 */

loc_00082205: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082210: ;
    ecx = ZX8(MEM8(esp + 0x3B));
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082227u); RECOMP_ABI_CALL(0x00083F50u, sub_00083F50); /* call 0x00083F50 */

loc_00082227: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

    edx = esp + 0x102C;
    PUSH32(esp, edx);
    eax = esp + 0x3F;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082241u); RECOMP_ABI_CALL(0x00079360u, sub_00079360); /* call 0x00079360 */

loc_00082241: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

    ecx = esp + 0x102C;
    PUSH32(esp, ecx);
    edx = esp + 0x3F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008225Bu); RECOMP_ABI_CALL(0x0007A280u, sub_0007A280); /* call 0x0007A280 */

loc_0008225B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

    eax = MEM32(esp + 0x3F);
    ecx = MEM32(esp + 0x3B);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082272u); RECOMP_ABI_CALL(0x00079F80u, sub_00079F80); /* call 0x00079F80 */

loc_00082272: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008227Au); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008227A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00082284; /* jbe: below or equal (unsigned <=) */

loc_0008227F: ;
    PUSH32(esp, 0x00082284u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_00082284: ;
    _fa = (uint32_t)(MEM32(0x9150CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150CC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000822A3; /* je: equal / zero */

loc_0008228C: ;
    PUSH32(esp, 0x00082291u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082291: ;
    goto loc_000824AB;

    PUSH32(esp, 0x0008229Bu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008229B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_000822A3: ;
    PUSH32(esp, 0x000822A8u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_000822A8: ;
    goto loc_000824AB;

    edx = MEM32(esp + 0x1030);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x9147C8);
    PUSH32(esp, edx);
    MEM32(0x914F74) = ebx;
    PUSH32(esp, 0x000822C6u); RECOMP_ABI_CALL(0x001CF300u, sub_001CF300); /* call 0x001CF300 */

loc_000822C6: ;
    esi = MEM32(0x916240);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000822DA; /* jne: not equal / not zero */

loc_000822D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000822D7u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_000822D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000822DA: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x000822E4u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_000822E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082310; /* je: equal / zero */

loc_000822EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    MEM32(0x91E06C) = 0x12;
    MEM32(0x91623C) = 6;
    MEM32(0x91B448) = eax;
    goto loc_000824AB;

loc_00082310: ;
    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    edx = esp + 0x4F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008231Fu); RECOMP_ABI_CALL(0x0007C7B0u, sub_0007C7B0); /* call 0x0007C7B0 */

loc_0008231F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000823C5; /* jne: not equal / not zero */

loc_0008232A: ;
    eax = MEM32(esp + 0x4B);
    ecx = MEM32(esp + 0x4F);
    edx = MEM32(esp + 0x3B);
    MEM32(0x91B444) = eax;
    eax = MEM32(esp + 0x3F);
    MEM32(0x91B448) = ecx;
    ecx = MEM32(esp + 0x43);
    MEM32(0x916A18) = edx;
    edx = MEM32(esp + 0x47);
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    MEM32(0x914F74) = 1;
    MEM32(0x916A1C) = eax;
    MEM32(0x916A20) = ecx;
    MEM32(0x916A24) = edx;
    PUSH32(esp, 0x0008237Du); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0008237D: ;
    PUSH32(esp, 0x9150B0);
    PUSH32(esp, 0x9147C8);
    PUSH32(esp, 0x0008238Cu); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0008238C: ;
    eax = esp + 0x63;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082396u); RECOMP_ABI_CALL(0x0007A0F0u, sub_0007A0F0); /* call 0x0007A0F0 */

loc_00082396: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008239Eu); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_0008239E: ;
    edi = 0x9150B0;
    PUSH32(esp, 0x000823A8u); RECOMP_ABI_CALL(0x0007DF40u, sub_0007DF40); /* call 0x0007DF40 */

loc_000823A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000823B6; /* jne: not equal / not zero */

loc_000823AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000823B3u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_000823B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000823B6: ;
    PUSH32(esp, 0x000823BBu); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000823BB: ;
    PUSH32(esp, 0x000823C0u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_000823C0: ;
    goto loc_000824AB;

loc_000823C5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = ecx;
    MEM32(0x91B448) = ecx;
    MEM32(0x91E06C) = 0x12;
    MEM32(0x91623C) = 6;
    goto loc_000824AB;

    PUSH32(esp, 0x000823F1u); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_000823F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_000823FA: ;
    PUSH32(esp, 0x000823FFu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000823FF: ;
    ecx = MEM32(esp + 0x3B);
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000824AB; /* jae: above or equal (unsigned >=) */

loc_0008240E: ;
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082419u); RECOMP_ABI_CALL(0x000709B0u, sub_000709B0); /* call 0x000709B0 */

loc_00082419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

    PUSH32(esp, 0x00082426u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00082426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082457; /* je: equal / zero */

loc_0008242A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082430u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_00082430: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082437: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1030)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1030) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_00082443: ;
    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008244Du); RECOMP_ABI_CALL(0x00071770u, sub_00071770); /* call 0x00071770 */

loc_0008244D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00082455u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082455: ;
    goto loc_000824AB;

loc_00082457: ;
    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082461u); RECOMP_ABI_CALL(0x00071770u, sub_00071770); /* call 0x00071770 */

loc_00082461: ;
    goto loc_000824A8;

    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008246Du); RECOMP_ABI_CALL(0x0007AC60u, sub_0007AC60); /* call 0x0007AC60 */

loc_0008246D: ;
    goto loc_000824A8;

    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082479u); RECOMP_ABI_CALL(0x000770C0u, sub_000770C0); /* call 0x000770C0 */

loc_00082479: ;
    goto loc_000824A8;

    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082485u); RECOMP_ABI_CALL(0x00078160u, sub_00078160); /* call 0x00078160 */

loc_00082485: ;
    goto loc_000824A8;

    eax = esp + 0x102C;
    PUSH32(esp, eax);
    ecx = esp + 0x3F;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082499u); RECOMP_ABI_CALL(0x000782A0u, sub_000782A0); /* call 0x000782A0 */

loc_00082499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000824A8u); RECOMP_ABI_CALL(0x0007EBF0u, sub_0007EBF0); /* call 0x0007EBF0 */

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

    g_seh_ebp = ebp; sub_000824DE(); return; /* fallthrough 0x000824DE */

}

/**
 * sub_00082076
 * Original: 0x00082076 - 0x000824F1 (1147 bytes, 83 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082076(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082076: ;
    eax = MEM32(0x91E06C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082099; /* jne: not equal / not zero */

loc_00082080: ;
    PUSH32(esp, 0x00082085u); RECOMP_ABI_CALL(0x00070B20u, sub_00070B20); /* call 0x00070B20 */

loc_00082085: ;
    _fa = (uint32_t)(MEM32(esp + 0x6D)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x6D), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_0008208F: ;
    PUSH32(esp, 0x00082094u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_00082094: ;
    goto loc_000824AB;

loc_00082099: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_000820A2: ;
    edx = MEM32(esp + 0x1030);
    PUSH32(esp, 0x3E8);
    MEM16(0x9150B0) = 2;
    MEM32(0x9150B4) = edx;
    PUSH32(esp, 0x000820C2u); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_000820C2: ;
    MEM16(0x9150B2) = LO16(eax);
    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000820D2u); RECOMP_ABI_CALL(0x0007A1B0u, sub_0007A1B0); /* call 0x0007A1B0 */

loc_000820D2: ;
    PUSH32(esp, 0x000820D7u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_000820D7: ;
    PUSH32(esp, 0x000820DCu); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000820DC: ;
    PUSH32(esp, 0x000820E1u); RECOMP_ABI_CALL(0x00072860u, sub_00072860); /* call 0x00072860 */

loc_000820E1: ;
    PUSH32(esp, 0x000820E6u); RECOMP_ABI_CALL(0x0007EB10u, sub_0007EB10); /* call 0x0007EB10 */

loc_000820E6: ;
    PUSH32(esp, 0x000820EBu); RECOMP_ABI_CALL(0x0007EB70u, sub_0007EB70); /* call 0x0007EB70 */

loc_000820EB: ;
    MEM32(0x91E06C) = 0xA;
    MEM32(0x9150D0) = ebx;
    MEM32(0x9147B4) = ebx;
    MEM32(0x9151F8) = 1;
    PUSH32(esp, 0x00082110u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_00082110: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00082117u); RECOMP_ABI_CALL(0x00073360u, sub_00073360); /* call 0x00073360 */

loc_00082117: ;
    ecx = MEM32(0x91E234);
    eax = MEM32(ecx + 0x50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082178; /* jne: not equal / not zero */

loc_00082127: ;
    ecx = MEM32(0x916278);
    eax = MEM32(0x916A50);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1D) = edx;
    MEM32(esp + 0x21) = edx;
    MEM32(esp + 0x25) = edx;
    MEM32(esp + 0x29) = edx;
    MEM32(esp + 0x2D) = edx;
    MEM32(esp + 0x31) = edx;
    edx = MEM32(ecx + eax);
    eax = MEM32(ecx + eax + 4);
    ecx = esp + 0x102C;
    MEM32(esp + 0x1D) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM8(esp + 0x24) = 0x18;
    MEM32(esp + 0x29) = eax;
    PUSH32(esp, 0x00082175u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_00082175: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00082178: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008217Eu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_0008217E: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082183
 * Original: 0x00082183 - 0x000824F1 (878 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082183(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082183: ;
    PUSH32(esp, 0x00082188u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00082188: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082190: ;
    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008219Au); RECOMP_ABI_CALL(0x0007A0F0u, sub_0007A0F0); /* call 0x0007A0F0 */

loc_0008219A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000821A2u); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_000821A2: ;
    PUSH32(esp, 0x000821A7u); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000821A7: ;
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000821AC
 * Original: 0x000821AC - 0x000824F1 (837 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000821AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000821AC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x11 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x91B444);
    MEM32(0x91E06C) = 0xF;
    MEM32(0x91623C) = 0xD;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9150AC) = ecx;
    PUSH32(esp, 0x000821DBu); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_000821DB: ;
    MEM32(0x914F74) = ebx;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000821E6
 * Original: 0x000821E6 - 0x000824F1 (779 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000821E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000821E6: ;
    edx = MEM32(esp + 0x1030);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000821F3u); RECOMP_ABI_CALL(0x00070A90u, sub_00070A90); /* call 0x00070A90 */

loc_000821F3: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000821F8
 * Original: 0x000821F8 - 0x000824F1 (761 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000821F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000821F8: ;
    eax = MEM32(esp + 0x1030);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082205u); RECOMP_ABI_CALL(0x000718C0u, sub_000718C0); /* call 0x000718C0 */

loc_00082205: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082210: ;
    ecx = ZX8(MEM8(esp + 0x3B));
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082227u); RECOMP_ABI_CALL(0x00083F50u, sub_00083F50); /* call 0x00083F50 */

loc_00082227: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008222F
 * Original: 0x0008222F - 0x000824F1 (706 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008222F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008222F: ;
    edx = esp + 0x102C;
    PUSH32(esp, edx);
    eax = esp + 0x3F;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082241u); RECOMP_ABI_CALL(0x00079360u, sub_00079360); /* call 0x00079360 */

loc_00082241: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082249
 * Original: 0x00082249 - 0x000824F1 (680 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082249: ;
    ecx = esp + 0x102C;
    PUSH32(esp, ecx);
    edx = esp + 0x3F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008225Bu); RECOMP_ABI_CALL(0x0007A280u, sub_0007A280); /* call 0x0007A280 */

loc_0008225B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082263
 * Original: 0x00082263 - 0x000824F1 (654 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082263: ;
    eax = MEM32(esp + 0x3F);
    ecx = MEM32(esp + 0x3B);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082272u); RECOMP_ABI_CALL(0x00079F80u, sub_00079F80); /* call 0x00079F80 */

loc_00082272: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008227Au); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008227A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00082284; /* jbe: below or equal (unsigned <=) */

loc_0008227F: ;
    PUSH32(esp, 0x00082284u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_00082284: ;
    _fa = (uint32_t)(MEM32(0x9150CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150CC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000822A3; /* je: equal / zero */

loc_0008228C: ;
    PUSH32(esp, 0x00082291u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082291: ;
    goto loc_000824AB;

loc_000822A3: ;
    PUSH32(esp, 0x000822A8u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_000822A8: ;
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082296
 * Original: 0x00082296 - 0x000824F1 (603 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082296(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082296: ;
    PUSH32(esp, 0x0008229Bu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008229B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_000822A3: ;
    PUSH32(esp, 0x000822A8u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_000822A8: ;
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000822AD
 * Original: 0x000822AD - 0x000824F1 (580 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000822AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000822AD: ;
    edx = MEM32(esp + 0x1030);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x9147C8);
    PUSH32(esp, edx);
    MEM32(0x914F74) = ebx;
    PUSH32(esp, 0x000822C6u); RECOMP_ABI_CALL(0x001CF300u, sub_001CF300); /* call 0x001CF300 */

loc_000822C6: ;
    esi = MEM32(0x916240);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000822DA; /* jne: not equal / not zero */

loc_000822D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000822D7u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_000822D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000822DA: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x000822E4u); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_000822E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082310; /* je: equal / zero */

loc_000822EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = eax;
    MEM32(0x91E06C) = 0x12;
    MEM32(0x91623C) = 6;
    MEM32(0x91B448) = eax;
    goto loc_000824AB;

loc_00082310: ;
    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    edx = esp + 0x4F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008231Fu); RECOMP_ABI_CALL(0x0007C7B0u, sub_0007C7B0); /* call 0x0007C7B0 */

loc_0008231F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000823C5; /* jne: not equal / not zero */

loc_0008232A: ;
    eax = MEM32(esp + 0x4B);
    ecx = MEM32(esp + 0x4F);
    edx = MEM32(esp + 0x3B);
    MEM32(0x91B444) = eax;
    eax = MEM32(esp + 0x3F);
    MEM32(0x91B448) = ecx;
    ecx = MEM32(esp + 0x43);
    MEM32(0x916A18) = edx;
    edx = MEM32(esp + 0x47);
    PUSH32(esp, 0x91B458);
    PUSH32(esp, 0x916A28);
    MEM32(0x914F74) = 1;
    MEM32(0x916A1C) = eax;
    MEM32(0x916A20) = ecx;
    MEM32(0x916A24) = edx;
    PUSH32(esp, 0x0008237Du); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0008237D: ;
    PUSH32(esp, 0x9150B0);
    PUSH32(esp, 0x9147C8);
    PUSH32(esp, 0x0008238Cu); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0008238C: ;
    eax = esp + 0x63;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082396u); RECOMP_ABI_CALL(0x0007A0F0u, sub_0007A0F0); /* call 0x0007A0F0 */

loc_00082396: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008239Eu); RECOMP_ABI_CALL(0x000763F0u, sub_000763F0); /* call 0x000763F0 */

loc_0008239E: ;
    edi = 0x9150B0;
    PUSH32(esp, 0x000823A8u); RECOMP_ABI_CALL(0x0007DF40u, sub_0007DF40); /* call 0x0007DF40 */

loc_000823A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000823B6; /* jne: not equal / not zero */

loc_000823AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000823B3u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_000823B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000823B6: ;
    PUSH32(esp, 0x000823BBu); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_000823BB: ;
    PUSH32(esp, 0x000823C0u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_000823C0: ;
    goto loc_000824AB;

loc_000823C5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91B444) = ecx;
    MEM32(0x91B448) = ecx;
    MEM32(0x91E06C) = 0x12;
    MEM32(0x91623C) = 6;
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000823EC
 * Original: 0x000823EC - 0x000824F1 (261 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000823EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000823EC: ;
    PUSH32(esp, 0x000823F1u); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_000823F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_000823FA: ;
    PUSH32(esp, 0x000823FFu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000823FF: ;
    ecx = MEM32(esp + 0x3B);
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000824AB; /* jae: above or equal (unsigned >=) */

loc_0008240E: ;
    PUSH32(esp, 0x91DFFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082419u); RECOMP_ABI_CALL(0x000709B0u, sub_000709B0); /* call 0x000709B0 */

loc_00082419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082421
 * Original: 0x00082421 - 0x000824F1 (208 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082421: ;
    PUSH32(esp, 0x00082426u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00082426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082457; /* je: equal / zero */

loc_0008242A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082430u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_00082430: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824AB; /* je: equal / zero */

loc_00082437: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1030)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1030) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000824AB; /* jne: not equal / not zero */

loc_00082443: ;
    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008244Du); RECOMP_ABI_CALL(0x00071770u, sub_00071770); /* call 0x00071770 */

loc_0008244D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00082455u); RECOMP_ABI_CALL(0x00081AD0u, sub_00081AD0); /* call 0x00081AD0 */

loc_00082455: ;
    goto loc_000824AB;

loc_00082457: ;
    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082461u); RECOMP_ABI_CALL(0x00071770u, sub_00071770); /* call 0x00071770 */

loc_00082461: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082463
 * Original: 0x00082463 - 0x000824F1 (142 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082463(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082463: ;
    eax = esp + 0x3B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008246Du); RECOMP_ABI_CALL(0x0007AC60u, sub_0007AC60); /* call 0x0007AC60 */

loc_0008246D: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008246F
 * Original: 0x0008246F - 0x000824F1 (130 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008246F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008246F: ;
    ecx = esp + 0x3B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082479u); RECOMP_ABI_CALL(0x000770C0u, sub_000770C0); /* call 0x000770C0 */

loc_00082479: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008247B
 * Original: 0x0008247B - 0x000824F1 (118 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008247B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008247B: ;
    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082485u); RECOMP_ABI_CALL(0x00078160u, sub_00078160); /* call 0x00078160 */

loc_00082485: ;
    goto loc_000824A8;

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082487
 * Original: 0x00082487 - 0x000824F1 (106 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082487: ;
    eax = esp + 0x102C;
    PUSH32(esp, eax);
    ecx = esp + 0x3F;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082499u); RECOMP_ABI_CALL(0x000782A0u, sub_000782A0); /* call 0x000782A0 */

loc_00082499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000824AB;

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008249E
 * Original: 0x0008249E - 0x000824F1 (83 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008249E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008249E: ;
    edx = esp + 0x3B;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000824A8u); RECOMP_ABI_CALL(0x0007EBF0u, sub_0007EBF0); /* call 0x0007EBF0 */

loc_000824A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000824AB
 * Original: 0x000824AB - 0x000824DE (51 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000824AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000824AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    ecx = esp + 0x1030;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x329);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x10;
    PUSH32(esp, 0x000824D6u); RECOMP_ABI_CALL(0x001CF09Du, sub_001CF09D); /* call 0x001CF09D */

loc_000824D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00081D70(); return; } /* jg: greater (signed >) */

    g_seh_ebp = ebp; sub_000824DE(); return; /* fallthrough 0x000824DE */

}

/**
 * sub_000824DE
 * Original: 0x000824DE - 0x000824F1 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000824DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000824DE: ;
    ecx = MEM32(esp + 0x103C);
    PUSH32(esp, 0x000824EAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000824EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00082550
 * Original: 0x00082550 - 0x000826DD (397 bytes, 104 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00082554: ;
    eax = MEM32(esi + 0x23645C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082562u); RECOMP_ABI_CALL(0x001E3E5Cu, sub_001E3E5C); /* call 0x001E3E5C */

loc_00082562: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000825CB; /* jl: less (signed <) */

loc_00082568: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00082554; /* jb: below (unsigned <) */

loc_00082570: ;
    ecx = MEM32(0x916278);
    PUSH32(esp, 0x2E671C);
    PUSH32(esp, 0x915278);
    PUSH32(esp, 0x914F70);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA);
    PUSH32(esp, ecx);
    MEM32(0x914F80) = 1;
    PUSH32(esp, 0x0008259Cu); RECOMP_ABI_CALL(0x001E42A0u, sub_001E42A0); /* call 0x001E42A0 */

loc_0008259C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000825F4; /* jge: greater or equal (signed >=) */

loc_000825A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000825A9u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_000825A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    MEM32(0x91E06C) = 2;
    MEM32(0x91623C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000825CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000825D2u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_000825D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x916280) = edi;
    eax = edi;
    POP32(esp, edi);
    MEM32(0x91E06C) = 2;
    MEM32(0x91623C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000825F4: ;
    edx = MEM32(0x916278);
    eax = MEM32(0x916A50);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(edx + eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax + 8), 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008262A; /* je: equal / zero */

loc_0008260C: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x915200);
    PUSH32(esp, 0x0008261Bu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0008261B: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x916244);
    PUSH32(esp, 0x0008262Au); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0008262A: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x915200);
    PUSH32(esp, 0x00082639u); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_00082639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082685; /* jne: not equal / not zero */

loc_0008263D: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x916244);
    PUSH32(esp, 0x0008264Cu); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_0008264C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082685; /* jne: not equal / not zero */

loc_00082650: ;
    ecx = MEM32(0x916278);
    edx = MEM32(0x916A50);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = ecx + edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, 0x915200);
    PUSH32(esp, 0x00082673u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00082673: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00082676: ;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x91E06C) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00082685: ;
    PUSH32(esp, 0x915200);
    PUSH32(esp, 0x0008268Fu); RECOMP_ABI_CALL(0x00072850u, sub_00072850); /* call 0x00072850 */

loc_0008268F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000826D6; /* je: equal / zero */

loc_00082696: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2E6714);
    ecx = 0x91523C;
    PUSH32(esp, 0x000826A7u); RECOMP_ABI_CALL(0x0007EF20u, sub_0007EF20); /* call 0x0007EF20 */

loc_000826A7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00082676; /* jge: greater or equal (signed >=) */

loc_000826AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000826B4u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_000826B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x916280) = esi;
    eax = esi;
    MEM32(0x91E06C) = 2;
    MEM32(0x91623C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000826D6: ;
    esi = 0x8015300Fu;
    goto loc_000826AD;

}

/**
 * sub_000826E0
 * Original: 0x000826E0 - 0x000834C5 (3557 bytes, 921 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000826E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000826E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000826EFu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000826EF: ;
    edx = MEM32(0x2E670C);
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00082715; /* jb: below (unsigned <) */

loc_00082700: ;
    PUSH32(esp, 0x00082705u); RECOMP_ABI_CALL(0x001048BDu, sub_001048BD); /* call 0x001048BD */

loc_00082705: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x91E074) = eax;
    MEM32(0x2E670C) = edi;
    goto loc_0008271A;

loc_00082715: ;
    eax = MEM32(0x91E074);

loc_0008271A: ;
    _fa = (uint32_t)(MEM32(0x9150C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150C0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008272B; /* jne: not equal / not zero */

loc_00082722: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008272B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x91E06C);
    if (CMP_NE(_fa, _fb)) goto loc_00082764; /* jne: not equal / not zero */

loc_00082735: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0008273E; /* jl: less (signed <) */

loc_00082739: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00082764; /* jle: less or equal (signed <=) */

loc_0008273E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00082745u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_00082745: ;
    esi = 0x80151000u;
    edx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x916280) = esi;
    MEM32(0x91E06C) = edx;
    MEM32(0x91623C) = ebx;

loc_00082764: ;
    _fa = (uint32_t)(MEM32(0x914F80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914F80), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000827C4; /* je: equal / zero */

loc_0008276C: ;
    ecx = MEM32(0x916284);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082778u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082778: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000827AA; /* jge: greater or equal (signed >=) */

loc_00082781: ;
    PUSH32(esp, 1);
    MEM32(0x916284) = ebx;
    PUSH32(esp, 0x0008278Eu); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_0008278E: ;
    edx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    MEM32(0x91623C) = ebx;
    MEM32(0x916280) = esi;
    goto loc_000827C4;

loc_000827AA: ;
    PUSH32(esp, 0x000827AFu); RECOMP_ABI_CALL(0x0007C850u, sub_0007C850); /* call 0x0007C850 */

loc_000827AF: ;
    PUSH32(esp, 0x000827B4u); RECOMP_ABI_CALL(0x00079080u, sub_00079080); /* call 0x00079080 */

loc_000827B4: ;
    PUSH32(esp, 0x000827B9u); RECOMP_ABI_CALL(0x0007C900u, sub_0007C900); /* call 0x0007C900 */

loc_000827B9: ;
    PUSH32(esp, 0x000827BEu); RECOMP_ABI_CALL(0x0007C980u, sub_0007C980); /* call 0x0007C980 */

loc_000827BE: ;
    edx = MEM32(0x91E06C);

loc_000827C4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000827CAu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000827CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 9;
    if (CMP_EQ(_fa, _fb)) goto loc_00082896; /* je: equal / zero */

loc_000827D7: ;
    eax = MEM32(0x9150D0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00082873; /* je: equal / zero */

loc_000827E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00082825; /* je: equal / zero */

loc_000827E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00082896; /* jne: not equal / not zero */

loc_000827ED: ;
    eax = MEM32(0x9147B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9147B4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00082807; /* jae: above or equal (unsigned >=) */

loc_000827FD: ;
    PUSH32(esp, 0x00082802u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_00082802: ;
    goto loc_00082890;

loc_00082807: ;
    ebp = 6;
    MEM32(0x91E06C) = edi;
    MEM32(0x91623C) = ebp;
    PUSH32(esp, 0x0008281Du); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_0008281D: ;
    edx = MEM32(0x91E06C);
    goto loc_0008289B;

loc_00082825: ;
    edx = MEM32(0x9150E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082831u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082831: ;
    edx = MEM32(0x91627C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91627C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0008285C; /* jge: greater or equal (signed >=) */

loc_00082845: ;
    MEM32(0x9150E8) = ebx;
    MEM32(0x9150D0) = 3;
    MEM32(0x916280) = eax;
    goto loc_00082890;

loc_0008285C: ;
    PUSH32(esp, 0x00082861u); RECOMP_ABI_CALL(0x000709E0u, sub_000709E0); /* call 0x000709E0 */

loc_00082861: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008288B; /* jne: not equal / not zero */

loc_00082865: ;
    _fa = (uint32_t)(MEM32(0x91627C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91627C), 0x258 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00082890; /* jb: below (unsigned <) */

loc_00082871: ;
    goto loc_0008288B;

loc_00082873: ;
    PUSH32(esp, 0x00082878u); RECOMP_ABI_CALL(0x0007F340u, sub_0007F340); /* call 0x0007F340 */

loc_00082878: ;
    _fa = (uint32_t)(MEM32(0x9150D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9150D0), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082890; /* jne: not equal / not zero */

loc_00082881: ;
    PUSH32(esp, 0x00082886u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00082886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00082890; /* jae: above or equal (unsigned >=) */

loc_0008288B: ;
    PUSH32(esp, 0x00082890u); RECOMP_ABI_CALL(0x0007F5F0u, sub_0007F5F0); /* call 0x0007F5F0 */

loc_00082890: ;
    edx = MEM32(0x91E06C);

loc_00082896: ;
    ebp = 6;

loc_0008289B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00083478; /* ja: above (unsigned >) */

loc_000828A4: ;
    eax = ZX8(MEM8(edx + 0x83518));
    { uint32_t _jt = MEM32(eax * 4 + 0x834C8); /* switch: 20 entries, 20 targets */
    if (_jt == 0x000828B2u) goto loc_000828B2;
    if (_jt == 0x000828D0u) goto loc_000828D0;
    if (_jt == 0x000829CAu) goto loc_000829CA;
    if (_jt == 0x000829D4u) goto loc_000829D4;
    if (_jt == 0x00082B40u) goto loc_00082B40;
    if (_jt == 0x00082B51u) goto loc_00082B51;
    if (_jt == 0x00082B80u) goto loc_00082B80;
    if (_jt == 0x00082CB5u) goto loc_00082CB5;
    if (_jt == 0x00082D1Bu) goto loc_00082D1B;
    if (_jt == 0x00082D57u) goto loc_00082D57;
    if (_jt == 0x00082DF1u) goto loc_00082DF1;
    if (_jt == 0x00082E86u) goto loc_00082E86;
    if (_jt == 0x00082F0Cu) goto loc_00082F0C;
    if (_jt == 0x00082FFAu) goto loc_00082FFA;
    if (_jt == 0x0008306Fu) goto loc_0008306F;
    if (_jt == 0x00083116u) goto loc_00083116;
    if (_jt == 0x00083194u) goto loc_00083194;
    if (_jt == 0x00083234u) goto loc_00083234;
    if (_jt == 0x0008342Au) goto loc_0008342A;
    if (_jt == 0x00083478u) goto loc_00083478;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000828B2: ;
    eax = MEM32(0x916284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083478; /* je: equal / zero */

loc_000828BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000828C5u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_000828C5: ;
    MEM32(0x916284) = ebx;
    goto loc_00083472;

loc_000828D0: ;
    ecx = MEM32(0x916284);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000828DCu); RECOMP_ABI_CALL(0x001E3E00u, sub_001E3E00); /* call 0x001E3E00 */

loc_000828DC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_000828E6: ;
    edx = MEM32(0x916284);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000828F2u); RECOMP_ABI_CALL(0x001E3E30u, sub_001E3E30); /* call 0x001E3E30 */

loc_000828F2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008292D; /* jge: greater or equal (signed >=) */

loc_000828F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151006u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80151006u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00082911; /* je: equal / zero */

loc_00082900: ;
    eax = MEM32(0x916284);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008290Bu); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_0008290B: ;
    MEM32(0x916284) = ebx;

loc_00082911: ;
    edx = 2;
    MEM32(0x91623C) = ebx;
    MEM32(0x91E06C) = edx;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_0008292D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1510F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1510F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083472; /* jne: not equal / not zero */

loc_00082939: ;
    _fa = (uint32_t)(MEM32(0x916A50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916A50), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083472; /* jne: not equal / not zero */

loc_00082945: ;
    PUSH32(esp, 0x0008294Au); RECOMP_ABI_CALL(0x001E3E51u, sub_001E3E51); /* call 0x001E3E51 */

loc_0008294A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x916A50) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00082981; /* jne: not equal / not zero */

loc_00082953: ;
    ecx = MEM32(0x916284);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008295Fu); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_0008295F: ;
    edx = 2;
    MEM32(0x916284) = ebx;
    MEM32(0x91E06C) = edx;
    MEM32(0x91623C) = ebx;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00082981: ;
    edx = MEM32(0x916278);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    edi = edx + eax + 0x6C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000829BE; /* je: equal / zero */

loc_00082992: ;
    edx = 3;
    MEM32(0x91E06C) = edx;
    eax = MEM32(edi);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x916280) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x80151200u (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x91623C) = ecx;
    goto loc_00083478;

loc_000829BE: ;
    PUSH32(esp, 0x000829C3u); RECOMP_ABI_CALL(0x00082550u, sub_00082550); /* call 0x00082550 */

loc_000829C3: ;
    esi = eax;
    goto loc_00083472;

loc_000829CA: ;
    PUSH32(esp, 0x000829CFu); RECOMP_ABI_CALL(0x00082550u, sub_00082550); /* call 0x00082550 */

loc_000829CF: ;
    goto loc_00083472;

loc_000829D4: ;
    ecx = 0x91523C;
    PUSH32(esp, 0x000829DEu); RECOMP_ABI_CALL(0x0007C590u, sub_0007C590); /* call 0x0007C590 */

loc_000829DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00082A4D; /* je: equal / zero */

loc_000829E2: ;
    PUSH32(esp, 0x000829E7u); RECOMP_ABI_CALL(0x0007EFD0u, sub_0007EFD0); /* call 0x0007EFD0 */

loc_000829E7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082A47; /* jge: greater or equal (signed >=) */

loc_000829ED: ;
    PUSH32(esp, ebx);
    ecx = 0x91523C;
    PUSH32(esp, 0x000829F8u); RECOMP_ABI_CALL(0x0007C610u, sub_0007C610); /* call 0x0007C610 */

loc_000829F8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082A28; /* jge: greater or equal (signed >=) */

loc_000829FE: ;
    PUSH32(esp, 0x00082A03u); RECOMP_ABI_CALL(0x00078F00u, sub_00078F00); /* call 0x00078F00 */

loc_00082A03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082A09u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_00082A09: ;
    MEM32(0x916280) = esi;

loc_00082A0F: ;
    edx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    MEM32(0x91623C) = ebx;
    goto loc_00083478;

loc_00082A28: ;
    PUSH32(esp, 1);
    ecx = 0x91523C;
    PUSH32(esp, 0x00082A34u); RECOMP_ABI_CALL(0x0007C610u, sub_0007C610); /* call 0x0007C610 */

loc_00082A34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00082A47; /* jge: greater or equal (signed >=) */

loc_00082A38: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x916244);
    PUSH32(esp, 0x00082A47u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_00082A47: ;
    edx = MEM32(0x91E06C);

loc_00082A4D: ;
    edi = MEM32(0x914F70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00082A98; /* je: equal / zero */

loc_00082A57: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00082A5Du); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082A5D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082A6E; /* jge: greater or equal (signed >=) */

loc_00082A66: ;
    MEM32(0x914F70) = ebx;
    goto loc_000829FE;

loc_00082A6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082A8C; /* jne: not equal / not zero */

loc_00082A76: ;
    edx = MEM32(0x914F70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082A82u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00082A82: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x914F70) = edi;
    goto loc_00082A92;

loc_00082A8C: ;
    edi = MEM32(0x914F70);

loc_00082A92: ;
    edx = MEM32(0x91E06C);

loc_00082A98: ;
    ecx = 0x91523C;
    PUSH32(esp, 0x00082AA2u); RECOMP_ABI_CALL(0x0007C590u, sub_0007C590); /* call 0x0007C590 */

loc_00082AA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00083478; /* jne: not equal / not zero */

loc_00082AAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083478; /* jne: not equal / not zero */

loc_00082AB2: ;
    PUSH32(esp, 0x916A28);
    PUSH32(esp, 0x00082ABCu); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_00082ABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8001 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00082ADD; /* je: equal / zero */

loc_00082AC3: ;
    PUSH32(esp, 0x00082AC8u); RECOMP_ABI_CALL(0x00078F00u, sub_00078F00); /* call 0x00078F00 */

loc_00082AC8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082ACEu); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_00082ACE: ;
    MEM32(0x916280) = 0x80004005u;
    goto loc_00082A0F;

loc_00082ADD: ;
    eax = MEM32(0x916278);
    ecx = MEM32(0x916A50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 4);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x915200);
    PUSH32(esp, 0x00082B02u); RECOMP_ABI_CALL(0x000708E0u, sub_000708E0); /* call 0x000708E0 */

loc_00082B02: ;
    MEM32(0x91E06C) = ebp;
    PUSH32(esp, 0x00082B0Du); RECOMP_ABI_CALL(0x00084A20u, sub_00084A20); /* call 0x00084A20 */

loc_00082B0D: ;
    eax = MEM32(0x916278);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082B18u); RECOMP_ABI_CALL(0x00083E70u, sub_00083E70); /* call 0x00083E70 */

loc_00082B18: ;
    PUSH32(esp, 0x00082B1Du); RECOMP_ABI_CALL(0x0007E7C0u, sub_0007E7C0); /* call 0x0007E7C0 */

loc_00082B1D: ;
    PUSH32(esp, 1);
    MEM32(0x2E6710) = 1;
    PUSH32(esp, 0x00082B2Eu); RECOMP_ABI_CALL(0x0007E690u, sub_0007E690); /* call 0x0007E690 */

loc_00082B2E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00082B36u); RECOMP_ABI_CALL(0x0007E700u, sub_0007E700); /* call 0x0007E700 */

loc_00082B36: ;
    PUSH32(esp, 0x00082B3Bu); RECOMP_ABI_CALL(0x00078F00u, sub_00078F00); /* call 0x00078F00 */

loc_00082B3B: ;
    goto loc_00083472;

loc_00082B40: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00082B47u); RECOMP_ABI_CALL(0x0007F0E0u, sub_0007F0E0); /* call 0x0007F0E0 */

loc_00082B47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_00083472;

loc_00082B51: ;
    PUSH32(esp, 0x00082B56u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00082B56: ;
    PUSH32(esp, 0x00082B5Bu); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_00082B5B: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008346C; /* je: equal / zero */

loc_00082B68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082B6Eu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082B6E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008346C; /* jge: greater or equal (signed >=) */

loc_00082B7B: ;
    goto loc_00083455;

loc_00082B80: ;
    eax = MEM32(0x914F90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00082C73; /* je: equal / zero */

loc_00082B8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082B93u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082B93: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00082BC9; /* jl: less (signed <) */

loc_00082B9C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00082C62; /* je: equal / zero */

loc_00082BA2: ;
    edx = MEM32(0x914F90);
    PUSH32(esp, 0x91E078);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082BB8u); RECOMP_ABI_CALL(0x001E40ACu, sub_001E40AC); /* call 0x001E40AC */

loc_00082BB8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082BD9; /* jge: greater or equal (signed >=) */

loc_00082BBE: ;
    eax = MEM32(0x914F90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082BC9u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00082BC9: ;
    MEM32(0x914F90) = ebx;
    edx = 0xC;
    goto loc_00082EB5;

loc_00082BD9: ;
    _fa = (uint32_t)(MEM32(0x91E078)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E078), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00082C23; /* jbe: below or equal (unsigned <=) */

loc_00082BE1: ;
    ebp = 0x916AAC;

loc_00082BE6: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + ebx * 4);
    edi = ebp + -84;
    ecx = 0x15;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2E6630);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082C0Au); RECOMP_ABI_CALL(0x001E40B7u, sub_001E40B7); /* call 0x001E40B7 */

loc_00082C0A: ;
    esi = eax;
    eax = MEM32(0x91E078);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x2F4)) >> 32) & 1);
    ebp = ebp + 0x2F4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00082BE6; /* jb: below (unsigned <) */

loc_00082C1C: ;
    ebp = 6;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00082C23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082C39; /* jge: greater or equal (signed >=) */

loc_00082C27: ;
    MEM32(0x91E06C) = 0xC;
    MEM32(0x91623C) = ebp;
    goto loc_00082C50;

loc_00082C39: ;
    PUSH32(esp, 0x00082C3Eu); RECOMP_ABI_CALL(0x00081910u, sub_00081910); /* call 0x00081910 */

loc_00082C3E: ;
    _fa = (uint32_t)(MEM32(0x916270)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916270), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082C50; /* jne: not equal / not zero */

loc_00082C46: ;
    MEM32(0x91E06C) = 0xD;

loc_00082C50: ;
    edx = MEM32(0x914F90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082C5Cu); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00082C5C: ;
    MEM32(0x914F90) = ebx;

loc_00082C62: ;
    edx = MEM32(0x91E06C);
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00082C73: ;
    eax = MEM32(0x91B440);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082EC1; /* jne: not equal / not zero */

loc_00082C81: ;
    ecx = MEM32(0x916270);
    PUSH32(esp, 0x7F8C0);
    PUSH32(esp, 0x2F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x916A58);
    PUSH32(esp, 0x00082C9Cu); RECOMP_ABI_CALL(0x00151B90u, sub_00151B90); /* call 0x00151B90 */

loc_00082C9C: ;
    edx = 0xD;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00082CB5: ;
    PUSH32(esp, 0x00082CBAu); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00082CBA: ;
    edx = MEM32(0x91E06C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083478; /* jne: not equal / not zero */

loc_00082CC9: ;
    eax = MEM32(0x916A4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x384) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x384 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x916A4C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00083478; /* jbe: below or equal (unsigned <=) */

loc_00082CDF: ;
    PUSH32(esp, ebx);
    MEM32(0x91E06C) = 0xF;
    MEM32(0x91623C) = 0xD;
    MEM32(0x9150AC) = 2;
    PUSH32(esp, 0x00082D03u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_00082D03: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x00082D0Du); RECOMP_ABI_CALL(0x0007C7C0u, sub_0007C7C0); /* call 0x0007C7C0 */

loc_00082D0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x914F74) = ebx;
    goto loc_00083472;

loc_00082D1B: ;
    edx = MEM32(0x914F84);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082D27u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082D27: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082D3B; /* jge: greater or equal (signed >=) */

loc_00082D30: ;
    MEM32(0x91E06C) = ebp;
    goto loc_000834A2;

loc_00082D3B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_00082D41: ;
    eax = MEM32(0x914F84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082D4Cu); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00082D4C: ;
    MEM32(0x91E06C) = ebp;
    goto loc_000834A2;

loc_00082D57: ;
    ecx = MEM32(0x91B454);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082D63u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082D63: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082D76; /* jge: greater or equal (signed >=) */

loc_00082D6C: ;
    edx = 0x14;
    goto loc_00082EAF;

loc_00082D76: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_00082D7C: ;
    edx = MEM32(0x91629C);
    eax = MEM32(0x914F88);
    ecx = MEM32(0x91B44C);
    PUSH32(esp, edx);
    edx = MEM32(0x914F8C);
    PUSH32(esp, eax);
    eax = MEM32(0x916A14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(0x916268);
    PUSH32(esp, eax);
    eax = MEM32(0x916A54);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x9150D4));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x91B454);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082DBFu); RECOMP_ABI_CALL(0x001E4437u, sub_001E4437); /* call 0x001E4437 */

loc_00082DBF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91623C) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00082E6A; /* jge: greater or equal (signed >=) */

loc_00082DCF: ;
    PUSH32(esp, 0x91B454);
    MEM32(0x91E06C) = 0x14;
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x00082DE9u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082DE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00083472;

loc_00082DF1: ;
    ecx = MEM32(0x91B454);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082DFDu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082DFD: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082E10; /* jge: greater or equal (signed >=) */

loc_00082E06: ;
    edx = 0x16;
    goto loc_00082EAF;

loc_00082E10: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_00082E16: ;
    edx = MEM32(0x91629C);
    eax = MEM32(0x914F88);
    ecx = MEM32(0x916298);
    PUSH32(esp, edx);
    edx = MEM32(0x915224);
    PUSH32(esp, eax);
    eax = MEM32(0x91B454);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082E3Cu); RECOMP_ABI_CALL(0x001E4419u, sub_001E4419); /* call 0x001E4419 */

loc_00082E3C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91623C) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00082E6A; /* jge: greater or equal (signed >=) */

loc_00082E48: ;
    PUSH32(esp, 0x91B454);
    MEM32(0x91E06C) = 0x16;
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x00082E62u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082E62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00083472;

loc_00082E6A: ;
    PUSH32(esp, 0x91B454);
    MEM32(0x91E06C) = 0x17;
    PUSH32(esp, 0x00082E7Eu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082E7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00083472;

loc_00082E86: ;
    ecx = MEM32(0x91B454);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082E92u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082E92: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082ECC; /* jge: greater or equal (signed >=) */

loc_00082E9B: ;
    eax = MEM32(0x91E06C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1C)) >> 32) & 1);
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00082EAF: ;
    MEM32(0x91B454) = ebx;

loc_00082EB5: ;
    MEM32(0x91623C) = ebp;
    MEM32(0x91E06C) = edx;

loc_00082EC1: ;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00082ECC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_00082ED2: ;
    PUSH32(esp, 0x91B454);
    PUSH32(esp, 0x00082EDCu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082EDC: ;
    eax = MEM32(0x91E06C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082EFF; /* jne: not equal / not zero */

loc_00082EE9: ;
    edx = 0x1A;
    MEM32(0x91E06C) = edx;
    MEM32(0x91623C) = ebp;
    goto loc_00083478;

loc_00082EFF: ;
    edx = ebp;
    MEM32(0x91E06C) = edx;
    goto loc_00083478;

loc_00082F0C: ;
    PUSH32(esp, 0x00082F11u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00082F11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00082F4E; /* je: equal / zero */

loc_00082F15: ;
    PUSH32(esp, 0x00082F1Au); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00082F1A: ;
    PUSH32(esp, 0x00082F1Fu); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_00082F1F: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00082F4E; /* je: equal / zero */

loc_00082F28: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082F2Eu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082F2E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00082F4E; /* jge: greater or equal (signed >=) */

loc_00082F37: ;
    edx = MEM32(0x914F78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082F43u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_00082F43: ;
    MEM32(0x914F78) = ebx;
    goto loc_00083455;

loc_00082F4E: ;
    eax = MEM32(0x914F78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082F59u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00082F59: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00082FBC; /* jne: not equal / not zero */

loc_00082F66: ;
    PUSH32(esp, 0x914F78);
    PUSH32(esp, 0x00082F70u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082F70: ;
    eax = MEM32(0x914F70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00082F89; /* je: equal / zero */

loc_00082F7C: ;
    PUSH32(esp, 0x914F70);
    PUSH32(esp, 0x00082F86u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082F86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00082F89: ;
    ecx = MEM32(0x916278);
    PUSH32(esp, 0x2E671C);
    PUSH32(esp, 0x915278);
    PUSH32(esp, 0x914F70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082FAAu); RECOMP_ABI_CALL(0x001E42A0u, sub_001E42A0); /* call 0x001E42A0 */

loc_00082FAA: ;
    edx = 0x1F;
    esi = eax;
    MEM32(0x91E06C) = edx;
    goto loc_00083478;

loc_00082FBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083472; /* jge: greater or equal (signed >=) */

loc_00082FC4: ;
    PUSH32(esp, 0x914F78);
    PUSH32(esp, 0x00082FCEu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00082FCE: ;
    edx = 0x1E;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    PUSH32(esp, 0x00082FE1u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00082FE1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00082FFA: ;
    PUSH32(esp, 0x00082FFFu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00082FFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00083037; /* je: equal / zero */

loc_00083003: ;
    PUSH32(esp, 0x00083008u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00083008: ;
    PUSH32(esp, 0x0008300Du); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_0008300D: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083037; /* je: equal / zero */

loc_00083016: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008301Cu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008301C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083037; /* jge: greater or equal (signed >=) */

loc_00083025: ;
    PUSH32(esp, 0x914F70);
    PUSH32(esp, 0x0008302Fu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0008302F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00083455;

loc_00083037: ;
    edx = MEM32(0x914F70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083043u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00083043: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083054; /* jge: greater or equal (signed >=) */

loc_0008304C: ;
    MEM32(0x916280) = esi;
    goto loc_000830C4;

loc_00083054: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083472; /* jne: not equal / not zero */

loc_00083060: ;
    PUSH32(esp, 0x914F70);
    PUSH32(esp, 0x0008306Au); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0008306A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000830C4;

loc_0008306F: ;
    PUSH32(esp, 0x00083074u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00083074: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000830AC; /* je: equal / zero */

loc_00083078: ;
    PUSH32(esp, 0x0008307Du); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_0008307D: ;
    PUSH32(esp, 0x00083082u); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_00083082: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000830AC; /* je: equal / zero */

loc_0008308B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083091u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00083091: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000830AC; /* jge: greater or equal (signed >=) */

loc_0008309A: ;
    PUSH32(esp, 0x914F7C);
    PUSH32(esp, 0x000830A4u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000830A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00083455;

loc_000830AC: ;
    eax = MEM32(0x914F7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000830B7u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_000830B7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000830DF; /* jne: not equal / not zero */

loc_000830C4: ;
    PUSH32(esp, 0x000830C9u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000830C9: ;
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    goto loc_00083478;

loc_000830DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083472; /* jge: greater or equal (signed >=) */

loc_000830E7: ;
    edx = 0x21;
    MEM32(0x914F7C) = ebx;
    MEM32(0x91E06C) = edx;
    PUSH32(esp, 0x000830FDu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000830FD: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x916280) = esi;
    goto loc_00083478;

loc_00083116: ;
    PUSH32(esp, 0x0008311Bu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008311B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00083150; /* je: equal / zero */

loc_0008311F: ;
    PUSH32(esp, 0x00083124u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00083124: ;
    PUSH32(esp, 0x00083129u); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_00083129: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083150; /* je: equal / zero */

loc_00083132: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083138u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00083138: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083150; /* jge: greater or equal (signed >=) */

loc_00083141: ;
    ecx = 0x91523C;
    PUSH32(esp, 0x0008314Bu); RECOMP_ABI_CALL(0x0007EEF0u, sub_0007EEF0); /* call 0x0007EEF0 */

loc_0008314B: ;
    goto loc_00083455;

loc_00083150: ;
    ecx = 0x91523C;
    PUSH32(esp, 0x0008315Au); RECOMP_ABI_CALL(0x0007EFD0u, sub_0007EFD0); /* call 0x0007EFD0 */

loc_0008315A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083189; /* jge: greater or equal (signed >=) */

loc_00083160: ;
    edx = 0x23;
    MEM32(0x916280) = esi;
    MEM32(0x91E06C) = edx;
    PUSH32(esp, 0x00083176u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00083176: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    goto loc_00083478;

loc_00083189: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_0008318F: ;
    goto loc_000830C4;

loc_00083194: ;
    PUSH32(esp, 0x00083199u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00083199: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000831A7; /* je: equal / zero */

loc_0008319D: ;
    PUSH32(esp, 0x000831A2u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_000831A2: ;
    PUSH32(esp, 0x000831A7u); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_000831A7: ;
    ecx = MEM32(0x9151F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000831B3u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_000831B3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_000831C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000831E0; /* jne: not equal / not zero */

loc_000831C8: ;
    PUSH32(esp, 0x000831CDu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000831CD: ;
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = edx;
    goto loc_00083216;

loc_000831E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083210; /* jge: greater or equal (signed >=) */

loc_000831E4: ;
    edx = 0x25;
    MEM32(0x9151F4) = ebx;
    MEM32(0x91E06C) = edx;
    PUSH32(esp, 0x000831FAu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000831FA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91623C) = eax;
    MEM32(0x916280) = esi;
    goto loc_00083216;

loc_00083210: ;
    edx = MEM32(0x91E06C);

loc_00083216: ;
    eax = MEM32(0x916A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083478; /* je: equal / zero */

loc_00083223: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083229u); RECOMP_ABI_CALL(0x001E779Au, sub_001E779A); /* call 0x001E779A */

loc_00083229: ;
    MEM32(0x916A10) = ebx;
    goto loc_00083472;

loc_00083234: ;
    PUSH32(esp, 0x00083239u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00083239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00083263; /* je: equal / zero */

loc_0008323D: ;
    PUSH32(esp, 0x00083242u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00083242: ;
    PUSH32(esp, 0x00083247u); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_00083247: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083263; /* je: equal / zero */

loc_00083250: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083256u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_00083256: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00083455; /* jl: less (signed <) */

loc_00083263: ;
    edx = MEM32(0x9151F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008326Fu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008326F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000832A7; /* jge: greater or equal (signed >=) */

loc_00083278: ;
    MEM32(0x9151F4) = ebx;
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x00083289u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00083289: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x28;
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = edx;
    goto loc_00083478;

loc_000832A7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_000832AD: ;
    _fa = (uint32_t)(MEM32(0x91E06C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E06C), 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x9151F4);
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0008340C; /* jne: not equal / not zero */

loc_000832C1: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000832D8u); RECOMP_ABI_CALL(0x001E772Du, sub_001E772D); /* call 0x001E772D */

loc_000832D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083322; /* jne: not equal / not zero */

loc_000832DE: ;
    ecx = MEM32(0x9151F4);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x914FA0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000832FCu); RECOMP_ABI_CALL(0x001E772Du, sub_001E772D); /* call 0x001E772D */

loc_000832FC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00083322; /* jne: not equal / not zero */

loc_00083302: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x914FA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008330Eu); RECOMP_ABI_CALL(0x00083660u, sub_00083660); /* call 0x00083660 */

loc_0008330E: ;
    edx = MEM32(0x9151F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083320u); RECOMP_ABI_CALL(0x001E772Du, sub_001E772D); /* call 0x001E772D */

loc_00083320: ;
    esi = eax;

loc_00083322: ;
    eax = MEM32(0x914FA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000833D9; /* je: equal / zero */

loc_0008332F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A98 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000833D9; /* ja: above (unsigned >) */

loc_0008333A: ;
    _fa = (uint32_t)(MEM32(0x914FA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914FA4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000833D9; /* je: equal / zero */

loc_00083346: ;
    PUSH32(esp, 0x0008334Bu); RECOMP_ABI_CALL(0x00083660u, sub_00083660); /* call 0x00083660 */

loc_0008334B: ;
    _fa = (uint32_t)(MEM32(0x914FA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914FA4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000833D9; /* ja: above (unsigned >) */

loc_00083357: ;
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000833D9; /* jne: not equal / not zero */

loc_0008335F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80155A02u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80155A02u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000833D9; /* jne: not equal / not zero */

loc_00083367: ;
    edi = MEM32(0x9151F4);
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00083378u); RECOMP_ABI_CALL(0x00083660u, sub_00083660); /* call 0x00083660 */

loc_00083378: ;
    PUSH32(esp, eax);
    eax = MEM32(0x914F98);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008338Au); RECOMP_ABI_CALL(0x001E773Cu, sub_001E773C); /* call 0x001E773C */

loc_0008338A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000833C4; /* jge: greater or equal (signed >=) */

loc_00083390: ;
    MEM32(0x9151F4) = ebx;
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x000833A1u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000833A1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = 0x28;
    PUSH32(esp, 0x000833BFu); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_000833BF: ;
    goto loc_00083472;

loc_000833C4: ;
    PUSH32(esp, edi);
    MEM32(0x91E06C) = 0x27;
    PUSH32(esp, 0x000833D4u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_000833D4: ;
    goto loc_00083472;

loc_000833D9: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x000833E3u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_000833E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x000833F1u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000833F1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x28;
    MEM32(0x91623C) = eax;
    MEM32(0x91E06C) = edx;
    goto loc_00083478;

loc_0008340C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083418u); RECOMP_ABI_CALL(0x001E774Bu, sub_001E774B); /* call 0x001E774B */

loc_00083418: ;
    PUSH32(esp, 0x9151F4);
    PUSH32(esp, 0x00083422u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_00083422: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000830C4;

loc_0008342A: ;
    PUSH32(esp, 0x0008342Fu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008342F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00083478; /* je: equal / zero */

loc_00083433: ;
    PUSH32(esp, 0x00083438u); RECOMP_ABI_CALL(0x00081D10u, sub_00081D10); /* call 0x00081D10 */

loc_00083438: ;
    PUSH32(esp, 0x0008343Du); RECOMP_ABI_CALL(0x0007A010u, sub_0007A010); /* call 0x0007A010 */

loc_0008343D: ;
    eax = MEM32(0x9150CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00083472; /* je: equal / zero */

loc_00083446: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008344Cu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008344C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00083472; /* jge: greater or equal (signed >=) */

loc_00083455: ;
    MEM32(0x91623C) = ebp;
    MEM32(0x91E06C) = edi;
    MEM32(0x9150CC) = ebx;
    PUSH32(esp, 0x0008346Cu); RECOMP_ABI_CALL(0x00081170u, sub_00081170); /* call 0x00081170 */

loc_0008346C: ;
    MEM32(0x916280) = esi;

loc_00083472: ;
    edx = MEM32(0x91E06C);

loc_00083478: ;
    eax = MEM32(0x914F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000834A8; /* je: equal / zero */

loc_00083481: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000834A8; /* je: equal / zero */

loc_00083486: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008348Cu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0008348C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000834A2; /* jl: less (signed <) */

loc_00083495: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000834A8; /* je: equal / zero */

loc_00083497: ;
    eax = MEM32(0x914F84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000834A2u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_000834A2: ;
    MEM32(0x914F84) = ebx;

loc_000834A8: ;
    PUSH32(esp, 0x000834ADu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000834AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000834B7; /* je: equal / zero */

loc_000834B2: ;
    PUSH32(esp, 0x000834B7u); RECOMP_ABI_CALL(0x00076450u, sub_00076450); /* call 0x00076450 */

loc_000834B7: ;
    PUSH32(esp, 0x000834BCu); RECOMP_ABI_CALL(0x0007B130u, sub_0007B130); /* call 0x0007B130 */

loc_000834BC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083550
 * Original: 0x00083550 - 0x00083559 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083550(void)
{

loc_00083550: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00083560
 * Original: 0x00083560 - 0x0008357E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00083560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083560: ;
    edx = MEM32(ecx + 0x10);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008357B; /* jne: not equal / not zero */

loc_0008356C: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008357B; /* je: equal / zero */

loc_00083573: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0008357B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083580
 * Original: 0x00083580 - 0x00083597 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00083580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083580: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083594; /* jne: not equal / not zero */

loc_00083587: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083594; /* jne: not equal / not zero */

loc_0008358E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00083594: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000835A0
 * Original: 0x000835A0 - 0x000835AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000835A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000835A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000835A9; /* je: equal / zero */

loc_000835A5: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

loc_000835A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000835B0
 * Original: 0x000835B0 - 0x000835B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000835B0(void)
{

loc_000835B0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000835C0
 * Original: 0x000835C0 - 0x000835DD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000835C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000835C0: ;
    ecx = MEM32(0x91E2C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000835DC; /* jne: not equal / not zero */

loc_000835CD: ;
    ecx = MEM32(0x91E274);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000835DC; /* jne: not equal / not zero */

loc_000835D7: ;
    eax = 1;

loc_000835DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000835E0
 * Original: 0x000835E0 - 0x00083611 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000835E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000835E0: ;
    fp_push(MEMF(0x91E2B4)); /* fld float */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x91E2B8)); /* fld float */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x91E2BC)); /* fld float */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x91E2C0)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083620
 * Original: 0x00083620 - 0x00083632 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(0x91E270)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E270), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083631; /* je: equal / zero */

loc_0008362C: ;
    MEM32(0x91E270) = eax;

loc_00083631: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083640
 * Original: 0x00083640 - 0x0008365E (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083640(void)
{

loc_00083640: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x91E260) = eax;
    MEM32(0x91E264) = ecx;
    MEM32(0x91E25C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00083660
 * Original: 0x00083660 - 0x00083666 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083660(void)
{

loc_00083660: ;
    eax = 0x499A;
    esp += 4; return; /* ret */

}

/**
 * sub_00083670
 * Original: 0x00083670 - 0x000836AE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083670: ;
    eax = MEM32(0x91E2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008367F; /* je: equal / zero */

loc_00083679: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008367Fu); RECOMP_ABI_CALL(0x000A9F2Eu, sub_000A9F2E); /* call 0x000A9F2E */

loc_0008367F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083685u); RECOMP_ABI_CALL(0x00083660u, sub_00083660); /* call 0x00083660 */

loc_00083685: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083693u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00083693: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x91E2E0) = eax;
    PUSH32(esp, 0x0008369Fu); RECOMP_ABI_CALL(0x00083640u, sub_00083640); /* call 0x00083640 */

loc_0008369F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E27C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000836B0
 * Original: 0x000836B0 - 0x000836CD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000836B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000836BFu); RECOMP_ABI_CALL(0x00083640u, sub_00083640); /* call 0x00083640 */

loc_000836BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E27C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000836D0
 * Original: 0x000836D0 - 0x000836D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000836D0: ;
    g_seh_ebp = ebp; sub_001AB0B7(); return; /* tail jmp 0x001AB0B7 */

}

/**
 * sub_000836E0
 * Original: 0x000836E0 - 0x000836E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000836E0: ;
    g_seh_ebp = ebp; sub_000B8A72(); return; /* tail jmp 0x000B8A72 */

}
