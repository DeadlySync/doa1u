/**
 * DOAU1 - Recompiled code chunk 79
 * Functions: 250 (0x002059F2 - 0x0020960C)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002059F2
 * Original: 0x002059F2 - 0x002059F6 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002059F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002059F2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002059F6
 * Original: 0x002059F6 - 0x002059FA (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002059F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002059F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002059F1(); return; /* tail jmp 0x002059F1 */

}

/**
 * sub_002059FA
 * Original: 0x002059FA - 0x00205A1F (37 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002059FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002059FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00205A0A; /* jne: not equal / not zero */

loc_00205A07: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00205A0A: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205A1Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205A1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00205A23(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00205A1F(); return; /* fallthrough 0x00205A1F */

}

/**
 * sub_00205A1F
 * Original: 0x00205A1F - 0x00205A23 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205A1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00205A83(); return; /* tail jmp 0x00205A83 */

}

/**
 * sub_00205A23
 * Original: 0x00205A23 - 0x00205A83 (96 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205A23: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205A38u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205A38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205A1F(); return; } /* je: equal / zero */

loc_00205A3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00205A47u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205A47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205A1F(); return; } /* je: equal / zero */

loc_00205A4B: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205A59u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205A59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205A1F(); return; } /* je: equal / zero */

loc_00205A5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00205A6Bu); RECOMP_ABI_CALL(0x002056B5u, sub_002056B5); /* call 0x002056B5 */

loc_00205A6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205A1F(); return; } /* je: equal / zero */

loc_00205A6F: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00205A7Du); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205A7D: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00205A83(); return; /* fallthrough 0x00205A83 */

}

/**
 * sub_00205A83
 * Original: 0x00205A83 - 0x00205A88 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205A83: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205A88
 * Original: 0x00205A88 - 0x00205AB0 (40 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00205A88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205A88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205A95; /* jne: not equal / not zero */

loc_00205A92: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00205A95: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205AA6u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205AA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B09(); return; } /* je: equal / zero */

loc_00205AAA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_00205AE3(); return; /* tail jmp 0x00205AE3 */

}

/**
 * sub_00205AB0
 * Original: 0x00205AB0 - 0x00205AE3 (51 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205AB0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205ABCu); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205ABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B0D(); return; } /* je: equal / zero */

loc_00205AC0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205ACAu); RECOMP_ABI_CALL(0x0021BB64u, sub_0021BB64); /* call 0x0021BB64 */

loc_00205ACA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B0D(); return; } /* je: equal / zero */

loc_00205AD0: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00205ADDu); RECOMP_ABI_CALL(0x002055F9u, sub_002055F9); /* call 0x002055F9 */

loc_00205ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B0D(); return; } /* je: equal / zero */

loc_00205AE1: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_00205AE3(); return; /* fallthrough 0x00205AE3 */

}

/**
 * sub_00205AE3
 * Original: 0x00205AE3 - 0x00205B09 (38 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205AE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205AE3: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205AEEu); RECOMP_ABI_CALL(0x00219EA9u, sub_00219EA9); /* call 0x00219EA9 */

loc_00205AEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00205AB0(); return; } /* jne: not equal / not zero */

loc_00205AF2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00205B02u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205B02: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00205B09(); return; /* fallthrough 0x00205B09 */

}

/**
 * sub_00205B08
 * Original: 0x00205B08 - 0x00205B09 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B08: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00205B09(); return; /* fallthrough 0x00205B09 */

}

/**
 * sub_00205B09
 * Original: 0x00205B09 - 0x00205B0D (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B09: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205B0D
 * Original: 0x00205B0D - 0x00205B11 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00205B08(); return; /* tail jmp 0x00205B08 */

}

/**
 * sub_00205B11
 * Original: 0x00205B11 - 0x00205B36 (37 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00205B11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205B11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00205B21; /* jne: not equal / not zero */

loc_00205B1E: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00205B21: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205B32u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205B32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B3D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00205B36(); return; /* fallthrough 0x00205B36 */

}

/**
 * sub_00205B36
 * Original: 0x00205B36 - 0x00205B3D (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00205BC8(); return; /* tail jmp 0x00205BC8 */

}

/**
 * sub_00205B3D
 * Original: 0x00205B3D - 0x00205BC8 (139 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B3D: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00205B52u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205B56: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205B61u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205B61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205B65: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00205B73u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205B77: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00205B8Cu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205B8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205B90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00205B9Eu); RECOMP_ABI_CALL(0x0021B763u, sub_0021B763); /* call 0x0021B763 */

loc_00205B9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205BA2: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00205BB0u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00205B36(); return; } /* je: equal / zero */

loc_00205BB4: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00205BC2u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205BC2: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00205BC8(); return; /* fallthrough 0x00205BC8 */

}

/**
 * sub_00205BC8
 * Original: 0x00205BC8 - 0x00205BCD (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205BC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205BC8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205BCD
 * Original: 0x00205BCD - 0x00206066 (1177 bytes, 386 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00205BCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00205BCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00205BDF; /* jne: not equal / not zero */

loc_00205BDA: ;
    eax = 0x4000001E;

loc_00205BDF: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205BF0u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205BF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00205BFB; /* jne: not equal / not zero */

loc_00205BF4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206062;

loc_00205BFB: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C0Du); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205C0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00205BF4; /* je: equal / zero */

loc_00205C11: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C30u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205C30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205C38: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C48u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205C48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205C50: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C5Eu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205C5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205C66: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C7Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205C83: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205C90u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205C90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205C98: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205CA6u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205CA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205CAE: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205CBAu); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205CBA: ;
    eax = 0x80000002u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205D0C; /* jne: not equal / not zero */

loc_00205CC4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205CD8u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205CD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205CE0: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205CEEu); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00205CEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205CF6: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D04u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205D04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D0C: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D18u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205D18: ;
    eax = 0x80000003u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205D69; /* jne: not equal / not zero */

loc_00205D22: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x40;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D36u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205D36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D3E: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D4Bu); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205D4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D53: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D61u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205D61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D69: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D7Eu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D86: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205D94u); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00205D94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205D9C: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205DAAu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205DAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205DB2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205DC7u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205DC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205DCF: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205DDCu); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205DDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205DE4: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205DF2u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205DF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205DFA: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000006u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E0Fu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205E0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205E17: ;
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E24u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00205E24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205E2C: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E3Au); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205E3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205E42: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E4Eu); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205E4E: ;
    eax = 0x80000007u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205EA0; /* jne: not equal / not zero */

loc_00205E58: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x20;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E6Cu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205E74: ;
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E82u); RECOMP_ABI_CALL(0x0021ADF8u, sub_0021ADF8); /* call 0x0021ADF8 */

loc_00205E82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205E8A: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205E98u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205E98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205EA0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205EACu); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205EAC: ;
    eax = 0x80000008u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205EFD; /* jne: not equal / not zero */

loc_00205EB6: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x10;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205ECAu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205ECA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205ED2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x3C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205EDFu); RECOMP_ABI_CALL(0x002059FAu, sub_002059FA); /* call 0x002059FA */

loc_00205EDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205EE7: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205EF5u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205EF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205EFD: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000009u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F12u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F1A: ;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F28u); RECOMP_ABI_CALL(0x0021ADF8u, sub_0021ADF8); /* call 0x0021ADF8 */

loc_00205F28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F30: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F3Eu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205F3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F46: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000000Au);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F5Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205F5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F63: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x48;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F70u); RECOMP_ABI_CALL(0x002059FAu, sub_002059FA); /* call 0x002059FA */

loc_00205F70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F78: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F86u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205F86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205F8E: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205F9Au); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205F9A: ;
    eax = 0x8000000Bu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205FE4; /* jne: not equal / not zero */

loc_00205FA4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205FB8u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00205FB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205FC0: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205FCEu); RECOMP_ABI_CALL(0x0021A54Eu, sub_0021A54E); /* call 0x0021A54E */

loc_00205FCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205FD2: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205FE0u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00205FE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00205FE4: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00205FF0u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00205FF0: ;
    eax = 0x8000000Cu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206036; /* jne: not equal / not zero */

loc_00205FFA: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 4;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020600Eu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020600E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00206012: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x58)) >> 32) & 1);
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206020u); RECOMP_ABI_CALL(0x0021B763u, sub_0021B763); /* call 0x0021B763 */

loc_00206020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00206024: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206032u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206032: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206048; /* je: equal / zero */

loc_00206036: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206044u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206044: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020604C; /* jne: not equal / not zero */

loc_00206048: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206060;

loc_0020604C: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020605Au); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020605A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00206060: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00206062: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206066
 * Original: 0x00206066 - 0x002060B2 (76 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206066(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206066: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206076; /* jne: not equal / not zero */

loc_00206073: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00206076: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206087u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020618E(); return; } /* je: equal / zero */

loc_0020608F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002060AEu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002060AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B9(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002060B2(); return; /* fallthrough 0x002060B2 */

}

/**
 * sub_002060B2
 * Original: 0x002060B2 - 0x002060B9 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002060B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002060B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020618C(); return; /* tail jmp 0x0020618C */

}

/**
 * sub_002060B9
 * Original: 0x002060B9 - 0x0020618C (211 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002060B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002060B9: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x002060C7u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_002060C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_002060CB: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002060D9u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002060D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_002060DD: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002060E9u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_002060E9: ;
    eax = 0x80000001u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0020612F; /* jne: not equal / not zero */

loc_002060F3: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206107u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_0020610B: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x00206119u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_0020611D: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0020612Bu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020612B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_0020612F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206144u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206144: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_0020614C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x0020615Au); RECOMP_ABI_CALL(0x0021B763u, sub_0021B763); /* call 0x0021B763 */

loc_0020615A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_00206162: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206170u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002060B2(); return; } /* je: equal / zero */

loc_00206178: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00206186u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206186: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_0020618C(); return; /* fallthrough 0x0020618C */

}

/**
 * sub_0020618C
 * Original: 0x0020618C - 0x0020618E (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020618C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020618C: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020618E(); return; /* fallthrough 0x0020618E */

}

/**
 * sub_0020618E
 * Original: 0x0020618E - 0x00206192 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020618E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020618E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206192
 * Original: 0x00206192 - 0x002061B7 (37 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206192(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206192: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002061A2; /* jne: not equal / not zero */

loc_0020619F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002061A2: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002061B3u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002061B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002061BE(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002061B7(); return; /* fallthrough 0x002061B7 */

}

/**
 * sub_002061B7
 * Original: 0x002061B7 - 0x002061BE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002061B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002061B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206249(); return; /* tail jmp 0x00206249 */

}

/**
 * sub_002061BE
 * Original: 0x002061BE - 0x00206249 (139 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002061BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002061BE: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002061D3u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002061D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_002061D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002061E2u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_002061E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_002061E6: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002061F4u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002061F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_002061F8: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020620Du); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020620D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_00206211: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0020621Fu); RECOMP_ABI_CALL(0x0021B763u, sub_0021B763); /* call 0x0021B763 */

loc_0020621F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_00206223: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206231u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002061B7(); return; } /* je: equal / zero */

loc_00206235: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00206243u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206243: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00206249(); return; /* fallthrough 0x00206249 */

}

/**
 * sub_00206249
 * Original: 0x00206249 - 0x0020624E (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206249: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020624E
 * Original: 0x0020624E - 0x002062D5 (135 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020624E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020624E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020625B; /* jne: not equal / not zero */

loc_00206258: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0020625B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020626Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020626A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206272; /* jne: not equal / not zero */

loc_0020626E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002062D0;

loc_00206272: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206281u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00206281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020626E; /* je: equal / zero */

loc_00206285: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206297u); RECOMP_ABI_CALL(0x0021B53Fu, sub_0021B53F); /* call 0x0021B53F */

loc_00206297: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020629F; /* jne: not equal / not zero */

loc_0020629B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002062CF;

loc_0020629F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002062A8u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002062A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020629B; /* je: equal / zero */

loc_002062AC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002062C0; /* je: equal / zero */

loc_002062B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002062BCu); RECOMP_ABI_CALL(0x00205513u, sub_00205513); /* call 0x00205513 */

loc_002062BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020629B; /* je: equal / zero */

loc_002062C0: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002062C9u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002062C9: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002062CF: ;
    POP32(esp, esi);

loc_002062D0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002062D5
 * Original: 0x002062D5 - 0x002062F9 (36 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002062D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002062D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002062E4; /* jne: not equal / not zero */

loc_002062DF: ;
    eax = 0x8000000Cu;

loc_002062E4: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002062F5u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002062F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00206300(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002062F9(); return; /* fallthrough 0x002062F9 */

}

/**
 * sub_002062F9
 * Original: 0x002062F9 - 0x00206300 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002062F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002062F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206387(); return; /* tail jmp 0x00206387 */

}

/**
 * sub_00206300
 * Original: 0x00206300 - 0x0020631C (28 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206300: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x00206312u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002062F9(); return; } /* je: equal / zero */

loc_00206316: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_0020634F(); return; /* tail jmp 0x0020634F */

}

/**
 * sub_0020631C
 * Original: 0x0020631C - 0x0020634F (51 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020631C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020631C: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206328u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020638B(); return; } /* je: equal / zero */

loc_0020632C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206336u); RECOMP_ABI_CALL(0x0021BB64u, sub_0021BB64); /* call 0x0021BB64 */

loc_00206336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020638B(); return; } /* je: equal / zero */

loc_0020633C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206349u); RECOMP_ABI_CALL(0x00205B11u, sub_00205B11); /* call 0x00205B11 */

loc_00206349: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020638B(); return; } /* je: equal / zero */

loc_0020634D: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_0020634F(); return; /* fallthrough 0x0020634F */

}

/**
 * sub_0020634F
 * Original: 0x0020634F - 0x00206387 (56 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020634F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020634F: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0020635Au); RECOMP_ABI_CALL(0x00219EA9u, sub_00219EA9); /* call 0x00219EA9 */

loc_0020635A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020631C(); return; } /* jne: not equal / not zero */

loc_0020635E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x0020636Eu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020636E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020638B(); return; } /* je: equal / zero */

loc_00206372: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00206380u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206380: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00206387(); return; /* fallthrough 0x00206387 */

}

/**
 * sub_00206386
 * Original: 0x00206386 - 0x00206387 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206386(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206386: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00206387(); return; /* fallthrough 0x00206387 */

}

/**
 * sub_00206387
 * Original: 0x00206387 - 0x0020638B (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206387(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206387: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020638B
 * Original: 0x0020638B - 0x0020638F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020638B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020638B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206386(); return; /* tail jmp 0x00206386 */

}

/**
 * sub_0020638F
 * Original: 0x0020638F - 0x002063B3 (36 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020638F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020638F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020639E; /* jne: not equal / not zero */

loc_00206399: ;
    eax = 0x80000002u;

loc_0020639E: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002063AFu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002063AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002063BA(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002063B3(); return; /* fallthrough 0x002063B3 */

}

/**
 * sub_002063B3
 * Original: 0x002063B3 - 0x002063BA (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002063B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002063B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206441(); return; /* tail jmp 0x00206441 */

}

/**
 * sub_002063BA
 * Original: 0x002063BA - 0x002063D6 (28 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002063BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002063BA: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x002063CCu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002063CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002063B3(); return; } /* je: equal / zero */

loc_002063D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_00206409(); return; /* tail jmp 0x00206409 */

}

/**
 * sub_002063D6
 * Original: 0x002063D6 - 0x00206409 (51 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002063D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002063D6: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002063E2u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_002063E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206445(); return; } /* je: equal / zero */

loc_002063E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002063F0u); RECOMP_ABI_CALL(0x0021BB64u, sub_0021BB64); /* call 0x0021BB64 */

loc_002063F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206445(); return; } /* je: equal / zero */

loc_002063F6: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206403u); RECOMP_ABI_CALL(0x00205B11u, sub_00205B11); /* call 0x00205B11 */

loc_00206403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206445(); return; } /* je: equal / zero */

loc_00206407: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_00206409(); return; /* fallthrough 0x00206409 */

}

/**
 * sub_00206409
 * Original: 0x00206409 - 0x00206441 (56 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206409: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206414u); RECOMP_ABI_CALL(0x00219EA9u, sub_00219EA9); /* call 0x00219EA9 */

loc_00206414: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002063D6(); return; } /* jne: not equal / not zero */

loc_00206418: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x00206428u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206445(); return; } /* je: equal / zero */

loc_0020642C: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020643Au); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020643A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00206441(); return; /* fallthrough 0x00206441 */

}

/**
 * sub_00206440
 * Original: 0x00206440 - 0x00206441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206440: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00206441(); return; /* fallthrough 0x00206441 */

}

/**
 * sub_00206441
 * Original: 0x00206441 - 0x00206445 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206441(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206441: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206445
 * Original: 0x00206445 - 0x00206449 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206445(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206445: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206440(); return; /* tail jmp 0x00206440 */

}

/**
 * sub_00206449
 * Original: 0x00206449 - 0x00206470 (39 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206449(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206449: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020645B; /* jne: not equal / not zero */

loc_00206456: ;
    eax = 0x40000001;

loc_0020645B: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020646Cu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020646C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00206477(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00206470(); return; /* fallthrough 0x00206470 */

}

/**
 * sub_00206470
 * Original: 0x00206470 - 0x00206477 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206470: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206633(); return; /* tail jmp 0x00206633 */

}

/**
 * sub_00206477
 * Original: 0x00206477 - 0x002064B0 (57 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206477(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206477: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x00206489u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206489: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206470(); return; } /* je: equal / zero */

loc_0020648D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002064ACu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002064AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B7(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002064B0(); return; /* fallthrough 0x002064B0 */

}

/**
 * sub_002064B0
 * Original: 0x002064B0 - 0x002064B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002064B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002064B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206631(); return; /* tail jmp 0x00206631 */

}

/**
 * sub_002064B7
 * Original: 0x002064B7 - 0x00206631 (378 bytes, 121 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002064B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002064B7: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x002064C5u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_002064C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002064C9: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002064D7u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002064D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002064DB: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002064F0u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002064F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002064F4: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x00206502u); RECOMP_ABI_CALL(0x0021ADF8u, sub_0021ADF8); /* call 0x0021ADF8 */

loc_00206502: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206506: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206514u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206514: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206518: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0020652Du); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020652D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206535: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206542u); RECOMP_ABI_CALL(0x002059FAu, sub_002059FA); /* call 0x002059FA */

loc_00206542: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_0020654A: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206558u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206560: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206575u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_0020657D: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x0020658Bu); RECOMP_ABI_CALL(0x00206066u, sub_00206066); /* call 0x00206066 */

loc_0020658B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206593: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002065A1u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002065A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002065A9: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002065B5u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_002065B5: ;
    eax = 0x80000004u;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206607; /* jne: not equal / not zero */

loc_002065BF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002065D3u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002065D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002065DB: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002065E9u); RECOMP_ABI_CALL(0x00205A88u, sub_00205A88); /* call 0x00205A88 */

loc_002065E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_002065F1: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002065FFu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002065FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_00206607: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x00206615u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002064B0(); return; } /* je: equal / zero */

loc_0020661D: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020662Bu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020662B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00206631(); return; /* fallthrough 0x00206631 */

}

/**
 * sub_00206631
 * Original: 0x00206631 - 0x00206633 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206631(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206631: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00206633(); return; /* fallthrough 0x00206633 */

}

/**
 * sub_00206633
 * Original: 0x00206633 - 0x00206637 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206633: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206637
 * Original: 0x00206637 - 0x0020665C (37 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206637(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206637: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00206647; /* jne: not equal / not zero */

loc_00206644: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00206647: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206658u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00206663(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020665C(); return; /* fallthrough 0x0020665C */

}

/**
 * sub_0020665C
 * Original: 0x0020665C - 0x00206663 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020665C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020665C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020684D(); return; /* tail jmp 0x0020684D */

}

/**
 * sub_00206663
 * Original: 0x00206663 - 0x0020684D (490 bytes, 157 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206663(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206663: ;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020667Eu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020667E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206683: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206691u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206695: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002066A3u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002066A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002066A7: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002066BCu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002066BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002066C0: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002066CEu); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_002066CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002066D2: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002066E0u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002066E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002066E8: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002066F4u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_002066F4: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000002u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x80000002u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206716; /* jne: not equal / not zero */

loc_002066FD: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020670Eu); RECOMP_ABI_CALL(0x0020638Fu, sub_0020638F); /* call 0x0020638F */

loc_0020670E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206716: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020672Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020672B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206733: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206741u); RECOMP_ABI_CALL(0x0021ADF8u, sub_0021ADF8); /* call 0x0021ADF8 */

loc_00206741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206749: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206757u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206757: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_0020675F: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206774u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206774: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_0020677C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206789u); RECOMP_ABI_CALL(0x002059FAu, sub_002059FA); /* call 0x002059FA */

loc_00206789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206791: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020679Fu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020679F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002067A7: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002067BCu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002067BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002067C4: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002067D2u); RECOMP_ABI_CALL(0x00206449u, sub_00206449); /* call 0x00206449 */

loc_002067D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002067DA: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002067E8u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002067E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_002067F0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000006u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206805u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206805: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_0020680D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x48)) >> 32) & 1);
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0020681Bu); RECOMP_ABI_CALL(0x00206066u, sub_00206066); /* call 0x00206066 */

loc_0020681B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206823: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206831u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206831: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020665C(); return; } /* je: equal / zero */

loc_00206839: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00206847u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206847: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_0020684D(); return; /* fallthrough 0x0020684D */

}

/**
 * sub_0020684D
 * Original: 0x0020684D - 0x00206852 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020684D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020684D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206852
 * Original: 0x00206852 - 0x0020689A (72 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206852(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206852: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00206862; /* jne: not equal / not zero */

loc_0020685F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00206862: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206873u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206C6B(); return; } /* je: equal / zero */

loc_0020687B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206896u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206896: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002068A1(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020689A(); return; /* fallthrough 0x0020689A */

}

/**
 * sub_0020689A
 * Original: 0x0020689A - 0x002068A1 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020689A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020689A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00206C6A(); return; /* tail jmp 0x00206C6A */

}

/**
 * sub_002068A1
 * Original: 0x002068A1 - 0x00206C6A (969 bytes, 308 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002068A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002068A1: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 4;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002068AEu); RECOMP_ABI_CALL(0x00206192u, sub_00206192); /* call 0x00206192 */

loc_002068AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002068B2: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002068C0u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002068C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002068C4: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002068D9u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002068D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002068DD: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002068EBu); RECOMP_ABI_CALL(0x00205971u, sub_00205971); /* call 0x00205971 */

loc_002068EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002068EF: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002068FDu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002068FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206901: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206916u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206916: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_0020691A: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206928u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206928: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206930: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020693Eu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020693E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206946: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206952u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206952: ;
    eax = 0x80000003u;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 0x18);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002069A6; /* jne: not equal / not zero */

loc_0020695F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206973u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_0020697B: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206988u); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206988: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206990: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0020699Eu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_0020699E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002069A6: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002069BBu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_002069BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002069C3: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x002069D1u); RECOMP_ABI_CALL(0x0021A522u, sub_0021A522); /* call 0x0021A522 */

loc_002069D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002069D9: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x002069E7u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002069E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_002069EF: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206A04u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206A04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A0C: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206A19u); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206A19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A21: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206A2Fu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206A2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A37: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206A43u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206A43: ;
    eax = 0x80000006u;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206A94; /* jne: not equal / not zero */

loc_00206A4D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x40;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206A61u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206A61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A69: ;
    eax = esi + 0x3E;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206A76u); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206A76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A7E: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206A8Cu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206A8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206A94: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206AA9u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206AB1: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206ABEu); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206ABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206AC6: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206AD4u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206AD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206ADC: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206AE8u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206AE8: ;
    eax = 0x80000008u;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206B39; /* jne: not equal / not zero */

loc_00206AF2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x20;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206B06u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206B06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B0E: ;
    eax = esi + 0x5A;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206B1Bu); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206B1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B23: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206B31u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206B31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B39: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000009u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206B4Eu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206B4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B56: ;
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00206B64u); RECOMP_ABI_CALL(0x0021ADF8u, sub_0021ADF8); /* call 0x0021ADF8 */

loc_00206B64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B6C: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206B7Au); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206B7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B82: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000000Au);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206B97u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206B97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206B9F: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x6C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206BACu); RECOMP_ABI_CALL(0x002059FAu, sub_002059FA); /* call 0x002059FA */

loc_00206BAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206BB4: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206BC2u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206BC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206BCA: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206BD6u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206BD6: ;
    eax = 0x8000000Bu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206C28; /* jne: not equal / not zero */

loc_00206BE0: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x10;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206BF4u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206BF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206BFC: ;
    eax = esi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206C0Au); RECOMP_ABI_CALL(0x002058E8u, sub_002058E8); /* call 0x002058E8 */

loc_00206C0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206C12: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206C20u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206C28: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00206C34u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206C34: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x8000000Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206C56; /* jne: not equal / not zero */

loc_00206C3D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x78)) >> 32) & 1);
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206C4Eu); RECOMP_ABI_CALL(0x002062D5u, sub_002062D5); /* call 0x002062D5 */

loc_00206C4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020689A(); return; } /* je: equal / zero */

loc_00206C56: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00206C64u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206C64: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00206C6A(); return; /* fallthrough 0x00206C6A */

}

/**
 * sub_00206C6A
 * Original: 0x00206C6A - 0x00206C6B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206C6A: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00206C6B(); return; /* fallthrough 0x00206C6B */

}

/**
 * sub_00206C6B
 * Original: 0x00206C6B - 0x00206C70 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206C6B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206C70
 * Original: 0x00206C70 - 0x00206DAA (314 bytes, 112 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00206C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206C82; /* jne: not equal / not zero */

loc_00206C7D: ;
    eax = 0x4000000F;

loc_00206C82: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206C93u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206C93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206C9E; /* jne: not equal / not zero */

loc_00206C97: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206DA6;

loc_00206C9E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206CB0u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206CB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206C97; /* je: equal / zero */

loc_00206CB4: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206CC9u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206CC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206C97; /* je: equal / zero */

loc_00206CCD: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206CDCu); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206CE7; /* jne: not equal / not zero */

loc_00206CE0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206DA5;

loc_00206CE7: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206CF5u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206CF9: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D0Eu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206D0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D12: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D20u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206D20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D24: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D32u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D36: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D4Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206D4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D5Du); RECOMP_ABI_CALL(0x00206066u, sub_00206066); /* call 0x00206066 */

loc_00206D5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D65: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D73u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206D73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D7B: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D89u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206D89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CE0; /* je: equal / zero */

loc_00206D91: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206D9Fu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206D9F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00206DA5: ;
    POP32(esp, esi);

loc_00206DA6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206DAA
 * Original: 0x00206DAA - 0x00206F64 (442 bytes, 155 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206DAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00206DAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206DBC; /* jne: not equal / not zero */

loc_00206DB7: ;
    eax = 0x4000001B;

loc_00206DBC: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206DCDu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206DCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206DD8; /* jne: not equal / not zero */

loc_00206DD1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206F60;

loc_00206DD8: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206DEAu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206DEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206DD1; /* je: equal / zero */

loc_00206DEE: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E0Du); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206E0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206E18; /* jne: not equal / not zero */

loc_00206E11: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206F5E;

loc_00206E18: ;
    eax = esi + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E26u); RECOMP_ABI_CALL(0x0021BCA8u, sub_0021BCA8); /* call 0x0021BCA8 */

loc_00206E26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206E2A: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E38u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206E38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206E3C: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E51u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206E55: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E63u); RECOMP_ABI_CALL(0x0021ABAAu, sub_0021ABAA); /* call 0x0021ABAA */

loc_00206E63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206E67: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E75u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206E75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206E79: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206E85u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206E85: ;
    eax = 0x80000002u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206ED6; /* jne: not equal / not zero */

loc_00206E8F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x80;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206EA3u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206EA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206EAB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206EB8u); RECOMP_ABI_CALL(0x00206192u, sub_00206192); /* call 0x00206192 */

loc_00206EB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206EC0: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206ECEu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206ECE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206ED6: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206EE2u); RECOMP_ABI_CALL(0x00219C57u, sub_00219C57); /* call 0x00219C57 */

loc_00206EE2: ;
    eax = 0x80000003u;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206F34; /* jne: not equal / not zero */

loc_00206EEC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | 0x40;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F00u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206F00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206F08: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F16u); RECOMP_ABI_CALL(0x00219D2Du, sub_00219D2D); /* call 0x00219D2D */

loc_00206F16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206F1E: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F2Cu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206F34: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F42u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206F42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E11; /* je: equal / zero */

loc_00206F4A: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F58u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206F58: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00206F5E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00206F60: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206F64
 * Original: 0x00206F64 - 0x00206FB6 (82 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206F64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00206F64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206F74; /* jne: not equal / not zero */

loc_00206F6F: ;
    eax = 0x4000000B;

loc_00206F74: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F85u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206F8D; /* jne: not equal / not zero */

loc_00206F89: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00206FB2;

loc_00206F8D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206F9Au); RECOMP_ABI_CALL(0x00206637u, sub_00206637); /* call 0x00206637 */

loc_00206F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206F89; /* je: equal / zero */

loc_00206F9E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206FACu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206FAC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00206FB2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206FB6
 * Original: 0x00206FB6 - 0x00207008 (82 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00206FB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00206FB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206FC6; /* jne: not equal / not zero */

loc_00206FC1: ;
    eax = 0x4000000D;

loc_00206FC6: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206FD7u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00206FD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00206FDF; /* jne: not equal / not zero */

loc_00206FDB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207004;

loc_00206FDF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206FECu); RECOMP_ABI_CALL(0x00206637u, sub_00206637); /* call 0x00206637 */

loc_00206FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00206FDB; /* je: equal / zero */

loc_00206FF0: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00206FFEu); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00206FFE: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00207004: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207008
 * Original: 0x00207008 - 0x0020705A (82 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00207008: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207018; /* jne: not equal / not zero */

loc_00207013: ;
    eax = 0x40000019;

loc_00207018: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207029u); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_00207029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207031; /* jne: not equal / not zero */

loc_0020702D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207056;

loc_00207031: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020703Eu); RECOMP_ABI_CALL(0x00206852u, sub_00206852); /* call 0x00206852 */

loc_0020703E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020702D; /* je: equal / zero */

loc_00207042: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207050u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_00207050: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00207056: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020705A
 * Original: 0x0020705A - 0x002070AC (82 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020705A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020705A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020706A; /* jne: not equal / not zero */

loc_00207065: ;
    eax = 0x4000001A;

loc_0020706A: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020707Bu); RECOMP_ABI_CALL(0x00219BE8u, sub_00219BE8); /* call 0x00219BE8 */

loc_0020707B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207083; /* jne: not equal / not zero */

loc_0020707F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002070A8;

loc_00207083: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207090u); RECOMP_ABI_CALL(0x00206852u, sub_00206852); /* call 0x00206852 */

loc_00207090: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020707F; /* je: equal / zero */

loc_00207094: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002070A2u); RECOMP_ABI_CALL(0x00219E2Eu, sub_00219E2E); /* call 0x00219E2E */

loc_002070A2: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002070A8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002070C0
 * Original: 0x002070C0 - 0x002070DE (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002070C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002070C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002070CF; /* jne: not equal / not zero */

loc_002070CC: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002070CF: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002070DAu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002070DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002070E2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002070DE(); return; /* fallthrough 0x002070DE */

}

/**
 * sub_002070DE
 * Original: 0x002070DE - 0x002070E2 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002070DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207153(); return; /* tail jmp 0x00207153 */

}

/**
 * sub_002070E2
 * Original: 0x002070E2 - 0x00207153 (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002070E2: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002070F1u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002070F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_002070F5: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002070FFu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002070FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_00207103: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020710Cu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020710C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_00207110: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020711Fu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020711F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_00207123: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207133u); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_00207133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_00207137: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207140u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002070DE(); return; } /* je: equal / zero */

loc_00207144: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020714Du); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020714D: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207153(); return; /* fallthrough 0x00207153 */

}

/**
 * sub_00207153
 * Original: 0x00207153 - 0x00207156 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207153(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207153: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00207156
 * Original: 0x00207156 - 0x00207173 (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207156(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207156: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207164; /* jne: not equal / not zero */

loc_0020715F: ;
    eax = 0x80000001u;

loc_00207164: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020716Fu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020716F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207177(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207173(); return; /* fallthrough 0x00207173 */

}

/**
 * sub_00207173
 * Original: 0x00207173 - 0x00207177 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207173(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207173: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002071CA(); return; /* tail jmp 0x002071CA */

}

/**
 * sub_00207177
 * Original: 0x00207177 - 0x0020718F (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207177(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207177: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207183u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207173(); return; } /* je: equal / zero */

loc_00207187: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_002071A9(); return; /* tail jmp 0x002071A9 */

}

/**
 * sub_0020718F
 * Original: 0x0020718F - 0x002071A9 (26 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020718F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020718F: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x00207197u); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00207197: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002071A3u); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_002071A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071CE(); return; } /* je: equal / zero */

loc_002071A7: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_002071A9(); return; /* fallthrough 0x002071A9 */

}

/**
 * sub_002071A9
 * Original: 0x002071A9 - 0x002071CA (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020718F(); return; } /* jne: not equal / not zero */

loc_002071AD: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002071B6u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002071B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071CE(); return; } /* je: equal / zero */

loc_002071BA: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002071C3u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002071C3: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002071CA(); return; /* fallthrough 0x002071CA */

}

/**
 * sub_002071C9
 * Original: 0x002071C9 - 0x002071CA (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071C9: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002071CA(); return; /* fallthrough 0x002071CA */

}

/**
 * sub_002071CA
 * Original: 0x002071CA - 0x002071CE (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071CA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002071CE
 * Original: 0x002071CE - 0x002071D2 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002071C9(); return; /* tail jmp 0x002071C9 */

}

/**
 * sub_002071D2
 * Original: 0x002071D2 - 0x002071F0 (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002071D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002071D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002071E1; /* jne: not equal / not zero */

loc_002071DE: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002071E1: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002071ECu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002071EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002071F0(); return; /* fallthrough 0x002071F0 */

}

/**
 * sub_002071F0
 * Original: 0x002071F0 - 0x002071F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207265(); return; /* tail jmp 0x00207265 */

}

/**
 * sub_002071F4
 * Original: 0x002071F4 - 0x00207265 (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071F4: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207203u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207203: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207207: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207211u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207211: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207215: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020721Eu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020721E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207222: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207231u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207235: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207245u); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_00207245: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207249: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207252u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002071F0(); return; } /* je: equal / zero */

loc_00207256: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020725Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020725F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207265(); return; /* fallthrough 0x00207265 */

}

/**
 * sub_00207265
 * Original: 0x00207265 - 0x00207268 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207265(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207265: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00207268
 * Original: 0x00207268 - 0x00207286 (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207268(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207268: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00207277; /* jne: not equal / not zero */

loc_00207274: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00207277: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207282u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207282: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020728A(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207286(); return; /* fallthrough 0x00207286 */

}

/**
 * sub_00207286
 * Original: 0x00207286 - 0x0020728A (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207286: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002072FB(); return; /* tail jmp 0x002072FB */

}

/**
 * sub_0020728A
 * Original: 0x0020728A - 0x002072FB (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020728A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020728A: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207299u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207299: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_0020729D: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072A7u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002072A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_002072AB: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072B4u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002072B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_002072B8: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072C7u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002072C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_002072CB: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072DBu); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_002072DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_002072DF: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072E8u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002072E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207286(); return; } /* je: equal / zero */

loc_002072EC: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072F5u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002072F5: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_002072FB(); return; /* fallthrough 0x002072FB */

}

/**
 * sub_002072FB
 * Original: 0x002072FB - 0x002072FE (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002072FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002072FB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002072FE
 * Original: 0x002072FE - 0x0020731C (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002072FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002072FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020730D; /* jne: not equal / not zero */

loc_0020730A: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0020730D: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207318u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207320(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020731C(); return; /* fallthrough 0x0020731C */

}

/**
 * sub_0020731C
 * Original: 0x0020731C - 0x00207320 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020731C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020731C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207391(); return; /* tail jmp 0x00207391 */

}

/**
 * sub_00207320
 * Original: 0x00207320 - 0x00207391 (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207320: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020732Fu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020732F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_00207333: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020733Du); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_0020733D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_00207341: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020734Au); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020734A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_0020734E: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020735Du); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020735D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_00207361: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207371u); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_00207371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_00207375: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020737Eu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020737E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020731C(); return; } /* je: equal / zero */

loc_00207382: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020738Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020738B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207391(); return; /* fallthrough 0x00207391 */

}

/**
 * sub_00207391
 * Original: 0x00207391 - 0x00207394 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207391(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207391: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00207394
 * Original: 0x00207394 - 0x002073B9 (37 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207394(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207394: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002073A2; /* jne: not equal / not zero */

loc_0020739F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002073A2: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002073ADu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002073AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002073DD(); return; } /* je: equal / zero */

loc_002073B1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_002073C9(); return; /* tail jmp 0x002073C9 */

}

/**
 * sub_002073B9
 * Original: 0x002073B9 - 0x002073C9 (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073B9: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002073C3u); RECOMP_ABI_CALL(0x00207268u, sub_00207268); /* call 0x00207268 */

loc_002073C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002073E2(); return; } /* je: equal / zero */

loc_002073C7: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_002073C9(); return; /* fallthrough 0x002073C9 */

}

/**
 * sub_002073C9
 * Original: 0x002073C9 - 0x002073DD (20 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002073B9(); return; } /* jne: not equal / not zero */

loc_002073CD: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002073D6u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002073D6: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002073DD(); return; /* fallthrough 0x002073DD */

}

/**
 * sub_002073DC
 * Original: 0x002073DC - 0x002073DD (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073DC: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002073DD(); return; /* fallthrough 0x002073DD */

}

/**
 * sub_002073DD
 * Original: 0x002073DD - 0x002073E2 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073DD: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002073E2
 * Original: 0x002073E2 - 0x002073E6 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002073DC(); return; /* tail jmp 0x002073DC */

}

/**
 * sub_002073E6
 * Original: 0x002073E6 - 0x0020740B (37 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002073E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002073E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002073F4; /* jne: not equal / not zero */

loc_002073F1: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002073F4: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002073FFu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002073FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020742F(); return; } /* je: equal / zero */

loc_00207403: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_0020741B(); return; /* tail jmp 0x0020741B */

}

/**
 * sub_0020740B
 * Original: 0x0020740B - 0x0020741B (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020740B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020740B: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00207415u); RECOMP_ABI_CALL(0x002071D2u, sub_002071D2); /* call 0x002071D2 */

loc_00207415: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207434(); return; } /* je: equal / zero */

loc_00207419: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_0020741B(); return; /* fallthrough 0x0020741B */

}

/**
 * sub_0020741B
 * Original: 0x0020741B - 0x0020742F (20 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020741B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020741B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020740B(); return; } /* jne: not equal / not zero */

loc_0020741F: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207428u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207428: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020742F(); return; /* fallthrough 0x0020742F */

}

/**
 * sub_0020742E
 * Original: 0x0020742E - 0x0020742F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020742E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020742E: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020742F(); return; /* fallthrough 0x0020742F */

}

/**
 * sub_0020742F
 * Original: 0x0020742F - 0x00207434 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020742F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020742F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207434
 * Original: 0x00207434 - 0x00207438 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207434: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020742E(); return; /* tail jmp 0x0020742E */

}

/**
 * sub_00207438
 * Original: 0x00207438 - 0x00207459 (33 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207438: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0020744A; /* jne: not equal / not zero */

loc_00207447: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0020744A: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207455u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207455: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020745D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207459(); return; /* fallthrough 0x00207459 */

}

/**
 * sub_00207459
 * Original: 0x00207459 - 0x0020745D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207459(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207459: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002074A9(); return; /* tail jmp 0x002074A9 */

}

/**
 * sub_0020745D
 * Original: 0x0020745D - 0x002074A9 (76 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020745D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020745D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020746Cu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020746C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207459(); return; } /* je: equal / zero */

loc_00207470: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020747Au); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_0020747A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207459(); return; } /* je: equal / zero */

loc_0020747E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207487u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207487: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207459(); return; } /* je: equal / zero */

loc_0020748B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00207496u); RECOMP_ABI_CALL(0x00207156u, sub_00207156); /* call 0x00207156 */

loc_00207496: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207459(); return; } /* je: equal / zero */

loc_0020749A: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002074A3u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002074A3: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_002074A9(); return; /* fallthrough 0x002074A9 */

}

/**
 * sub_002074A9
 * Original: 0x002074A9 - 0x002074AD (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002074AD
 * Original: 0x002074AD - 0x002074D2 (37 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002074AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002074AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002074BB; /* jne: not equal / not zero */

loc_002074B8: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002074BB: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002074C6u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002074C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002074F6(); return; } /* je: equal / zero */

loc_002074CA: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_002074E2(); return; /* tail jmp 0x002074E2 */

}

/**
 * sub_002074D2
 * Original: 0x002074D2 - 0x002074E2 (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074D2: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002074DCu); RECOMP_ABI_CALL(0x002070C0u, sub_002070C0); /* call 0x002070C0 */

loc_002074DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002074FB(); return; } /* je: equal / zero */

loc_002074E0: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_002074E2(); return; /* fallthrough 0x002074E2 */

}

/**
 * sub_002074E2
 * Original: 0x002074E2 - 0x002074F6 (20 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002074D2(); return; } /* jne: not equal / not zero */

loc_002074E6: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002074EFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002074EF: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002074F6(); return; /* fallthrough 0x002074F6 */

}

/**
 * sub_002074F5
 * Original: 0x002074F5 - 0x002074F6 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074F5: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002074F6(); return; /* fallthrough 0x002074F6 */

}

/**
 * sub_002074F6
 * Original: 0x002074F6 - 0x002074FB (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074F6: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002074FB
 * Original: 0x002074FB - 0x002074FF (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002074FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002074F5(); return; /* tail jmp 0x002074F5 */

}

/**
 * sub_002074FF
 * Original: 0x002074FF - 0x0020751D (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002074FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002074FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020750E; /* jne: not equal / not zero */

loc_0020750B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0020750E: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207519u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207521(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020751D(); return; /* fallthrough 0x0020751D */

}

/**
 * sub_0020751D
 * Original: 0x0020751D - 0x00207521 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020751D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020751D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207592(); return; /* tail jmp 0x00207592 */

}

/**
 * sub_00207521
 * Original: 0x00207521 - 0x00207592 (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207521(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207521: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207530u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207530: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_00207534: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020753Eu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_0020753E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_00207542: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020754Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020754B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_0020754F: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020755Eu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020755E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_00207562: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207572u); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_00207572: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_00207576: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020757Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020757F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020751D(); return; } /* je: equal / zero */

loc_00207583: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020758Cu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020758C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207592(); return; /* fallthrough 0x00207592 */

}

/**
 * sub_00207592
 * Original: 0x00207592 - 0x00207595 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207592(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207592: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00207595
 * Original: 0x00207595 - 0x002075B5 (32 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207595(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207595: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002075A2; /* jne: not equal / not zero */

loc_0020759F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002075A2: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002075B1u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002075B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002075BC(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002075B5(); return; /* fallthrough 0x002075B5 */

}

/**
 * sub_002075B5
 * Original: 0x002075B5 - 0x002075BC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002075B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002075B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020766E(); return; /* tail jmp 0x0020766E */

}

/**
 * sub_002075BC
 * Original: 0x002075BC - 0x002075E2 (38 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002075BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002075BC: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002075CBu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002075CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075B5(); return; } /* je: equal / zero */

loc_002075CF: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002075DEu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002075DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E9(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002075E2(); return; /* fallthrough 0x002075E2 */

}

/**
 * sub_002075E2
 * Original: 0x002075E2 - 0x002075E9 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002075E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002075E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020766D(); return; /* tail jmp 0x0020766D */

}

/**
 * sub_002075E9
 * Original: 0x002075E9 - 0x0020766D (132 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002075E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002075E9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002075F2u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002075F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_002075F6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020762A; /* je: equal / zero */

loc_002075FB: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020760Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020760A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_0020760E: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207619u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207619: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_0020761D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207626u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207626: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_0020762A: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207639u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_0020763D: ;
    eax = MEM32(esi + 0x10);
    esi = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020764Du); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_0020764D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_00207651: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020765Au); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020765A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002075E2(); return; } /* je: equal / zero */

loc_0020765E: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207667u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207667: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_0020766D(); return; /* fallthrough 0x0020766D */

}

/**
 * sub_0020766D
 * Original: 0x0020766D - 0x0020766E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020766D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020766D: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020766E(); return; /* fallthrough 0x0020766E */

}

/**
 * sub_0020766E
 * Original: 0x0020766E - 0x00207673 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020766E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020766E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207673
 * Original: 0x00207673 - 0x00207691 (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207673(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207673: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00207682; /* jne: not equal / not zero */

loc_0020767F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00207682: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020768Du); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020768D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207695(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207691(); return; /* fallthrough 0x00207691 */

}

/**
 * sub_00207691
 * Original: 0x00207691 - 0x00207695 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207691(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207691: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207706(); return; /* tail jmp 0x00207706 */

}

/**
 * sub_00207695
 * Original: 0x00207695 - 0x00207706 (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207695: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076A4u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002076A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076A8: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076B2u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002076B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076B6: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076BFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002076BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076C3: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076D2u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002076D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076D6: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076E6u); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_002076E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076EA: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002076F3u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002076F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207691(); return; } /* je: equal / zero */

loc_002076F7: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207700u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207700: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207706(); return; /* fallthrough 0x00207706 */

}

/**
 * sub_00207706
 * Original: 0x00207706 - 0x00207709 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207706(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207706: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00207709
 * Original: 0x00207709 - 0x00207727 (30 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207709(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207709: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00207718; /* jne: not equal / not zero */

loc_00207715: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00207718: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207723u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020772B(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207727(); return; /* fallthrough 0x00207727 */

}

/**
 * sub_00207727
 * Original: 0x00207727 - 0x0020772B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207727(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020779C(); return; /* tail jmp 0x0020779C */

}

/**
 * sub_0020772B
 * Original: 0x0020772B - 0x0020779C (113 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020772B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020772B: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020773Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020773A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_0020773E: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207748u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_0020774C: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207755u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207755: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_00207759: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207768u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_0020776C: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020777Cu); RECOMP_ABI_CALL(0x0021B4F4u, sub_0021B4F4); /* call 0x0021B4F4 */

loc_0020777C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_00207780: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207789u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207727(); return; } /* je: equal / zero */

loc_0020778D: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207796u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207796: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_0020779C(); return; /* fallthrough 0x0020779C */

}

/**
 * sub_0020779C
 * Original: 0x0020779C - 0x0020779F (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020779C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020779C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020779F
 * Original: 0x0020779F - 0x00207844 (165 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020779F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020779F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002077AC; /* jne: not equal / not zero */

loc_002077A9: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_002077AC: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002077BBu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002077BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002077C3; /* jne: not equal / not zero */

loc_002077BF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020783F;

loc_002077C3: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002077D2u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002077D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002077BF; /* je: equal / zero */

loc_002077D6: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002077E6u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_002077E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002077EE; /* jne: not equal / not zero */

loc_002077EA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020783E;

loc_002077EE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002077F7u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002077F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002077EA; /* je: equal / zero */

loc_002077FB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020782F; /* je: equal / zero */

loc_00207800: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020780Fu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020780F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002077EA; /* je: equal / zero */

loc_00207813: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020781Eu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_0020781E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002077EA; /* je: equal / zero */

loc_00207822: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020782Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020782B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002077EA; /* je: equal / zero */

loc_0020782F: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207838u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207838: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0020783E: ;
    POP32(esp, esi);

loc_0020783F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207844
 * Original: 0x00207844 - 0x00207864 (32 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207844(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207844: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00207855; /* jne: not equal / not zero */

loc_00207850: ;
    eax = 0x80000003u;

loc_00207855: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207860u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207868(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207864(); return; /* fallthrough 0x00207864 */

}

/**
 * sub_00207864
 * Original: 0x00207864 - 0x00207868 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207864(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002078B1(); return; /* tail jmp 0x002078B1 */

}

/**
 * sub_00207868
 * Original: 0x00207868 - 0x00207880 (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207868(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207868: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207874u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207864(); return; } /* je: equal / zero */

loc_00207878: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_00207890(); return; /* tail jmp 0x00207890 */

}

/**
 * sub_00207880
 * Original: 0x00207880 - 0x00207890 (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207880: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020788Au); RECOMP_ABI_CALL(0x002074FFu, sub_002074FF); /* call 0x002074FF */

loc_0020788A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002078B6(); return; } /* je: equal / zero */

loc_0020788E: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_00207890(); return; /* fallthrough 0x00207890 */

}

/**
 * sub_00207890
 * Original: 0x00207890 - 0x002078B1 (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207890: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207880(); return; } /* jne: not equal / not zero */

loc_00207894: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020789Du); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020789D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002078B6(); return; } /* je: equal / zero */

loc_002078A1: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002078AAu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002078AA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002078B1(); return; /* fallthrough 0x002078B1 */

}

/**
 * sub_002078B0
 * Original: 0x002078B0 - 0x002078B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002078B0: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002078B1(); return; /* fallthrough 0x002078B1 */

}

/**
 * sub_002078B1
 * Original: 0x002078B1 - 0x002078B6 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002078B1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002078B6
 * Original: 0x002078B6 - 0x002078BA (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002078B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002078B0(); return; /* tail jmp 0x002078B0 */

}

/**
 * sub_002078BA
 * Original: 0x002078BA - 0x002078DD (35 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002078BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002078BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002078CA; /* jne: not equal / not zero */

loc_002078C5: ;
    eax = 0x40000001;

loc_002078CA: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002078D9u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002078D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002078E4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002078DD(); return; /* fallthrough 0x002078DD */

}

/**
 * sub_002078DD
 * Original: 0x002078DD - 0x002078E4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002078DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207A38(); return; /* tail jmp 0x00207A38 */

}

/**
 * sub_002078E4
 * Original: 0x002078E4 - 0x0020791A (54 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002078E4: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002078F0u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002078F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002078DD(); return; } /* je: equal / zero */

loc_002078F4: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207903u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207903: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002078DD(); return; } /* je: equal / zero */

loc_00207907: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207916u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207916: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207921(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020791A(); return; /* fallthrough 0x0020791A */

}

/**
 * sub_0020791A
 * Original: 0x0020791A - 0x00207921 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020791A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020791A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207A37(); return; /* tail jmp 0x00207A37 */

}

/**
 * sub_00207921
 * Original: 0x00207921 - 0x0020794C (43 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207921(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207921: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020792Au); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020792A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020791A(); return; } /* je: equal / zero */

loc_0020792E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00207937u); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00207937: ;
    ebx = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207948u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207953(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020794C(); return; /* fallthrough 0x0020794C */

}

/**
 * sub_0020794C
 * Original: 0x0020794C - 0x00207953 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020794C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020794C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00207A36(); return; /* tail jmp 0x00207A36 */

}

/**
 * sub_00207953
 * Original: 0x00207953 - 0x00207A36 (227 bytes, 81 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207953(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207953: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020795Fu); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_0020795F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207963: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020796Cu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020796C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207970: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020797Fu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020797F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207983: ;
    ecx = esi + 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x0020798Fu); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_0020798F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207993: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020799Cu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020799C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_002079A0: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002079AFu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002079AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_002079B3: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002079BFu); RECOMP_ABI_CALL(0x00207595u, sub_00207595); /* call 0x00207595 */

loc_002079BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_002079C3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002079CCu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002079CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_002079D4: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207A16; /* je: equal / zero */

loc_002079D9: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002079E8u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002079E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_002079F0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x002079FDu); RECOMP_ABI_CALL(0x002074ADu, sub_002074AD); /* call 0x002074AD */

loc_002079FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207A05: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207A0Eu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207A16: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207A1Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207A1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020794C(); return; } /* je: equal / zero */

loc_00207A27: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207A30u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207A30: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00207A36(); return; /* fallthrough 0x00207A36 */

}

/**
 * sub_00207A36
 * Original: 0x00207A36 - 0x00207A37 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207A36: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00207A37(); return; /* fallthrough 0x00207A37 */

}

/**
 * sub_00207A37
 * Original: 0x00207A37 - 0x00207A38 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207A37: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00207A38(); return; /* fallthrough 0x00207A38 */

}

/**
 * sub_00207A38
 * Original: 0x00207A38 - 0x00207A3D (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207A38: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207A3D
 * Original: 0x00207A3D - 0x00207CB9 (636 bytes, 222 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207A3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00207A3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207A4D; /* jne: not equal / not zero */

loc_00207A48: ;
    eax = 0x40000002;

loc_00207A4D: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207A5Cu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207A67; /* jne: not equal / not zero */

loc_00207A60: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207CB4;

loc_00207A67: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207A73u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207A73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207A60; /* je: equal / zero */

loc_00207A77: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207A86u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207A86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207A60; /* je: equal / zero */

loc_00207A8A: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207A99u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207A99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207AA4; /* jne: not equal / not zero */

loc_00207A9D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207CB3;

loc_00207AA4: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207AADu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207A9D; /* je: equal / zero */

loc_00207AB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207ABAu); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00207ABA: ;
    ebx = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207ACBu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207ACB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207AD6; /* jne: not equal / not zero */

loc_00207ACF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207CB2;

loc_00207AD6: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207AE2u); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_00207AE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207AE6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207AEFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207AF3: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B02u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B06: ;
    ecx = esi + 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B12u); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_00207B12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B16: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B1Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B23: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207B5A; /* je: equal / zero */

loc_00207B28: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B37u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207B37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B3B: ;
    ecx = esi + 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B45u); RECOMP_ABI_CALL(0x00207709u, sub_00207709); /* call 0x00207709 */

loc_00207B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B49: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B52u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B5A: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B69u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207B69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B71: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B7Cu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207B7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B84: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207B8Du); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207B95: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207BA4u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207BA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207BAC: ;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207BB8u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00207BB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207BC0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207BC9u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207BD1: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207C10; /* je: equal / zero */

loc_00207BD6: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000006u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207BE5u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207BE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207BED: ;
    ecx = esi + 0x34;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207BF7u); RECOMP_ABI_CALL(0x00207673u, sub_00207673); /* call 0x00207673 */

loc_00207BF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207BFF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C08u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207C08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C10: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207C50; /* je: equal / zero */

loc_00207C15: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C24u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207C24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C2C: ;
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C37u); RECOMP_ABI_CALL(0x0021B580u, sub_0021B580); /* call 0x0021B580 */

loc_00207C37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C3F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C48u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207C48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C50: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207C92; /* je: equal / zero */

loc_00207C55: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000008u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C64u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207C64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C6C: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x44)) >> 32) & 1);
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C79u); RECOMP_ABI_CALL(0x002073E6u, sub_002073E6); /* call 0x002073E6 */

loc_00207C79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C81: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C8Au); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207C8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207C92: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207C9Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207C9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ACF; /* je: equal / zero */

loc_00207CA3: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207CACu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207CAC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00207CB2: ;
    POP32(esp, ebx);

loc_00207CB3: ;
    POP32(esp, esi);

loc_00207CB4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207CB9
 * Original: 0x00207CB9 - 0x00207E2D (372 bytes, 139 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207CB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00207CB9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207CC9; /* jne: not equal / not zero */

loc_00207CC4: ;
    eax = 0x4000000E;

loc_00207CC9: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207CD8u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207CD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207CE3; /* jne: not equal / not zero */

loc_00207CDC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207E28;

loc_00207CE3: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207CEFu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207CEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207CDC; /* je: equal / zero */

loc_00207CF3: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D02u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207D02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207CDC; /* je: equal / zero */

loc_00207D06: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D14u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207D14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00207D1F; /* jne: not equal / not zero */

loc_00207D18: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207E27;

loc_00207D1F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D28u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207D28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D2C: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D3Bu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207D3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D3F: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D4Au); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00207D4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D4E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D57u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D5B: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D6Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207D6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D6E: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D7Eu); RECOMP_ABI_CALL(0x0021C0FDu, sub_0021C0FD); /* call 0x0021C0FD */

loc_00207D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D82: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D8Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207D8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207D8F: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207D9Eu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207D9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207DA6: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207DB2u); RECOMP_ABI_CALL(0x002078BAu, sub_002078BA); /* call 0x002078BA */

loc_00207DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207DBA: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207DC3u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207DC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207DCB: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207DDAu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207DE2: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3C)) >> 32) & 1);
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207DEEu); RECOMP_ABI_CALL(0x00207595u, sub_00207595); /* call 0x00207595 */

loc_00207DEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207DF6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207DFFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207DFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207E07: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207E10u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207E10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D18; /* je: equal / zero */

loc_00207E18: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207E21u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207E21: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00207E27: ;
    POP32(esp, esi);

loc_00207E28: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207E2D
 * Original: 0x00207E2D - 0x00207E4E (33 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207E2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207E2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00207E3F; /* jne: not equal / not zero */

loc_00207E3C: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00207E3F: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207E4Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207E4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207E55(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207E4E(); return; /* fallthrough 0x00207E4E */

}

/**
 * sub_00207E4E
 * Original: 0x00207E4E - 0x00207E55 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207E4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00208123(); return; /* tail jmp 0x00208123 */

}

/**
 * sub_00207E55
 * Original: 0x00207E55 - 0x00207EA6 (81 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207E55: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207E64u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207E64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207E4E(); return; } /* je: equal / zero */

loc_00207E68: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00207E72u); RECOMP_ABI_CALL(0x00207673u, sub_00207673); /* call 0x00207673 */

loc_00207E72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207E4E(); return; } /* je: equal / zero */

loc_00207E76: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207E7Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207E4E(); return; } /* je: equal / zero */

loc_00207E83: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00207ECA(); return; } /* je: equal / zero */

loc_00207E89: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00207E91u); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00207E91: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207EA2u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207EA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EAD(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00207EA6(); return; /* fallthrough 0x00207EA6 */

}

/**
 * sub_00207EA6
 * Original: 0x00207EA6 - 0x00207EAD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207EA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00208122(); return; /* tail jmp 0x00208122 */

}

/**
 * sub_00207EAD
 * Original: 0x00207EAD - 0x00207ECA (29 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207EAD: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207EB9u); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_00207EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207EBD: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207EC6u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207EC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00207ECA(); return; /* fallthrough 0x00207ECA */

}

/**
 * sub_00207ECA
 * Original: 0x00207ECA - 0x00208122 (600 bytes, 200 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207ECA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207ECA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207EFF; /* je: equal / zero */

loc_00207ECF: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207EDEu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207EDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207EE2: ;
    ecx = esi + 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x00207EEEu); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_00207EEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207EF2: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207EFBu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207EFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207EFF: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207F40; /* je: equal / zero */

loc_00207F04: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F13u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207F13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F17: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F27u); RECOMP_ABI_CALL(0x0021C0FDu, sub_0021C0FD); /* call 0x0021C0FD */

loc_00207F27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F2F: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F38u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207F38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F40: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x18);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00207F83; /* je: equal / zero */

loc_00207F48: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F57u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207F57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F5F: ;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F6Au); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00207F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F72: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F7Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207F7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F83: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00207FC3; /* je: equal / zero */

loc_00207F88: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207F97u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207F97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207F9F: ;
    eax = esi + 0x32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207FAAu); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00207FAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207FB2: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207FBBu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207FBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207FC3: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208003; /* je: equal / zero */

loc_00207FC8: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000006u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207FD7u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00207FD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207FDF: ;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207FEAu); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00207FEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00207FF2: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207FFBu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00207FFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208003: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208043; /* je: equal / zero */

loc_00208008: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208017u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208017: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_0020801F: ;
    eax = esi + 0x4E;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020802Au); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_0020802A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208032: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020803Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020803B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208043: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020808E; /* je: equal / zero */

loc_00208048: ;
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, 0x00208050u); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00208050: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000008u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208061u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208061: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208069: ;
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208075u); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_00208075: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_0020807D: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208086u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208086: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_0020808E: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002080D0; /* je: equal / zero */

loc_00208094: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000009u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002080A3u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002080A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_002080AB: ;
    ecx = esi + 0x60;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x002080B7u); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_002080B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_002080BF: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002080C8u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002080C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_002080D0: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208113; /* je: equal / zero */

loc_002080D6: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000000Au);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002080E5u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002080E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_002080ED: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x68)) >> 32) & 1);
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x002080FAu); RECOMP_ABI_CALL(0x00207394u, sub_00207394); /* call 0x00207394 */

loc_002080FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208102: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020810Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020810B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00207EA6(); return; } /* je: equal / zero */

loc_00208113: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020811Cu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020811C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00208122(); return; /* fallthrough 0x00208122 */

}

/**
 * sub_00208122
 * Original: 0x00208122 - 0x00208123 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208122(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208122: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00208123(); return; /* fallthrough 0x00208123 */

}

/**
 * sub_00208123
 * Original: 0x00208123 - 0x00208127 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208123(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208123: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00208127
 * Original: 0x00208127 - 0x0020817F (88 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208127(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00208127: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00208134; /* jne: not equal / not zero */

loc_00208131: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00208134: ;
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208141u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208177; /* je: equal / zero */

loc_00208145: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    goto loc_00208161;

loc_0020814D: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020815Bu); RECOMP_ABI_CALL(0x002078BAu, sub_002078BA); /* call 0x002078BA */

loc_0020815B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020817B; /* je: equal / zero */

loc_0020815F: ;
    esi = MEM32(esi);

loc_00208161: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020814D; /* jne: not equal / not zero */

loc_00208165: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208170u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208170: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00208176: ;
    POP32(esp, esi);

loc_00208177: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0020817B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208176;

}

/**
 * sub_0020817F
 * Original: 0x0020817F - 0x0020819C (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020817F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020817F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020818D; /* jne: not equal / not zero */

loc_00208188: ;
    eax = 0x80000000u;

loc_0020818D: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208198u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002081A0(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020819C(); return; /* fallthrough 0x0020819C */

}

/**
 * sub_0020819C
 * Original: 0x0020819C - 0x002081A0 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020819C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020819C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002081EB(); return; /* tail jmp 0x002081EB */

}

/**
 * sub_002081A0
 * Original: 0x002081A0 - 0x002081B8 (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081A0: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002081ACu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002081AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020819C(); return; } /* je: equal / zero */

loc_002081B0: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_002081CA(); return; /* tail jmp 0x002081CA */

}

/**
 * sub_002081B8
 * Original: 0x002081B8 - 0x002081CA (18 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081B8: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x002081C4u); RECOMP_ABI_CALL(0x00207E2Du, sub_00207E2D); /* call 0x00207E2D */

loc_002081C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002081EF(); return; } /* je: equal / zero */

loc_002081C8: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_002081CA(); return; /* fallthrough 0x002081CA */

}

/**
 * sub_002081CA
 * Original: 0x002081CA - 0x002081EB (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002081B8(); return; } /* jne: not equal / not zero */

loc_002081CE: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002081D7u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002081D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002081EF(); return; } /* je: equal / zero */

loc_002081DB: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002081E4u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002081E4: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002081EB(); return; /* fallthrough 0x002081EB */

}

/**
 * sub_002081EA
 * Original: 0x002081EA - 0x002081EB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081EA: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002081EB(); return; /* fallthrough 0x002081EB */

}

/**
 * sub_002081EB
 * Original: 0x002081EB - 0x002081EF (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081EB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002081EF
 * Original: 0x002081EF - 0x002081F3 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002081EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002081EA(); return; /* tail jmp 0x002081EA */

}

/**
 * sub_002081F3
 * Original: 0x002081F3 - 0x00208210 (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002081F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002081F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208201; /* jne: not equal / not zero */

loc_002081FC: ;
    eax = 0x80000002u;

loc_00208201: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020820Cu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020820C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00208214(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00208210(); return; /* fallthrough 0x00208210 */

}

/**
 * sub_00208210
 * Original: 0x00208210 - 0x00208214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208210: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020825F(); return; /* tail jmp 0x0020825F */

}

/**
 * sub_00208214
 * Original: 0x00208214 - 0x0020822C (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208214(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208214: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208220u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208220: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208210(); return; } /* je: equal / zero */

loc_00208224: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_0020823E(); return; /* tail jmp 0x0020823E */

}

/**
 * sub_0020822C
 * Original: 0x0020822C - 0x0020823E (18 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020822C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020822C: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208238u); RECOMP_ABI_CALL(0x002078BAu, sub_002078BA); /* call 0x002078BA */

loc_00208238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208263(); return; } /* je: equal / zero */

loc_0020823C: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_0020823E(); return; /* fallthrough 0x0020823E */

}

/**
 * sub_0020823E
 * Original: 0x0020823E - 0x0020825F (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020823E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020823E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020822C(); return; } /* jne: not equal / not zero */

loc_00208242: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020824Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020824B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208263(); return; } /* je: equal / zero */

loc_0020824F: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208258u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208258: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020825F(); return; /* fallthrough 0x0020825F */

}

/**
 * sub_0020825E
 * Original: 0x0020825E - 0x0020825F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020825E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020825E: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020825F(); return; /* fallthrough 0x0020825F */

}

/**
 * sub_0020825F
 * Original: 0x0020825F - 0x00208263 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020825F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020825F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208263
 * Original: 0x00208263 - 0x00208267 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208263: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020825E(); return; /* tail jmp 0x0020825E */

}

/**
 * sub_00208267
 * Original: 0x00208267 - 0x00208284 (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208267(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208267: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208275; /* jne: not equal / not zero */

loc_00208270: ;
    eax = 0x8000000Bu;

loc_00208275: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208280u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00208288(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00208284(); return; /* fallthrough 0x00208284 */

}

/**
 * sub_00208284
 * Original: 0x00208284 - 0x00208288 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208284(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208284: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002082D3(); return; /* tail jmp 0x002082D3 */

}

/**
 * sub_00208288
 * Original: 0x00208288 - 0x002082A0 (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208288(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208288: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208294u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208294: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208284(); return; } /* je: equal / zero */

loc_00208298: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_002082B2(); return; /* tail jmp 0x002082B2 */

}

/**
 * sub_002082A0
 * Original: 0x002082A0 - 0x002082B2 (18 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002082A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002082A0: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002082ACu); RECOMP_ABI_CALL(0x002078BAu, sub_002078BA); /* call 0x002078BA */

loc_002082AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002082D7(); return; } /* je: equal / zero */

loc_002082B0: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_002082B2(); return; /* fallthrough 0x002082B2 */

}

/**
 * sub_002082B2
 * Original: 0x002082B2 - 0x002082D3 (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002082B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002082B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002082A0(); return; } /* jne: not equal / not zero */

loc_002082B6: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002082BFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002082BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002082D7(); return; } /* je: equal / zero */

loc_002082C3: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002082CCu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002082CC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002082D3(); return; /* fallthrough 0x002082D3 */

}

/**
 * sub_002082D2
 * Original: 0x002082D2 - 0x002082D3 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002082D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002082D2: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002082D3(); return; /* fallthrough 0x002082D3 */

}

/**
 * sub_002082D3
 * Original: 0x002082D3 - 0x002082D7 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002082D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002082D3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002082D7
 * Original: 0x002082D7 - 0x002082DB (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002082D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002082D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002082D2(); return; /* tail jmp 0x002082D2 */

}

/**
 * sub_002082DB
 * Original: 0x002082DB - 0x0020847C (417 bytes, 149 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002082DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002082DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002082EB; /* jne: not equal / not zero */

loc_002082E6: ;
    eax = 0x4000001D;

loc_002082EB: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002082FAu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002082FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00208305; /* jne: not equal / not zero */

loc_002082FE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208477;

loc_00208305: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208311u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208311: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002082FE; /* je: equal / zero */

loc_00208315: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208324u); RECOMP_ABI_CALL(0x0020817Fu, sub_0020817F); /* call 0x0020817F */

loc_00208324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020832F; /* jne: not equal / not zero */

loc_00208328: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208476;

loc_0020832F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208363; /* je: equal / zero */

loc_00208334: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208343u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208343: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208347: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208352u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00208352: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208356: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020835Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020835F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208363: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208398; /* je: equal / zero */

loc_00208368: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208377u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_0020837B: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208387u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00208387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_0020838B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208394u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208394: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208398: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002083D8; /* je: equal / zero */

loc_0020839D: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002083ACu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002083AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_002083B4: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002083BFu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002083BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_002083C7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002083D0u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002083D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_002083D8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208417; /* je: equal / zero */

loc_002083DD: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002083ECu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002083EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_002083F4: ;
    ecx = esi + 0x20;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002083FEu); RECOMP_ABI_CALL(0x002072FEu, sub_002072FE); /* call 0x002072FE */

loc_002083FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208406: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020840Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020840F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208417: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208456; /* je: equal / zero */

loc_0020841C: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020842Bu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020842B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208433: ;
    ecx = esi + 0x2C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020843Du); RECOMP_ABI_CALL(0x002072FEu, sub_002072FE); /* call 0x002072FE */

loc_0020843D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208445: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020844Eu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020844E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208456: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020845Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020845F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00208328; /* je: equal / zero */

loc_00208467: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208470u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208470: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00208476: ;
    POP32(esp, esi);

loc_00208477: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020847C
 * Original: 0x0020847C - 0x0020849D (33 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020847C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020847C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0020848E; /* jne: not equal / not zero */

loc_0020848B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0020848E: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208499u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002084A4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020849D(); return; /* fallthrough 0x0020849D */

}

/**
 * sub_0020849D
 * Original: 0x0020849D - 0x002084A4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020849D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020849D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00208737(); return; /* tail jmp 0x00208737 */

}

/**
 * sub_002084A4
 * Original: 0x002084A4 - 0x0020852B (135 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002084A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002084A4: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002084B3u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002084B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_002084B7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002084C7u); RECOMP_ABI_CALL(0x0021C0FDu, sub_0021C0FD); /* call 0x0021C0FD */

loc_002084C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_002084CB: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002084D4u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002084D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_002084D8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020850D; /* je: equal / zero */

loc_002084DD: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002084ECu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002084EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_002084F0: ;
    ecx = esi + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x002084FCu); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_002084FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_00208500: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208509u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208509: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020849D(); return; } /* je: equal / zero */

loc_0020850D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x00208516u); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_00208516: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208527u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00208532(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020852B(); return; /* fallthrough 0x0020852B */

}

/**
 * sub_0020852B
 * Original: 0x0020852B - 0x00208532 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020852B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020852B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00208736(); return; /* tail jmp 0x00208736 */

}

/**
 * sub_00208532
 * Original: 0x00208532 - 0x00208736 (516 bytes, 173 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208532(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208532: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020853Eu); RECOMP_ABI_CALL(0x0021BD31u, sub_0021BD31); /* call 0x0021BD31 */

loc_0020853E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208542: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020854Bu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020854B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020854F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208584; /* je: equal / zero */

loc_00208554: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208563u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208563: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208567: ;
    ecx = esi + 0x18;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x00208573u); RECOMP_ABI_CALL(0x00207438u, sub_00207438); /* call 0x00207438 */

loc_00208573: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208577: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208580u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208584: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002085C1; /* je: equal / zero */

loc_00208589: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208598u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208598: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020859C: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085A8u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_002085A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002085B0: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085B9u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002085B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002085C1: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085D0u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002085D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002085D8: ;
    eax = esi + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085E4u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_002085E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002085EC: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085F5u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002085F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002085FD: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020863E; /* je: equal / zero */

loc_00208602: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000006u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208611u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208619: ;
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208625u); RECOMP_ABI_CALL(0x0021C2BFu, sub_0021C2BF); /* call 0x0021C2BF */

loc_00208625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020862D: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208636u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020863E: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020864Du); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020864D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208655: ;
    PUSH32(esp, MEM32(esi + 0x4C));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208660u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00208660: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208668: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208671u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208671: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208679: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00208684u); RECOMP_ABI_CALL(0x00205586u, sub_00205586); /* call 0x00205586 */

loc_00208684: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020868C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002086CE; /* je: equal / zero */

loc_00208691: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000009u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002086A0u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002086A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002086A8: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x002086B5u); RECOMP_ABI_CALL(0x00207394u, sub_00207394); /* call 0x00207394 */

loc_002086B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002086BD: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002086C6u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002086C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002086CE: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020870F; /* je: equal / zero */

loc_002086D3: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000000Au);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002086E2u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002086E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002086EA: ;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002086F6u); RECOMP_ABI_CALL(0x00207595u, sub_00207595); /* call 0x00207595 */

loc_002086F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_002086FE: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208707u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_0020870F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00208727; /* je: equal / zero */

loc_00208714: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x6C)) >> 32) & 1);
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020871Fu); RECOMP_ABI_CALL(0x00208267u, sub_00208267); /* call 0x00208267 */

loc_0020871F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020852B(); return; } /* je: equal / zero */

loc_00208727: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208730u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208730: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_00208736(); return; /* fallthrough 0x00208736 */

}

/**
 * sub_00208736
 * Original: 0x00208736 - 0x00208737 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208736(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208736: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00208737(); return; /* fallthrough 0x00208737 */

}

/**
 * sub_00208737
 * Original: 0x00208737 - 0x0020873B (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208737: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020873B
 * Original: 0x0020873B - 0x00208846 (267 bytes, 105 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020873B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020873B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020874B; /* jne: not equal / not zero */

loc_00208746: ;
    eax = 0x40000016;

loc_0020874B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020875Au); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020875A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00208765; /* jne: not equal / not zero */

loc_0020875E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208841;

loc_00208765: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208771u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020875E; /* je: equal / zero */

loc_00208775: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208784u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020875E; /* je: equal / zero */

loc_00208788: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208796u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00208796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002087A1; /* jne: not equal / not zero */

loc_0020879A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208840;

loc_002087A1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087AAu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002087AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087AE: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087BDu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002087BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087C1: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087CCu); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002087CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087D0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087D9u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002087D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087DD: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087E8u); RECOMP_ABI_CALL(0x002081F3u, sub_002081F3); /* call 0x002081F3 */

loc_002087E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087EC: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002087FBu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002087FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_002087FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020880Bu); RECOMP_ABI_CALL(0x00207595u, sub_00207595); /* call 0x00207595 */

loc_0020880B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_0020880F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208818u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208818: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_00208820: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208829u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879A; /* je: equal / zero */

loc_00208831: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020883Au); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020883A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00208840: ;
    POP32(esp, esi);

loc_00208841: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208846
 * Original: 0x00208846 - 0x00208861 (27 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208846(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208846: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208852; /* jne: not equal / not zero */

loc_0020884F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00208852: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020885Du); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020885D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00208865(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00208861(); return; /* fallthrough 0x00208861 */

}

/**
 * sub_00208861
 * Original: 0x00208861 - 0x00208865 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208861(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208861: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00208865
 * Original: 0x00208865 - 0x00208926 (193 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208865(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208865: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208874u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_00208874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_00208878: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208883u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_00208883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_00208887: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208890u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_00208890: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_00208894: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002088A3u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002088A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_002088A7: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002088B2u); RECOMP_ABI_CALL(0x0021C2EFu, sub_0021C2EF); /* call 0x0021C2EF */

loc_002088B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_002088B6: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002088BFu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002088BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_002088C3: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002088D9; /* je: equal / zero */

loc_002088C8: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x002088D5u); RECOMP_ABI_CALL(0x00207844u, sub_00207844); /* call 0x00207844 */

loc_002088D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_002088D9: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002088E8u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002088E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_002088F0: ;
    ecx = esi + 0x10;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    PUSH32(esp, 0x002088FCu); RECOMP_ABI_CALL(0x0020847Cu, sub_0020847C); /* call 0x0020847C */

loc_002088FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_00208904: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020890Du); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020890D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208861(); return; } /* je: equal / zero */

loc_00208915: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020891Eu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020891E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00208940
 * Original: 0x00208940 - 0x0020898A (74 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00208940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020894F; /* jne: not equal / not zero */

loc_0020894A: ;
    eax = 0x4000000A;

loc_0020894F: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020895Eu); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_0020895E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00208966; /* jne: not equal / not zero */

loc_00208962: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208985;

loc_00208966: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208971u); RECOMP_ABI_CALL(0x00208846u, sub_00208846); /* call 0x00208846 */

loc_00208971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00208962; /* je: equal / zero */

loc_00208976: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020897Fu); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_0020897F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00208985: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020898A
 * Original: 0x0020898A - 0x002089D4 (74 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020898A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020898A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00208999; /* jne: not equal / not zero */

loc_00208994: ;
    eax = 0x4000000C;

loc_00208999: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002089A8u); RECOMP_ABI_CALL(0x0021B9B0u, sub_0021B9B0); /* call 0x0021B9B0 */

loc_002089A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002089B0; /* jne: not equal / not zero */

loc_002089AC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002089CF;

loc_002089B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002089BBu); RECOMP_ABI_CALL(0x00208846u, sub_00208846); /* call 0x00208846 */

loc_002089BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002089AC; /* je: equal / zero */

loc_002089C0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002089C9u); RECOMP_ABI_CALL(0x0021BA07u, sub_0021BA07); /* call 0x0021BA07 */

loc_002089C9: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002089CF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208A34
 * Original: 0x00208A34 - 0x00208A46 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208A34(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208A34: ;
    PUSH32(esp, edi);
    edx = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x824;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208A46
 * Original: 0x00208A46 - 0x00208A70 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00208A46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208A46: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x834);
    eax = ecx + 0x82C;
    edx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_00208A6D; /* jb: below (unsigned <) */

loc_00208A5D: ;
    MEM32(ecx + 0x830) = MEM32(ecx + 0x830) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x830)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00208A6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00208C35
 * Original: 0x00208C35 - 0x00208C7D (72 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208C35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208C35: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208C64u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_00208C64: ;
    PUSH32(esp, 3);
    edi = esi + 0x1F4;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -20;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208CC7
 * Original: 0x00208CC7 - 0x00208CE3 (28 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208CC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208CC7: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208CD9; /* je: equal / zero */

loc_00208CD2: ;
    eax = 0x80004005u;
    goto loc_00208CE0;

loc_00208CD9: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = edx;

loc_00208CE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208CE3
 * Original: 0x00208CE3 - 0x00208CF0 (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208CE3(void)
{

loc_00208CE3: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x8C4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208D06
 * Original: 0x00208D06 - 0x00208D31 (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208D06(void)
{

loc_00208D06: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208D31
 * Original: 0x00208D31 - 0x00208D60 (47 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208D31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208D31: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208D5D; /* je: equal / zero */

loc_00208D3B: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_00208D5D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208D60
 * Original: 0x00208D60 - 0x00208D90 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208D60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + esi;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xC);
    edx = 0x1F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00208D89; /* jb: below (unsigned <) */

loc_00208D74: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);

loc_00208D78: ;
    _fb = (uint32_t)(0xFFFFFE0Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFE0Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00208D78; /* jae: above or equal (unsigned >=) */

loc_00208D82: ;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);

loc_00208D89: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) - esi;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208D90
 * Original: 0x00208D90 - 0x00208DAF (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208D90: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00208DA6; /* jbe: below or equal (unsigned <=) */

loc_00208D9B: ;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x14) = eax;

loc_00208DA6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) - edx;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) - edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208DBA
 * Original: 0x00208DBA - 0x00208DE5 (43 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208DBA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208DBA: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + edx + 1;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208DE5
 * Original: 0x00208DE5 - 0x00208E13 (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208DE5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208DE5: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x14) = 0x1F3;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208E13
 * Original: 0x00208E13 - 0x00208E43 (48 bytes, 18 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208E13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00208E43
 * Original: 0x00208E43 - 0x00208E71 (46 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208E43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208E5Cu); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_00208E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208E6D; /* jl: less (signed <) */

loc_00208E60: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208E6D; /* je: equal / zero */

loc_00208E68: ;
    eax = 0x80004005u;

loc_00208E6D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208E71
 * Original: 0x00208E71 - 0x00208E81 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208E71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E71: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208E80; /* je: equal / zero */

loc_00208E7C: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00208E80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00208E81
 * Original: 0x00208E81 - 0x00208ECA (73 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208E81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E81: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EC8; /* je: equal / zero */

loc_00208E8B: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EC8; /* je: equal / zero */

loc_00208E91: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EC0; /* je: equal / zero */

loc_00208E99: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208EA6; /* jl: less (signed <) */

loc_00208EA1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208EAC; /* jle: less or equal (signed <=) */

loc_00208EA6: ;
    edi = MEM32(eax + 0x898);

loc_00208EAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EC0; /* je: equal / zero */

loc_00208EB0: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208EB9u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00208EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00208EB0; /* je: equal / zero */

loc_00208EC0: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

loc_00208EC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208ECF
 * Original: 0x00208ECF - 0x00208EFE (47 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208ECF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208ECF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EE0; /* je: equal / zero */

loc_00208EDA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208EE0u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00208EE0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208F06(); return; } /* je: equal / zero */

loc_00208EE7: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C0), 0 (32-bit) */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208EFE(); return; } /* je: equal / zero */

loc_00208EF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208EFCu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_00208EFC: ;
    g_seh_ebp = ebp; sub_00208F06(); return; /* tail jmp 0x00208F06 */

}

/**
 * sub_00208EFE
 * Original: 0x00208EFE - 0x00208F06 (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208EFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208EFE: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208F06u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_00208F06(); return; /* fallthrough 0x00208F06 */

}

/**
 * sub_00208F06
 * Original: 0x00208F06 - 0x00208F2D (39 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208F06: ;
    ecx = MEM32(esi + 0x8BC);
    eax = MEM32(esi);
    MEM32(ecx + eax * 4 + 0x1870) = MEM32(ecx + eax * 4 + 0x1870) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x1870)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x8C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C0), 0 (32-bit) */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00208F2D(); return; } /* je: equal / zero */

loc_00208F25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208F2Bu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_00208F2B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208F2D
 * Original: 0x00208F2D - 0x00208F3A (13 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F2D(void)
{

loc_00208F2D: ;
    PUSH32(esp, 0x8012);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208F38u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00208F38: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208F3A
 * Original: 0x00208F3A - 0x00208FB2 (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208F3A: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00208FB2(); return; } /* jae: above or equal (unsigned >=) */

loc_00208F46: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xAA7748));
    eax = ZX16(MEM16(eax + 0xAA7744));
    PUSH32(esp, edi);
    edi = esi + eax;
    esi = edi + 6;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1F4;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi + esi + 5;
    MEM32(ecx + 0x82C) = eax;
    eax = edi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x838) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00208FB4(); return; /* tail jmp 0x00208FB4 */

}

/**
 * sub_00208FB2
 * Original: 0x00208FB2 - 0x00208FB4 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00208FB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208FB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00208FB4(); return; /* fallthrough 0x00208FB4 */

}

/**
 * sub_00208FB4
 * Original: 0x00208FB4 - 0x00208FB7 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208FB4(void)
{

loc_00208FB4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208FB7
 * Original: 0x00208FB7 - 0x00209022 (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208FB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020906A(); return; } /* jae: above or equal (unsigned >=) */

loc_00208FCB: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax * 2 + 0xAA7744));
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEM32(ebp + -8) = edx;
    edi = 0x1F4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    MEM32(ebp + -4) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00209012; /* jbe: below or equal (unsigned <=) */

loc_00208FFD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ebx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    ebx = edi;
    if (CMP_A(_fa, _fb)) goto loc_00208FFD; /* ja: above (unsigned >) */

loc_00209012: ;
    eax = MEM32(ebp + -8);
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00209022(); return; } /* jb: below (unsigned <) */

loc_0020901D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00209025(); return; /* tail jmp 0x00209025 */

}

/**
 * sub_00209022
 * Original: 0x00209022 - 0x00209025 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209022(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209022: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ebx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00209025(); return; /* fallthrough 0x00209025 */

}

/**
 * sub_00209025
 * Original: 0x00209025 - 0x0020906A (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209025(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209025: ;
    eax = MEM32(ebp + -4);
    esi = eax + esi + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    MEM32(ecx + 0x82C) = eax;
    eax = esi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x828) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x838) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0020906C(); return; /* tail jmp 0x0020906C */

}

/**
 * sub_0020906A
 * Original: 0x0020906A - 0x00209071 (7 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020906A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020906A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020906C
 * Original: 0x0020906C - 0x00209071 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020906C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020906C: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209071
 * Original: 0x00209071 - 0x0020911E (173 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209071(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209071: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x844);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020911E(); return; } /* jae: above or equal (unsigned >=) */

loc_00209089: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 2;
    ebx = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    esi = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002090B6; /* je: equal / zero */

loc_002090AD: ;
    ebx = eax + 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1F4);

loc_002090B6: ;
    esi = MEM32(ebp + -4);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    ebx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002090D7; /* je: equal / zero */

loc_002090CE: ;
    edi = eax + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1F4);

loc_002090D7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1F4;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi + esi + -1;
    MEM32(ecx + 0x82C) = eax;
    eax = edi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x838) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020911E
 * Original: 0x0020911E - 0x00209122 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020911E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020911E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00209122
 * Original: 0x00209122 - 0x0020917C (90 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209122(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209122: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00209178; /* ja: above (unsigned >) */

loc_00209130: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = eax;

loc_00209143: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020915Eu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_0020915E: ;
    edi = ebx + 0x1F4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if ((_fa != 0)) goto loc_00209143; /* jne: not equal / not zero */

loc_00209175: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00209178: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020917C
 * Original: 0x0020917C - 0x00209192 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020917C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020917C: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020918F; /* je: equal / zero */

loc_0020918E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020918F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209192
 * Original: 0x00209192 - 0x00209228 (150 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209192(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209192: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    esi = esi + esi * 4;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX16(MEM16(esi + 0xAA7744));
    edx = eax + 5;
    MEM32(ebp + -4) = edx;
    edx = ZX16(MEM16(esi + 0xAA7748));
    eax = edx + eax + 6;
    edx = ZX16(MEM16(esi + 0xAA7742));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ebx = 0x1F4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(ebp + -12) = eax;
    MEM32(ecx + 0x18) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002091E9; /* jae: above or equal (unsigned >=) */

loc_002091DF: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edi = ebx;

loc_002091E9: ;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x1C) = edx;
    eax = ZX16(MEM16(esi + 0xAA7740));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00209220; /* jbe: below or equal (unsigned <=) */

loc_00209201: ;
    MEM32(ebp + -12) = edx;

loc_00209204: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + edi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    edi = ebx;
    if (CMP_A(_fa, _fb)) goto loc_00209204; /* ja: above (unsigned >) */

loc_0020921A: ;
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x1C) = eax;

loc_00209220: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + edi;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00209228
 * Original: 0x00209228 - 0x00209271 (73 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209228(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209228: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x824) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x824;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020923Bu); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_0020923B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00209255; /* jb: below (unsigned <) */

loc_00209248: ;
    ecx = eax + 3;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = 0x1F3;

loc_00209255: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1F4);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax + 1;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209271
 * Original: 0x00209271 - 0x002092CA (89 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi = esi << 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    ebx = 0x1F4;
    edi = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002092B4; /* jae: above or equal (unsigned >=) */

loc_00209296: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002092A0u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_002092A0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edi;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    esi = esi + edi + 0xC;
    edi = ebx;
    if (CMP_A(_fa, _fb)) goto loc_00209296; /* ja: above (unsigned >) */

loc_002092B4: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002092C0u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_002092C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002092CA
 * Original: 0x002092CA - 0x00209340 (118 bytes, 50 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002092CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002092CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x1F4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0020931F; /* jae: above or equal (unsigned >=) */

loc_002092F2: ;
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + edx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = ebx;
    ebx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + edx + 0xC;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0x1F4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
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
    MEM32(ebp + 0xC) = ebx;
    if (CMP_A(_fa, _fb)) goto loc_002092F2; /* ja: above (unsigned >) */

loc_0020931F: ;
    edx = MEM32(ebp + 8);
    ecx = ebx;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    ecx = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx + edx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00209340
 * Original: 0x00209340 - 0x0020936D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209340: ;
    eax = MEM32(ecx + 0x834);
    ecx = MEM32(ecx + 0x82C);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00209379(); return; } /* jb: below (unsigned <) */

loc_00209355: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020936D(); return; } /* je: equal / zero */

loc_0020935C: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 0xC);
    edx = edx >> 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0020937C(); return; /* tail jmp 0x0020937C */

}

/**
 * sub_0020936D
 * Original: 0x0020936D - 0x00209379 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020936D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020936D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0020937C(); return; /* tail jmp 0x0020937C */

}

/**
 * sub_00209379
 * Original: 0x00209379 - 0x0020937C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209379(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209379: ;
    eax = edx + 1;

    g_seh_ebp = ebp; sub_0020937C(); return; /* fallthrough 0x0020937C */

}

/**
 * sub_0020937C
 * Original: 0x0020937C - 0x00209382 (6 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020937C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020937C: ;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209382
 * Original: 0x00209382 - 0x0020945D (219 bytes, 80 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209382: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020939Cu); RECOMP_ABI_CALL(0x00208D06u, sub_00208D06); /* call 0x00208D06 */

loc_0020939C: ;
    eax = MEM32(esi + 0x834);
    _fb = (uint32_t)(MEM32(esi + 0x82C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ebx = MEM32(edi + 0x10);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020945D(); return; } /* jb: below (unsigned <) */

loc_002093BB: ;
    eax = MEM32(edi + 0xC);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002093CAu); RECOMP_ABI_CALL(0x00208DE5u, sub_00208DE5); /* call 0x00208DE5 */

loc_002093CA: ;
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002093DCu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_002093DC: ;
    PUSH32(esp, 1);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002093E6u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_002093E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -28));
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002093F6u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_002093F6: ;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209408u); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_00209408: ;
    eax = MEM32(edi + 0xC);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209417u); RECOMP_ABI_CALL(0x00208DBAu, sub_00208DBA); /* call 0x00208DBA */

loc_00209417: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    ecx = esi + 0x24;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209440u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209440: ;
    eax = MEM32(ebp + -28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020944Du); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_0020944D: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_002094B1(); return; /* tail jmp 0x002094B1 */

}

/**
 * sub_0020945D
 * Original: 0x0020945D - 0x002094B1 (84 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020945D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020945D: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) - eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020947Cu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_0020947C: ;
    PUSH32(esp, 1);
    ecx = ebp + -32;
    PUSH32(esp, 0x00209486u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_00209486: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    ebx = esi + 0x24;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00209499u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209499: ;
    eax = MEM32(ebp + -28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0x002094A6u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_002094A6: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_002094B1(); return; /* fallthrough 0x002094B1 */

}

/**
 * sub_002094B1
 * Original: 0x002094B1 - 0x002094DC (43 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002094B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002094B1: ;
    ecx = esi;
    PUSH32(esp, 0x002094B8u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_002094B8: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002094C8; /* jne: not equal / not zero */

loc_002094C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x83C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x83C) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002094D2; /* je: equal / zero */

loc_002094C8: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = 0x80004005u;

loc_002094D2: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002094DC
 * Original: 0x002094DC - 0x0020952A (78 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002094DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002094DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002094F6u); RECOMP_ABI_CALL(0x00208D06u, sub_00208D06); /* call 0x00208D06 */

loc_002094F6: ;
    eax = MEM32(esi + 0x834);
    _fb = (uint32_t)(MEM32(esi + 0x82C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    edi = esi + 0x24;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00209531(); return; } /* jb: below (unsigned <) */

loc_0020950D: ;
    eax = MEM32(ebx + 0xC);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ecx = ebp + -44;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020952A(); return; } /* jne: not equal / not zero */

loc_0020951D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209522u); RECOMP_ABI_CALL(0x00208DE5u, sub_00208DE5); /* call 0x00208DE5 */

loc_00209522: ;
    edi = MEM32(ebx + 0x10);
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_00209539(); return; /* tail jmp 0x00209539 */

}

/**
 * sub_00209525
 * Original: 0x00209525 - 0x0020952A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209525(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209525: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_00209539(); return; /* tail jmp 0x00209539 */

}

/**
 * sub_0020952A
 * Original: 0x0020952A - 0x00209531 (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020952A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020952A: ;
    PUSH32(esp, 0x0020952Fu); RECOMP_ABI_CALL(0x00208DBAu, sub_00208DBA); /* call 0x00208DBA */

loc_0020952F: ;
    g_seh_ebp = ebp; sub_00209525(); return; /* tail jmp 0x00209525 */

}

/**
 * sub_00209531
 * Original: 0x00209531 - 0x00209539 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00209531(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209531: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -28) = MEM32(ebp + -28) - eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00209539(); return; /* fallthrough 0x00209539 */

}

/**
 * sub_00209539
 * Original: 0x00209539 - 0x00209594 (91 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209539(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0020958B; /* jae: above or equal (unsigned >=) */

loc_00209541: ;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_00209549: ;
    esi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    PUSH32(esp, 0x00209567u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_00209567: ;
    PUSH32(esp, 3);
    edi = esi + 0x1F4;
    POP32(esp, ecx);
    esi = ebp + -20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_00209594(); return; } /* jne: not equal / not zero */

loc_00209579: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x200;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00209549; /* jb: below (unsigned <) */

loc_0020958B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020958D
 * Original: 0x0020958D - 0x00209594 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020958D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020958D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209594
 * Original: 0x00209594 - 0x0020959E (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209594(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209594: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0020958D(); return; /* tail jmp 0x0020958D */

}

/**
 * sub_0020959E
 * Original: 0x0020959E - 0x002095E4 (70 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020959E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020959E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(edx + esi));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x83C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x83C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2A (8-bit) */
    MEM8(ecx) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_002095C5; /* jne: not equal / not zero */

loc_002095C2: ;
    MEM8(ecx) = 0x2B;

loc_002095C5: ;
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(ecx));
    esi = MEM32(eax + 0xC);
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM8(edx + esi) = LO8(ecx);
    ecx = eax;
    PUSH32(esp, 0x002095E0u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_002095E0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002095E4
 * Original: 0x002095E4 - 0x0020960C (40 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002095E4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002095E4: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(ecx + 0x83C));
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(edx + esi) = LO8(ecx);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00209608u); RECOMP_ABI_CALL(0x00208D90u, sub_00208D90); /* call 0x00208D90 */

loc_00209608: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020960C
 * Original: 0x0020960C - 0x00209643 (55 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020960C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020960C: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00209643(); return; } /* jne: not equal / not zero */

loc_00209613: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax + eax * 4;
    ecx = ZX16(MEM16(eax * 2 + 0xAA7746));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_00209637; /* je: equal / zero */

loc_00209632: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00209637: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}
