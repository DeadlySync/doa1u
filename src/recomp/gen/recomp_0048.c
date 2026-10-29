/**
 * DOAU1 - Recompiled code chunk 48
 * Functions: 250 (0x00173F30 - 0x0018795B)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00173F30
 * Original: 0x00173F30 - 0x00173F42 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F30: ;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x600100) = ecx;
    MEM32(eax + 0x600140) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00173F42
 * Original: 0x00173F42 - 0x0017408C (330 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00173F42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xD4);
    ebx = MEM32(edi + 0xDC);
    edx = MEM32(edi + 0xD0);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x680504);
    ebx = ebx & 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = 0xFF;
    MEM32(ebp + -4) = MEM32(ebp + -4) & ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | MEM32(ebp + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) & ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174087; /* je: equal / zero */

loc_00173F8F: ;
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(HI8(eax));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edi + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xDC), eax (32-bit) */
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00173FE6; /* jae: above or equal (unsigned >=) */

loc_00173FAD: ;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = 0x64;
    MEM32(esi + 0x680504) = eax;

loc_00173FC9: ;
    eax = 0x40000000;
    _fa = (uint32_t)(MEM32(esi + 0x680514)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x680514), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173FE6; /* jne: not equal / not zero */

loc_00173FD6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x00173FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00173FDBu); } /* indirect call */
    }

loc_00173FE1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00173FC9; /* jne: not equal / not zero */

loc_00173FE6: ;
    MEM32(esi + 0x680504) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA00);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x00173FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00173FF1u); } /* indirect call */
    }

loc_00173FF7: ;
    ecx = esi + 0x1002C4;
    eax = MEM32(ecx);
    eax = eax | 0x100000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = esi + 0x1002C0;
    eax = MEM32(ecx);
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x100228);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -12));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    ecx = MEM32(ebp + -16);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(esi + 0x100228);
    ecx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -20)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    eax = MEM32(edi + 0xC4);
    edi = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFFE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100228) = ecx;

loc_00174087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0017408C
 * Original: 0x0017408C - 0x001741D1 (325 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0017408C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017408C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xF0);
    ecx = MEM32(edi);
    esi = MEM32(edi + 0xFC);
    edx = MEM32(edi + 0xF4);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ecx + 0x680500);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = edx;
    ebx = 0xFF;
    if (CMP_AE(_fa, _fb)) goto loc_0017410A; /* jae: above or equal (unsigned >=) */

loc_001740C9: ;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -12);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x680500) = eax;
    MEM32(ebp + -4) = 0x64;

loc_001740EA: ;
    eax = 0x20000000;
    _fa = (uint32_t)(MEM32(ecx + 0x680514)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x680514), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017410A; /* jne: not equal / not zero */

loc_001740F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x00174102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001740FCu); } /* indirect call */
    }

loc_00174102: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -8);
    if ((_fa != 0)) goto loc_001740EA; /* jne: not equal / not zero */

loc_0017410A: ;
    eax = MEM32(ebp + -16);
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -12);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x680500) = esi;
    edi = MEM32(edi + 0xCC);
    edx = 0x5F5E100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    PUSH32(esp, 4);
    POP32(esp, eax);
    if (CMP_A(_fa, _fb)) goto loc_0017417B; /* ja: above (unsigned >) */

loc_00174139: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00174177; /* je: equal / zero */

loc_0017413B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EF1480) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3EF1480 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174173; /* je: equal / zero */

loc_00174143: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x459E440) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x459E440 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017416F; /* je: equal / zero */

loc_0017414B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C4B400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4C4B400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017416B; /* je: equal / zero */

loc_00174153: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52F83C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x52F83C0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174167; /* je: equal / zero */

loc_0017415B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59A5380) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x59A5380 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001741B6; /* jne: not equal / not zero */

loc_00174163: ;
    PUSH32(esp, 9);
    goto loc_001741B5;

loc_00174167: ;
    PUSH32(esp, 8);
    goto loc_001741B5;

loc_0017416B: ;
    PUSH32(esp, 7);
    goto loc_001741B5;

loc_0017416F: ;
    PUSH32(esp, 6);
    goto loc_001741B5;

loc_00174173: ;
    PUSH32(esp, 5);
    goto loc_001741B5;

loc_00174177: ;
    PUSH32(esp, 0xA);
    goto loc_001741B5;

loc_0017417B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6516E80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6516E80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001741B3; /* je: equal / zero */

loc_00174183: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6BC3E40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6BC3E40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001741AF; /* je: equal / zero */

loc_0017418B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7270E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7270E00 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001741AB; /* je: equal / zero */

loc_00174193: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7829B80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7829B80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001741A7; /* je: equal / zero */

loc_0017419B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7ED6B40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7ED6B40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001741B6; /* jne: not equal / not zero */

loc_001741A3: ;
    PUSH32(esp, 0xF);
    goto loc_001741B5;

loc_001741A7: ;
    PUSH32(esp, 0xE);
    goto loc_001741B5;

loc_001741AB: ;
    PUSH32(esp, 0xD);
    goto loc_001741B5;

loc_001741AF: ;
    PUSH32(esp, 0xC);
    goto loc_001741B5;

loc_001741B3: ;
    PUSH32(esp, 0xB);

loc_001741B5: ;
    POP32(esp, eax);

loc_001741B6: ;
    _fb = (uint32_t)(0x108C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001741D1
 * Original: 0x001741D1 - 0x0017427B (170 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001741D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001741D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xE4);
    edx = MEM32(ecx + 0xE0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x680508);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xEC);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    ebx = 0xFF;
    if (CMP_AE(_fa, _fb)) goto loc_0017425C; /* jae: above or equal (unsigned >=) */

loc_00174209: ;
    ecx = MEM32(ebp + -12);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x680508) = eax;
    MEM32(ebp + -4) = 0x64;

loc_0017422C: ;
    ecx = MEM32(esi + 0x680514);
    eax = 0x80000000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174249; /* jne: not equal / not zero */

loc_0017423D: ;
    ecx = MEM32(esi + 0x680514);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017425C; /* je: equal / zero */

loc_00174249: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x00174254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017424Eu); } /* indirect call */
    }

loc_00174254: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -8);
    if ((_fa != 0)) goto loc_0017422C; /* jne: not equal / not zero */

loc_0017425C: ;
    eax = MEM32(ebp + -12);
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x680508) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0017427B
 * Original: 0x0017427B - 0x00174408 (397 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0017427B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017427B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2500);
    PUSH32(esp, edi);
    MEM32(eax + 0x2500) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0017429E: ;
    edi = MEM32(edx + 0x10C);
    edi = esi + edi * 4 + 0x1C0000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xDFC (32-bit) */
    MEM32(eax + edi * 4) = 0;
    if (CMP_B(_fa, _fb)) goto loc_0017429E; /* jb: below (unsigned <) */

loc_001742BB: ;
    edi = MEM32(edx + 0x140);
    esi = MEM32(edx + 0x10C);
    edi = ecx + edi * 4 + 0x1C0000;
    MEM32(eax + edi * 4) = esi;
    esi = MEM32(edx + 0x10C);
    MEM32(edx + ecx * 4 + 0x138) = esi;
    esi = ecx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x128)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x128);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edi = esi;
    POP32(esp, ebx);

loc_001742F3: ;
    MEM32(edi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001742F3; /* jne: not equal / not zero */

loc_001742FF: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00174313; /* jae: above or equal (unsigned >=) */

loc_00174310: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_00174313: ;
    esi = 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017431E; /* jbe: below or equal (unsigned <=) */

loc_0017431C: ;
    ebx = esi;

loc_0017431E: ;
    edi = MEM32(ebp + 0xC);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0017432D; /* jae: above or equal (unsigned >=) */

loc_0017432A: ;
    PUSH32(esp, 0x20);
    POP32(esp, edi);

loc_0017432D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00174333; /* jbe: below or equal (unsigned <=) */

loc_00174331: ;
    edi = esi;

loc_00174333: ;
    esi = MEM32(ebp + 0x10);
    edi = edi >> 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00174342; /* jbe: below or equal (unsigned <=) */

loc_0017433F: ;
    PUSH32(esp, 0xF);
    POP32(esp, esi);

loc_00174342: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi;
    esi = MEM32(ebp + -4);
    MEM32(esi + 0x14) = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x104) = MEM32(edx + 0x104) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(edx + 0x104);
    MEM32(eax + 0x2504) = esi;
    MEM32(eax + 0x3200) = 0;
    MEM32(eax + 0x3250) = 0;
    esi = eax + 0x3204;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001743A8; /* je: equal / zero */

loc_0017439E: ;
    ecx = MEM32(esi);
    ecx = ecx | 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;

loc_001743A8: ;
    esi = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3240) = ecx;
    MEM32(eax + 0x3244) = ecx;
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x322C) = esi;
    MEM32(eax + 0x3230) = ecx;
    MEM32(eax + 0x3228) = ecx;
    MEM32(eax + 0x3280) = ecx;
    MEM32(eax + 0x3224) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001743E9; /* je: equal / zero */

loc_001743E3: ;
    MEM32(eax + 0x3220) = ecx;

loc_001743E9: ;
    MEM32(eax + 0x3250) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x2500) = ecx;
    MEM32(edx + 0x108) = MEM32(edx + 0x108) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x108)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00174408
 * Original: 0x00174408 - 0x00174441 (57 bytes, 20 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00174408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174408: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ebp + 8);
    ecx = ecx + edx * 8;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00174441
 * Original: 0x00174441 - 0x0017446E (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174441(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174441: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x39;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0017447C(); return; } /* je: equal / zero */

loc_00174458: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00174475(); return; } /* je: equal / zero */

loc_0017445D: ;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0017446E(); return; } /* je: equal / zero */

loc_00174462: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00174482(); return; } /* jne: not equal / not zero */

loc_00174467: ;
    esi = 0xA00;
    g_seh_ebp = ebp; sub_00174482(); return; /* tail jmp 0x00174482 */

}

/**
 * sub_0017446E
 * Original: 0x0017446E - 0x00174475 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017446E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017446E: ;
    esi = 0xB00;
    g_seh_ebp = ebp; sub_00174482(); return; /* tail jmp 0x00174482 */

}

/**
 * sub_00174475
 * Original: 0x00174475 - 0x0017447C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174475(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174475: ;
    esi = 0x201;
    g_seh_ebp = ebp; sub_00174482(); return; /* tail jmp 0x00174482 */

}

/**
 * sub_0017447C
 * Original: 0x0017447C - 0x00174482 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017447C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017447C: ;
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00174482(); return; /* fallthrough 0x00174482 */

}

/**
 * sub_00174482
 * Original: 0x00174482 - 0x001744B6 (52 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174482(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174482: ;
    eax = MEM32(esp + 0xC);
    edi = eax + 0x70000;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + edx) = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x700004) = esi;
    POP32(esp, edi);
    MEM32(eax + 0x700008) = 0;
    MEM32(eax + 0x70000C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001744B6
 * Original: 0x001744B6 - 0x00174E95 (2527 bytes, 568 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001744B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001744B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x100);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4 + 0x138);
    esi = edi + 0x70000;
    ecx = esi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + eax;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    ecx = esi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx * 4 + 0x33C) = 0xFFFF0000u;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x340) = edx;
    MEM32(eax + ecx * 4 + 0x344) = edx;
    MEM32(eax + ecx * 4 + 0x348) = edx;
    MEM32(eax + ecx * 4 + 0x34C) = edx;
    MEM32(eax + ecx * 4 + 0x350) = edx;
    MEM32(eax + ecx * 4 + 0x354) = edx;
    MEM32(eax + ecx * 4 + 0x358) = edx;
    MEM32(eax + ecx * 4 + 0x35C) = edx;
    MEM32(eax + ecx * 4 + 0x360) = edx;
    MEM32(eax + ecx * 4 + 0x364) = edx;
    MEM32(eax + ecx * 4 + 0x368) = edx;
    MEM32(eax + ecx * 4 + 0x36C) = edx;
    MEM32(eax + ecx * 4 + 0x370) = edx;
    MEM32(eax + ecx * 4 + 0x374) = edx;
    MEM32(eax + ecx * 4 + 0x378) = edx;
    MEM32(eax + ecx * 4 + 0x37C) = edx;
    MEM32(eax + ecx * 4 + 0x380) = edx;
    MEM32(eax + ecx * 4 + 0x384) = edx;
    MEM32(eax + ecx * 4 + 0x388) = edx;
    MEM32(eax + ecx * 4 + 0x38C) = edx;
    MEM32(eax + ecx * 4 + 0x390) = edx;
    MEM32(eax + ecx * 4 + 0x394) = edx;
    MEM32(eax + ecx * 4 + 0x398) = edx;
    MEM32(eax + ecx * 4 + 0x39C) = edx;
    esi = 0xFFF0000;
    MEM32(eax + ecx * 4 + 0x3A0) = esi;
    MEM32(eax + ecx * 4 + 0x3A4) = esi;
    MEM32(eax + ecx * 4 + 0x3A8) = edx;
    MEM32(eax + ecx * 4 + 0x3AC) = edx;
    MEM32(eax + ecx * 4 + 0x3B0) = edx;
    MEM32(eax + ecx * 4 + 0x3B4) = edx;
    MEM32(eax + ecx * 4 + 0x3B8) = edx;
    MEM32(eax + ecx * 4 + 0x3BC) = edx;
    MEM32(eax + ecx * 4 + 0x3C0) = edx;
    MEM32(eax + ecx * 4 + 0x3C4) = edx;
    MEM32(eax + ecx * 4 + 0x3C8) = edx;
    MEM32(eax + ecx * 4 + 0x3CC) = edx;
    MEM32(eax + ecx * 4 + 0x3D0) = edx;
    MEM32(eax + ecx * 4 + 0x3D4) = edx;
    MEM32(eax + ecx * 4 + 0x3D8) = edx;
    MEM32(eax + ecx * 4 + 0x3DC) = edx;
    MEM32(eax + ecx * 4 + 0x3E0) = edx;
    MEM32(eax + ecx * 4 + 0x3E4) = edx;
    MEM32(eax + ecx * 4 + 0x3E8) = edx;
    MEM32(eax + ecx * 4 + 0x3EC) = edx;
    MEM32(eax + ecx * 4 + 0x3F0) = edx;
    MEM32(eax + ecx * 4 + 0x3F4) = edx;
    MEM32(eax + ecx * 4 + 0x3F8) = edx;
    MEM32(eax + ecx * 4 + 0x3FC) = edx;
    MEM32(eax + ecx * 4 + 0x400) = edx;
    MEM32(eax + ecx * 4 + 0x404) = edx;
    MEM32(eax + ecx * 4 + 0x408) = edx;
    MEM32(eax + ecx * 4 + 0x40C) = edx;
    MEM32(eax + ecx * 4 + 0x410) = edx;
    MEM32(eax + ecx * 4 + 0x414) = edx;
    MEM32(eax + ecx * 4 + 0x418) = edx;
    MEM32(eax + ecx * 4 + 0x41C) = edx;
    MEM32(eax + ecx * 4 + 0x420) = edx;
    MEM32(eax + ecx * 4 + 0x424) = edx;
    MEM32(eax + ecx * 4 + 0x428) = edx;
    MEM32(ebp + -20) = edi;
    MEM32(eax + ecx * 4 + 0x42C) = edx;
    MEM32(eax + ecx * 4 + 0x430) = edx;
    MEM32(eax + ecx * 4 + 0x434) = edx;
    MEM32(eax + ecx * 4 + 0x438) = edx;
    MEM32(eax + ecx * 4 + 0x43C) = edx;
    MEM32(eax + ecx * 4 + 0x440) = edx;
    MEM32(eax + ecx * 4 + 0x444) = edx;
    MEM32(eax + ecx * 4 + 0x448) = edx;
    MEM32(eax + ecx * 4 + 0x44C) = edx;
    MEM32(eax + ecx * 4 + 0x450) = edx;
    MEM32(eax + ecx * 4 + 0x454) = edx;
    MEM32(eax + ecx * 4 + 0x458) = edx;
    MEM32(eax + ecx * 4 + 0x45C) = edx;
    MEM32(eax + ecx * 4 + 0x460) = edx;
    MEM32(eax + ecx * 4 + 0x464) = edx;
    MEM32(eax + ecx * 4 + 0x468) = edx;
    MEM32(eax + ecx * 4 + 0x46C) = edx;
    MEM32(eax + ecx * 4 + 0x470) = edx;
    MEM32(eax + ecx * 4 + 0x474) = edx;
    MEM32(eax + ecx * 4 + 0x478) = edx;
    MEM32(eax + ecx * 4 + 0x47C) = 0x101;
    MEM32(eax + ecx * 4 + 0x480) = edx;
    MEM32(eax + ecx * 4 + 0x484) = edx;
    MEM32(eax + ecx * 4 + 0x488) = edx;
    MEM32(eax + ecx * 4 + 0x48C) = edx;
    MEM32(eax + ecx * 4 + 0x490) = 0x111;
    MEM32(eax + ecx * 4 + 0x494) = edx;
    MEM32(eax + ecx * 4 + 0x498) = edx;
    MEM32(eax + ecx * 4 + 0x49C) = edx;
    MEM32(eax + ecx * 4 + 0x4A0) = edx;
    MEM32(eax + ecx * 4 + 0x4A4) = edx;
    MEM32(eax + ecx * 4 + 0x4A8) = 0x44400000;
    MEM32(eax + ecx * 4 + 0x4AC) = edx;
    MEM32(eax + ecx * 4 + 0x4B0) = edx;
    MEM32(eax + ecx * 4 + 0x4B4) = edx;
    MEM32(eax + ecx * 4 + 0x4B8) = edx;
    MEM32(eax + ecx * 4 + 0x4BC) = edx;
    MEM32(eax + ecx * 4 + 0x4C0) = edx;
    MEM32(eax + ecx * 4 + 0x4C4) = edx;
    MEM32(eax + ecx * 4 + 0x4C8) = edx;
    MEM32(eax + ecx * 4 + 0x4CC) = edx;
    MEM32(eax + ecx * 4 + 0x4D0) = edx;
    esi = 0x30303;
    MEM32(eax + ecx * 4 + 0x4D4) = esi;
    MEM32(eax + ecx * 4 + 0x4D8) = esi;
    MEM32(eax + ecx * 4 + 0x4DC) = esi;
    MEM32(eax + ecx * 4 + 0x4E0) = esi;
    MEM32(eax + ecx * 4 + 0x4E4) = edx;
    MEM32(eax + ecx * 4 + 0x4E8) = edx;
    MEM32(eax + ecx * 4 + 0x4EC) = edx;
    MEM32(eax + ecx * 4 + 0x4F0) = edx;
    esi = 0x80000;
    MEM32(eax + ecx * 4 + 0x4F4) = esi;
    MEM32(eax + ecx * 4 + 0x4F8) = esi;
    MEM32(eax + ecx * 4 + 0x4FC) = esi;
    MEM32(eax + ecx * 4 + 0x500) = esi;
    MEM32(eax + ecx * 4 + 0x504) = edx;
    MEM32(eax + ecx * 4 + 0x508) = edx;
    esi = 0x1012000;
    MEM32(eax + ecx * 4 + 0x50C) = esi;
    MEM32(eax + ecx * 4 + 0x510) = esi;
    MEM32(eax + ecx * 4 + 0x514) = esi;
    MEM32(eax + ecx * 4 + 0x518) = esi;
    esi = 0x105B8;
    MEM32(eax + ecx * 4 + 0x51C) = esi;
    MEM32(eax + ecx * 4 + 0x520) = esi;
    MEM32(eax + ecx * 4 + 0x524) = esi;
    MEM32(eax + ecx * 4 + 0x528) = esi;
    esi = 0x80008;
    MEM32(eax + ecx * 4 + 0x52C) = esi;
    MEM32(eax + ecx * 4 + 0x530) = esi;
    MEM32(eax + ecx * 4 + 0x534) = esi;
    MEM32(eax + ecx * 4 + 0x538) = esi;
    MEM32(eax + ecx * 4 + 0x53C) = edx;
    MEM32(eax + ecx * 4 + 0x540) = edx;
    MEM32(eax + ecx * 4 + 0x544) = edx;
    MEM32(eax + ecx * 4 + 0x548) = edx;
    MEM32(eax + ecx * 4 + 0x54C) = edx;
    MEM32(eax + ecx * 4 + 0x550) = edx;
    MEM32(eax + ecx * 4 + 0x554) = edx;
    MEM32(eax + ecx * 4 + 0x558) = edx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    esi = edi + eax + 0x70055C;
    POP32(esp, edi);

loc_001748E2: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001748E2; /* jne: not equal / not zero */

loc_001748EE: ;
    PUSH32(esp, 8);
    esi = eax + ecx * 4 + 0x57C;
    POP32(esp, edi);

loc_001748F8: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001748F8; /* jne: not equal / not zero */

loc_00174904: ;
    MEM32(eax + ecx * 4 + 0x59C) = edx;
    MEM32(eax + ecx * 4 + 0x5A0) = edx;
    MEM32(eax + ecx * 4 + 0x5A4) = 0x4B7FFFFF;
    MEM32(eax + ecx * 4 + 0x5A8) = edx;
    MEM32(eax + ecx * 4 + 0x5AC) = edx;
    MEM32(eax + ecx * 4 + 0x5B0) = edx;
    MEM32(eax + ecx * 4 + 0x5B4) = edx;
    MEM32(eax + ecx * 4 + 0x5B8) = edx;
    MEM32(eax + ecx * 4 + 0x5BC) = edx;
    MEM32(eax + ecx * 4 + 0x5C0) = edx;
    MEM32(eax + ecx * 4 + 0x5C4) = edx;
    MEM32(eax + ecx * 4 + 0x5C8) = edx;
    MEM32(eax + ecx * 4 + 0x5CC) = edx;
    MEM32(eax + ecx * 4 + 0x5D0) = edx;
    MEM32(eax + ecx * 4 + 0x5D4) = edx;
    MEM32(eax + ecx * 4 + 0x5D8) = edx;
    MEM32(eax + ecx * 4 + 0x5DC) = edx;
    MEM32(eax + ecx * 4 + 0x5E0) = edx;
    MEM32(eax + ecx * 4 + 0x5E4) = edx;
    MEM32(eax + ecx * 4 + 0x5E8) = edx;
    MEM32(eax + ecx * 4 + 0x5EC) = edx;
    MEM32(eax + ecx * 4 + 0x5F0) = edx;
    MEM32(eax + ecx * 4 + 0x5F4) = edx;
    MEM32(eax + ecx * 4 + 0x5F8) = edx;
    MEM32(eax + ecx * 4 + 0x5FC) = ebx;
    MEM32(eax + ecx * 4 + 0x600) = edx;
    MEM32(eax + ecx * 4 + 0x604) = 0x4000;
    MEM32(eax + ecx * 4 + 0x608) = edx;
    MEM32(eax + ecx * 4 + 0x60C) = edx;
    MEM32(eax + ecx * 4 + 0x610) = ebx;
    MEM32(eax + ecx * 4 + 0x614) = edx;
    PUSH32(esp, 0x23);
    MEM32(eax + ecx * 4 + 0x618) = 0x40000;
    MEM32(eax + ecx * 4 + 0x61C) = 0x10000;
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 0x620) = edx;
    PUSH32(esp, 4);
    MEM32(eax + ecx * 4 + 0x624) = edx;
    MEM32(eax + ecx * 4 + 0x628) = edx;
    esi = eax + ecx * 4 + 0x62C;
    POP32(esp, ebx);

loc_00174A1D: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A1D; /* jne: not equal / not zero */

loc_00174A24: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x6B8;
    POP32(esp, edi);

loc_00174A2E: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A2E; /* jne: not equal / not zero */

loc_00174A35: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x72C;
    POP32(esp, edi);

loc_00174A3F: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A3F; /* jne: not equal / not zero */

loc_00174A46: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x7A0;
    POP32(esp, edi);

loc_00174A50: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A50; /* jne: not equal / not zero */

loc_00174A57: ;
    PUSH32(esp, 2);
    esi = eax + ecx * 4 + 0x814;
    POP32(esp, edi);

loc_00174A61: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A61; /* jne: not equal / not zero */

loc_00174A68: ;
    esi = 0x80;
    ebx = eax + ecx * 4 + 0x81C;
    edi = esi;

loc_00174A76: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A76; /* jne: not equal / not zero */

loc_00174A7E: ;
    ebx = eax + ecx * 4 + 0xA1C;
    edi = esi;

loc_00174A87: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A87; /* jne: not equal / not zero */

loc_00174A8F: ;
    ebx = eax + ecx * 4 + 0xC1C;
    edi = esi;

loc_00174A98: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174A98; /* jne: not equal / not zero */

loc_00174AA0: ;
    ebx = eax + ecx * 4 + 0xE1C;

loc_00174AA7: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174AA7; /* jne: not equal / not zero */

loc_00174AAF: ;
    esi = eax + ecx * 4 + 0x101C;
    edi = 0xC0;

loc_00174ABB: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174ABB; /* jne: not equal / not zero */

loc_00174AC3: ;
    ebx = eax + ecx * 4 + 0x131C;
    edi = 0x1E0;
    esi = 0x6A7;

loc_00174AD4: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174AD4; /* jne: not equal / not zero */

loc_00174ADC: ;
    edi = eax + ecx * 4 + 0x1A9C;
    MEM32(ebp + -12) = 0x88;

loc_00174AEA: ;
    MEM32(edi) = 0x10700FF9;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0x436086C;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = 0xC001B;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00174AEA; /* jne: not equal / not zero */

loc_00174B12: ;
    edi = ecx + esi;
    ebx = esi;
    edi = eax + edi * 4;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = 0x300;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x300;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174B2D: ;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174B2D; /* jne: not equal / not zero */

loc_00174B3B: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x68;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174B51: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174B51; /* jne: not equal / not zero */

loc_00174B5F: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xD0;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174B75: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174B75; /* jne: not equal / not zero */

loc_00174B83: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174B99: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174B99; /* jne: not equal / not zero */

loc_00174BA7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x14;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174BBD: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174BBD; /* jne: not equal / not zero */

loc_00174BCB: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174BDE: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174BDE; /* jne: not equal / not zero */

loc_00174BEC: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xE;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174BFF: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174BFF; /* jne: not equal / not zero */

loc_00174C0D: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x44;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174C20: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174C20; /* jne: not equal / not zero */

loc_00174C2E: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174C41: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174C41; /* jne: not equal / not zero */

loc_00174C4F: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00174C62: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00174C62; /* jne: not equal / not zero */

loc_00174C70: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + esi * 4) = edx;
    edi = ebx + 0xE0;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = 0x3F800000;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = edx;
    esi = ecx + edi;
    MEM32(eax + esi * 4) = edx;
    esi = MEM32(ebp + -20);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = ebx + 0xF0;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F000000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = 0xBF800000u;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xBF800000u;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xFE000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F8;
    ebx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4) = edx;
    ecx = esi + edi;
    edi = MEM32(ebp + -28);
    MEM32(eax + ecx * 4 + 0x700004) = edx;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x700004) = 0x2FE000;
    ecx = 0x1C527C;
    edx = edi + ebx * 4 + 0x1C0004;
    MEM32(eax + edx * 4) = ecx;
    edx = esi + edi;
    MEM32(eax + edx * 4 + 0x700014) = ecx;
    MEM32(eax + edx * 4 + 0x700018) = ecx;
    esi = edi + ebx * 4 + 0x1C0008;
    MEM32(eax + edx * 4 + 0x70001C) = ecx;
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x700024) = ecx;
    POP32(esp, esi);
    MEM32(eax + edx * 4 + 0x700028) = ecx;
    MEM32(eax + edx * 4 + 0x70002C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00174E95
 * Original: 0x00174E95 - 0x00174F0F (122 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00174E95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00174EAF; /* je: equal / zero */

loc_00174EAA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00174EAFu); RECOMP_ABI_CALL(0x0016ECD0u, sub_0016ECD0); /* call 0x0016ECD0 */

loc_00174EAF: ;
    eax = MEM32(esi + 0x400720);
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x400720) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00174EC9u); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_00174EC9: ;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x134;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174EE3; /* je: equal / zero */

loc_00174ED8: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00174EE0u); RECOMP_ABI_CALL(0x00173BFEu, sub_00173BFE); /* call 0x00173BFE */

loc_00174EE0: ;
    edx = MEM32(ebp + 8);

loc_00174EE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(edi) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00174F0F(); return; } /* jne: not equal / not zero */

loc_00174EEA: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x400144) = 0x10000100;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400764) = 0x8000000;
    MEM32(esi + 0x400720) = eax;
    g_seh_ebp = ebp; sub_00174FB1(); return; /* tail jmp 0x00174FB1 */

}

/**
 * sub_00174F0F
 * Original: 0x00174F0F - 0x00174FB1 (162 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174F0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174F0F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + edx * 4 + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx * 4 + 0x144), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174F42; /* je: equal / zero */

loc_00174F1A: ;
    eax = esi + 0x400080;
    MEM32(eax) = 0x70000;
    edi = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(eax);
    PUSH32(esp, 0xF);
    MEM32(esi + 0x400750) = 0x3D0000;
    POP32(esp, eax);

loc_00174F39: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400754) = ecx;
    if ((_fa != 0)) goto loc_00174F39; /* jne: not equal / not zero */

loc_00174F42: ;
    ecx = esi + 0x400084;
    eax = MEM32(ecx);
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    edi = edx;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x400148) = edi;
    eax = MEM32(ebx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = 1;
    ecx = ebx;
    PUSH32(esp, 0x00174F85u); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_00174F85: ;
    eax = MEM32(esi + 0x400148);
    eax = eax & 0xE0FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400148) = eax;
    MEM32(esi + 0x400144) = 0x10010100;
    _fb = (uint32_t)(0x400764) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400764;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    eax = eax & 0xCFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;

    g_seh_ebp = ebp; sub_00174FB1(); return; /* fallthrough 0x00174FB1 */

}

/**
 * sub_00174FB1
 * Original: 0x00174FB1 - 0x00174FB8 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174FB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174FB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174FB8
 * Original: 0x00174FB8 - 0x00175039 (129 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174FB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174FB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x3224) = 0xF0078;
    MEM32(esi + 0x2044) = 0x101FFFF;
    eax = MEM32(ecx + 0x120);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2040) = eax;
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3000) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x3050) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3200) = ebp;
    edi = esi + 0x3250;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ebp;
    MEM32(esi + 0x3220) = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00175014u); RECOMP_ABI_CALL(0x00173C37u, sub_00173C37); /* call 0x00173C37 */

loc_00175014: ;
    MEM32(esi + 0x3210) = ebp;
    MEM32(esi + 0x3270) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x2500) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2500) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00175039
 * Original: 0x00175039 - 0x001752AE (629 bytes, 133 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175039: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x200;
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFEFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x7EC) = eax;
    MEM32(edi + 0x7FC) = eax;
    MEM32(edi + 0x808) = eax;
    MEM32(edi + 0x814) = eax;
    MEM32(edi + 0x7F0) = 0x118700;
    MEM32(edi + 0x7F4) = 0x28C3FF;
    MEM32(edi + 0x7F8) = 0xF3DE0479u;
    MEM32(edi + 0x800) = 4;
    MEM32(edi + 0x804) = 0x45EAD10E;
    MEM32(edi + 0x80C) = 0x78;
    MEM32(edi + 0x810) = 0x40;
    MEM32(esi + 0x400080) = eax;
    eax = MEM32(edi + 0x7F0);
    MEM32(esi + 0x400084) = eax;
    eax = MEM32(edi + 0x7F4);
    MEM32(esi + 0x400880) = eax;
    eax = MEM32(edi + 0x7F8);
    MEM32(esi + 0x40008C) = eax;
    eax = MEM32(edi + 0x7FC);
    MEM32(esi + 0x400090) = eax;
    eax = MEM32(edi + 0x800);
    MEM32(esi + 0x400094) = eax;
    eax = MEM32(edi + 0x804);
    MEM32(esi + 0x400B80) = eax;
    eax = MEM32(edi + 0x808);
    MEM32(esi + 0x400B84) = eax;
    eax = MEM32(edi + 0x80C);
    MEM32(esi + 0x400098) = eax;
    eax = MEM32(edi + 0x810);
    MEM32(esi + 0x40009C) = eax;
    eax = MEM32(edi + 0x814);
    MEM32(esi + 0x400B88) = eax;
    eax = MEM32(edi + 0x140);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    MEM32(esi + 0x400780) = eax;
    PUSH32(esp, 0x00175153u); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_00175153: ;
    PUSH32(esp, 0x50);
    POP32(esp, edx);
    eax = esi + 0x400904;
    ebx = 0x1FFC;
    ecx = 0xEA0000;

loc_00175166: ;
    ebp = MEM32(eax + -3147456);
    MEM32(eax) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -32;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147452);
    MEM32(eax + 4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147460);
    MEM32(eax + -4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -64;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x70 (32-bit) */
    MEM32(esi + 0x400754) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00175166; /* jl: less (signed <) */

loc_001751DB: ;
    MEM32(esp + 0x10) = 0xFFBFF710u;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - esi;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x400980;
    MEM32(esp + 0x14) = 8;

loc_001751F5: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(eax + -3147392);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400750) = ebp;
    MEM32(esi + 0x400754) = edx;
    if ((_fa != 0)) goto loc_001751F5; /* jne: not equal / not zero */

loc_0017521C: ;
    eax = MEM32(esi + 0x100324);
    MEM32(esi + 0x4009A0) = eax;
    MEM32(esi + 0x400750) = 0xEA000C;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100200);
    MEM32(esi + 0x4009A4) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100204);
    MEM32(esi + 0x4009A8) = eax;
    MEM32(esi + 0x400750) = 0xEA0004;
    MEM32(esi + 0x400754) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40014C) = eax;
    MEM32(esi + 0x400150) = eax;
    MEM32(esi + 0x400154) = eax;
    MEM32(esi + 0x400158) = eax;
    MEM32(esi + 0x400144) = 0x10000000;
    MEM32(esi + 0x400764) = 0x8000000;
    PUSH32(esp, MEM32(edi + 0x134));
    ecx = edi;
    PUSH32(esp, 0x001752A7u); RECOMP_ABI_CALL(0x00174E95u, sub_00174E95); /* call 0x00174E95 */

loc_001752A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001752B0
 * Original: 0x001752B0 - 0x001752C7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001752B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001752B0: ;
    SET_LO8(eax, LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0xD) _cf = (int)(((ecx) >> ((0xD) - 1)) & 1);
    ecx = ecx >> 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_001752D0
 * Original: 0x001752D0 - 0x00175351 (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001752D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001752D0: ;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _jt = MEM32(eax * 4 + 0x175354); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001752DDu) goto loc_001752DD;
    if (_jt == 0x001752F7u) goto loc_001752F7;
    if (_jt == 0x001752FEu) goto loc_001752FE;
    if (_jt == 0x00175312u) goto loc_00175312;
    if (_jt == 0x00175319u) goto loc_00175319;
    if (_jt == 0x00175323u) goto loc_00175323;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001752DD: ;
    eax = edx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax * 4 + 0x181DD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001752F2; /* jne: not equal / not zero */

loc_001752ED: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00175328;

loc_001752F2: ;
    esi = eax + 8;
    goto loc_00175328;

loc_001752F7: ;
    esi = 1;
    goto loc_00175328;

loc_001752FE: ;
    eax = MEM32(0x180E58);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 5;
    MEM32(0x180E58) = eax;
    goto loc_00175328;

loc_00175312: ;
    esi = 0xD;
    goto loc_00175328;

loc_00175319: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    esi = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00175328; /* je: equal / zero */

loc_00175323: ;
    esi = 4;

loc_00175328: ;
    eax = ecx;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00175390
 * Original: 0x00175390 - 0x001753B9 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    edx = esi;
    ecx = 0x30000;
    PUSH32(esp, 0x001753A0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001753A0: ;
    edi = MEM32(esp + 0xC);
    edx = esi;
    ecx = 0x20000;
    ebx = eax;
    PUSH32(esp, 0x001753B2u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001753B2: ;
    POP32(esp, edi);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001753C0
 * Original: 0x001753C0 - 0x001753EC (44 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001753C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001753C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x001753D0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001753D0: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | 0x202000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001753E5u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001753E5: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001753F0
 * Original: 0x001753F0 - 0x0017541C (44 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001753F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001753F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175400u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175400: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | 0x204000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175415u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175415: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00175420
 * Original: 0x00175420 - 0x0017545A (58 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175420: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175430u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175430: ;
    esi = eax;
    edx = ebx;
    ecx = 0x10010;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175444u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175444: ;
    edi = MEM32(esp + 0xC);
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175453u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175453: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00175460
 * Original: 0x00175460 - 0x001754AA (74 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    edx = esi;
    ecx = 0x30000;
    PUSH32(esp, 0x00175475u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175475: ;
    edi = ebp;
    edx = esi;
    ecx = 0x20020;
    ebx = eax;
    PUSH32(esp, 0x00175485u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175485: ;
    edx = esi;
    ecx = 0x10030;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175493u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175493: ;
    edi = MEM32(esp + 0x10);
    edx = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001754A2u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001754A2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001754B0
 * Original: 0x001754B0 - 0x001754EF (63 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001754B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001754B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x001754C0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001754C0: ;
    esi = eax;
    edi = 2;
    edx = ebx;
    ecx = 0x10030;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001754D9u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001754D9: ;
    edi = MEM32(esp + 0xC);
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001754E8u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001754E8: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001754F0
 * Original: 0x001754F0 - 0x0017552B (59 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001754F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001754F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    PUSH32(esp, edi);
    edi = eax;
    ecx = 0x30000;
    edx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0017551F; /* je: equal / zero */

loc_001754FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00175505u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175505: ;
    edi = 2;
    edx = ebx;
    ecx = 0x20000;
    esi = eax;
    PUSH32(esp, 0x00175518u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175518: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0017551F: ;
    PUSH32(esp, 0x00175524u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175524: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00175530
 * Original: 0x00175530 - 0x0017556F (63 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175540u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175540: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    ecx = ecx | 0x10020;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175559u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175559: ;
    edi = MEM32(esp + 0xC);
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175568u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175568: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175570
 * Original: 0x00175570 - 0x001755B3 (67 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ecx | 0x30000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebp;
    edx = esi;
    PUSH32(esp, 0x00175586u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175586: ;
    edi = MEM32(esp + 0x14);
    edx = esi;
    ecx = 0x20000;
    ebx = eax;
    PUSH32(esp, 0x00175598u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175598: ;
    edi = ebp;
    edx = esi;
    ecx = 0x10020;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001755A8u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001755A8: ;
    POP32(esp, edi);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001755C0
 * Original: 0x001755C0 - 0x001755D7 (23 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001755C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001755C0: ;
    PUSH32(esp, edi);
    edi = 1;
    ecx = 0x30000;
    PUSH32(esp, 0x001755D0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001755D0: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001755E0
 * Original: 0x001755E0 - 0x00175609 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001755E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001755E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    edx = esi;
    ecx = 0x30040;
    PUSH32(esp, 0x001755F0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001755F0: ;
    edi = MEM32(esp + 0xC);
    edx = esi;
    ecx = 0x20040;
    ebx = eax;
    PUSH32(esp, 0x00175602u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175602: ;
    POP32(esp, edi);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00175610
 * Original: 0x00175610 - 0x0017564E (62 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175620u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175620: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    edx = ebx;
    ecx = 0x10000;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175638u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175638: ;
    edi = MEM32(esp + 0x10);
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175647u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175647: ;
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175650
 * Original: 0x00175650 - 0x0017569E (78 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ebp;
    edx = esi;
    ecx = 0x30000;
    PUSH32(esp, 0x00175665u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175665: ;
    edi = MEM32(esp + 0x14);
    edx = esi;
    ecx = 0x20000;
    ebx = eax;
    PUSH32(esp, 0x00175677u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175677: ;
    edi = ebp;
    edx = esi;
    ecx = 0x10010;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175687u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175687: ;
    edi = MEM32(esp + 0x18);
    edx = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00175696u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175696: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001756A0
 * Original: 0x001756A0 - 0x001756AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001756A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001756A0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001756B0
 * Original: 0x001756B0 - 0x001756B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001756B0(void)
{

loc_001756B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001756C0
 * Original: 0x001756C0 - 0x001756C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001756C0(void)
{

loc_001756C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001756D0
 * Original: 0x001756D0 - 0x001756DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001756D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001756D0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001756E0_gen
 * Original: 0x001756E0 - 0x00175704 (36 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001756E0_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001756E0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x784);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00175704(); return; } /* je: equal / zero */

loc_001756F4: ;
    eax = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175704
 * Original: 0x00175704 - 0x0017575A (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175704(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175704: ;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = eax & 0xFFFEFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x180D88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0017572F; /* je: equal / zero */

loc_00175723: ;
    MEM32(esp + 0xC) = 3;
    eax = MEM32(esp + 0xC);

loc_0017572F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = esp + 0x30;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + 0x1809B0;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_00175760(); return; /* tail jmp 0x00175760 */

}

/**
 * sub_00175760
 * Original: 0x00175760 - 0x0017578D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175760: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx + 0x34);
    esi = MEM32(ecx + 0x38);
    ebp = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = edx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

}

/**
 * sub_00175790
 * Original: 0x00175790 - 0x0017579E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175790: ;
    MEM32(esp + 0x14) = edx;
    ecx = eax + -1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x175C38)); return; /* indirect tail jmp */

}

/**
 * sub_0017579E
 * Original: 0x0017579E - 0x001757E8 (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017579E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017579E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001757DD; /* je: equal / zero */

loc_001757A3: ;
    ecx = ebx;
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175AC6(); return; } /* jne: not equal / not zero */

loc_001757BC: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x6C) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00175B65(); return; /* tail jmp 0x00175B65 */

loc_001757DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_001757E8
 * Original: 0x001757E8 - 0x00175800 (24 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001757E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001757E8: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x001757F6u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001757F6: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_00175800
 * Original: 0x00175800 - 0x00175815 (21 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175800: ;
    edi = ebp;
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0017580Bu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017580B: ;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_00175815
 * Original: 0x00175815 - 0x0017581E (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175815(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175815: ;
    eax = edx;
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175825(); return; /* tail jmp 0x00175825 */

}

/**
 * sub_0017581E
 * Original: 0x0017581E - 0x00175829 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017581E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017581E: ;
    eax = edx;
    eax = eax | 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;

    g_seh_ebp = ebp; sub_00175829(); return; /* fallthrough 0x00175829 */

}

/**
 * sub_00175825
 * Original: 0x00175825 - 0x00175829 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175825: ;
    MEM32(esp + 0x14) = eax;

    g_seh_ebp = ebp; sub_00175829(); return; /* fallthrough 0x00175829 */

}

/**
 * sub_00175829
 * Original: 0x00175829 - 0x00175843 (26 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175829(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175829: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175837u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175837: ;
    esi = eax;
    ecx = 0x20000;
    g_seh_ebp = ebp; sub_00175ABB(); return; /* tail jmp 0x00175ABB */

}

/**
 * sub_00175843
 * Original: 0x00175843 - 0x0017584E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175843(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175843: ;
    eax = edx;
    eax = eax | 0x18000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;

    g_seh_ebp = ebp; sub_0017584E(); return; /* fallthrough 0x0017584E */

}

/**
 * sub_0017584E
 * Original: 0x0017584E - 0x00175856 (8 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017584E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017584E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | 0x8000;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00175856(); return; /* fallthrough 0x00175856 */

}

/**
 * sub_00175856
 * Original: 0x00175856 - 0x00175871 (27 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175856(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175856: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175864u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175864: ;
    esi = eax;
    esi = esi | 0x202000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AB9(); return; /* tail jmp 0x00175AB9 */

}

/**
 * sub_00175871
 * Original: 0x00175871 - 0x0017588C (27 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175871(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175871: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0017587Fu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017587F: ;
    esi = eax;
    esi = esi | 0x204000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AB9(); return; /* tail jmp 0x00175AB9 */

}

/**
 * sub_0017588C
 * Original: 0x0017588C - 0x001758B8 (44 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017588C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017588C: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0017589Au); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017589A: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10010;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001758AFu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001758AF: ;
    esi = MEM32(esp + 0x10);
    g_seh_ebp = ebp; sub_00175AB7(); return; /* tail jmp 0x00175AB7 */

}

/**
 * sub_001758B8
 * Original: 0x001758B8 - 0x001758E9 (49 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001758B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001758B8: ;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001758CDu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001758CD: ;
    edi = MEM32(esp + 0x10);
    edx = ebx;
    ecx = 0x20020;
    esi = eax;
    PUSH32(esp, 0x001758DFu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001758DF: ;
    ecx = 0x10030;
    g_seh_ebp = ebp; sub_00175AAE(); return; /* tail jmp 0x00175AAE */

}

/**
 * sub_001758E9
 * Original: 0x001758E9 - 0x0017590E (37 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001758E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001758E9: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x001758F7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001758F7: ;
    esi = eax;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 2;
    ecx = 0x10030;
    g_seh_ebp = ebp; sub_00175AB0(); return; /* tail jmp 0x00175AB0 */

}

/**
 * sub_0017590E
 * Original: 0x0017590E - 0x0017594A (60 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017590E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017590E: ;
    ecx = 0x30000;
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0017591Cu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017591C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0017593D; /* je: equal / zero */

loc_00175923: ;
    edi = 2;
    edx = ebx;
    ecx = 0x20000;
    PUSH32(esp, 0x00175934u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175934: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

loc_0017593D: ;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_0017594A
 * Original: 0x0017594A - 0x00175976 (44 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017594A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017594A: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175958u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175958: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10020;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0017596Du); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017596D: ;
    esi = MEM32(esp + 0x10);
    g_seh_ebp = ebp; sub_00175AB7(); return; /* tail jmp 0x00175AB7 */

}

/**
 * sub_00175976
 * Original: 0x00175976 - 0x0017597D (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175976(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175976: ;
    ecx = 0x30000;
    g_seh_ebp = ebp; sub_001759AE(); return; /* tail jmp 0x001759AE */

}

/**
 * sub_0017597D
 * Original: 0x0017597D - 0x001759A9 (44 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017597D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017597D: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0017598Bu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_0017598B: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10030;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001759A0u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759A0: ;
    esi = MEM32(esp + 0x10);
    g_seh_ebp = ebp; sub_00175AB7(); return; /* tail jmp 0x00175AB7 */

}

/**
 * sub_001759A9
 * Original: 0x001759A9 - 0x001759E7 (62 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001759A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001759A9: ;
    ecx = 0x30010;
    edi = esi;
    edx = ebx;
    PUSH32(esp, 0x001759B7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759B7: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001759C9u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759C9: ;
    ebp = MEM32(esp + 0x10);
    edi = esi;
    edx = ebx;
    ecx = 0x10020;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001759DDu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759DD: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_001759AE
 * Original: 0x001759AE - 0x001759E7 (57 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001759AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001759AE: ;
    edi = esi;
    edx = ebx;
    PUSH32(esp, 0x001759B7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759B7: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001759C9u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759C9: ;
    ebp = MEM32(esp + 0x10);
    edi = esi;
    edx = ebx;
    ecx = 0x10020;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001759DDu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759DD: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_001759E7
 * Original: 0x001759E7 - 0x00175A15 (46 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001759E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001759E7: ;
    edi = 1;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x001759F8u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_001759F8: ;
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(ecx + 8);
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = edx;
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_00175A15
 * Original: 0x00175A15 - 0x00175A5A (69 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175A15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175A15: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30040;
    PUSH32(esp, 0x00175A23u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175A23: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20040;
    esi = eax;
    PUSH32(esp, 0x00175A33u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175A33: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx | 0x820000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x6C) = edx;
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00175AC6(); return; /* tail jmp 0x00175AC6 */

}

/**
 * sub_00175A5A
 * Original: 0x00175A5A - 0x00175A83 (41 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175A5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175A5A: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175A66u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175A66: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi;
    edx = ebx;
    ecx = 0x10000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00175A7Du); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175A7D: ;
    esi = MEM32(esp + 0x10);
    g_seh_ebp = ebp; sub_00175AB7(); return; /* tail jmp 0x00175AB7 */

}

/**
 * sub_00175A83
 * Original: 0x00175A83 - 0x00175C37 (436 bytes, 122 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175A83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175A83: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00175A8Fu); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175A8F: ;
    edi = esi;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00175AA1u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AA1: ;
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x10);
    ecx = 0x10010;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    PUSH32(esp, 0x00175AB7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AB7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175AAE
 * Original: 0x00175AAE - 0x00175C37 (393 bytes, 111 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175AAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175AAE: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    PUSH32(esp, 0x00175AB7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AB7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175AB0
 * Original: 0x00175AB0 - 0x00175C37 (391 bytes, 110 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175AB0: ;
    edx = ebx;
    PUSH32(esp, 0x00175AB7u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AB7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175AB7
 * Original: 0x00175AB7 - 0x00175C37 (384 bytes, 108 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175AB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175AB7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175AB9
 * Original: 0x00175AB9 - 0x00175C37 (382 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175AB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175AB9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175ABB
 * Original: 0x00175ABB - 0x00175C37 (380 bytes, 106 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175ABB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175ABB: ;
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00175AC4u); RECOMP_ABI_CALL(0x001752D0u, sub_001752D0); /* call 0x001752D0 */

loc_00175AC4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175AC6
 * Original: 0x00175AC6 - 0x00175C37 (369 bytes, 102 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175AC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175AC6: ;
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175AF2; /* jne: not equal / not zero */

loc_00175AD6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175AF2: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00175B2F; /* js: sign (negative) */

loc_00175B0A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    g_seh_ebp = ebp; sub_00175790(); return; /* tail jmp 0x00175790 */

loc_00175B2F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00175B63; /* je: equal / zero */

loc_00175B51: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00175760(); return; } /* jne: not equal / not zero */

loc_00175B63: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00175B65
 * Original: 0x00175B65 - 0x00175C37 (210 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175B65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175B65: ;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175B70: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175B70; /* jne: not equal / not zero */

loc_00175B81: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00175BBA; /* jb: below (unsigned <) */

loc_00175BB5: ;
    PUSH32(esp, 0x00175BBAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00175BBA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C0A; /* je: equal / zero */

loc_00175BEE: ;
    edx = MEM32(0x180D4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175C0A; /* jne: not equal / not zero */

loc_00175BF8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175C0A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C23; /* je: equal / zero */

loc_00175C18: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00175C23: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00183680
 * Original: 0x00183680 - 0x001836A8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00183680: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(0x281C00)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_001836A8(); return; } /* jp: parity */

loc_00183697: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_001836AA(); return; } /* jp: parity */

loc_001836A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001836A8
 * Original: 0x001836A8 - 0x001836AA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001836A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001836A8: ;
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_001836AA(); return; /* fallthrough 0x001836AA */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001836AA
 * Original: 0x001836AA - 0x001836AD (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001836AA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001836AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001836C0
 * Original: 0x001836C0 - 0x0018374E (142 bytes, 59 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001836C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001836C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); /* fsubr st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018374E
 * Original: 0x0018374E - 0x001837FD (175 bytes, 69 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0018374E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018374E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001837FD
 * Original: 0x001837FD - 0x00183840 (67 bytes, 28 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001837FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001837FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183840
 * Original: 0x00183840 - 0x001838A9 (105 bytes, 39 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00183840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183840: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001838A9
 * Original: 0x001838A9 - 0x001838DE (53 bytes, 19 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001838A9(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001838A9: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001838DE
 * Original: 0x001838DE - 0x0018398C (174 bytes, 71 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001838DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001838DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); /* fsubr st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018398C
 * Original: 0x0018398C - 0x00183A5D (209 bytes, 82 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0018398C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018398C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183A5D
 * Original: 0x00183A5D - 0x00183ABA (93 bytes, 37 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183A5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183A5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183ABA
 * Original: 0x00183ABA - 0x00183B45 (139 bytes, 52 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00183ABA(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183ABA: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183B45
 * Original: 0x00183B45 - 0x00183BA4 (95 bytes, 35 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00183B45(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183B45: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183BA4
 * Original: 0x00183BA4 - 0x00183C75 (209 bytes, 86 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183BA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00183BA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C24C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -4) - fp_top()); /* fsubr dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 4) & 7]); /* fsub st(4) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    POP32(esp, edi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183C75
 * Original: 0x00183C75 - 0x00183D68 (243 bytes, 95 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183C75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183C75: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183D68
 * Original: 0x00183D68 - 0x00183DDF (119 bytes, 46 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183D68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183DDF
 * Original: 0x00183DDF - 0x00183E78 (153 bytes, 57 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00183DDF(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183DDF: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x30)); /* fmul dword ptr [edx + 0x30] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x38)); /* fmul dword ptr [edx + 0x38] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x34)); /* fmul dword ptr [edx + 0x34] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x3C)); /* fmul dword ptr [edx + 0x3c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183E78
 * Original: 0x00183E78 - 0x00183F42 (202 bytes, 80 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00183E78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_stack[(g_fp_top + 5) & 7] = fp_top(); fp_pop(); /* fstp st(5) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183F42
 * Original: 0x00183F42 - 0x00183FAF (109 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183F42(void)
{
    int _flags = 0; /* fallback flag var */
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

loc_00183F42: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x20);
    fp_push(MEMF(ecx + 8)); /* fld float */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x30);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x24);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    MEM32(eax + 0x18) = edx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x34);
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x38);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00183FAC; /* je: equal / zero */

loc_00183F96: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = ecx;

loc_00183FAC: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183FAF
 * Original: 0x00183FAF - 0x0018433C (909 bytes, 353 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00183FAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00183FAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + -32) = ecx;
    fp_push(MEMF(ebp + -32)); /* fld float */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(ebp + -24) = ecx;
    fp_push(MEMF(ebp + -28)); /* fld float */
    ecx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x34);
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(eax + 0x38);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -16) = ecx;
    fp_push(MEMF(ebp + -4)); /* fld float */
    ecx = MEM32(eax + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEM32(ebp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEMF(ebp + -40) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    MEMF(ebp + -32) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEMF(ebp + -36) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -84) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -44)); /* fmul dword ptr [ebp - 0x2c] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -52)); /* fmul dword ptr [ebp - 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -48)); /* fmul dword ptr [ebp - 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -44)); /* fmul dword ptr [ebp - 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -52)); /* fmul dword ptr [ebp - 0x34] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -48)); /* fmul dword ptr [ebp - 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -72) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -40)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    MEM32(ebp + -56) = ecx;
    fp_push(MEMF(ebp + -36)); /* fld float */
    ecx = MEM32(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(ebp + -24) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x24);
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(eax + 0x34);
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEM32(ebp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184291; /* je: equal / zero */

loc_0018428F: ;
    MEMF(eax) = (float)fp_top(); /* fst */

loc_00184291: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, ecx);
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001842A7u); RECOMP_ABI_CALL(0x00152F94u, sub_00152F94); /* call 0x00152F94 */

loc_001842A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00184338; /* je: equal / zero */

loc_001842B1: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -72)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -76)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00184338: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018433C
 * Original: 0x0018433C - 0x00184398 (92 bytes, 34 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018433C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018433C: ;
    eax = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    fp_push(0.0); /* fldz */
    MEM32(eax) = ecx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = ecx;
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184398
 * Original: 0x00184398 - 0x001843F4 (92 bytes, 34 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184398(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184398: ;
    eax = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x38) = ecx;
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001843F4
 * Original: 0x001843F4 - 0x0018446E (122 bytes, 48 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001843F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001843F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + -4);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = ecx;
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018446E
 * Original: 0x0018446E - 0x001844E9 (123 bytes, 49 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0018446E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0018446E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -4;
    MEM32(ebp + -12) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001844E9
 * Original: 0x001844E9 - 0x00184565 (124 bytes, 49 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001844E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001844E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    fp_push(0.0); /* fldz */
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184565
 * Original: 0x00184565 - 0x00184647 (226 bytes, 87 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184565(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00184565: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 8);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -16)); /* fsub dword ptr [ebp - 0x10] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184647
 * Original: 0x00184647 - 0x001846B3 (108 bytes, 41 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184647(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184647: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001846B3
 * Original: 0x001846B3 - 0x0018471F (108 bytes, 43 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001846B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001846B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018471F
 * Original: 0x0018471F - 0x001847B3 (148 bytes, 54 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0018471F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0018471F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001847B3
 * Original: 0x001847B3 - 0x00184847 (148 bytes, 56 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001847B3_gen(void) /* named widescreen shadow */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001847B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184847
 * Original: 0x00184847 - 0x001848E4 (157 bytes, 56 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184847(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184847: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x20)); /* fsub dword ptr [ebp + 0x20] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x20) / fp_top()); /* fdivr dword ptr [ebp + 0x20] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001848E4
 * Original: 0x001848E4 - 0x00184985 (161 bytes, 60 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001848E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001848E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x20) / fp_top()); /* fdivr dword ptr [ebp + 0x20] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184985
 * Original: 0x00184985 - 0x001849F7 (114 bytes, 41 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184985(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184985: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x22C164)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001849F7
 * Original: 0x001849F7 - 0x00184A6B (116 bytes, 42 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001849F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001849F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x22C164)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184A6B
 * Original: 0x00184A6B - 0x00184B0D (162 bytes, 62 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184A6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184A6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x20)); /* fsub dword ptr [ebp + 0x20] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184B0D
 * Original: 0x00184B0D - 0x00184BB1 (164 bytes, 63 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184B0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184B0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184BB1
 * Original: 0x00184BB1 - 0x00184C8A (217 bytes, 79 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184BB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00184BB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = ebp + -4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -28) = eax;
    eax = ebp + 0x14;
    MEM32(ebp + -32) = eax;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    fp_push(MEMF(ebp + -24)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = ebp + -12;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -32) = eax;
    eax = ebp + -20;
    MEM32(ebp + -28) = eax;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + -8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -32) = eax;
    eax = ebp + -16;
    MEM32(ebp + -28) = eax;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184C8A
 * Original: 0x00184C8A - 0x00184D20 (150 bytes, 57 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184C8A(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184C8A: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184D20
 * Original: 0x00184D20 - 0x00184D78 (88 bytes, 32 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C0C)); /* fmul dword ptr [0x281c0c] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C08)); /* fmul dword ptr [0x281c08] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C04)); /* fmul dword ptr [0x281c04] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184D78
 * Original: 0x00184D78 - 0x00184DB8 (64 bytes, 25 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184D78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184D78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184E04
 * Original: 0x00184E04 - 0x00184E23 (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184E04(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184E04: ;
    fp_push(1.0); /* fld1 */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184E23
 * Original: 0x00184E23 - 0x00184E50 (45 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184E23(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184E23: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184E70
 * Original: 0x00184E70 - 0x00184E97 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184E70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184E70: ;
    fp_push(1.0); /* fld1 */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184E97
 * Original: 0x00184E97 - 0x00184EC4 (45 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184E97(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184E97: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184EE4
 * Original: 0x00184EE4 - 0x00184F09 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184EE4(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184EE4: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184F21
 * Original: 0x00184F21 - 0x00184F44 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184F21(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184F21: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184F61
 * Original: 0x00184F61 - 0x00184F86 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184F61(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184F61: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184F86
 * Original: 0x00184F86 - 0x00184FBD (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00184F86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184F86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184FBD
 * Original: 0x00184FBD - 0x00184FEB (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184FBD(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184FBD: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184FEB
 * Original: 0x00184FEB - 0x0018503F (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00184FEB(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00184FEB: ;
    eax = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018503F
 * Original: 0x0018503F - 0x0018506D (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018503F(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018503F: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018506D
 * Original: 0x0018506D - 0x00185092 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018506D(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018506D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185092
 * Original: 0x00185092 - 0x001850B7 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00185092(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00185092: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001850B7
 * Original: 0x001850B7 - 0x001850DC (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001850B7(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001850B7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001850DC
 * Original: 0x001850DC - 0x001850FC (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001850DC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001850DC: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185119
 * Original: 0x00185119 - 0x001851A6 (141 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185119: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018514Au); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_0018514A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185164; /* je: equal / zero */

loc_00185151: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001851A2; /* je: equal / zero */

loc_00185158: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);

loc_0018515F: ;
    MEM32(eax + 4) = ecx;
    goto loc_001851A2;

loc_00185164: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00185199; /* jne: not equal / not zero */

loc_00185177: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    goto loc_0018515F;

loc_00185199: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001851A2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001851A6
 * Original: 0x001851A6 - 0x00185240 (154 bytes, 62 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001851A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001851A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185221u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185221: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0018523C; /* jne: not equal / not zero */

loc_0018522B: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018523C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185240
 * Original: 0x00185240 - 0x0018527A (58 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185251u); RECOMP_ABI_CALL(0x00184F21u, sub_00184F21); /* call 0x00184F21 */

loc_00185251: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185265u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185265: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018527A(); return; } /* je: equal / zero */

loc_0018526C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001852B6(); return; } /* je: equal / zero */

loc_00185273: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_seh_ebp = ebp; sub_001852B6(); return; /* tail jmp 0x001852B6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185273
 * Original: 0x00185273 - 0x0018527A (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185273(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185273: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_seh_ebp = ebp; sub_001852B6(); return; /* tail jmp 0x001852B6 */

}

/**
 * sub_0018527A
 * Original: 0x0018527A - 0x001852A5 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018527A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_0018527A: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001852A5(); return; } /* jne: not equal / not zero */

loc_0018528A: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -12;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018529Eu); RECOMP_ABI_CALL(0x0006E3F0u, sub_0006E3F0); /* call 0x0006E3F0 */

loc_0018529E: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00185273(); return; /* tail jmp 0x00185273 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001852A5
 * Original: 0x001852A5 - 0x001852B6 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001852A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001852A5: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_001852B6(); return; /* fallthrough 0x001852B6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001852B6
 * Original: 0x001852B6 - 0x001852BC (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001852B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001852B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001852BC
 * Original: 0x001852BC - 0x00185371 (181 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001852BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001852BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185354u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185354: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018536A; /* jne: not equal / not zero */

loc_0018535B: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018536Au); RECOMP_ABI_CALL(0x00184E04u, sub_00184E04); /* call 0x00184E04 */

loc_0018536A: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185371
 * Original: 0x00185371 - 0x00185461 (240 bytes, 97 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185371(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00185371: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    PUSH32(esp, edi);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -4)); /* fsub dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    eax = MEM32(ebp + 8);
    esi = ebp + -28;
    edi = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185461
 * Original: 0x00185461 - 0x001854E3 (130 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185461(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185461: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185472u); RECOMP_ABI_CALL(0x00184FBDu, sub_00184FBD); /* call 0x00184FBD */

loc_00185472: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185486u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185486: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018549C; /* je: equal / zero */

loc_0018548D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001854DD; /* je: equal / zero */

loc_00185494: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_001854DD;

loc_0018549C: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001854C7; /* jne: not equal / not zero */

loc_001854AC: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -16;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001854C0u); RECOMP_ABI_CALL(0x00184E23u, sub_00184E23); /* call 0x00184E23 */

loc_001854C0: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_00185494;

loc_001854C7: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001854DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001854E3
 * Original: 0x001854E3 - 0x001855C6 (227 bytes, 89 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001854E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001854E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00185567; /* jne: not equal / not zero */

loc_001854F6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185559; /* je: equal / zero */

loc_001854FB: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = 0xFFFFFFFCu;

loc_00185509: ;
    esi = 0xFFFFFFF0u;
    fp_push(MEMF(edx + edi * 4 + 0x10)); /* fld float */
    fp_push(MEMF(edx + edi * 4 + 0x20)); /* fld float */
    fp_push(MEMF(edx + edi * 4 + 0x30)); /* fld float */
    fp_push(MEMF(edx + edi * 4 + 0x40)); /* fld float */

loc_0018551E: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi * 4 + 0x40)); /* fmul dword ptr [ecx + esi*4 + 0x40] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi * 4 + 0x44)); /* fmul dword ptr [ecx + esi*4 + 0x44] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi * 4 + 0x48)); /* fmul dword ptr [ecx + esi*4 + 0x48] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi * 4 + 0x4C)); /* fmul dword ptr [ecx + esi*4 + 0x4c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebx + esi * 4 + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0018551E; /* jne: not equal / not zero */

loc_00185549: ;
    /* FPU: ffree st(3) */
    /* FPU: ffree st(2) */
    /* FPU: ffree st(1) */
    /* FPU: ffree st(0) */
    ebx = ebx + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00185509; /* jne: not equal / not zero */

loc_00185557: ;
    goto loc_001855BF;

loc_00185559: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = ebp + -64;
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
    ecx = ebp + -64;
    MEM32(ebp + 0x10) = ecx;

loc_00185567: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = 0xFFFFFFFCu;

loc_00185575: ;
    esi = 0xFFFFFFFCu;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */

loc_00185585: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + esi * 4 + 0x10)); /* fmul dword ptr [edx + esi*4 + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + esi * 4 + 0x20)); /* fmul dword ptr [edx + esi*4 + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + esi * 4 + 0x30)); /* fmul dword ptr [edx + esi*4 + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + esi * 4 + 0x40)); /* fmul dword ptr [edx + esi*4 + 0x40] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebx + esi * 4 + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00185585; /* jne: not equal / not zero */

loc_001855AE: ;
    /* FPU: ffree st(3) */
    /* FPU: ffree st(2) */
    /* FPU: ffree st(1) */
    /* FPU: ffree st(0) */
    ecx = ecx + 0x10;
    ebx = ebx + 0x10;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00185575; /* jne: not equal / not zero */

loc_001855BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001855C6
 * Original: 0x001855C6 - 0x001856C5 (255 bytes, 105 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001855C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001855C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -4;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    esi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -4)); /* fsub dword ptr [ebp - 4] */
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -28;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185604u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00185604: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001856C5
 * Original: 0x001856C5 - 0x001856FE (57 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001856C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001856C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -16;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001856EBu); RECOMP_ABI_CALL(0x00184BB1u, sub_00184BB1); /* call 0x00184BB1 */

loc_001856EB: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001856F7u); RECOMP_ABI_CALL(0x00184565u, sub_00184565); /* call 0x00184565 */

loc_001856F7: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001856FE
 * Original: 0x001856FE - 0x001858FE (512 bytes, 194 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001856FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001856FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018586C; /* je: equal / zero */

loc_00185714: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    fp_push(0.0); /* fldz */
    if (CMP_EQ(_fa, _fb)) goto loc_00185818; /* je: equal / zero */

loc_00185720: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    fp_push(0.0); /* fldz */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -64) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(eax + 4);
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 8);
    fp_push(0.0); /* fldz */
    MEM32(ebp + -24) = eax;
    eax = ebp + -128;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(0.0); /* fldz */
    MEM32(ebp + -44) = ecx;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018577Cu); RECOMP_ABI_CALL(0x00184565u, sub_00184565); /* call 0x00184565 */

loc_0018577C: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebp + -128;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001857F7; /* je: equal / zero */

loc_00185787: ;
    eax = ebp + -192;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185793u); RECOMP_ABI_CALL(0x00183F42u, sub_00183F42); /* call 0x00183F42 */

loc_00185793: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018579Cu); RECOMP_ABI_CALL(0x00184FEBu, sub_00184FEB); /* call 0x00184FEB */

loc_0018579C: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    POP32(esp, ecx);
    eax = ebp + -192;
    PUSH32(esp, eax);
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001857C5u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001857C5: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001857D0u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001857D0: ;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001857DBu); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001857DB: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00185876;

loc_001857F7: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185800u); RECOMP_ABI_CALL(0x00183F42u, sub_00183F42); /* call 0x00183F42 */

loc_00185800: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018580Bu); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_0018580B: ;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185816u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_00185816: ;
    goto loc_00185876;

loc_00185818: ;
    esi = MEM32(ebp + 8);
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(eax + 8);
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x28) = eax;
    goto loc_00185876;

loc_0018586C: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185875u); RECOMP_ABI_CALL(0x00184FEBu, sub_00184FEB); /* call 0x00184FEB */

loc_00185875: ;
    POP32(esp, ecx);

loc_00185876: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001858D5; /* je: equal / zero */

loc_0018587C: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + -128;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185888u); RECOMP_ABI_CALL(0x00184565u, sub_00184565); /* call 0x00184565 */

loc_00185888: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001858D0; /* je: equal / zero */

loc_00185895: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001858B4u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001858B4: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001858D5;

loc_001858D0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001858D5u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001858D5: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001858F6; /* je: equal / zero */

loc_001858DC: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_001858F6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001858FE
 * Original: 0x001858FE - 0x001859DA (220 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001858FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001858FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esi) = (float)fp_top(); /* fst */
    MEMF(esi + 0x14) = (float)fp_top(); /* fst */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001859B2; /* je: equal / zero */

loc_0018595A: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185967u); RECOMP_ABI_CALL(0x00184565u, sub_00184565); /* call 0x00184565 */

loc_00185967: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001859AC; /* je: equal / zero */

loc_00185974: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185990u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_00185990: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001859B1;

loc_001859AC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001859B1u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_001859B1: ;
    POP32(esp, edi);

loc_001859B2: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001859D3; /* je: equal / zero */

loc_001859B9: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_001859D3: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001859DA
 * Original: 0x001859DA - 0x00185ACE (244 bytes, 94 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001859DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001859DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 0xC);
    eax = ebp + -12;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001859F1u); RECOMP_ABI_CALL(0x00184F61u, sub_00184F61); /* call 0x00184F61 */

loc_001859F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001859FEu); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_001859FE: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185A0Eu); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00185A0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185A1Bu); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00185A1B: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185A2Cu); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00185A2C: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    ecx = MEM32(ebp + -36);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -28);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -12);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -4);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185ACE
 * Original: 0x00185ACE - 0x00185BC2 (244 bytes, 94 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00185ACE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185AE5u); RECOMP_ABI_CALL(0x00184F61u, sub_00184F61); /* call 0x00184F61 */

loc_00185AE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185AF2u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00185AF2: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185B02u); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00185B02: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185B0Fu); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00185B0F: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185B20u); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00185B20: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    ecx = MEM32(ebp + -36);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -28);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -12);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -4);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185BC2
 * Original: 0x00185BC2 - 0x00185C3F (125 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185BC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185BC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185BD0u); RECOMP_ABI_CALL(0x0018503Fu, sub_0018503F); /* call 0x0018503F */

loc_00185BD0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x281c10] */
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_00185C1A; /* jne: not equal / not zero */

loc_00185BE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185C03; /* je: equal / zero */

loc_00185BE5: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00185C05;

loc_00185C03: ;
    fp_pop(); /* fstp st(0) */

loc_00185C05: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185C39; /* je: equal / zero */

loc_00185C0C: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185C14u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_00185C14: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00185C39;

loc_00185C1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185C2E; /* je: equal / zero */

loc_00185C20: ;
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185C2E: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185C39; /* je: equal / zero */

loc_00185C35: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185C39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185C3F
 * Original: 0x00185C3F - 0x00185D73 (308 bytes, 112 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185C3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185C3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185C9E; /* jne: not equal / not zero */

loc_00185C5D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C26C) / fp_top()); /* fdivr dword ptr [0x22c26c] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x10)); /* fsub dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00185D6D;

loc_00185C9E: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x14)); /* fsub dword ptr [ecx + 0x14] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    POP32(esp, edx);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -28) = ebx;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(ebp + -24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x28) - fp_top()); /* fsubr dword ptr [ecx + 0x28] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -12)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), HI8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185CDF; /* jne: not equal / not zero */

loc_00185CDD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00185CDF: ;
    fp_push(MEMF(ebp + ebx * 4 + -16)); /* fld float */
    MEM32(ebp + 0xC) = ebx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185CF5; /* je: equal / zero */

loc_00185CF0: ;
    ebx = edx;
    MEM32(ebp + 0xC) = ebx;

loc_00185CF5: ;
    edx = ebx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ebp + edx + -16)); /* fld float */
    edi = MEM32(ebp + edx + -28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax = MEM32(ebp + 8);
    esi = edi;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edx + eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C26C) / fp_top()); /* fdivr dword ptr [0x22c26c] */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edi * 4)); /* fadd dword ptr [ecx + edi*4] */
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + esi + -28);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + esi + -28);
    MEMF(esi + eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 4)); /* fadd dword ptr [ecx + edx*4] */
    edx = MEM32(ebp + 8);
    edi = MEM32(ebp + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edx + eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + edx * 4)); /* fsub dword ptr [ecx + edx*4] */
    POP32(esp, esi);
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185D6D: ;
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185D73
 * Original: 0x00185D73 - 0x00185DCF (92 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185D73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00185D73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185D85u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00185D85: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    eax = ecx + 0xC;
    MEM32(ebp + -4) = eax;
    eax = ebp + 0xC;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    fp_push(MEMF(ebp + 8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    eax = ecx;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185DCF
 * Original: 0x00185DCF - 0x00185E51 (130 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185DCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185DCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185DE0u); RECOMP_ABI_CALL(0x0018503Fu, sub_0018503F); /* call 0x0018503F */

loc_00185DE0: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185DF4u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185DF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185E0A; /* je: equal / zero */

loc_00185DFB: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185E4B; /* je: equal / zero */

loc_00185E02: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_00185E4B;

loc_00185E0A: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185E35; /* jne: not equal / not zero */

loc_00185E1A: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -16;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185E2Eu); RECOMP_ABI_CALL(0x00184E97u, sub_00184E97); /* call 0x00184E97 */

loc_00185E2E: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_00185E02;

loc_00185E35: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185E4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185E51
 * Original: 0x00185E51 - 0x00185EBD (108 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185E51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185E51: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185E5Eu); RECOMP_ABI_CALL(0x0018503Fu, sub_0018503F); /* call 0x0018503F */

loc_00185E5E: ;
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    esi = MEM32(ebp + 8);
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185EA3; /* jne: not equal / not zero */

loc_00185E72: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185E7Bu); RECOMP_ABI_CALL(0x00185092u, sub_00185092); /* call 0x00185092 */

loc_00185E7B: ;
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185E8Cu); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185E8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00185EB6; /* jne: not equal / not zero */

loc_00185E93: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185EA1u); RECOMP_ABI_CALL(0x00184E70u, sub_00184E70); /* call 0x00184E70 */

loc_00185EA1: ;
    goto loc_00185EB6;

loc_00185EA3: ;
    fp_push(0.0); /* fldz */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185EB6: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185EBD
 * Original: 0x00185EBD - 0x00185F3B (126 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185EBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185EBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00185F1E; /* jp: parity */

loc_00185ED5: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185EDDu); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_00185EDD: ;
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185EF8u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185EF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00185F21; /* jne: not equal / not zero */

loc_00185F02: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00185F31;

loc_00185F1E: ;
    eax = MEM32(ebp + 8);

loc_00185F21: ;
    fp_push(MEMF(esi)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_00185F31: ;
    fp_push(0.0); /* fldz */
    POP32(esp, esi);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185F3B
 * Original: 0x00185F3B - 0x00185FD6 (155 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00185F3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185F3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 4)); /* fld float */
    esi = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = esi + 0xC;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ebp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = ebp + 0xC;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebp + -8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185F98u); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_00185F98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185FB5; /* je: equal / zero */

loc_00185F9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185FCF; /* je: equal / zero */

loc_00185FA3: ;
    eax = MEM32(ecx);
    MEM32(esi) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esi + 8) = eax;
    goto loc_00185FCF;

loc_00185FB5: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00185FCF: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00185FD6
 * Original: 0x00185FD6 - 0x001860B0 (218 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00185FD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00185FD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00185FF1u); RECOMP_ABI_CALL(0x0018506Du, sub_0018506D); /* call 0x0018506D */

loc_00185FF1: ;
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186007; /* jne: not equal / not zero */

loc_00186003: ;
    fp_push(1.0); /* fld1 */
    goto loc_0018600D;

loc_00186007: ;
    fp_push(MEMF(0x235A58)); /* fld float */

loc_0018600D: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018605B; /* jne: not equal / not zero */

loc_00186026: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00186060;

loc_0018605B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */

loc_00186060: ;
    eax = MEM32(ebp + 8);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    POP32(esp, edi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001860B0
 * Original: 0x001860B0 - 0x00186107 (87 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001860B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001860B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001860CCu); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_001860CC: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001860E2u); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_001860E2: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx);
    eax = ebp + -16;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186100u); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_00186100: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186107
 * Original: 0x00186107 - 0x00186192 (139 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186107(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00186107: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018612Au); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_0018612A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186144; /* je: equal / zero */

loc_00186131: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018618A; /* je: equal / zero */

loc_00186139: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    goto loc_0018618A;

loc_00186144: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018615Au); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_0018615A: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186170u); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_00186170: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x18)); /* fdiv dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx);
    eax = ebp + -16;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018618Au); RECOMP_ABI_CALL(0x00185FD6u, sub_00185FD6); /* call 0x00185FD6 */

loc_0018618A: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186192
 * Original: 0x00186192 - 0x00186236 (164 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00186192(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00186192: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001861CDu); RECOMP_ABI_CALL(0x00183680u, sub_00183680); /* call 0x00183680 */

loc_001861CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001861E5; /* je: equal / zero */

loc_001861D4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186231; /* je: equal / zero */

loc_001861DB: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    goto loc_00186231;

loc_001861E5: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0018621E; /* jne: not equal / not zero */

loc_001861F8: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    goto loc_0018622E;

loc_0018621E: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */

loc_0018622E: ;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00186231: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186236
 * Original: 0x00186236 - 0x001862BF (137 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186236(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00186236: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    edi = MEM32(ebp + 0x14);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018629E; /* jnp: not parity */

loc_00186283: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018628Au); RECOMP_ABI_CALL(0x001850DCu, sub_001850DC); /* call 0x001850DC */

loc_0018628A: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186298u); RECOMP_ABI_CALL(0x00152F94u, sub_00152F94); /* call 0x00152F94 */

loc_00186298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001862A2; /* jne: not equal / not zero */

loc_0018629E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001862B9;

loc_001862A2: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001862B3u); RECOMP_ABI_CALL(0x00184F86u, sub_00184F86); /* call 0x00184F86 */

loc_001862B3: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001862B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001862BF
 * Original: 0x001862BF - 0x001862F7 (56 bytes, 20 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001862BF(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001862BF: ;
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 8);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001862F7
 * Original: 0x001862F7 - 0x00186376 (127 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001862F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001862F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    edi = MEM32(ebp + 8);
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x14);
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018634Bu); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_0018634B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186355u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_00186355: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    eax = edi;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186376
 * Original: 0x00186376 - 0x001863EF (121 bytes, 48 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00186376(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00186376: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186389u); RECOMP_ABI_CALL(0x00186192u, sub_00186192); /* call 0x00186192 */

loc_00186389: ;
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -12;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001863B7u); RECOMP_ABI_CALL(0x001852BCu, sub_001852BC); /* call 0x001852BC */

loc_001863B7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 8);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001863C7u); RECOMP_ABI_CALL(0x00183B45u, sub_00183B45); /* call 0x00183B45 */

loc_001863C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001863CEu); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_001863CE: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    eax = esi;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001863EF
 * Original: 0x001863EF - 0x001864F9 (266 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001863EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_001863EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esi = ebp + -64;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00186469; /* ja: above (unsigned >) */

loc_00186426: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1864F9); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0018642Du) goto loc_0018642D;
    if (_jt == 0x00186439u) goto loc_00186439;
    if (_jt == 0x0018643Du) goto loc_0018643D;
    if (_jt == 0x00186441u) goto loc_00186441;
    if (_jt == 0x00186445u) goto loc_00186445;
    if (_jt == 0x00186449u) goto loc_00186449;
    if (_jt == 0x0018644Cu) goto loc_0018644C;
    if (_jt == 0x00186450u) goto loc_00186450;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018642D: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186436u); RECOMP_ABI_CALL(0x00184FEBu, sub_00184FEB); /* call 0x00184FEB */

loc_00186436: ;
    POP32(esp, ecx);
    goto loc_00186469;

loc_00186439: ;
    esi = ebx;
    goto loc_00186469;

loc_0018643D: ;
    esi = edi;
    goto loc_00186469;

loc_00186441: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_00186460;

loc_00186445: ;
    esi = ecx;
    goto loc_00186469;

loc_00186449: ;
    PUSH32(esp, ebx);
    goto loc_0018644D;

loc_0018644C: ;
    PUSH32(esp, edi);

loc_0018644D: ;
    PUSH32(esp, ecx);
    goto loc_00186460;

loc_00186450: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018645Bu); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_0018645B: ;
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);

loc_00186460: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186469u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_00186469: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186476u); RECOMP_ABI_CALL(0x001852BCu, sub_001852BC); /* call 0x001852BC */

loc_00186476: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001864F0; /* je: equal / zero */

loc_0018647D: ;
    fp_push(MEMF(esi)); /* fld float */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00186495; /* jge: greater or equal (signed >=) */

loc_0018648F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00186495: ;
    ecx = MEM32(eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push((double)SMEM32(eax)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001864AB; /* jge: greater or equal (signed >=) */

loc_001864A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001864AB: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001864C4; /* jge: greater or equal (signed >=) */

loc_001864BE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001864C4: ;
    ecx = MEM32(eax + 4);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001864DC; /* jge: greater or equal (signed >=) */

loc_001864D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001864DC: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x10)); /* fadd dword ptr [eax + 0x10] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_001864F0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186519
 * Original: 0x00186519 - 0x00186639 (288 bytes, 120 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_00186519: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018659D; /* ja: above (unsigned >) */

loc_0018654F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x186639); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00186556u) goto loc_00186556;
    if (_jt == 0x00186562u) goto loc_00186562;
    if (_jt == 0x00186565u) goto loc_00186565;
    if (_jt == 0x00186568u) goto loc_00186568;
    if (_jt == 0x0018656Cu) goto loc_0018656C;
    if (_jt == 0x0018656Fu) goto loc_0018656F;
    if (_jt == 0x00186572u) goto loc_00186572;
    if (_jt == 0x00186576u) goto loc_00186576;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00186556: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018655Fu); RECOMP_ABI_CALL(0x00184FEBu, sub_00184FEB); /* call 0x00184FEB */

loc_0018655F: ;
    POP32(esp, ecx);
    goto loc_0018659D;

loc_00186562: ;
    PUSH32(esp, ebx);
    goto loc_00186593;

loc_00186565: ;
    PUSH32(esp, edi);
    goto loc_00186593;

loc_00186568: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_00186586;

loc_0018656C: ;
    PUSH32(esp, ecx);
    goto loc_00186593;

loc_0018656F: ;
    PUSH32(esp, ebx);
    goto loc_00186573;

loc_00186572: ;
    PUSH32(esp, edi);

loc_00186573: ;
    PUSH32(esp, ecx);
    goto loc_00186586;

loc_00186576: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186581u); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_00186581: ;
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);

loc_00186586: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018658Fu); RECOMP_ABI_CALL(0x001854E3u, sub_001854E3); /* call 0x001854E3 */

loc_0018658F: ;
    eax = ebp + -64;
    PUSH32(esp, eax);

loc_00186593: ;
    eax = ebp + -64;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018659Du); RECOMP_ABI_CALL(0x00183FAFu, sub_00183FAF); /* call 0x00183FAF */

loc_0018659D: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186620; /* je: equal / zero */

loc_001865A4: ;
    ecx = MEM32(eax);
    fp_push((double)SMEM32(eax)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001865B2; /* jge: greater or equal (signed >=) */

loc_001865AC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001865B2: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001865C7; /* jge: greater or equal (signed >=) */

loc_001865C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001865C7: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    esi = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001865E6; /* jge: greater or equal (signed >=) */

loc_001865E0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001865E6: ;
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 4) - fp_top()); /* fsubr dword ptr [ecx + 4] */
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001865F9; /* jge: greater or equal (signed >=) */

loc_001865F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001865F9: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    eax = ebp + -64;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, esi);
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018662A;

loc_00186620: ;
    esi = MEM32(ebp + 8);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));

loc_0018662A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186630u); RECOMP_ABI_CALL(0x001852BCu, sub_001852BC); /* call 0x001852BC */

loc_00186630: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186659
 * Original: 0x00186659 - 0x00186737 (222 bytes, 88 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00186659: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018666Eu); RECOMP_ABI_CALL(0x00186192u, sub_00186192); /* call 0x00186192 */

loc_0018666E: ;
    ebx = MEM32(ebp + 0xC);
    eax = ebp + -16;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018667Bu); RECOMP_ABI_CALL(0x001850B7u, sub_001850B7); /* call 0x001850B7 */

loc_0018667B: ;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018668Cu); RECOMP_ABI_CALL(0x00184EE4u, sub_00184EE4); /* call 0x00184EE4 */

loc_0018668C: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    esi = eax;
    eax = MEM32(ebp + 8);
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186737
 * Original: 0x00186737 - 0x001867F6 (191 bytes, 69 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00186737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00186737: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186749u); RECOMP_ABI_CALL(0x00186192u, sub_00186192); /* call 0x00186192 */

loc_00186749: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00186813
 * Original: 0x00186813 - 0x00186835 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186813(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186813: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00186835(); return; } /* jg: greater (signed >) */

loc_0018681C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* jge: greater or equal (signed >=) */

loc_00186821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* je: equal / zero */

loc_00186826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* je: equal / zero */

loc_0018682B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* je: equal / zero */

loc_00186830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    g_seh_ebp = ebp; sub_00186847(); return; /* tail jmp 0x00186847 */

}

/**
 * sub_00186835
 * Original: 0x00186835 - 0x00186847 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186835(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186835: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* je: equal / zero */

loc_0018683A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00186849(); return; } /* jle: less or equal (signed <=) */

loc_0018683F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018684C(); return; } /* jle: less or equal (signed <=) */

loc_00186844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */

    g_seh_ebp = ebp; sub_00186847(); return; /* fallthrough 0x00186847 */

}

/**
 * sub_00186847
 * Original: 0x00186847 - 0x00186849 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186847(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186847: ;
    if (_flags /* je: equal / zero */) { g_seh_ebp = ebp; sub_0018684C(); return; }

    g_seh_ebp = ebp; sub_00186849(); return; /* fallthrough 0x00186849 */

}

/**
 * sub_00186849
 * Original: 0x00186849 - 0x0018684C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00186849(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186849: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018684C
 * Original: 0x0018684C - 0x00186850 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018684C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018684C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00186882
 * Original: 0x00186882 - 0x001868B5 (51 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186882(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00186882: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018689Eu); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_0018689E: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0018693D
 * Original: 0x0018693D - 0x00186BED (688 bytes, 271 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018693D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018693D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00186984; /* je: equal / zero */

loc_00186958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018695F; /* jne: not equal / not zero */

loc_0018695D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018695F: ;
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186984; /* jne: not equal / not zero */

loc_00186968: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186972; /* jne: not equal / not zero */

loc_0018696E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186984; /* jne: not equal / not zero */

loc_00186972: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018698E; /* je: equal / zero */

loc_00186978: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018698E; /* je: equal / zero */

loc_0018697E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018698E; /* je: equal / zero */

loc_00186984: ;
    eax = 0x8876086Cu;
    goto loc_00186BE8;

loc_0018698E: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186997u); RECOMP_ABI_CALL(0x00162A90u, sub_00162A90); /* call 0x00162A90 */

loc_00186997: ;
    eax = ebp + -236;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001869A3u); RECOMP_ABI_CALL(0x00162AA0u, sub_00162AA0); /* call 0x00162AA0 */

loc_001869A3: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001869ACu); RECOMP_ABI_CALL(0x00163940u, sub_00163940); /* call 0x00163940 */

loc_001869AC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001869B7; /* je: equal / zero */

loc_001869B0: ;
    eax = MEM32(edi);
    MEM32(ebp + 8) = eax;
    goto loc_001869BB;

loc_001869B7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001869BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001869C3; /* je: equal / zero */

loc_001869BF: ;
    edi = MEM32(ebx);
    goto loc_001869C6;

loc_001869C3: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001869C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001869D1; /* je: equal / zero */

loc_001869CA: ;
    eax = MEM32(esi);
    MEM32(ebp + -4) = eax;
    goto loc_001869D5;

loc_001869D1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001869D5: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001869F2; /* jne: not equal / not zero */

loc_001869DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001869ED; /* jne: not equal / not zero */

loc_001869E1: ;
    eax = 0x100;
    edi = eax;
    MEM32(ebp + 8) = eax;
    goto loc_00186A0B;

loc_001869ED: ;
    MEM32(ebp + 8) = edi;
    goto loc_001869F9;

loc_001869F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001869F9; /* jne: not equal / not zero */

loc_001869F6: ;
    edi = MEM32(ebp + 8);

loc_001869F9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A06; /* jne: not equal / not zero */

loc_001869FF: ;
    MEM32(ebp + 8) = 1;

loc_00186A06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A0B; /* jne: not equal / not zero */

loc_00186A0A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00186A0B: ;
    esi = MEM32(ebp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A20; /* jne: not equal / not zero */

loc_00186A15: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A1D; /* jbe: below or equal (unsigned <=) */

loc_00186A1A: ;
    edi = MEM32(ebp + 8);

loc_00186A1D: ;
    MEM32(ebp + 8) = edi;

loc_00186A20: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186A2B; /* je: equal / zero */

loc_00186A25: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A2E; /* jne: not equal / not zero */

loc_00186A2B: ;
    MEM32(ebp + -4) = eax;

loc_00186A2E: ;
    edx = MEM32(ebp + -176);
    PUSH32(esp, 2);
    POP32(esp, ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A53; /* jne: not equal / not zero */

loc_00186A3B: ;
    eax = MEM32(ebp + -140);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A49; /* jbe: below or equal (unsigned <=) */

loc_00186A46: ;
    MEM32(ebp + -4) = eax;

loc_00186A49: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A98; /* jbe: below or equal (unsigned <=) */

loc_00186A4E: ;
    MEM32(ebp + 8) = eax;
    goto loc_00186A98;

loc_00186A53: ;
    eax = MEM32(ebp + -148);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A61; /* jbe: below or equal (unsigned <=) */

loc_00186A5E: ;
    MEM32(ebp + 8) = eax;

loc_00186A61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -144) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A6F; /* jbe: below or equal (unsigned <=) */

loc_00186A69: ;
    edi = MEM32(ebp + -144);

loc_00186A6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186A9E; /* jne: not equal / not zero */

loc_00186A73: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186A7D; /* je: equal / zero */

loc_00186A78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00186A83;

loc_00186A7D: ;
    eax = MEM32(ebp + -132);

loc_00186A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186A9E; /* je: equal / zero */

loc_00186A87: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A94; /* jbe: below or equal (unsigned <=) */

loc_00186A91: ;
    MEM32(ebp + 8) = ecx;

loc_00186A94: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));

loc_00186A98: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186A9E; /* jbe: below or equal (unsigned <=) */

loc_00186A9C: ;
    edi = eax;

loc_00186A9E: ;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = 0x20000;
    MEM32(ebp + -8) = 0x40000;
    _fa = (uint32_t)(MEM32(ebp + esi + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + esi + -16), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186AF3; /* je: equal / zero */

loc_00186AB8: ;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00186AD1; /* jbe: below or equal (unsigned <=) */

loc_00186AC8: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00186AC8; /* jb: below (unsigned <) */

loc_00186ACE: ;
    MEM32(ebp + 8) = ecx;

loc_00186AD1: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00186ADF; /* jbe: below or equal (unsigned <=) */

loc_00186AD9: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00186AD9; /* jb: below (unsigned <) */

loc_00186ADF: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00186AF6; /* jbe: below or equal (unsigned <=) */

loc_00186AE9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) << 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00186AE9; /* jb: below (unsigned <) */

loc_00186AF1: ;
    goto loc_00186AF6;

loc_00186AF3: ;
    ecx = MEM32(ebp + 8);

loc_00186AF6: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186B1D; /* je: equal / zero */

loc_00186AFD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186B0E; /* je: equal / zero */

loc_00186B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00186B1D; /* jle: less or equal (signed <=) */

loc_00186B09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00186B1D; /* jg: greater (signed >) */

loc_00186B0E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ecx;
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00186B1D: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = 0x4000;
    MEM32(ebp + -12) = 0x10000;
    MEM32(ebp + -8) = 0x8000;
    if (CMP_EQ(_fa, _fb)) goto loc_00186B3D; /* je: equal / zero */

loc_00186B39: ;
    ebx = MEM32(eax);
    goto loc_00186B40;

loc_00186B3D: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00186B40: ;
    _fa = (uint32_t)(MEM32(ebp + esi + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + esi + -16), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186BB9; /* je: equal / zero */

loc_00186B46: ;
    eax = ecx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186BB9; /* jne: not equal / not zero */

loc_00186B4D: ;
    eax = edi + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186BB9; /* jne: not equal / not zero */

loc_00186B54: ;
    eax = MEM32(ebp + -4);
    ecx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186BB9; /* jne: not equal / not zero */

loc_00186B5E: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    goto loc_00186B6F;

loc_00186B68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186B73; /* jne: not equal / not zero */

loc_00186B6C: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00186B6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186B68; /* jne: not equal / not zero */

loc_00186B73: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00186B84; /* je: equal / zero */

loc_00186B79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186B84; /* jne: not equal / not zero */

loc_00186B7D: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186B79; /* jne: not equal / not zero */

loc_00186B84: ;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186B99; /* je: equal / zero */

loc_00186B8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186B99; /* jne: not equal / not zero */

loc_00186B92: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186B8E; /* jne: not equal / not zero */

loc_00186B99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = esi;
    if (CMP_A(_fa, _fb)) goto loc_00186BA1; /* ja: above (unsigned >) */

loc_00186B9F: ;
    eax = edx;

loc_00186BA1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186BAD; /* jne: not equal / not zero */

loc_00186BA7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00186BAD; /* jbe: below or equal (unsigned <=) */

loc_00186BAB: ;
    eax = ecx;

loc_00186BAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00186BB5; /* ja: above (unsigned >) */

loc_00186BB1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00186BBC; /* jne: not equal / not zero */

loc_00186BB5: ;
    ebx = eax;
    goto loc_00186BBC;

loc_00186BB9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00186BBC: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186BC8; /* je: equal / zero */

loc_00186BC3: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_00186BC8: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186BD1; /* je: equal / zero */

loc_00186BCF: ;
    MEM32(eax) = edi;

loc_00186BD1: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186BDD; /* je: equal / zero */

loc_00186BD8: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_00186BDD: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186BE6; /* je: equal / zero */

loc_00186BE4: ;
    MEM32(eax) = ebx;

loc_00186BE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00186BE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00186BED
 * Original: 0x00186BED - 0x00186C09 (28 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186BED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186BED: ;
    PUSH32(esp, ebp);
    ebp = esp + -80;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 8;
    PUSH32(esp, 0x00186C02u); RECOMP_ABI_CALL(0x00188555u, sub_00188555); /* call 0x00188555 */

loc_00186C02: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00186C13(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00186C09(); return; /* fallthrough 0x00186C09 */

}

/**
 * sub_00186C09
 * Original: 0x00186C09 - 0x00186C13 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186C09: ;
    ebx = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00186DE4(); return; /* tail jmp 0x00186DE4 */

}

/**
 * sub_00186C13
 * Original: 0x00186C13 - 0x00186C8B (120 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186C13: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186C09(); return; } /* je: equal / zero */

loc_00186C18: ;
    ebx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186C09(); return; } /* je: equal / zero */

loc_00186C1F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186C3F; /* jne: not equal / not zero */

loc_00186C25: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, 0x00186C2Du); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00186C2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80004)) >> 32) & 1);
    eax = eax + 0x80004;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x78) = eax;

loc_00186C3F: ;
    PUSH32(esp, edi);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, 0x00186C4Cu); RECOMP_ABI_CALL(0x00168730u, sub_00168730); /* call 0x00168730 */

loc_00186C4C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186C8B(); return; } /* je: equal / zero */

loc_00186C51: ;
    esi = MEM32(ebp + 0x60);
    edi = ebp + 0x40;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00186C81; /* jl: less (signed <) */

loc_00186C61: ;
    eax = MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186C81; /* ja: above (unsigned >) */

loc_00186C69: ;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00186C81; /* jg: greater (signed >) */

loc_00186C6E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00186C81; /* jl: less (signed <) */

loc_00186C74: ;
    eax = MEM32(ebp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186C81; /* ja: above (unsigned >) */

loc_00186C7C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00186C9F(); return; } /* jle: less or equal (signed <=) */

loc_00186C81: ;
    ebx = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00186DE3(); return; /* tail jmp 0x00186DE3 */

}

/**
 * sub_00186C8B
 * Original: 0x00186C8B - 0x00186C9F (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186C8B: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x34);
    MEM32(ebp + 0x40) = esi;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x4C) = eax;
    g_seh_ebp = ebp; sub_00186CA1(); return; /* tail jmp 0x00186CA1 */

}

/**
 * sub_00186C9F
 * Original: 0x00186C9F - 0x00186CDC (61 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186C9F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, 0x00186CB0u); RECOMP_ABI_CALL(0x00168750u, sub_00168750); /* call 0x00168750 */

loc_00186CB0: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0x00186CB8u); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_00186CB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186CDC(); return; } /* je: equal / zero */

loc_00186CBF: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x00186CCCu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00186CCC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00186CDF(); return; } /* jne: not equal / not zero */

loc_00186CD2: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00186DCF(); return; /* tail jmp 0x00186DCF */

}

/**
 * sub_00186CA1
 * Original: 0x00186CA1 - 0x00186CDC (59 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186CA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186CA1: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, 0x00186CB0u); RECOMP_ABI_CALL(0x00168750u, sub_00168750); /* call 0x00168750 */

loc_00186CB0: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0x00186CB8u); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_00186CB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186CDC(); return; } /* je: equal / zero */

loc_00186CBF: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x00186CCCu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00186CCC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00186CDF(); return; } /* jne: not equal / not zero */

loc_00186CD2: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00186DCF(); return; /* tail jmp 0x00186DCF */

}

/**
 * sub_00186CDC
 * Original: 0x00186CDC - 0x00186CDF (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186CDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186CDC: ;
    edi = MEM32(ebp + 0x3C);

    g_seh_ebp = ebp; sub_00186CDF(); return; /* fallthrough 0x00186CDF */

}

/**
 * sub_00186CDF
 * Original: 0x00186CDF - 0x00186DCF (240 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186CDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186CDF: ;
    ecx = MEM32(ebp + 0x40);
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + 0x44);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + 0x48);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + 0x4C);
    PUSH32(esp, MEM32(ebp + 0x78));
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ebp + -144) = ecx;
    ecx = MEM32(ebp + 0x6C);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -136) = ecx;
    ecx = MEM32(ebp + 0x68);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + -140) = ecx;
    ecx = MEM32(ebp + 0x7C);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -76) = ecx;
    ecx = MEM32(ebp + 0x70);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x34);
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(ebx);
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -104) = ecx;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -100) = ecx;
    ecx = MEM32(ebx + 8);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -96) = ecx;
    ecx = MEM32(ebx + 0xC);
    eax = ebp + -144;
    PUSH32(esp, eax);
    eax = ebp + -68;
    MEM32(ebp + -92) = ecx;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    MEM32(ebp + -68) = edi;
    MEM32(ebp + -56) = esi;
    MEM32(ebp) = esi;
    MEM32(ebp + -52) = esi;
    MEM32(ebp + -48) = esi;
    MEM32(ebp + -36) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -132) = esi;
    MEM32(ebp + -88) = esi;
    PUSH32(esp, 0x00186D93u); RECOMP_ABI_CALL(0x0018B3EDu, sub_0018B3ED); /* call 0x0018B3ED */

loc_00186D93: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00186DCF(); return; } /* jl: less (signed <) */

loc_00186D99: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186DCD; /* je: equal / zero */

loc_00186D9E: ;
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0x00186DB2u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_00186DB2: ;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    eax = ebp + 0x40;
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186DCDu); RECOMP_ABI_CALL(0x001A7652u, sub_001A7652); /* call 0x001A7652 */

loc_00186DCD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00186DCF(); return; /* fallthrough 0x00186DCF */

}

/**
 * sub_00186DCF
 * Original: 0x00186DCF - 0x00186DE3 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186DCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186DCF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186DE3(); return; } /* je: equal / zero */

loc_00186DD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00186DE3(); return; } /* je: equal / zero */

loc_00186DD8: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186DE3u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

    g_seh_ebp = ebp; sub_00186DE3(); return; /* fallthrough 0x00186DE3 */

}

/**
 * sub_00186DE3
 * Original: 0x00186DE3 - 0x00186DE4 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186DE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186DE3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00186DE4(); return; /* fallthrough 0x00186DE4 */

}

/**
 * sub_00186DE4
 * Original: 0x00186DE4 - 0x00186DF7 (19 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186DE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186DE4: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x00186DECu); RECOMP_ABI_CALL(0x0018855Fu, sub_0018855F); /* call 0x0018855F */

loc_00186DEC: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x50;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00186DF7
 * Original: 0x00186DF7 - 0x00186FF5 (510 bytes, 176 insns)
 * Category: game_render
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186DF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00186DF7: ;
    PUSH32(esp, ebp);
    ebp = esp + -76;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF0));
    esp = esp - 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + -12;
    PUSH32(esp, 0x00186E0Cu); RECOMP_ABI_CALL(0x00188555u, sub_00188555); /* call 0x00188555 */

loc_00186E0C: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186E1D; /* jne: not equal / not zero */

loc_00186E13: ;
    esi = 0x8876086Cu;
    goto loc_00186FE2;

loc_00186E1D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186E13; /* je: equal / zero */

loc_00186E22: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186E13; /* je: equal / zero */

loc_00186E27: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186E47; /* jne: not equal / not zero */

loc_00186E2D: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x00186E35u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00186E35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80004)) >> 32) & 1);
    eax = eax + 0x80004;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x78) = eax;

loc_00186E47: ;
    PUSH32(esp, edi);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, 0x00186E54u); RECOMP_ABI_CALL(0x001687C0u, sub_001687C0); /* call 0x001687C0 */

loc_00186E54: ;
    esi = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186E94; /* je: equal / zero */

loc_00186E5B: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + 0x34;
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
    eax = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186E8A; /* ja: above (unsigned >) */

loc_00186E6B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186E8A; /* ja: above (unsigned >) */

loc_00186E70: ;
    eax = MEM32(ebp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186E8A; /* ja: above (unsigned >) */

loc_00186E78: ;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x38), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186E8A; /* ja: above (unsigned >) */

loc_00186E7D: ;
    eax = MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00186E8A; /* ja: above (unsigned >) */

loc_00186E85: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00186EAF; /* jbe: below or equal (unsigned <=) */

loc_00186E8A: ;
    esi = 0x8876086Cu;
    goto loc_00186FE1;

loc_00186E94: ;
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + 0x3C) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(ebp + 0x40) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + 0x34) = ebx;
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x48) = eax;

loc_00186EAF: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, 0x00186EBEu); RECOMP_ABI_CALL(0x001687E0u, sub_001687E0); /* call 0x001687E0 */

loc_00186EBE: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x00186EC6u); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_00186EC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00186EEA; /* je: equal / zero */

loc_00186ECD: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, 0x00186EDAu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00186EDA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00186EED; /* jne: not equal / not zero */

loc_00186EE0: ;
    esi = 0x8007000Eu;
    goto loc_00186FCC;

loc_00186EEA: ;
    ebx = MEM32(ebp + 0x14);

loc_00186EED: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    MEM32(ebp + -88) = ebx;
    esi = ebp + 0x34;
    edi = ebp + -48;
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
    ecx = MEM32(ebp + 0x58);
    esi = MEM32(ebp + 0x74);
    MEM32(ebp + -84) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + -164) = eax;
    eax = MEM32(ebp + 0x68);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x28);
    MEM32(ebp + -156) = eax;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + -64) = ecx;
    ecx = MEM32(ebp + 0x2C);
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, 6);
    MEM32(ebp + -60) = ecx;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x78));
    edi = ebp + -124;
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
    MEM32(ebp + -160) = eax;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + -92) = eax;
    eax = ebp + -164;
    PUSH32(esp, eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    PUSH32(esp, 0x00186F84u); RECOMP_ABI_CALL(0x0018B3EDu, sub_0018B3ED); /* call 0x0018B3ED */

loc_00186F84: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00186FCC; /* jl: less (signed <) */

loc_00186F8A: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186FCC; /* je: equal / zero */

loc_00186F91: ;
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp) = eax;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x00186FABu); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_00186FAB: ;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = ebp + 0x34;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00186FCCu); RECOMP_ABI_CALL(0x001A84BAu, sub_001A84BA); /* call 0x001A84BA */

loc_00186FCC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00186FE1; /* je: equal / zero */

loc_00186FD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00186FE1; /* je: equal / zero */

loc_00186FD6: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00186FE1u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00186FE1: ;
    POP32(esp, edi);

loc_00186FE2: ;
    ecx = ebp + -12;
    PUSH32(esp, 0x00186FEAu); RECOMP_ABI_CALL(0x0018855Fu, sub_0018855F); /* call 0x0018855F */

loc_00186FEA: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x4C)) >> 32) & 1);
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_00186FF5
 * Original: 0x00186FF5 - 0x00187013 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00186FF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186FF5: ;
    PUSH32(esp, ebp);
    ebp = esp + -92;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), 0 (32-bit) */
    eax = MEM32(ebp + 0x74);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187013(); return; } /* jne: not equal / not zero */

loc_00187009: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_001871AD(); return; /* tail jmp 0x001871AD */

}

/**
 * sub_00187013
 * Original: 0x00187013 - 0x00187030 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187013(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187013: ;
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018701D; /* jne: not equal / not zero */

loc_0018701B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018701D: ;
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187030(); return; } /* je: equal / zero */

loc_00187026: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_001871AC(); return; /* tail jmp 0x001871AC */

}

/**
 * sub_00187030
 * Original: 0x00187030 - 0x0018704F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187030: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018704F(); return; } /* je: equal / zero */

loc_0018703A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018704F(); return; } /* je: equal / zero */

loc_0018703F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018704F(); return; } /* je: equal / zero */

loc_00187045: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_001871AB(); return; /* tail jmp 0x001871AB */

}

/**
 * sub_0018704F
 * Original: 0x0018704F - 0x00187079 (42 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018704F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018704F: ;
    PUSH32(esp, esi);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00187059u); RECOMP_ABI_CALL(0x00162A90u, sub_00162A90); /* call 0x00162A90 */

loc_00187059: ;
    eax = ebp + -140;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00187065u); RECOMP_ABI_CALL(0x00162AA0u, sub_00162AA0); /* call 0x00162AA0 */

loc_00187065: ;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018706Eu); RECOMP_ABI_CALL(0x00163940u, sub_00163940); /* call 0x00163940 */

loc_0018706E: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187079(); return; } /* je: equal / zero */

loc_00187075: ;
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_0018707B(); return; /* tail jmp 0x0018707B */

}

/**
 * sub_00187079
 * Original: 0x00187079 - 0x0018707B (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187079(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187079: ;
    esi = ebx;

    g_seh_ebp = ebp; sub_0018707B(); return; /* fallthrough 0x0018707B */

}

/**
 * sub_0018707B
 * Original: 0x0018707B - 0x00187086 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018707B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018707B: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187086(); return; } /* je: equal / zero */

loc_00187082: ;
    edx = MEM32(eax);
    g_seh_ebp = ebp; sub_00187088(); return; /* tail jmp 0x00187088 */

}

/**
 * sub_00187086
 * Original: 0x00187086 - 0x00187088 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187086(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187086: ;
    edx = ebx;

    g_seh_ebp = ebp; sub_00187088(); return; /* fallthrough 0x00187088 */

}

/**
 * sub_00187088
 * Original: 0x00187088 - 0x0018709B (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187088: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018709F(); return; } /* jne: not equal / not zero */

loc_0018708C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018709B(); return; } /* jne: not equal / not zero */

loc_00187090: ;
    eax = 0x100;
    edx = eax;
    esi = eax;
    g_seh_ebp = ebp; sub_001870B1(); return; /* tail jmp 0x001870B1 */

}

/**
 * sub_0018709B
 * Original: 0x0018709B - 0x0018709F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018709B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018709B: ;
    esi = edx;
    g_seh_ebp = ebp; sub_001870A5(); return; /* tail jmp 0x001870A5 */

}

/**
 * sub_0018709F
 * Original: 0x0018709F - 0x001870B1 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018709F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018709F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001870A5; /* jne: not equal / not zero */

loc_001870A3: ;
    edx = esi;

loc_001870A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001870AB; /* jne: not equal / not zero */

loc_001870A9: ;
    esi = edi;

loc_001870AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001870B1(); return; } /* jne: not equal / not zero */

loc_001870AF: ;
    edx = edi;

    g_seh_ebp = ebp; sub_001870B1(); return; /* fallthrough 0x001870B1 */

}

/**
 * sub_001870A5
 * Original: 0x001870A5 - 0x001870B1 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001870A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001870A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001870AB; /* jne: not equal / not zero */

loc_001870A9: ;
    esi = edi;

loc_001870AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001870B1(); return; } /* jne: not equal / not zero */

loc_001870AF: ;
    edx = edi;

    g_seh_ebp = ebp; sub_001870B1(); return; /* fallthrough 0x001870B1 */

}

/**
 * sub_001870B1
 * Original: 0x001870B1 - 0x0018718B (218 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001870B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001870B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -52) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001870B9; /* jbe: below or equal (unsigned <=) */

loc_001870B6: ;
    esi = MEM32(ebp + -52);

loc_001870B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -48) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001870C1; /* jbe: below or equal (unsigned <=) */

loc_001870BE: ;
    edx = MEM32(ebp + -48);

loc_001870C1: ;
    _fa = (uint32_t)(MEM8(ebp + -80)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -80), 0x20 (8-bit) */
    eax = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001870CC; /* jne: not equal / not zero */

loc_001870C9: ;
    eax = MEM32(ebp + -36);

loc_001870CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001870E4; /* je: equal / zero */

loc_001870D0: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001870DB; /* jbe: below or equal (unsigned <=) */

loc_001870D9: ;
    esi = ecx;

loc_001870DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001870E4; /* jbe: below or equal (unsigned <=) */

loc_001870E2: ;
    edx = eax;

loc_001870E4: ;
    _fa = (uint32_t)(MEM8(ebp + -80)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -80), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187106; /* je: equal / zero */

loc_001870EA: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001870F8; /* jbe: below or equal (unsigned <=) */

loc_001870F2: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001870F2; /* jb: below (unsigned <) */

loc_001870F8: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00187106; /* jbe: below or equal (unsigned <=) */

loc_00187100: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00187100; /* jb: below (unsigned <) */

loc_00187106: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018712A; /* je: equal / zero */

loc_0018710D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018711E; /* je: equal / zero */

loc_00187114: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018712A; /* jle: less or equal (signed <=) */

loc_00187119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018712A; /* jg: greater (signed >) */

loc_0018711E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0018712A: ;
    eax = MEM32(ebp + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187133; /* je: equal / zero */

loc_00187131: ;
    ebx = MEM32(eax);

loc_00187133: ;
    _fa = (uint32_t)(MEM8(ebp + -79)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -79), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0018718B(); return; } /* je: equal / zero */

loc_00187139: ;
    eax = esi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018718B(); return; } /* jne: not equal / not zero */

loc_00187140: ;
    eax = edx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018718B(); return; } /* jne: not equal / not zero */

loc_00187147: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00187158; /* je: equal / zero */

loc_0018714D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187158; /* jne: not equal / not zero */

loc_00187151: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018714D; /* jne: not equal / not zero */

loc_00187158: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018716C; /* je: equal / zero */

loc_00187161: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018716C; /* jne: not equal / not zero */

loc_00187165: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187161; /* jne: not equal / not zero */

loc_0018716C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018716F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187177; /* jne: not equal / not zero */

loc_00187173: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_0018716F; /* jne: not equal / not zero */

loc_00187177: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    eax = edi;
    if (CMP_A(_fa, _fb)) goto loc_0018717F; /* ja: above (unsigned >) */

loc_0018717D: ;
    eax = ecx;

loc_0018717F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187187; /* ja: above (unsigned >) */

loc_00187183: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018718D(); return; } /* jne: not equal / not zero */

loc_00187187: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_0018718D(); return; /* tail jmp 0x0018718D */

}

/**
 * sub_0018718B
 * Original: 0x0018718B - 0x0018718D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018718B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018718B: ;
    ebx = edi;

    g_seh_ebp = ebp; sub_0018718D(); return; /* fallthrough 0x0018718D */

}

/**
 * sub_0018718D
 * Original: 0x0018718D - 0x001871AB (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018718D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018718D: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187196; /* je: equal / zero */

loc_00187194: ;
    MEM32(eax) = esi;

loc_00187196: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001871A0; /* je: equal / zero */

loc_0018719E: ;
    MEM32(eax) = edx;

loc_001871A0: ;
    eax = MEM32(ebp + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001871A9; /* je: equal / zero */

loc_001871A7: ;
    MEM32(eax) = ebx;

loc_001871A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001871AB(); return; /* fallthrough 0x001871AB */

}

/**
 * sub_001871AB
 * Original: 0x001871AB - 0x001871AC (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001871AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001871AB: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001871AC(); return; /* fallthrough 0x001871AC */

}

/**
 * sub_001871AC
 * Original: 0x001871AC - 0x001871AD (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001871AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001871AC: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001871AD(); return; /* fallthrough 0x001871AD */

}

/**
 * sub_001871AD
 * Original: 0x001871AD - 0x001871B4 (7 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001871AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001871AD: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x5C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001871B4
 * Original: 0x001871B4 - 0x0018722E (122 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001871B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001871B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001871C4; /* jne: not equal / not zero */

loc_001871BD: ;
    eax = 0x8876086Cu;
    goto loc_0018722A;

loc_001871C4: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001871D3; /* jne: not equal / not zero */

loc_001871CC: ;
    eax = 0x8876086Cu;
    goto loc_00187229;

loc_001871D3: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001871DE; /* jne: not equal / not zero */

loc_001871DC: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001871DE: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001871FAu); RECOMP_ABI_CALL(0x00186FF5u, sub_00186FF5); /* call 0x00186FF5 */

loc_001871FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00187228; /* jl: less (signed <) */

loc_001871FE: ;
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187214u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_00187214: ;
    MEM32(edi) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00187228; /* js: sign (negative) */

loc_00187226: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00187228: ;
    POP32(esp, esi);

loc_00187229: ;
    POP32(esp, edi);

loc_0018722A: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0018722E
 * Original: 0x0018722E - 0x0018724A (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018722E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018722E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    eax = MEM32(ebp + 0x14);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018724A(); return; } /* jne: not equal / not zero */

loc_00187240: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187384(); return; /* tail jmp 0x00187384 */

}

/**
 * sub_0018724A
 * Original: 0x0018724A - 0x00187267 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018724A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018724A: ;
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187254; /* jne: not equal / not zero */

loc_00187252: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00187254: ;
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187267(); return; } /* je: equal / zero */

loc_0018725D: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187383(); return; /* tail jmp 0x00187383 */

}

/**
 * sub_00187267
 * Original: 0x00187267 - 0x00187286 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187267(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187267: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187286(); return; } /* je: equal / zero */

loc_00187271: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187286(); return; } /* je: equal / zero */

loc_00187276: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187286(); return; } /* je: equal / zero */

loc_0018727C: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187382(); return; /* tail jmp 0x00187382 */

}

/**
 * sub_00187286
 * Original: 0x00187286 - 0x001872AF (41 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187286: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018728Fu); RECOMP_ABI_CALL(0x00162A90u, sub_00162A90); /* call 0x00162A90 */

loc_0018728F: ;
    eax = ebp + -232;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018729Bu); RECOMP_ABI_CALL(0x00162AA0u, sub_00162AA0); /* call 0x00162AA0 */

loc_0018729B: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001872A4u); RECOMP_ABI_CALL(0x00163940u, sub_00163940); /* call 0x00163940 */

loc_001872A4: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001872AF(); return; } /* je: equal / zero */

loc_001872AB: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_001872B1(); return; /* tail jmp 0x001872B1 */

}

/**
 * sub_001872AF
 * Original: 0x001872AF - 0x001872B1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872AF: ;
    eax = edi;

    g_seh_ebp = ebp; sub_001872B1(); return; /* fallthrough 0x001872B1 */

}

/**
 * sub_001872B1
 * Original: 0x001872B1 - 0x001872B9 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001872B9(); return; } /* je: equal / zero */

loc_001872B5: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_001872BB(); return; /* tail jmp 0x001872BB */

}

/**
 * sub_001872B9
 * Original: 0x001872B9 - 0x001872BB (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872B9: ;
    ecx = edi;

    g_seh_ebp = ebp; sub_001872BB(); return; /* fallthrough 0x001872BB */

}

/**
 * sub_001872BB
 * Original: 0x001872BB - 0x001872CA (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001872CE(); return; } /* jne: not equal / not zero */

loc_001872BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001872CA(); return; } /* jne: not equal / not zero */

loc_001872C3: ;
    ecx = 0x100;
    g_seh_ebp = ebp; sub_001872E6(); return; /* tail jmp 0x001872E6 */

}

/**
 * sub_001872CA
 * Original: 0x001872CA - 0x001872CE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872CA: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_001872D4(); return; /* tail jmp 0x001872D4 */

}

/**
 * sub_001872CE
 * Original: 0x001872CE - 0x001872E6 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001872D4; /* jne: not equal / not zero */

loc_001872D2: ;
    ecx = eax;

loc_001872D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001872DA; /* jne: not equal / not zero */

loc_001872D8: ;
    eax = esi;

loc_001872DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001872E0; /* jne: not equal / not zero */

loc_001872DE: ;
    ecx = esi;

loc_001872E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001872E6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001872E4: ;
    ecx = eax;

    g_seh_ebp = ebp; sub_001872E6(); return; /* fallthrough 0x001872E6 */

}

/**
 * sub_001872D4
 * Original: 0x001872D4 - 0x001872E6 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001872DA; /* jne: not equal / not zero */

loc_001872D8: ;
    eax = esi;

loc_001872DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001872E0; /* jne: not equal / not zero */

loc_001872DE: ;
    ecx = esi;

loc_001872E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001872E6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001872E4: ;
    ecx = eax;

    g_seh_ebp = ebp; sub_001872E6(); return; /* fallthrough 0x001872E6 */

}

/**
 * sub_001872E6
 * Original: 0x001872E6 - 0x00187382 (156 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001872E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001872E6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -144) (32-bit) */
    eax = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001872F6; /* jbe: below or equal (unsigned <=) */

loc_001872F0: ;
    eax = MEM32(ebp + -144);

loc_001872F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -140) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00187304; /* jbe: below or equal (unsigned <=) */

loc_001872FE: ;
    ecx = MEM32(ebp + -140);

loc_00187304: ;
    _fa = (uint32_t)(MEM8(ebp + -170)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -170), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187329; /* je: equal / zero */

loc_0018730D: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    eax = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0018731B; /* jbe: below or equal (unsigned <=) */

loc_00187315: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00187315; /* jb: below (unsigned <) */

loc_0018731B: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ecx = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00187329; /* jbe: below or equal (unsigned <=) */

loc_00187323: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00187323; /* jb: below (unsigned <) */

loc_00187329: ;
    edx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018734D; /* je: equal / zero */

loc_00187330: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187341; /* je: equal / zero */

loc_00187337: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018734D; /* jle: less or equal (signed <=) */

loc_0018733C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018734D; /* jg: greater (signed >) */

loc_00187341: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0018734D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187357; /* je: equal / zero */

loc_00187355: ;
    edi = MEM32(ebx);

loc_00187357: ;
    _fa = (uint32_t)(MEM8(ebp + -170)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -170), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018736E; /* je: equal / zero */

loc_00187360: ;
    edx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018736E; /* jne: not equal / not zero */

loc_00187367: ;
    edx = ecx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0018738F(); return; } /* je: equal / zero */

loc_0018736E: ;
    edi = esi;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187379; /* je: equal / zero */

loc_00187377: ;
    MEM32(eax) = ecx;

loc_00187379: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018737F; /* je: equal / zero */

loc_0018737D: ;
    MEM32(ebx) = edi;

loc_0018737F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00187382(); return; /* fallthrough 0x00187382 */

}

/**
 * sub_00187370
 * Original: 0x00187370 - 0x00187382 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187370: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187379; /* je: equal / zero */

loc_00187377: ;
    MEM32(eax) = ecx;

loc_00187379: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018737F; /* je: equal / zero */

loc_0018737D: ;
    MEM32(ebx) = edi;

loc_0018737F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00187382(); return; /* fallthrough 0x00187382 */

}

/**
 * sub_00187382
 * Original: 0x00187382 - 0x00187383 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187382: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00187383(); return; /* fallthrough 0x00187383 */

}

/**
 * sub_00187383
 * Original: 0x00187383 - 0x00187384 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187383(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187383: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00187384(); return; /* fallthrough 0x00187384 */

}

/**
 * sub_00187384
 * Original: 0x00187384 - 0x00187388 (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187384(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187384: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00187388
 * Original: 0x00187388 - 0x0018738F (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187388: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187393(); return; } /* jne: not equal / not zero */

loc_0018738C: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0018738F(); return; /* fallthrough 0x0018738F */

}

/**
 * sub_0018738F
 * Original: 0x0018738F - 0x00187393 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018738F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018738F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187388(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00187393(); return; /* fallthrough 0x00187393 */

}

/**
 * sub_00187393
 * Original: 0x00187393 - 0x001873C6 (51 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187393: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001873A7; /* je: equal / zero */

loc_0018739C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001873A7; /* jne: not equal / not zero */

loc_001873A0: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018739C; /* jne: not equal / not zero */

loc_001873A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001873AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001873B2; /* jne: not equal / not zero */

loc_001873AE: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_001873AA; /* jne: not equal / not zero */

loc_001873B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = esi;
    if (CMP_A(_fa, _fb)) goto loc_001873BA; /* ja: above (unsigned >) */

loc_001873B8: ;
    eax = edx;

loc_001873BA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001873C2; /* ja: above (unsigned >) */

loc_001873BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187370(); return; } /* jne: not equal / not zero */

loc_001873C2: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00187370(); return; /* tail jmp 0x00187370 */

}

/**
 * sub_001873C6
 * Original: 0x001873C6 - 0x001873D6 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001873C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001873C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001873D6(); return; } /* jne: not equal / not zero */

loc_001873CF: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187438(); return; /* tail jmp 0x00187438 */

}

/**
 * sub_001873D6
 * Original: 0x001873D6 - 0x001873E5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001873D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001873D6: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001873E5(); return; } /* jne: not equal / not zero */

loc_001873DE: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187437(); return; /* tail jmp 0x00187437 */

}

/**
 * sub_001873E5
 * Original: 0x001873E5 - 0x00187437 (82 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001873E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001873E5: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001873F0; /* jne: not equal / not zero */

loc_001873EE: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001873F0: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00187408u); RECOMP_ABI_CALL(0x0018722Eu, sub_0018722E); /* call 0x0018722E */

loc_00187408: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00187436; /* jl: less (signed <) */

loc_0018740C: ;
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x00187422u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_00187422: ;
    MEM32(edi) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00187436; /* js: sign (negative) */

loc_00187434: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00187436: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00187437(); return; /* fallthrough 0x00187437 */

}

/**
 * sub_00187437
 * Original: 0x00187437 - 0x00187438 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187437(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187437: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00187438(); return; /* fallthrough 0x00187438 */

}

/**
 * sub_00187438
 * Original: 0x00187438 - 0x0018743C (4 bytes, 2 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187438: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0018743C
 * Original: 0x0018743C - 0x00187465 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018743C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018743C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018745Eu); RECOMP_ABI_CALL(0x0018693Du, sub_0018693D); /* call 0x0018693D */

loc_0018745E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00187465
 * Original: 0x00187465 - 0x001874E4 (127 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00187465(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00187465: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00187475; /* jne: not equal / not zero */

loc_0018746E: ;
    eax = 0x8876086Cu;
    goto loc_001874E0;

loc_00187475: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00187484; /* jne: not equal / not zero */

loc_0018747D: ;
    eax = 0x8876086Cu;
    goto loc_001874DF;

loc_00187484: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018748F; /* jne: not equal / not zero */

loc_0018748D: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018748F: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001874AFu); RECOMP_ABI_CALL(0x0018743Cu, sub_0018743C); /* call 0x0018743C */

loc_001874AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001874DE; /* jl: less (signed <) */

loc_001874B3: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001874CAu); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_001874CA: ;
    MEM32(edi) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001874DE; /* js: sign (negative) */

loc_001874DC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001874DE: ;
    POP32(esp, esi);

loc_001874DF: ;
    POP32(esp, edi);

loc_001874E0: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001874E4
 * Original: 0x001874E4 - 0x0018759A (182 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001874E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001874E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001874F5u); RECOMP_ABI_CALL(0x0018B4FFu, sub_0018B4FF); /* call 0x0018B4FF */

loc_001874F5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187551; /* je: equal / zero */

loc_001874FC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187551; /* je: equal / zero */

loc_00187501: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187551; /* je: equal / zero */

loc_00187506: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebp + -64;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187517u); RECOMP_ABI_CALL(0x0018CF3Cu, sub_0018CF3C); /* call 0x0018CF3C */

loc_00187517: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018751F; /* jge: greater or equal (signed >=) */

loc_0018751B: ;
    esi = eax;
    goto loc_00187556;

loc_0018751F: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edi = ebp + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_00187567; /* je: equal / zero */

loc_00187529: ;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00187551; /* jl: less (signed <) */

loc_00187532: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187551; /* jg: greater (signed >) */

loc_0018753A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187551; /* jg: greater (signed >) */

loc_0018753F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00187551; /* jl: less (signed <) */

loc_00187544: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187551; /* jg: greater (signed >) */

loc_0018754C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018756E; /* jle: less or equal (signed <=) */

loc_00187551: ;
    esi = 0x8876086Cu;

loc_00187556: ;
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018755Eu); RECOMP_ABI_CALL(0x0018B615u, sub_0018B615); /* call 0x0018B615 */

loc_0018755E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

loc_00187567: ;
    esi = ebp + -52;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_0018756E: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + -56));
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187592u); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_00187592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018751B; /* jl: less (signed <) */

loc_00187596: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00187556;

}

/**
 * sub_0018759A
 * Original: 0x0018759A - 0x001875B7 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018759A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018759A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001875AD; /* je: equal / zero */

loc_001875A8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001875B7(); return; } /* jne: not equal / not zero */

loc_001875AD: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_001876BE(); return; /* tail jmp 0x001876BE */

}

/**
 * sub_001875B7
 * Original: 0x001875B7 - 0x00187601 (74 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001875B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001875B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x001875C5u); RECOMP_ABI_CALL(0x00168730u, sub_00168730); /* call 0x00168730 */

loc_001875C5: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187601(); return; } /* je: equal / zero */

loc_001875CC: ;
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001875F7; /* jl: less (signed <) */

loc_001875D8: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001875F7; /* ja: above (unsigned >) */

loc_001875E0: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001875F7; /* jg: greater (signed >) */

loc_001875E5: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001875F7; /* jl: less (signed <) */

loc_001875EA: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001875F7; /* ja: above (unsigned >) */

loc_001875F2: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00187613(); return; } /* jle: less or equal (signed <=) */

loc_001875F7: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_001876BC(); return; /* tail jmp 0x001876BC */

}

/**
 * sub_00187601
 * Original: 0x00187601 - 0x00187613 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187601(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187601: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -20) = eax;

    g_seh_ebp = ebp; sub_00187613(); return; /* fallthrough 0x00187613 */

}

/**
 * sub_00187613
 * Original: 0x00187613 - 0x0018764C (57 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187613: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187625u); RECOMP_ABI_CALL(0x00168750u, sub_00168750); /* call 0x00168750 */

loc_00187625: ;
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0x0018762Du); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_0018762D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018767D(); return; } /* je: equal / zero */

loc_00187636: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x0018763Fu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018763F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018764C(); return; } /* jne: not equal / not zero */

loc_00187645: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001876AA(); return; /* tail jmp 0x001876AA */

}

/**
 * sub_0018764C
 * Original: 0x0018764C - 0x0018767D (49 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018764C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018764C: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, MEM32(ebp + -60));
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x00187660u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_00187660: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0018767Bu); RECOMP_ABI_CALL(0x001A7DA3u, sub_001A7DA3); /* call 0x001A7DA3 */

loc_0018767B: ;
    g_seh_ebp = ebp; sub_00187680(); return; /* tail jmp 0x00187680 */

}

/**
 * sub_0018767D
 * Original: 0x0018767D - 0x001876AA (45 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018767D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018767D: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001876A2u); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_001876A2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001876AA(); return; } /* jl: less (signed <) */

loc_001876A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001876AA(); return; /* fallthrough 0x001876AA */

}

/**
 * sub_00187680
 * Original: 0x00187680 - 0x001876AA (42 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187680: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001876A2u); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_001876A2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001876AA(); return; } /* jl: less (signed <) */

loc_001876A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001876AA(); return; /* fallthrough 0x001876AA */

}

/**
 * sub_001876AA
 * Original: 0x001876AA - 0x001876BC (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001876AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001876AA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001876BA; /* je: equal / zero */

loc_001876AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001876BA; /* je: equal / zero */

loc_001876B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001876BAu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001876BA: ;
    eax = ebx;

    g_seh_ebp = ebp; sub_001876BC(); return; /* fallthrough 0x001876BC */

}

/**
 * sub_001876BC
 * Original: 0x001876BC - 0x001876BE (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001876BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001876BC: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001876BE(); return; /* fallthrough 0x001876BE */

}

/**
 * sub_001876BE
 * Original: 0x001876BE - 0x001876C3 (5 bytes, 3 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001876BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001876BE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001876C3
 * Original: 0x001876C3 - 0x00187808 (325 bytes, 122 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001876C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001876C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001876D6; /* je: equal / zero */

loc_001876D1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001876E0; /* jne: not equal / not zero */

loc_001876D6: ;
    eax = 0x8876086Cu;
    goto loc_00187803;

loc_001876E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001876EEu); RECOMP_ABI_CALL(0x001687C0u, sub_001687C0); /* call 0x001687C0 */

loc_001876EE: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018772E; /* je: equal / zero */

loc_001876F5: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -48;
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
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -60) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187724; /* ja: above (unsigned >) */

loc_00187705: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187724; /* ja: above (unsigned >) */

loc_0018770A: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -56) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187724; /* ja: above (unsigned >) */

loc_00187712: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187724; /* ja: above (unsigned >) */

loc_00187717: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -52) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00187724; /* ja: above (unsigned >) */

loc_0018771F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00187749; /* jbe: below or equal (unsigned <=) */

loc_00187724: ;
    eax = 0x8876086Cu;
    goto loc_00187801;

loc_0018772E: ;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -56);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -28) = eax;

loc_00187749: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018775Bu); RECOMP_ABI_CALL(0x001687E0u, sub_001687E0); /* call 0x001687E0 */

loc_0018775B: ;
    PUSH32(esp, MEM32(ebp + -76));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187763u); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_00187763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_001877BF; /* je: equal / zero */

loc_0018776C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -64));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187775u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00187775: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187782; /* jne: not equal / not zero */

loc_0018777B: ;
    ebx = 0x8007000Eu;
    goto loc_001877EF;

loc_00187782: ;
    eax = MEM32(ebp + -48);
    PUSH32(esp, MEM32(ebp + -76));
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018779Cu); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0018779C: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, MEM32(ebp + -56));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001877BDu); RECOMP_ABI_CALL(0x001A8715u, sub_001A8715); /* call 0x001A8715 */

loc_001877BD: ;
    goto loc_001877C2;

loc_001877BF: ;
    esi = MEM32(ebp + -4);

loc_001877C2: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -76));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001877E7u); RECOMP_ABI_CALL(0x00186DF7u, sub_00186DF7); /* call 0x00186DF7 */

loc_001877E7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001877EF; /* jl: less (signed <) */

loc_001877ED: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001877EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001877FF; /* je: equal / zero */

loc_001877F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001877FF; /* je: equal / zero */

loc_001877F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001877FFu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001877FF: ;
    eax = ebx;

loc_00187801: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00187803: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00187808
 * Original: 0x00187808 - 0x00187823 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00187808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187808: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187823(); return; } /* jne: not equal / not zero */

loc_00187819: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187955(); return; /* tail jmp 0x00187955 */

}

/**
 * sub_00187823
 * Original: 0x00187823 - 0x0018786F (76 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187823(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187823: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018784E; /* jne: not equal / not zero */

loc_0018782C: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00187837u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_00187837: ;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0x0018783Fu); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_0018783F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFFFDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(5)) >> 32) & 1);
    edi = edi + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018784E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00187854u); RECOMP_ABI_CALL(0x001683C0u, sub_001683C0); /* call 0x001683C0 */

loc_00187854: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00187860; /* jne: not equal / not zero */

loc_0018785D: ;
    MEM32(ebp + 0x10) = ebx;

loc_00187860: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018786F(); return; } /* jb: below (unsigned <) */

loc_00187865: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187954(); return; /* tail jmp 0x00187954 */

}

/**
 * sub_0018786F
 * Original: 0x0018786F - 0x001878C0 (81 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018786F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018786F: ;
    eax = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00187886; /* je: equal / zero */

loc_0018787E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0018788D; /* jne: not equal / not zero */

loc_00187886: ;
    MEM32(ebp + -8) = 1;

loc_0018788D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00187896u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00187896: ;
    esi = eax;
    MEM32(ebp + -4) = esi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00187936(); return; } /* js: sign (negative) */

loc_001878B2: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x10) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187934(); return; } /* jae: above or equal (unsigned >=) */

loc_001878BE: ;
    g_seh_ebp = ebp; sub_001878C3(); return; /* tail jmp 0x001878C3 */

}

/**
 * sub_001878C0
 * Original: 0x001878C0 - 0x001878C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001878C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001878C0: ;
    eax = MEM32(ebp + 0x10);

    g_seh_ebp = ebp; sub_001878C3(); return; /* fallthrough 0x001878C3 */

}

/**
 * sub_001878C3
 * Original: 0x001878C3 - 0x00187918 (85 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001878C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001878C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001878CCu); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_001878CC: ;
    esi = eax;
    MEM32(ebp + 0x14) = esi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00187936(); return; } /* js: sign (negative) */

loc_001878DF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x001878F6u); RECOMP_ABI_CALL(0x0018759Au, sub_0018759A); /* call 0x0018759A */

loc_001878F6: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00187936(); return; } /* jl: less (signed <) */

loc_001878FE: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187918(); return; } /* je: equal / zero */

loc_00187903: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187910; /* je: equal / zero */

loc_00187908: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187910u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187910: ;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_00187925(); return; /* tail jmp 0x00187925 */

}

/**
 * sub_00187918
 * Original: 0x00187918 - 0x00187925 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187918: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187929(); return; } /* je: equal / zero */

loc_0018791D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187925u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

    g_seh_ebp = ebp; sub_00187925(); return; /* fallthrough 0x00187925 */

}

/**
 * sub_00187925
 * Original: 0x00187925 - 0x00187929 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187925(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187925: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00187929(); return; /* fallthrough 0x00187929 */

}

/**
 * sub_00187929
 * Original: 0x00187929 - 0x00187934 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187929(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187929: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001878C0(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_00187934(); return; /* fallthrough 0x00187934 */

}

/**
 * sub_00187934
 * Original: 0x00187934 - 0x00187936 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187934(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187934: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00187936(); return; /* fallthrough 0x00187936 */

}

/**
 * sub_00187936
 * Original: 0x00187936 - 0x0018795B (37 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187936(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187936: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187944; /* je: equal / zero */

loc_0018793C: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187944u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187944: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187952; /* je: equal / zero */

loc_0018794A: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187952u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187952: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00187954
 * Original: 0x00187954 - 0x0018795B (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187954(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00187955
 * Original: 0x00187955 - 0x0018795B (6 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187955(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187955: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0018795B
 * Original: 0x0018795B - 0x00187973 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018795B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018795B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187973(); return; } /* jne: not equal / not zero */

loc_00187969: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187ADB(); return; /* tail jmp 0x00187ADB */

}
