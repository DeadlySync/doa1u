/**
 * DOAU1 - Recompiled code chunk 4
 * Functions: 250 (0x00037010 - 0x00040A6A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00037010
 * Original: 0x00037010 - 0x0003706B (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00037010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037010: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00037026; /* jg: greater (signed >) */

loc_00037024: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00037026: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00037065; /* jl: less (signed <) */

loc_0003702D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(eax));

loc_00037032: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00037038u); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00037038: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebp) (16-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax = eax + eax + -1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x6E9B48)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6E9B48), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037057; /* je: equal / zero */

loc_00037052: ;
    edi = 1;

loc_00037057: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003705Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003705E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00037032; /* jne: not equal / not zero */

loc_00037064: ;
    POP32(esp, ebx);

loc_00037065: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00037070
 * Original: 0x00037070 - 0x0003708A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037070: ;
    PUSH32(esp, 0x00037075u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00037075: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0003707Cu); RECOMP_ABI_CALL(0x00051B70u, sub_00051B70); /* call 0x00051B70 */

loc_0003707C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00037084u); RECOMP_ABI_CALL(0x00051E10u, sub_00051E10); /* call 0x00051E10 */

loc_00037084: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000370CD(); return; } /* jne: not equal / not zero */

loc_00037088: ;
    g_seh_ebp = ebp; sub_00037090(); return; /* tail jmp 0x00037090 */

}

/**
 * sub_00037090
 * Original: 0x00037090 - 0x000370CD (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037090: ;
    _fa = (uint32_t)(MEM16(0x3055B4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3055B4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000370BA; /* je: equal / zero */

loc_0003709A: ;
    eax = ZX8(MEM8(0x30EDC8));
    ecx = MEM32(eax * 4 + 0x30F9B4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000370D6(); return; } /* jne: not equal / not zero */

loc_000370B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000370D6(); return; } /* jne: not equal / not zero */

loc_000370BA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000370C1u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000370C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000370C9u); RECOMP_ABI_CALL(0x00051E10u, sub_00051E10); /* call 0x00051E10 */

loc_000370C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037090; /* je: equal / zero */

    g_seh_ebp = ebp; sub_000370CD(); return; /* fallthrough 0x000370CD */

}

/**
 * sub_000370CD
 * Original: 0x000370CD - 0x000370D6 (9 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000370CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000370CD: ;
    MEM16(0x3055B4) = 1;

    g_seh_ebp = ebp; sub_000370D6(); return; /* fallthrough 0x000370D6 */

}

/**
 * sub_000370D6
 * Original: 0x000370D6 - 0x000370DB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000370D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000370D6: ;
    g_seh_ebp = ebp; sub_00051F50(); return; /* tail jmp 0x00051F50 */

}

/**
 * sub_000370E0
 * Original: 0x000370E0 - 0x00037142 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000370E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000370E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000370F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000370FA; /* je: equal / zero */

loc_000370F4: ;
    eax = eax | MEM32(edx + 0x2CCE58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000370FA: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037106; /* je: equal / zero */

loc_00037100: ;
    eax = eax | MEM32(edx + 0x2CCE5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00037106: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037112; /* je: equal / zero */

loc_0003710C: ;
    eax = eax | MEM32(edx + 0x2CCE60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00037112: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003711E; /* je: equal / zero */

loc_00037118: ;
    eax = eax | MEM32(edx + 0x2CCE64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0003711E: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003712A; /* je: equal / zero */

loc_00037124: ;
    eax = eax | MEM32(edx + 0x2CCE68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0003712A: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037136; /* je: equal / zero */

loc_00037130: ;
    eax = eax | MEM32(edx + 0x2CCE6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00037136: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x48 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000370F0; /* jb: below (unsigned <) */

loc_00037140: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037150
 * Original: 0x00037150 - 0x0003717B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037150_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037150: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 4);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x1E0B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003716Au); RECOMP_ABI_CALL(0x000370E0u, sub_000370E0); /* call 0x000370E0 */

loc_0003716A: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = MEM32(0x334878);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037180
 * Original: 0x00037180 - 0x000371F6 (118 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037180_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003719Eu); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_0003719E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 9));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 4));
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000371B9u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000371B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0xA));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000371D4u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000371D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0xB));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 4));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000371F1u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000371F1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037200
 * Original: 0x00037200 - 0x00037266 (102 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037200_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003721Au); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_0003721A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00037231u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_00037231: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00037248u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_00037248: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 4));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00037261u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_00037261: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037270
 * Original: 0x00037270 - 0x000372EE (126 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037270_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037270: ;
    PUSH32(esp, esi);
    esi = 0x2C6A02;

loc_00037276: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003728Eu); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_0003728E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 7));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000372A8u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000372A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000372C2u); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000372C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 9));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000372DEu); RECOMP_ABI_CALL(0x00037150u, sub_00037150); /* call 0x00037150 */

loc_000372DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CCE02) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2CCE02 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00037276; /* jl: less (signed <) */

loc_000372EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000372F0
 * Original: 0x000372F0 - 0x00037342 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000372F0_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end post1) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000372F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037341; /* jne: not equal / not zero */

loc_000372F8: ;
    PUSH32(esp, 0x000372FDu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_000372FD: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00037304u); RECOMP_ABI_CALL(0x00051B70u, sub_00051B70); /* call 0x00051B70 */

loc_00037304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003730Cu); RECOMP_ABI_CALL(0x00051E10u, sub_00051E10); /* call 0x00051E10 */

loc_0003730C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003732F; /* jne: not equal / not zero */

loc_00037310: ;
    _fa = (uint32_t)(MEM32(0x6E9B48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9B48), 0xFF30 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00037337; /* jne: not equal / not zero */

loc_0003731C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00037323u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00037323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003732Bu); RECOMP_ABI_CALL(0x00051E10u, sub_00051E10); /* call 0x00051E10 */

loc_0003732B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037310; /* je: equal / zero */

loc_0003732F: ;
    PUSH32(esp, 0x00037334u); RECOMP_ABI_CALL(0x00051F50u, sub_00051F50); /* call 0x00051F50 */

loc_00037334: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00037337: ;
    PUSH32(esp, 0x0003733Cu); RECOMP_ABI_CALL(0x00051F50u, sub_00051F50); /* call 0x00051F50 */

loc_0003733C: ;
    eax = 1;

loc_00037341: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037350
 * Original: 0x00037350 - 0x000373B5 (101 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037350_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037350: ;
    PUSH32(esp, 0x3359F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x335958);
    MEM32(0x3359FC) = 0x43C08000;
    MEM32(0x335A14) = 0x43C08000;
    MEM32(0x335A2C) = 0x43D08000;
    MEM32(0x335A44) = 0x43D08000;
    MEM32(0x335A0C) = 0x3F200000;
    MEM32(0x335A24) = 0x3F200000;
    MEM32(0x335A3C) = 0x3F300000;
    MEM32(0x335A54) = 0x3F300000;
    PUSH32(esp, 0x000373B1u); RECOMP_ABI_CALL(0x00035600u, sub_00035600); /* call 0x00035600 */

loc_000373B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000373C0
 * Original: 0x000373C0 - 0x0003749D (221 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000373C0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000373C0: ;
    PUSH32(esp, 0x335A58);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33596C);
    MEM32(0x335A58) = 0x41C80000;
    MEM32(0x335A5C) = 0x42100000;
    MEM32(0x335A60) = 0;
    MEM32(0x335A68) = 0;
    MEM32(0x335A6C) = 0;
    MEM32(0x335A70) = 0x43AC8000;
    MEM32(0x335A74) = 0x42100000;
    MEM32(0x335A78) = 0;
    MEM32(0x335A80) = 0x3F800000;
    MEM32(0x335A84) = 0;
    MEM32(0x335A88) = 0x41C80000;
    MEM32(0x335A8C) = 0x43240000;
    MEM32(0x335A90) = 0;
    MEM32(0x335A98) = 0;
    MEM32(0x335A9C) = 0x3F800000;
    MEM32(0x335AA0) = 0x43AC8000;
    MEM32(0x335AA4) = 0x43240000;
    MEM32(0x335AA8) = 0;
    MEM32(0x335AB0) = 0x3F800000;
    MEM32(0x335AB4) = 0x3F800000;
    PUSH32(esp, 0x00037499u); RECOMP_ABI_CALL(0x00035600u, sub_00035600); /* call 0x00035600 */

loc_00037499: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000374A0
 * Original: 0x000374A0 - 0x000374A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000374A0(void)
{

loc_000374A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000374B0
 * Original: 0x000374B0 - 0x000374EB (59 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000374B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000374B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000374D2u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_000374D2: ;
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edx) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000374F0
 * Original: 0x000374F0 - 0x0003762F (319 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000374F0(void)
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

loc_000374F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00037500: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00037506u); RECOMP_ABI_CALL(0x000529F0u, sub_000529F0); /* call 0x000529F0 */

loc_00037506: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003750E; /* je: equal / zero */

loc_0003750D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003750E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00037500; /* jl: less (signed <) */

loc_00037514: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    edx = MEM32(0x2CCEE8);
    eax = MEM32(0x6E9B48);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_00037543; /* jne: not equal / not zero */

loc_00037528: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037543; /* jne: not equal / not zero */

loc_0003752D: ;
    ecx = MEM32(0x2CCEEC);
    MEM32(esp + 0x10) = 0x40000000;
    MEM32(esp + 0xC) = ecx;
    edi = edx;
    goto loc_0003755E;

loc_00037543: ;
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00037552; /* je: equal / zero */

loc_0003754A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00037626; /* jne: not equal / not zero */

loc_00037552: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003755E; /* jne: not equal / not zero */

loc_00037556: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037626; /* je: equal / zero */

loc_0003755E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000375A1; /* je: equal / zero */

loc_00037562: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037586; /* jne: not equal / not zero */

loc_00037567: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037586; /* jne: not equal / not zero */

loc_0003756C: ;
    edx = MEM32(0x2CCEF4);
    edi = MEM32(0x2CCEE0);
    MEM32(esp + 0x10) = 0xC0800000u;
    MEM32(esp + 0xC) = edx;
    goto loc_000375E1;

loc_00037586: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x2CCEB4);
    edi = MEM32(eax + 0x2CCEB0);
    MEM32(esp + 0x10) = 0xC0000000u;
    goto loc_000375DD;

loc_000375A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000375E1; /* je: equal / zero */

loc_000375A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000375C4; /* jne: not equal / not zero */

loc_000375AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000375C4; /* jne: not equal / not zero */

loc_000375AF: ;
    eax = MEM32(0x2CCEDC);
    MEM32(esp + 0x10) = 0x40800000;
    MEM32(esp + 0xC) = eax;
    edi = edx;
    goto loc_000375E1;

loc_000375C4: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x2CCEBC);
    edi = MEM32(eax + 0x2CCEB8);
    MEM32(esp + 0x10) = 0x40000000;

loc_000375DD: ;
    MEM32(esp + 0xC) = ecx;

loc_000375E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x000375EAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_000375EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 8;

loc_000375F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000375F9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000375F9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    PUSH32(esp, 0x335998);
    PUSH32(esp, 0);
    PUSH32(esp, 0x335944);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00037616u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00037616: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00037620u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_00037620: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000375F2; /* jne: not equal / not zero */

loc_00037626: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00037630
 * Original: 0x00037630 - 0x00037653 (35 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037630: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003763Au); RECOMP_ABI_CALL(0x00160530u, sub_00160530); /* call 0x00160530 */

loc_0003763A: ;
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00037660
 * Original: 0x00037660 - 0x00037665 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037660: ;
    g_seh_ebp = ebp; sub_0003AB20(); return; /* tail jmp 0x0003AB20 */

}

/**
 * sub_00037670
 * Original: 0x00037670 - 0x0003770D (157 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037670: ;
    eax = MEM32(0x6E9A98);
    PUSH32(esp, ebx);
    ecx = 0x110;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00037690; /* je: equal / zero */

loc_00037681: ;
    ebx = 1;
    MEM32(0x30F9B4) = 0;

loc_00037690: ;
    _fa = (uint32_t)(MEM32(0x6E9AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9AC4), ecx (32-bit) */
    eax = 2;
    if (TEST_Z(_fa, _fb)) goto loc_000376A9; /* je: equal / zero */

loc_0003769D: ;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F9B8) = 1;

loc_000376A9: ;
    _fa = (uint32_t)(MEM32(0x6E9AF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9AF0), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000376CB; /* je: equal / zero */

loc_000376B1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000376C0; /* jne: not equal / not zero */

loc_000376B6: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F9B4) = eax;
    goto loc_000376CB;

loc_000376C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000376CB; /* jne: not equal / not zero */

loc_000376C4: ;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F9B8) = eax;

loc_000376CB: ;
    _fa = (uint32_t)(MEM32(0x6E9B1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9B1C), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000376F7; /* je: equal / zero */

loc_000376D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000376E5; /* jne: not equal / not zero */

loc_000376D7: ;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F9B8) = 3;
    goto loc_000376F7;

loc_000376E5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000376F7; /* jne: not equal / not zero */

loc_000376EA: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F9B4) = 3;

loc_000376F7: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037708; /* je: equal / zero */

loc_000376FC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00037705u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_00037705: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00037708: ;
    SET_LO16(eax, LO16(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037710
 * Original: 0x00037710 - 0x00037711 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037710(void)
{

loc_00037710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037720
 * Original: 0x00037720 - 0x00037723 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00037720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00037730
 * Original: 0x00037730 - 0x00037733 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00037730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037730: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00037740
 * Original: 0x00037740 - 0x00037963 (547 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_000377AC = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037740: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 6;
    edx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00037785; /* jne: not equal / not zero */

loc_00037754: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037961; /* je: equal / zero */

loc_00037761: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037961; /* je: equal / zero */

loc_00037769: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037961; /* je: equal / zero */

loc_00037771: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037961; /* je: equal / zero */

loc_00037779: ;
    _fa = (uint32_t)(MEM8(0x30C3EC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C3EC), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037961; /* je: equal / zero */

loc_00037785: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00037797; /* jne: not equal / not zero */

loc_0003778F: ;
    _fa = (uint32_t)(MEM8(0x30AAB9)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB9), LO8(edx) (8-bit) */
    _jf_000377AC = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_000377AC;

loc_00037797: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000377B2; /* jne: not equal / not zero */

loc_0003779B: ;
    SET_LO16(eax, MEM16(0x305464));
    esi = SX8(HI8(eax));
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _jf_000377AC = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_000377AC: ;
    if (_jf_000377AC /* je: equal / zero */) goto loc_00037960;

loc_000377B2: ;
    esi = MEM32(0x30F9B4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000377CB; /* jne: not equal / not zero */

loc_000377C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x30AE16;
    goto loc_000377E0;

loc_000377CB: ;
    _fa = (uint32_t)(MEM32(0x30F9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F9B8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000377DC; /* jne: not equal / not zero */

loc_000377D3: ;
    eax = edx;
    edi = 0x30D8E9;
    goto loc_000377E0;

loc_000377DC: ;
    edi = MEM32(esp + 0x10);

loc_000377E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000377E4: ;
    ebx = MEM32(0x30F9B4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000377FD; /* jne: not equal / not zero */

loc_000377F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 0x30AE16;
    goto loc_0003780F;

loc_000377FD: ;
    _fa = (uint32_t)(MEM32(0x30F9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F9B8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003780F; /* jne: not equal / not zero */

loc_00037805: ;
    ecx = edx;
    MEM32(esp + 0x10) = 0x30D8E9;

loc_0003780F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003794D; /* je: equal / zero */

loc_0003781C: ;
    SET_LO8(ebx, MEM8(0x30C680));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000378D3; /* jne: not equal / not zero */

loc_0003782A: ;
    SET_LO8(ebx, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037898; /* jne: not equal / not zero */

loc_00037835: ;
    _fa = (uint32_t)(MEM8(0x30DAB6)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30DAB6), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000378FF; /* jne: not equal / not zero */

loc_00037841: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003794D; /* jl: less (signed <) */

loc_00037849: ;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ebx + 0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x30D9A0), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_0003785A: ;
    ebx = MEM32(esp + 0x10);
    MEM8(ebx) = LO8(edx);
    MEM8(ecx + 0x335AD0) = LO8(edx);
    MEM32(ecx * 4 + 0x30F9B4) = esi;

loc_0003786D: ;
    _fa = (uint32_t)(MEM8(0x3139D1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139D1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037880; /* jne: not equal / not zero */

loc_00037875: ;
    ecx = MEM32(ebp + 0x6E9A90);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003788D; /* je: equal / zero */

loc_00037880: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_0003788D: ;
    MEM8(0x335AD2) = LO8(edx);
    goto loc_0003794D;

loc_00037898: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000378FF; /* jne: not equal / not zero */

loc_0003789C: ;
    _fa = (uint32_t)(MEM8(0x30DAB6)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30DAB6), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000378FF; /* jne: not equal / not zero */

loc_000378A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_000378AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003794D; /* jl: less (signed <) */

loc_000378B5: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(ebx, MEM8(ecx + 0x30D9A0));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_000378C8: ;
    MEM8(edi) = LO8(edx);
    MEM32(eax * 4 + 0x30F9B4) = esi;
    goto loc_0003786D;

loc_000378D3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000378FF; /* je: equal / zero */

loc_000378D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003794D; /* je: equal / zero */

loc_000378DC: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9A0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9A0), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_000378EA: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003794D; /* je: equal / zero */

loc_000378F3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003794D; /* je: equal / zero */

loc_000378F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003794D; /* je: equal / zero */

loc_000378FD: ;
    goto loc_0003793D;

loc_000378FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_00037904: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003794D; /* jl: less (signed <) */

loc_00037908: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(ebx, MEM8(ecx + 0x30D9A0));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003794D; /* jne: not equal / not zero */

loc_00037917: ;
    SET_LO8(ebx, MEM8(0x305B14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30D9A3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ecx + 0x30D9A3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003794D; /* jbe: below or equal (unsigned <=) */

loc_00037925: ;
    _fa = (uint32_t)(MEM8(0x30AE54)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE54), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003793D; /* jne: not equal / not zero */

loc_0003792E: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30D9A3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ecx + 0x30D9A3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003794D; /* jbe: below or equal (unsigned <=) */

loc_0003793D: ;
    MEM8(edi) = LO8(edx);
    MEM8(eax + 0x335AD0) = 0;
    MEM32(eax * 4 + 0x30F9B4) = esi;

loc_0003794D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000377E4; /* jb: below (unsigned <) */

loc_0003795D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00037960: ;
    POP32(esp, esi);

loc_00037961: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037970
 * Original: 0x00037970 - 0x00037A66 (246 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037970: ;
    SET_LO8(eax, MEM8(0x335942));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037A43; /* je: equal / zero */

loc_00037980: ;
    SET_LO8(ecx, MEM8(0x335988));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(0x335ABC));
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(0x3358D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO16(ecx, MEM16(0x334894));
    if (CMP_EQ(_fa, _fb)) goto loc_000379EA; /* je: equal / zero */

loc_000379A1: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000379AA; /* jne: not equal / not zero */

loc_000379A6: ;
    SET_LO16(ecx, 1);

loc_000379AA: ;
    eax = MEM32(0x3358D4);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(MEM32(0x335ABC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x335ABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    MEM16(0x334890) = LO16(eax);
    if (CMP_G(_fas, _fbs)) goto loc_000379C8; /* jg: greater (signed >) */

loc_000379C1: ;
    eax = MEM32(0x334890);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000379C8: ;
    eax = SX16(LO16(eax));
    ebp = SX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    POP32(esp, ebp);
    MEM16(0x334890) = LO16(eax);
    if (CMP_L(_fas, _fbs)) goto loc_000379E4; /* jl: less (signed <) */

loc_000379DD: ;
    eax = MEM32(0x334890);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000379E4: ;
    MEM16(0x334890) = LO16(eax);

loc_000379EA: ;
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(0x334894) = LO16(ecx);
    if ((_fas >= 0)) goto loc_00037A1C; /* jns: not sign (positive) */

loc_000379F5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, LO16(edi));
    MEM8(0x335942) = LO8(ebx);
    MEM16(0x334894) = LO16(ebx);
    MEM16(0x335ABC) = LO16(esi);
    MEM16(0x3358D4) = LO16(ebx);
    MEM16(0x334890) = LO16(ebx);

loc_00037A1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00037A22u); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00037A22: ;
    SET_LO16(ecx, MEM16(0x334890));
    SET_LO8(edx, MEM8(0x335942));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x335ABC) = MEM16(0x335ABC) + LO16(ecx);
    _fa = (uint32_t)(MEM16(0x335ABC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x335988) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00037A43: ;
    MEM16(0x334894) = LO16(ebx);
    MEM16(0x335ABC) = LO16(ebx);
    MEM16(0x3358D4) = LO16(ebx);
    MEM16(0x334890) = LO16(ebx);
    MEM8(0x335988) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037A70
 * Original: 0x00037A70 - 0x00037BA5 (309 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037A70: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    SET_LO16(ecx, MEM16(esp + 8));
    MEM16(0x334830) = LO16(eax);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(0x3358D0) = 1;
    MEM16(0x335AC4) = LO16(eax);
    MEM16(0x33487C) = LO16(ecx);
    PUSH32(esp, 0x00037A9Fu); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00037A9F: ;
    SET_LO8(eax, MEM8(0x3358D0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037B87; /* jne: not equal / not zero */

loc_00037AB1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00037AB4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00037ABBu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00037ABB: ;
    SET_LO8(edx, MEM8(0x3358D0));
    SET_LO8(eax, MEM8(0x335ACC));
    SET_LO16(edi, MEM16(0x33487C));
    SET_LO16(esi, MEM16(0x335AC4));
    SET_LO16(ecx, MEM16(0x334830));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037B29; /* je: equal / zero */

loc_00037AE2: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037AEB; /* jne: not equal / not zero */

loc_00037AE7: ;
    SET_LO16(ecx, 1);

loc_00037AEB: ;
    eax = MEM32(0x33487C);
    _fb = (uint32_t)(MEM32(0x335AC4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x335AC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    MEM16(0x335938) = LO16(eax);
    if (CMP_G(_fas, _fbs)) goto loc_00037B08; /* jg: greater (signed >) */

loc_00037B01: ;
    eax = MEM32(0x335938);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00037B08: ;
    eax = SX16(LO16(eax));
    ebp = SX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM16(0x335938) = LO16(eax);
    if (CMP_L(_fas, _fbs)) goto loc_00037B23; /* jl: less (signed <) */

loc_00037B1C: ;
    eax = MEM32(0x335938);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00037B23: ;
    MEM16(0x335938) = LO16(eax);

loc_00037B29: ;
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(0x334830) = LO16(ecx);
    if ((_fas >= 0)) goto loc_00037B5B; /* jns: not sign (positive) */

loc_00037B34: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, LO16(edi));
    MEM8(0x3358D0) = LO8(ebx);
    MEM16(0x334830) = LO16(ebx);
    MEM16(0x335AC4) = LO16(esi);
    MEM16(0x33487C) = LO16(ebx);
    MEM16(0x335938) = LO16(ebx);

loc_00037B5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00037B61u); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00037B61: ;
    SET_LO16(ecx, MEM16(0x335938));
    SET_LO8(eax, MEM8(0x3358D0));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x335AC4) = MEM16(0x335AC4) + LO16(ecx);
    _fa = (uint32_t)(MEM16(0x335AC4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(0x335ACC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00037AB4; /* je: equal / zero */

loc_00037B84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00037B87: ;
    MEM16(0x334830) = LO16(ebx);
    MEM16(0x335AC4) = LO16(ebx);
    MEM16(0x33487C) = LO16(ebx);
    MEM16(0x335938) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037BB0
 * Original: 0x00037BB0 - 0x00037BDB (43 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037BB0(void)
{

loc_00037BB0: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    SET_LO16(ecx, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM8(0x335942) = 1;
    MEM16(0x334894) = LO16(eax);
    MEM16(0x335ABC) = LO16(ecx);
    MEM16(0x3358D4) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037BE0
 * Original: 0x00037BE0 - 0x00037C04 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037BE0: ;
    _fa = (uint32_t)(MEM8(0x335942)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x335942), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037C03; /* jne: not equal / not zero */

loc_00037BE9: ;
    /* nop */

loc_00037BF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00037BF7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00037BF7: ;
    SET_LO8(eax, MEM8(0x335942));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037BF0; /* je: equal / zero */

loc_00037C03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037C10
 * Original: 0x00037C10 - 0x00037C11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037C10(void)
{

loc_00037C10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037C20
 * Original: 0x00037C20 - 0x00037C8A (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037C20: ;
    _fa = (uint32_t)(MEM8(0x31B040)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x31B040), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00037C89; /* jne: not equal / not zero */

loc_00037C29: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 2);
    MEM8(0x31B040) = LO8(ebx);
    MEM32(0x335AC0) = ebx;
    MEM32(0x335AC8) = ebx;
    PUSH32(esp, 0x00037C45u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00037C45: ;
    eax = ZX8(MEM8(0x30EDC8));
    SET_LO8(edx, MEM8(eax + 0x30ED4C));
    SET_LO8(eax, MEM8(0x3139CB));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM32(0x33488C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00037C75; /* jg: greater (signed >) */

loc_00037C6C: ;
    MEM8(0x30C680) = 7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00037C75: ;
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30C680) = 2;
    POP32(esp, ebx);

loc_00037C89: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037C90
 * Original: 0x00037C90 - 0x00037CF0 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037C90: ;
    eax = ZX8(MEM8(0x307606));
    ecx = ZX8(MEM8(0x30D8F0));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = ZX8(MEM8(0x30D00D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x30C3EC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(0x30EDC8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x30ED4C));
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx + ecx * 4;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00037CD7: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 8 + 0x68) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00037CE9; /* jbe: below or equal (unsigned <=) */

loc_00037CE2: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00037CD7; /* jb: below (unsigned <) */

loc_00037CE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ZX8(LO8(edx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037CF0
 * Original: 0x00037CF0 - 0x00037D33 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037CF0: ;
    eax = ZX8(MEM8(0x30EDC8));
    SET_LO8(eax, MEM8(eax + 0x30ED4C));
    SET_LO8(edx, MEM8(0x30AE54));
    PUSH32(esp, ebx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00037D14: ;
    eax = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi + eax * 4;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + ebx + 0x2C8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + ebx + 0x2C8) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00037D2C; /* ja: above (unsigned >) */

loc_00037D25: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00037D14; /* jb: below (unsigned <) */

loc_00037D2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ZX8(LO8(ecx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037D40
 * Original: 0x00037D40 - 0x00037D8A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037D40: ;
    eax = ZX8(MEM8(0x30EDC8));
    SET_LO8(eax, MEM8(eax + 0x30ED4C));
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    eax = ZX8(MEM8(0x30554C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x315AD5));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx + edx + 0x44;
    edi = edi;

loc_00037D70: ;
    eax = ZX8(LO8(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + eax * 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + eax * 4) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00037D84; /* ja: above (unsigned >) */

loc_00037D7D: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00037D70; /* jb: below (unsigned <) */

loc_00037D84: ;
    POP32(esp, esi);
    eax = ZX8(LO8(ecx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037D90
 * Original: 0x00037D90 - 0x00037DF4 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00037D90: ;
    eax = ZX8(MEM8(0x30EDC8));
    SET_LO8(edx, MEM8(eax + 0x30ED4C));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(0x30C3EC));
    eax = ZX8(MEM8(eax + 0x30D9A1));
    eax = ZX8(MEM8(eax + 0x2C6710));
    if (1) _cf = (int)(((LO8(ecx)) >> (8 - (1))) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ZX8(MEM8(0x307606));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x30D8F0));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(0x30D00D));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + ecx * 8 + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 8 + 0x1A8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037E00
 * Original: 0x00037E00 - 0x00037F81 (385 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037E00_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037E00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(esp + 4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    edx = edx << 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x30D9A0) = LO8(ecx);
    MEM8(eax + 0x30D9A1) = LO8(ecx);
    MEM8(eax + 0x30D9A2) = LO8(ecx);
    MEM8(eax + 0x30D9A3) = LO8(ecx);
    MEM32(eax + 0x30D9A4) = ecx;
    MEM32(eax + 0x30D9A8) = ecx;
    MEM32(eax + 0x30D9AC) = ecx;
    MEM32(eax + 0x30D9B0) = 0x3F800000;
    MEM32(eax + 0x30D9B4) = ecx;
    MEM32(eax + 0x30D9B8) = ecx;
    MEM32(eax + 0x30D9BC) = ecx;
    MEM16(eax + 0x30D9C0) = LO16(ecx);
    MEM16(eax + 0x30D9C2) = LO16(ecx);
    MEM16(eax + 0x30D9C4) = LO16(ecx);
    MEM16(eax + 0x30D9C6) = LO16(ecx);
    MEM16(eax + 0x30D9C8) = LO16(edx);
    MEM8(eax + 0x30D9CA) = LO8(ecx);
    MEM8(eax + 0x30D9CB) = LO8(ecx);
    MEM8(eax + 0x30D9CC) = LO8(ecx);
    MEM8(eax + 0x30D9CD) = LO8(ecx);
    MEM8(eax + 0x30D9CE) = LO8(ecx);
    MEM8(eax + 0x30D9CF) = LO8(ecx);
    MEM8(eax + 0x30D9D0) = LO8(ecx);
    MEM8(eax + 0x30D9D1) = LO8(ecx);
    MEM8(eax + 0x30D9D2) = LO8(ecx);
    MEM8(eax + 0x30D9D3) = LO8(ecx);
    MEM8(eax + 0x30D9D4) = LO8(ecx);
    MEM8(eax + 0x30D9D5) = LO8(ecx);
    MEM8(eax + 0x30D9D6) = LO8(ecx);
    MEM8(eax + 0x30D9D7) = LO8(ecx);
    MEM8(eax + 0x30D9D8) = LO8(ecx);
    MEM8(eax + 0x30D9D9) = LO8(ecx);
    MEM8(eax + 0x30D9DA) = LO8(ecx);
    MEM8(eax + 0x30D9DB) = LO8(ecx);
    MEM8(eax + 0x30D9DC) = LO8(ecx);
    MEM8(eax + 0x30D9DD) = LO8(ecx);
    MEM8(eax + 0x30D9DE) = LO8(ecx);
    MEM8(eax + 0x30D9DF) = LO8(ecx);
    MEM8(eax + 0x30D9E0) = LO8(ecx);
    MEM8(eax + 0x30D9E1) = LO8(ecx);
    MEM8(eax + 0x30D9E2) = LO8(ecx);
    MEM8(eax + 0x30D9E3) = LO8(ecx);
    MEM8(eax + 0x30D9E4) = LO8(ecx);
    MEM8(eax + 0x30D9E5) = LO8(ecx);
    MEM8(eax + 0x30D9E6) = LO8(ecx);
    MEM8(eax + 0x30D9E7) = LO8(ecx);
    MEM8(eax + 0x30D9E8) = 1;
    MEM8(eax + 0x30D9E9) = LO8(ecx);
    MEM8(eax + 0x30D9EA) = LO8(ecx);
    MEM8(eax + 0x30D9EB) = LO8(ecx);
    MEM8(eax + 0x30D9EC) = LO8(ecx);
    MEM8(eax + 0x30D9ED) = LO8(ecx);
    MEM8(eax + 0x30D9EE) = LO8(ecx);
    MEM8(eax + 0x30D9EF) = LO8(ecx);
    MEM8(eax + 0x30D9F0) = LO8(ecx);
    MEM8(eax + 0x30D9F1) = LO8(ecx);
    MEM8(eax + 0x30D9F2) = LO8(ecx);
    MEM8(eax + 0x30D9F3) = LO8(ecx);
    MEM8(eax + 0x30D9F4) = LO8(ecx);
    MEM8(eax + 0x30D9F5) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00037F90
 * Original: 0x00037F90 - 0x00038133 (419 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037F90_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037F90: ;
    SET_LO8(ecx, MEM8(0x305589));
    SET_LO8(eax, 1);
    MEM8(0x30760C) = LO8(eax);
    MEM8(0x30DAA8) = LO8(eax);
    eax = 0xA0;
    MEM16(0x30AE3C) = LO16(eax);
    MEM16(0x30C4C4) = LO16(eax);
    SET_LO8(eax, MEM8(0x305588));
    MEM8(0x306320) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558A));
    MEM8(0x30C3E4) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558C));
    MEM8(0x305B14) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558E));
    MEM8(0x30F91C) = LO8(eax);
    SET_LO8(eax, MEM8(0x305590));
    MEM8(0x30F924) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30558B));
    MEM8(0x316FF3) = LO8(eax);
    SET_LO8(eax, MEM8(0x305591));
    MEM8(0x30D018) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30558D));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x3139C9) = LO8(eax);
    SET_LO8(eax, MEM8(0x305592));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    MEM8(0x3139D1) = LO8(ecx);
    SET_LO16(ecx, MEM16(0x305597));
    MEM8(0x30AAB9) = LO8(edx);
    MEM8(0x30DAB4) = LO8(edx);
    MEM8(0x31B046) = LO8(edx);
    MEM8(0x30AE17) = LO8(edx);
    MEM8(0x30C440) = 0x7F;
    MEM8(0x30AA65) = HI8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0003804B; /* jl: less (signed <) */

loc_00038044: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0003804E;

loc_0003804B: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0003804E: ;
    MEM8(0x30C4C1) = LO8(eax);
    SET_LO8(eax, MEM8(0x305594));
    MEM8(0x30760F) = LO8(eax);
    eax = MEM32(0x305595);
    MEM8(0x30554D) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558F));
    MEM8(0x30AD94) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x305599));
    MEM8(0x30EDC9) = HI8(eax);
    MEM8(0x317039) = LO8(eax);
    MEM8(0x3062E0) = LO8(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00038090;

    /* nop */

loc_00038090: ;
    SET_LO8(ecx, MEM8(eax + 0x305568));
    MEM8(eax + 0x307620) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x305569));
    MEM8(eax + 0x307621) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556A));
    MEM8(eax + 0x307622) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556B));
    MEM8(eax + 0x307623) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556C));
    MEM8(eax + 0x307624) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556D));
    MEM8(eax + 0x307625) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556E));
    MEM8(eax + 0x307626) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30556F));
    MEM8(eax + 0x307627) = LO8(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00038090; /* jl: less (signed <) */

loc_000380F8: ;
    MEM8(0x30AE36) = LO8(edx);
    MEM8(0x30F927) = LO8(edx);
    MEM8(0x316FF2) = LO8(edx);
    edx = MEM32(0x3055B0);
    edx = edx & 0x249249;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x249249) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x249249 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x30C7F0) = 0x3C;
    MEM8(0x30AD95) = 0xFF;
    MEM8(0x3139C8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00038140
 * Original: 0x00038140 - 0x0003817D (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038140_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x30AE54) = LO8(eax);
    MEM8(0x30AE32) = LO8(eax);
    MEM8(0x307606) = LO8(eax);
    MEM8(0x30D8F0) = LO8(eax);
    MEM8(0x30D00D) = LO8(eax);
    MEM16(0x30DAB8) = LO16(eax);
    SET_LO8(eax, 0xFF);
    MEM8(0x3321F4) = LO8(eax);
    MEM8(0x3321F5) = LO8(eax);
    MEM8(0x3322CC) = LO8(eax);
    MEM8(0x3322CD) = LO8(eax);
    MEM8(0x332204) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00038180
 * Original: 0x00038180 - 0x000381BA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038180: ;
    eax = MEM32(0x334828);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    MEM32(0x334828) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000381B9; /* jle: less or equal (signed <=) */

loc_00038190: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 2 (8-bit) */
    MEM32(0x334828) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000381B9; /* je: equal / zero */

loc_000381A3: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000381B3; /* jne: not equal / not zero */

loc_000381AC: ;
    MEM32(0x3139D8) = MEM32(0x3139D8) + 1;
    _fa = (uint32_t)(MEM32(0x3139D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000381B3: ;
    MEM32(0x3139D4) = MEM32(0x3139D4) + 1;
    _fa = (uint32_t)(MEM32(0x3139D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000381B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000381C0
 * Original: 0x000381C0 - 0x000381CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381C0(void)
{

loc_000381C0: ;
    MEM32(0x3139D4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000381D0
 * Original: 0x000381D0 - 0x0003821F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381D0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000381D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x000381DCu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_000381DC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000381E3u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000381E3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000381EAu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000381EA: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x000381F1u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000381F1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000381F8u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000381F8: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x000381FFu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000381FF: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00038206u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00038206: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0003820Du); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_0003820D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00038214u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00038214: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0003821Bu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_0003821B: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00038220
 * Original: 0x00038220 - 0x00038258 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038220: ;
    SET_LO8(eax, MEM8(0x30760C));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038257; /* jne: not equal / not zero */

loc_0003822B: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038257; /* je: equal / zero */

loc_00038234: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 4 + 0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A90);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00038257; /* je: equal / zero */

loc_0003824D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00038257; /* jns: not sign (positive) */

loc_00038251: ;
    MEM8(ecx + 0x30ED4C) = LO8(edx);

loc_00038257: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038260
 * Original: 0x00038260 - 0x00038322 (194 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038260: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(0x334848) = ebx;
    MEM32(0x335984) = ebx;
    PUSH32(esp, 0x00038275u); RECOMP_ABI_CALL(0x00037E00u, sub_00037E00); /* call 0x00037E00 */

loc_00038275: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003827Cu); RECOMP_ABI_CALL(0x00037E00u, sub_00037E00); /* call 0x00037E00 */

loc_0003827C: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(0x30AE28) = LO8(ebx);
    MEM8(0x30554C) = LO8(ebx);
    MEM8(0x33484C) = LO8(ebx);
    MEM8(0x3358AA) = LO8(ebx);
    MEM8(0x335942) = LO8(ebx);
    MEM8(0x335988) = LO8(ebx);
    MEM16(0x334894) = LO16(ebx);
    MEM16(0x335ABC) = LO16(ebx);
    MEM16(0x3358D4) = LO16(ebx);
    MEM16(0x334890) = LO16(ebx);
    MEM8(0x3358D0) = LO8(ebx);
    MEM8(0x335ACC) = LO8(ebx);
    MEM16(0x334830) = LO16(ebx);
    MEM16(0x335AC4) = LO16(ebx);
    MEM16(0x33487C) = LO16(ebx);
    MEM16(0x335938) = LO16(ebx);
    MEM32(0x334828) = ebx;
    MEM8(0x335AD0) = LO8(ebx);
    MEM8(0x335AD1) = LO8(ebx);
    MEM32(0x33489C) = 6;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00038321; /* jne: not equal / not zero */

loc_0003830D: ;
    eax = MEM32(0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003831C; /* jne: not equal / not zero */

loc_00038317: ;
    eax = MEM32(0x30F9B8);

loc_0003831C: ;
    MEM32(0x33489C) = eax;

loc_00038321: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038330
 * Original: 0x00038330 - 0x0003849E (366 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038330: ;
    SET_LO8(edx, MEM8(0x30EDC8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(0x3358A9) = 0;
    SET_LO8(eax, 5);
    if (CMP_NE(_fa, _fb)) goto loc_0003834B; /* jne: not equal / not zero */

loc_00038343: ;
    SET_LO8(ecx, MEM8(0x30F924));
    goto loc_00038356;

loc_0003834B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003835E; /* jne: not equal / not zero */

loc_00038350: ;
    SET_LO8(ecx, MEM8(0x30C3E4));

loc_00038356: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003849D; /* je: equal / zero */

loc_0003835E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003839A; /* jne: not equal / not zero */

loc_0003836A: ;
    SET_LO8(ecx, MEM8(0x3055AC));
    eax = 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003849C; /* jne: not equal / not zero */

loc_0003837D: ;
    _fa = (uint32_t)(MEM8(0x30AE54)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE54), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003849C; /* jb: below (unsigned <) */

loc_0003838A: ;
    MEM16(0x3055AC) = MEM16(0x3055AC) | LO16(eax);
    _fa = (uint32_t)(MEM16(0x3055AC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(0x3358A9) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003839A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003844F; /* je: equal / zero */

loc_000383A2: ;
    _fa = (uint32_t)(MEM8(0x30C3EC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C3EC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000383CD; /* jne: not equal / not zero */

loc_000383AB: ;
    _fa = (uint32_t)(MEM8(0x3055AC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3055AC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003844F; /* jne: not equal / not zero */

loc_000383B8: ;
    _fa = (uint32_t)(MEM8(0x307606)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307606), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003844F; /* jae: above or equal (unsigned >=) */

loc_000383C4: ;
    MEM8(0x3055AC) = MEM8(0x3055AC) | 1;
    _fa = (uint32_t)(MEM8(0x3055AC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00038448;

loc_000383CD: ;
    SET_LO8(eax, MEM8(0x306320));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003841E; /* je: equal / zero */

loc_000383D6: ;
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    ecx = ZX8(MEM8(ecx + 0x2C6710));
    SET_LO8(eax, MEM8(ecx + 0x305B0A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x2C5690)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x2C5690) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003841E; /* jge: greater or equal (signed >=) */

loc_000383F8: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x305B0A) = LO8(eax);
    SET_LO8(edx, MEM8(0x30EDC8));
    SET_LO8(ebx, MEM8(0x3139CB));
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A1));
    MEM8(0x3321FC) = LO8(ecx);

loc_0003841E: ;
    eax = ZX8(LO8(edx));
    SET_LO8(ecx, MEM8(eax + 0x30ED4C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x3055AC));
    if (CMP_EQ(_fa, _fb)) goto loc_0003843D; /* je: equal / zero */

loc_00038430: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003844F; /* jne: not equal / not zero */

loc_00038434: ;
    MEM8(0x3055AC) = MEM8(0x3055AC) | 4;
    _fa = (uint32_t)(MEM8(0x3055AC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00038448;

loc_0003843D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003844F; /* jne: not equal / not zero */

loc_00038441: ;
    MEM8(0x3055AC) = MEM8(0x3055AC) | 2;
    _fa = (uint32_t)(MEM8(0x3055AC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00038448: ;
    MEM8(0x3358A9) = 1;

loc_0003844F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003849C; /* jg: greater (signed >) */

loc_00038454: ;
    _fa = (uint32_t)(MEM8(0x307328)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307328), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003849C; /* jne: not equal / not zero */

loc_0003845D: ;
    ecx = ZX8(LO8(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    edx = ZX8(MEM8(ecx + 0x30D9A1));
    SET_LO8(eax, MEM8(edx + 0x2C6710));
    SET_LO8(ecx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = 1;
    ecx = eax;
    eax = MEM32(0x3055B0);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3055B0) = eax;
    eax = eax & 0x249249;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x249249) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x249249 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003849C; /* jne: not equal / not zero */

loc_00038495: ;
    MEM8(0x3139C8) = 1;

loc_0003849C: ;
    POP32(esp, ebx);

loc_0003849D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000384A0
 * Original: 0x000384A0 - 0x000384D3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000384A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000384A0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xE00000);
    PUSH32(esp, 0x000384B3u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_000384B3: ;
    PUSH32(esp, eax);
    ecx = eax + 0xDC7800;
    PUSH32(esp, 0x22D05C);
    MEM32(0x30ECA0) = eax;
    MEM32(0x30ECAC) = ecx;
    PUSH32(esp, 0x000384CFu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000384CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000384E0
 * Original: 0x000384E0 - 0x000384F6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000384E0(void)
{

loc_000384E0: ;
    eax = MEM32(0x30ECA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000384EBu); RECOMP_ABI_CALL(0x000A9F2Eu, sub_000A9F2E); /* call 0x000A9F2E */

loc_000384EB: ;
    MEM32(0x30ECA0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00038500
 * Original: 0x00038500 - 0x00038519 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038500(void)
{

loc_00038500: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x151840);
    PUSH32(esp, 0x00038513u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00038513: ;
    MEM32(0x30EC1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00038520
 * Original: 0x00038520 - 0x0003853C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038520: ;
    eax = MEM32(0x30EC1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038530; /* je: equal / zero */

loc_00038529: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003852Fu); RECOMP_ABI_CALL(0x000A9F2Eu, sub_000A9F2E); /* call 0x000A9F2E */

loc_0003852F: ;
    esp += 4; return; /* ret */

loc_00038530: ;
    PUSH32(esp, 0x22D078);
    PUSH32(esp, 0x0003853Au); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0003853A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00038540
 * Original: 0x00038540 - 0x00038656 (278 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038540_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038540: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x102000);
    PUSH32(esp, 0x00038554u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00038554: ;
    MEM32(0x30EBF8) = eax;
    esi = 0x30EC20;
    edi = edi;

loc_00038560: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x160000);
    PUSH32(esp, 0x00038573u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00038573: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30EC58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30EC58 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00038560; /* jl: less (signed <) */

loc_00038580: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x21000);
    MEM32(0x30EC58) = 0;
    MEM32(0x30EC74) = 0;
    PUSH32(esp, 0x000385A7u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_000385A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x6D800);
    MEM32(0x30EBFC) = eax;
    PUSH32(esp, 0x000385BFu); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_000385BF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x80800);
    MEM32(0x30EC18) = eax;
    PUSH32(esp, 0x000385D7u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_000385D7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x340000);
    MEM32(0x30EC00) = eax;
    PUSH32(esp, 0x000385EFu); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_000385EF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x100000);
    MEM32(0x30EC04) = eax;
    PUSH32(esp, 0x00038607u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00038607: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x100000);
    MEM32(0x30EC08) = eax;
    PUSH32(esp, 0x0003861Fu); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_0003861F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x11A800);
    MEM32(0x30EC0C) = eax;
    PUSH32(esp, 0x00038637u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_00038637: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x97000);
    MEM32(0x33598C) = eax;
    PUSH32(esp, 0x0003864Fu); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_0003864F: ;
    MEM32(0x334870) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038660
 * Original: 0x00038660 - 0x0003867A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038660(void)
{

loc_00038660: ;
    PUSH32(esp, 0x334850);
    MEM32(0x334850) = 0x20;
    PUSH32(esp, 0x00038674u); RECOMP_ABI_CALL(0x000AA04Au, sub_000AA04A); /* call 0x000AA04A */

loc_00038674: ;
    eax = MEM32(0x33485C);
    esp += 4; return; /* ret */

}

/**
 * sub_00038680
 * Original: 0x00038680 - 0x000386BE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038680_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038680: ;
    PUSH32(esp, 0x334850);
    MEM32(0x334850) = 0x20;
    PUSH32(esp, 0x00038694u); RECOMP_ABI_CALL(0x000AA04Au, sub_000AA04A); /* call 0x000AA04A */

loc_00038694: ;
    PUSH32(esp, 0x22D0A8);
    PUSH32(esp, 0x0003869Eu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0003869E: ;
    ecx = MEM32(0x334858);
    eax = MEM32(0x33485C);
    PUSH32(esp, eax);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D090);
    PUSH32(esp, 0x000386BAu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000386BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000386C0
 * Original: 0x000386C0 - 0x00038709 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000386C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000386C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000386C6u); RECOMP_ABI_CALL(0x00051250u, sub_00051250); /* call 0x00051250 */

loc_000386C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x81;
    edi = 0x335AE8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x335AE8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000386F8; /* jne: not equal / not zero */

loc_000386E6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = 0x27;
    edi = 0x335AEC;
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

loc_000386F8: ;
    PUSH32(esp, 0x335AE8);
    PUSH32(esp, 0x22D0CC);
    PUSH32(esp, 0x00038707u); RECOMP_ABI_CALL(0x000AA099u, sub_000AA099); /* call 0x000AA099 */

loc_00038707: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038710
 * Original: 0x00038710 - 0x000387AF (159 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038710: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, edi);
    MEM32(esp + 0x208) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = 0x335CF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(0x335CF0) = 0x646C3031;
    MEM32(0x335CF4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0003874Fu); RECOMP_ABI_CALL(0x001E3E72u, sub_001E3E72); /* call 0x001E3E72 */

loc_0003874F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00038771; /* jl: less (signed <) */

loc_00038753: ;
    PUSH32(esp, esi);
    ecx = 0x81;
    esi = esp + 8;
    edi = 0x335D00;
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
    SET_LO8(ecx, MEM8(0x33489C));
    MEM8(0x335CF8) = LO8(ecx);
    POP32(esp, esi);

loc_00038771: ;
    PUSH32(esp, 0);
    MEM8(0x335F14) = 1;
    PUSH32(esp, 0x0003877Fu); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_0003877F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00038787u); RECOMP_ABI_CALL(0x00080CB0u, sub_00080CB0); /* call 0x00080CB0 */

loc_00038787: ;
    PUSH32(esp, 0x0003878Cu); RECOMP_ABI_CALL(0x00051250u, sub_00051250); /* call 0x00051250 */

loc_0003878C: ;
    PUSH32(esp, 0x335CF0);
    PUSH32(esp, 0x22D0D8);
    PUSH32(esp, 0x0003879Bu); RECOMP_ABI_CALL(0x000AA099u, sub_000AA099); /* call 0x000AA099 */

loc_0003879B: ;
    ecx = MEM32(esp + 0x208);
    POP32(esp, edi);
    PUSH32(esp, 0x000387A8u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000387A8: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000387B0
 * Original: 0x000387B0 - 0x000387FA (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000387B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000387B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000387B7u); RECOMP_ABI_CALL(0x00051250u, sub_00051250); /* call 0x00051250 */

loc_000387B7: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = 0x81;
    edi = 0x335AE8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x335AE8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000387E3; /* je: equal / zero */

loc_000387D7: ;
    ecx = 0x27;
    edi = 0x335AEC;
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

loc_000387E3: ;
    PUSH32(esp, 0x335AE8);
    PUSH32(esp, 0x204);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000387F4u); RECOMP_ABI_CALL(0x0007DC60u, sub_0007DC60); /* call 0x0007DC60 */

loc_000387F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038800
 * Original: 0x00038800 - 0x00038840 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038800: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00038806u); RECOMP_ABI_CALL(0x00051250u, sub_00051250); /* call 0x00051250 */

loc_00038806: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x81;
    edi = 0x335AE8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 8);
    MEM32(0x335AE8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x335AE8);
    PUSH32(esp, eax);
    MEM32(0x335AEC) = 1;
    MEM32(0x335AF0) = eax;
    MEM32(0x335AF4) = eax;
    PUSH32(esp, 0x0003883Eu); RECOMP_ABI_CALL(0x000AA099u, sub_000AA099); /* call 0x000AA099 */

loc_0003883E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038840
 * Original: 0x00038840 - 0x0003885F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038840(void)
{

loc_00038840: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00038854u); RECOMP_ABI_CALL(0x000A9E33u, sub_000A9E33); /* call 0x000A9E33 */

loc_00038854: ;
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0003885Eu); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0003885E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038860
 * Original: 0x00038860 - 0x000389BA (346 bytes, 115 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3358AC);
    MEM32(0x3358AC) = 0x20;
    PUSH32(esp, 0x00038876u); RECOMP_ABI_CALL(0x000AA04Au, sub_000AA04A); /* call 0x000AA04A */

loc_00038876: ;
    PUSH32(esp, 0x22D0A8);
    PUSH32(esp, 0x00038880u); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_00038880: ;
    ecx = MEM32(0x3358B4);
    eax = MEM32(0x3358B8);
    PUSH32(esp, eax);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D090);
    PUSH32(esp, 0x0003889Cu); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_0003889C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000388A4u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_000388A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 0x22D1B4;
    if (CMP_NE(_fa, _fb)) goto loc_000388B2; /* jne: not equal / not zero */

loc_000388AD: ;
    esi = 0x22D1B0;

loc_000388B2: ;
    PUSH32(esp, 0x000388B7u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000388B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x22D1A8;
    if (CMP_NE(_fa, _fb)) goto loc_000388C5; /* jne: not equal / not zero */

loc_000388C0: ;
    eax = 0x22D1A4;

loc_000388C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000388CCu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000388CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000388D2u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_000388D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D170);
    PUSH32(esp, 0x000388DDu); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_000388DD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000388E7u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000388E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00038945; /* jbe: below or equal (unsigned <=) */

loc_000388EB: ;
    goto loc_000388F0;

    /* nop */

loc_000388F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000388F6u); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_000388F6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003892D; /* je: equal / zero */

loc_000388FF: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003890Cu); RECOMP_ABI_CALL(0x00071870u, sub_00071870); /* call 0x00071870 */

loc_0003890C: ;
    edx = MEM32(eax + 0xC);
    ecx = ZX8(MEM8(esi + 0x5C));
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x22D144);
    PUSH32(esp, 0x00038928u); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_00038928: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003893B;

loc_0003892D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x22D12C);
    PUSH32(esp, 0x00038938u); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_00038938: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003893B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00038941u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00038941: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000388F0; /* jb: below (unsigned <) */

loc_00038945: ;
    PUSH32(esp, 0x22D124);
    PUSH32(esp, 0x0003894Fu); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_0003894F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00038957u); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_00038957: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003895Du); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_0003895D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00038963u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00038963: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D104);
    PUSH32(esp, 0x0003896Eu); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_0003896E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00038978u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00038978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000389B7; /* jbe: below or equal (unsigned <=) */

loc_0003897C: ;
    PUSH32(esp, ebx);
    ebx = 0x902E8C;

loc_00038982: ;
    edx = MEM32(esi * 4 + 0x912A40);
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    edx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esi + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0x22D0EC);
    PUSH32(esp, 0x000389A5u); RECOMP_ABI_CALL(0x00038840u, sub_00038840); /* call 0x00038840 */

loc_000389A5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi;
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000389B2u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_000389B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00038982; /* jb: below (unsigned <) */

loc_000389B6: ;
    POP32(esp, ebx);

loc_000389B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000389C0
 * Original: 0x000389C0 - 0x000389C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000389C0(void)
{

loc_000389C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000389D0
 * Original: 0x000389D0 - 0x00038A0B (59 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000389D0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000389D0: ;
    ecx = MEM32(0x335AD4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000389EBu); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_000389EB: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    edi = MEM32(esp + 8);
    SET_LO8(edx, LO8(eax));
    SET_HI8(edx, LO8(edx));
    ecx = 0x10000;
    eax = edx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(edx));
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00038A10
 * Original: 0x00038A10 - 0x00038A36 (38 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038A10_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038A10: ;
    eax = MEM32(0x335ADC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00038A22u); RECOMP_ABI_CALL(0x00160590u, sub_00160590); /* call 0x00160590 */

loc_00038A22: ;
    ecx = 0x100;

loc_00038A27: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00038A27; /* jne: not equal / not zero */

loc_00038A34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038A40
 * Original: 0x00038A40 - 0x00038A57 (23 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038A40_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{

loc_00038A40: ;
    eax = MEM32(0x335AD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x334874);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00038A56u); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_00038A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038A60
 * Original: 0x00038A60 - 0x00038A61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038A60(void)
{

loc_00038A60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038A70
 * Original: 0x00038A70 - 0x00038D21 (689 bytes, 203 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038A70_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end menu_tick) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038A70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM8(0x30C680) = 2;
    MEM32(0x335990) = ebp;
    PUSH32(esp, 0x00038A8Cu); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00038A8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00038A94u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00038A94: ;
    PUSH32(esp, 0x00038A99u); RECOMP_ABI_CALL(0x00036BE0u, sub_00036BE0); /* call 0x00036BE0 */

loc_00038A99: ;
    eax = MEM32(0x335ADC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = 0x2C6900;
    PUSH32(esp, 0x00038AAAu); RECOMP_ABI_CALL(0x00160590u, sub_00160590); /* call 0x00160590 */

loc_00038AAA: ;
    ecx = 0x80;
    /* nop */

loc_00038AB0: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00038AB0; /* jne: not equal / not zero */

loc_00038ABD: ;
    MEM32(esp + 0x14) = ebp;
    esi = 0x2C6A06;

loc_00038AC6: ;
    PUSH32(esp, 0x00038ACBu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00038ACB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x160;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0xB0));
    edx = edx - 0xB0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + -2) = LO16(edx);
    PUSH32(esp, 0x00038AE2u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00038AE2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E0;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0xF0));
    edx = edx - 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CCE06) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2CCE06 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(esi + -20) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_00038AC6; /* jl: less (signed <) */

loc_00038AFF: ;
    /* nop */

loc_00038B00: ;
    PUSH32(esp, 0x00038B05u); RECOMP_ABI_CALL(0x00038A40u, sub_00038A40); /* call 0x00038A40 */

loc_00038B05: ;
    _fa = (uint32_t)(MEM32(0x6E9B48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9B48), 0xFF30 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00038C77; /* jne: not equal / not zero */

loc_00038B15: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00038B20: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038B22: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00038B77; /* jne: not equal / not zero */

loc_00038B26: ;
    eax = ebx + edi;
    eax = eax + eax * 4;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x2C6A04);
    ecx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x2C6A00);
    eax = eax * 4 + 0x2C6A00;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22D1DC)); /* fmul dword ptr [0x22d1dc] */
    PUSH32(esp, eax);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22D1DC)); /* fmul dword ptr [0x22d1dc] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00038C20;

loc_00038B77: ;
    if (CMP_L(_fas, _fbs)) goto loc_00038C28; /* jl: less (signed <) */

loc_00038B7D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ebx + edi;
    eax = eax + eax * 4;
    esi = eax * 4 + 0x2C6A00;
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00038BB1; /* jle: less or equal (signed <=) */

loc_00038B92: ;
    PUSH32(esp, 0x00038B97u); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_00038B97: ;
    SET_LO16(edx, MEM16(esi));
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, esi);
    MEM16(esi + 4) = LO16(edx);
    MEM16(esi + 6) = LO16(eax);
    PUSH32(esp, 0x00038BACu); RECOMP_ABI_CALL(0x00037180u, sub_00037180); /* call 0x00037180 */

loc_00038BAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00038C28;

loc_00038BB1: ;
    if (CMP_NE(_fa, _fb)) goto loc_00038BD2; /* jne: not equal / not zero */

loc_00038BB3: ;
    PUSH32(esp, 0x00038BB8u); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_00038BB8: ;
    SET_LO16(ecx, MEM16(esi));
    SET_LO16(edx, MEM16(esi + 2));
    PUSH32(esp, esi);
    MEM16(esi + 4) = LO16(ecx);
    MEM16(esi + 6) = LO16(edx);
    PUSH32(esp, 0x00038BCDu); RECOMP_ABI_CALL(0x00037180u, sub_00037180); /* call 0x00037180 */

loc_00038BCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00038C28;

loc_00038BD2: ;
    PUSH32(esp, 0x00038BD7u); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_00038BD7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    PUSH32(esp, 0x00038BEEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00038BEE: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x18) = ecx;
    MEM16(esi + 4) = LO16(eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22D1D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22d1d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00038C16; /* jne: not equal / not zero */

loc_00038C0E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22D1D8)); /* fld float */

loc_00038C16: ;
    PUSH32(esp, 0x00038C1Bu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00038C1B: ;
    MEM16(esi + 6) = LO16(eax);
    PUSH32(esp, esi);

loc_00038C20: ;
    PUSH32(esp, 0x00038C25u); RECOMP_ABI_CALL(0x00037180u, sub_00037180); /* call 0x00037180 */

loc_00038C25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00038C28: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00038B22; /* jl: less (signed <) */

loc_00038C36: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x400 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00038B20; /* jl: less (signed <) */

loc_00038C4A: ;
    PUSH32(esp, 0x00038C4Fu); RECOMP_ABI_CALL(0x00036AD0u, sub_00036AD0); /* call 0x00036AD0 */

loc_00038C4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038C56u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038C56: ;
    PUSH32(esp, 0x22D1C8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00038C64u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00038C64: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00038B00; /* jl: less (signed <) */

loc_00038C71: ;
    edi = MEM32(esp + 0x14);
    goto loc_00038CA9;

loc_00038C77: ;
    ebx = 0x2C6A00;
    /* nop */

loc_00038C80: ;
    esi = ebx;
    edi = 0x28;

loc_00038C87: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00038C8Du); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_00038C8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00038C87; /* jne: not equal / not zero */

loc_00038C96: ;
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x280)) >> 32) & 1);
    ebx = ebx + 0x280;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CBA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2CBA00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00038C80; /* jl: less (signed <) */

loc_00038CA4: ;
    edi = 1;

loc_00038CA9: ;
    PUSH32(esp, 0x00038CAEu); RECOMP_ABI_CALL(0x00038A40u, sub_00038A40); /* call 0x00038A40 */

loc_00038CAE: ;
    PUSH32(esp, 0x00038CB3u); RECOMP_ABI_CALL(0x00037270u, sub_00037270); /* call 0x00037270 */

loc_00038CB3: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFA6u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x78)) >> 32) & 1);
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00038CC0: ;
    PUSH32(esp, 0x00038CC5u); RECOMP_ABI_CALL(0x00036AD0u, sub_00036AD0); /* call 0x00036AD0 */

loc_00038CC5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038CCCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038CCC: ;
    PUSH32(esp, 0x22D1B8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xA);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00038CDBu); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00038CDB: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF30 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00038D01; /* jne: not equal / not zero */

loc_00038CEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00038CC0; /* jne: not equal / not zero */

loc_00038CEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00038CF4u); RECOMP_ABI_CALL(0x000389D0u, sub_000389D0); /* call 0x000389D0 */

loc_00038CF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00038D01: ;
    MEM32(esp + 0x14) = 1;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00038D14u); RECOMP_ABI_CALL(0x000389D0u, sub_000389D0); /* call 0x000389D0 */

loc_00038D14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00038D30
 * Original: 0x00038D30 - 0x00038EAA (378 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038D30_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end post2) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038D30: ;
    MEM32(0x335990) = 0;
    PUSH32(esp, 0x00038D3Fu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00038D3F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00038D46u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038D46: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00038D4Du); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00038D4D: ;
    SET_LO8(eax, MEM8(0x3358A9));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038D71; /* je: equal / zero */

loc_00038D59: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038D60u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038D60: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x106);
    PUSH32(esp, 0x00038D6Cu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_00038D6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00038DAD;

loc_00038D71: ;
    SET_LO8(eax, MEM8(0x3321FC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038DAD; /* je: equal / zero */

loc_00038D7A: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00038D87u); RECOMP_ABI_CALL(0x0004F120u, sub_0004F120); /* call 0x0004F120 */

loc_00038D87: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038D8Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038D8E: ;
    ecx = ZX8(MEM8(0x3321FC));
    edx = ZX8(MEM8(ecx + 0x2CCEA0));
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00038DAAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_00038DAA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00038DAD: ;
    PUSH32(esp, 0x2D6A00);
    PUSH32(esp, 0x00038DB7u); RECOMP_ABI_CALL(0x00038A10u, sub_00038A10); /* call 0x00038A10 */

loc_00038DB7: ;
    PUSH32(esp, 0x00038DBCu); RECOMP_ABI_CALL(0x00036D00u, sub_00036D00); /* call 0x00036D00 */

loc_00038DBC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038DC3u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038DC3: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, 0);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x00038DD4u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00038DD4: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x334880) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00038E8B; /* jne: not equal / not zero */

loc_00038DED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x258;

loc_00038DF6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038DFDu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038DFD: ;
    PUSH32(esp, 0x22D1E0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00038E0Bu); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00038E0B: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, 0);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x00038E1Cu); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00038E1C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00038E24u); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_00038E24: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038E56; /* je: equal / zero */

loc_00038E29: ;
    SET_LO8(eax, MEM8(0x3358A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038E39; /* je: equal / zero */

loc_00038E32: ;
    PUSH32(esp, 0x43400000);
    goto loc_00038E4E;

loc_00038E39: ;
    _fa = (uint32_t)(MEM8(0x3321FC)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321FC), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038E49; /* je: equal / zero */

loc_00038E42: ;
    PUSH32(esp, 0x43300000);
    goto loc_00038E4E;

loc_00038E49: ;
    PUSH32(esp, 0x43200000);

loc_00038E4E: ;
    PUSH32(esp, 0x00038E53u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_00038E53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00038E56: ;
    SET_LO8(eax, MEM8(0x6E9B48));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00038E8C; /* jne: not equal / not zero */

loc_00038E60: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x1F (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00038E68; /* jne: not equal / not zero */

loc_00038E65: ;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038E68: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038DF6; /* jne: not equal / not zero */

loc_00038E6C: ;
    PUSH32(esp, 0x00038E71u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00038E71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00038E77u); RECOMP_ABI_CALL(0x000389D0u, sub_000389D0); /* call 0x000389D0 */

loc_00038E77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x3358A9) = LO8(ebx);
    MEM8(0x3321FC) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_00038E8B: ;
    esp += 4; return; /* ret */

loc_00038E8C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00038E95u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_00038E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x335990) = 1;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00038EB0
 * Original: 0x00038EB0 - 0x0003906E (446 bytes, 111 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038EB0_gen(void)   /* mode-hook: shadowed by game_mode.c (scene launcher) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003904B; /* jne: not equal / not zero */

loc_00038EBF: ;
    PUSH32(esp, 0x338C0);
    PUSH32(esp, 2);
    MEM32(0x334880) = ebx;
    MEM32(0x335AD8) = ebx;
    MEM8(0x30C680) = 2;
    MEM8(0x30AE30) = 4;
    MEM8(0x30AE18) = 5;
    MEM8(0x3139CB) = LO8(ebx);
    MEM8(0x335980) = LO8(ebx);
    PUSH32(esp, 0x00038EF8u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00038EF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00038EFEu); RECOMP_ABI_CALL(0x00037E00u, sub_00037E00); /* call 0x00037E00 */

loc_00038EFE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038F05u); RECOMP_ABI_CALL(0x00037E00u, sub_00037E00); /* call 0x00037E00 */

loc_00038F05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30D9A0) = LO8(ebx);
    MEM8(0x30D9F8) = LO8(ebx);
    PUSH32(esp, 0x00038F19u); RECOMP_ABI_CALL(0x00038140u, sub_00038140); /* call 0x00038140 */

loc_00038F19: ;
    _fa = (uint32_t)(MEM8(0x316FF1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x316FF1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038F42; /* jne: not equal / not zero */

loc_00038F21: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038F28u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038F28: ;
    PUSH32(esp, 0x22D224);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00038F36u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00038F36: ;
    SET_LO8(eax, MEM8(0x316FF1));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038F21; /* je: equal / zero */

loc_00038F42: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038F49u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038F49: ;
    SET_LO8(eax, MEM8(0x316FF1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038F42; /* jne: not equal / not zero */

loc_00038F55: ;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0xE10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x349F68) = LO8(ebx);
    MEM8(0x349F69) = LO8(ebx);
    MEM8(0x314599) = LO8(ebx);

loc_00038F72: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038F79u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00038F79: ;
    PUSH32(esp, 0x22D1FC);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x00038F87u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00038F87: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00038F8Fu); RECOMP_ABI_CALL(0x000373C0u, sub_000373C0); /* call 0x000373C0 */

loc_00038F8F: ;
    _fa = (uint32_t)(MEM8(0x30AE18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038FA2; /* jne: not equal / not zero */

loc_00038F98: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038FA2; /* je: equal / zero */

loc_00038F9D: ;
    PUSH32(esp, 0x00038FA2u); RECOMP_ABI_CALL(0x00037350u, sub_00037350); /* call 0x00037350 */

loc_00038FA2: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x1F (8-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00038FB2; /* jne: not equal / not zero */

loc_00038FAF: ;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038FB2: ;
    _fa = (uint32_t)(MEM8(0x314599)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314599), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038FE2; /* jne: not equal / not zero */

loc_00038FBA: ;
    _fa = (uint32_t)(MEM32(0x6E9B48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E9B48), 0xFF30 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003904D; /* jne: not equal / not zero */

loc_00038FCA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00038FD0u); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_00038FD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00038FD7u); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_00038FD7: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038F72; /* jne: not equal / not zero */

loc_00038FE2: ;
    SET_LO8(eax, MEM8(0x30D9A1));
    SET_LO8(ecx, MEM8(0x30D9F9));
    MEM8(0x335940) = LO8(eax);
    MEM8(0x335941) = LO8(ecx);
    MEM8(0x30C3F4) = LO8(ebx);
    MEM8(0x30D9A3) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(ebx);
    MEM8(0x30F9BC) = LO8(ebx);
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30C680) = 2;
    MEM32(0x33488C) = ebx;
    MEM8(0x305532) = LO8(ebx);
    PUSH32(esp, 0x00039034u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00039034: ;
    PUSH32(esp, 0x00039039u); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00039039: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00039040u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039040: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039048u); RECOMP_ABI_CALL(0x0004D080u, sub_0004D080); /* call 0x0004D080 */

loc_00039048: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_0003904B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003904D: ;
    PUSH32(esp, 0x00039052u); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00039052: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00039059u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039059: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039061u); RECOMP_ABI_CALL(0x0004D080u, sub_0004D080); /* call 0x0004D080 */

loc_00039061: ;
    PUSH32(esp, 0x00039066u); RECOMP_ABI_CALL(0x00036BE0u, sub_00036BE0); /* call 0x00036BE0 */

loc_00039066: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039070
 * Original: 0x00039070 - 0x00039082 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039070_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039070: ;
    PUSH32(esp, 0x2D6A00);
    PUSH32(esp, 0x0003907Au); RECOMP_ABI_CALL(0x00038A10u, sub_00038A10); /* call 0x00038A10 */

loc_0003907A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036D00(); return; /* tail jmp 0x00036D00 */

}

/**
 * sub_00039090
 * Original: 0x00039090 - 0x00039101 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039090: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x22D23C);
    PUSH32(esp, 0x000390ACu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000390AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000390C3; /* je: equal / zero */

loc_000390B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000390B7u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000390B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000390C0u); RECOMP_ABI_CALL(0x000386C0u, sub_000386C0); /* call 0x000386C0 */

loc_000390C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000390C3: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000390FC; /* jne: not equal / not zero */

loc_000390CC: ;
    PUSH32(esp, 0x000390D1u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000390D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000390E8; /* je: equal / zero */

loc_000390D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000390DCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000390DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000390E4u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000390E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000390D5; /* jne: not equal / not zero */

loc_000390E8: ;
    PUSH32(esp, 0x000390EDu); RECOMP_ABI_CALL(0x00036BE0u, sub_00036BE0); /* call 0x00036BE0 */

loc_000390ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000390F4u); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_000390F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00039070(); return; /* tail jmp 0x00039070 */

loc_000390FC: ;
    g_seh_ebp = ebp; sub_0004CD60(); return; /* tail jmp 0x0004CD60 */

}

/**
 * sub_00039110
 * Original: 0x00039110 - 0x00039168 (88 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039110: ;
    _fa = (uint32_t)(MEM32(0x334848)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x334848), 0x78 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039136; /* jne: not equal / not zero */

loc_00039119: ;
    SET_LO16(eax, MEM16(0x30ED4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003912F; /* je: equal / zero */

loc_00039123: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 1 (8-bit) */
    MEM8(0x305532) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00039136; /* jne: not equal / not zero */

loc_0003912F: ;
    MEM8(0x305532) = 0x11;

loc_00039136: ;
    MEM32(0x334848) = MEM32(0x334848) - 1;
    _fa = (uint32_t)(MEM32(0x334848)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00039167; /* jne: not equal / not zero */

loc_0003913E: ;
    MEM8(0x30AE36) = 0;
    MEM8(0x30C680) = 0;
    PUSH32(esp, 0x00039151u); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00039151: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM8(0x316FF1) = 0;
    PUSH32(esp, 0x00039164u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039164: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039167: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00039170
 * Original: 0x00039170 - 0x0003928D (285 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039170: ;
    SET_LO8(eax, MEM8(0x30AE28));
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039227; /* jne: not equal / not zero */

loc_00039183: ;
    PUSH32(esp, 2);
    MEM8(0x30AE28) = 0;
    MEM8(0x30C3F4) = 0;
    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x30AE18) = 5;
    PUSH32(esp, 0x000391A5u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_000391A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000391ABu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000391AB: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039206; /* jne: not equal / not zero */

loc_000391B7: ;
    PUSH32(esp, 0x000391BCu); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_000391BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039216; /* je: equal / zero */

loc_000391C1: ;
    PUSH32(esp, 0x000391C6u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000391C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000391E2; /* je: equal / zero */

loc_000391CA: ;
    /* nop */

loc_000391D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000391D6u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000391D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000391DEu); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000391DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000391D0; /* jne: not equal / not zero */

loc_000391E2: ;
    PUSH32(esp, 0x000391E7u); RECOMP_ABI_CALL(0x00085700u, sub_00085700); /* call 0x00085700 */

loc_000391E7: ;
    PUSH32(esp, 0x924E0);
    PUSH32(esp, 2);
    MEM8(0x30C680) = 8;
    MEM8(0x316FF1) = 0;
    PUSH32(esp, 0x00039201u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039201: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00039206: ;
    SET_LO8(ebx, MEM8(0x30F91C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x335980) = LO8(eax);

loc_00039216: ;
    PUSH32(esp, 0x338C0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00039222u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039222: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00039227: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039256; /* jne: not equal / not zero */

loc_0003922F: ;
    SET_LO8(eax, MEM8(0x30D9F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003928B; /* jne: not equal / not zero */

loc_00039238: ;
    _fa = (uint32_t)(MEM8(0x30D8E9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D8E9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003928B; /* jne: not equal / not zero */

loc_00039240: ;
    MEM8(0x30D8E9) = 0;
    MEM8(0x30D9F8) = LO8(ebx);
    MEM8(0x30AE15) = LO8(ebx);
    PUSH32(esp, ebx);
    goto loc_00039273;

loc_00039256: ;
    _fa = (uint32_t)(MEM8(0x30AE16)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE16), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003928B; /* jne: not equal / not zero */

loc_0003925E: ;
    MEM8(0x30AE16) = 0;
    MEM8(0x30D9A0) = LO8(ebx);
    MEM8(0x30AE14) = LO8(ebx);
    PUSH32(esp, 0);

loc_00039273: ;
    MEM8(0x30AE30) = LO8(ebx);
    MEM32(0x3139D8) = 0;
    PUSH32(esp, 0x00039288u); RECOMP_ABI_CALL(0x00038220u, sub_00038220); /* call 0x00038220 */

loc_00039288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003928B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039290
 * Original: 0x00039290 - 0x000392C8 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039290: ;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x924E0);
    PUSH32(esp, 2);
    MEM8(0x30C680) = 8;
    MEM8(0x316FF1) = 0;
    MEM8(0x30AE30) = LO8(eax);
    MEM8(0x30AE16) = LO8(eax);
    MEM8(0x30D8E9) = LO8(eax);
    PUSH32(esp, 0x000392BBu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000392BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000392C3u); RECOMP_ABI_CALL(0x00038140u, sub_00038140); /* call 0x00038140 */

loc_000392C3: ;
    g_seh_ebp = ebp; sub_00085840(); return; /* tail jmp 0x00085840 */

}

/**
 * sub_000392D0
 * Original: 0x000392D0 - 0x000393D2 (258 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000392D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000392D0: ;
    SET_LO8(ecx, MEM8(0x30AE16));
    PUSH32(esp, ebx);
    eax = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003933C; /* jne: not equal / not zero */

loc_000392E2: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), LO8(ebx) (8-bit) */
    MEM8(0x30AE16) = LO8(ebx);
    MEM8(0x30D9A0) = LO8(eax);
    MEM8(0x30AE14) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0003930E; /* jne: not equal / not zero */

loc_000392FA: ;
    MEM8(0x30AE30) = LO8(ebx);
    MEM8(0x30EBF0) = LO8(ebx);
    MEM32(0x3139D4) = ebx;
    goto loc_0003931E;

loc_0003930E: ;
    MEM8(0x30AE30) = LO8(eax);
    MEM8(0x30EBF0) = LO8(eax);
    MEM32(0x3139D8) = ebx;

loc_0003931E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039324u); RECOMP_ABI_CALL(0x00038220u, sub_00038220); /* call 0x00038220 */

loc_00039324: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039396; /* je: equal / zero */

loc_00039330: ;
    SET_LO8(eax, MEM8(0x30ED4C));
    MEM8(0x30ED4D) = LO8(eax);
    goto loc_00039396;

loc_0003933C: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    MEM8(0x30D8E9) = LO8(ebx);
    MEM8(0x30D9F8) = LO8(eax);
    MEM8(0x30AE15) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00039367; /* jne: not equal / not zero */

loc_00039354: ;
    MEM8(0x30AE30) = LO8(ebx);
    MEM8(0x30EBF0) = LO8(eax);
    MEM32(0x3139D4) = ebx;
    goto loc_00039378;

loc_00039367: ;
    MEM8(0x30AE30) = LO8(eax);
    MEM8(0x30EBF0) = LO8(ebx);
    MEM32(0x3139D8) = ebx;

loc_00039378: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003937Eu); RECOMP_ABI_CALL(0x00038220u, sub_00038220); /* call 0x00038220 */

loc_0003937E: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039396; /* je: equal / zero */

loc_0003938A: ;
    SET_LO8(ecx, MEM8(0x30ED4D));
    MEM8(0x30ED4C) = LO8(ecx);

loc_00039396: ;
    edx = MEM32(0x307394);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000393A4u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_000393A4: ;
    eax = MEM32(0x3073C0);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000393B1u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_000393B1: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x000393C9u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000393C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00038140(); return; /* tail jmp 0x00038140 */

}

/**
 * sub_000393E0
 * Original: 0x000393E0 - 0x00039756 (886 bytes, 201 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000393E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000393E0: ;
    SET_LO8(eax, MEM8(0x30AE18));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000393FC; /* je: equal / zero */

loc_000393EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000393F2u); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_000393F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000393F9u); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_000393F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000393FC: ;
    _fa = (uint32_t)(MEM8(0x30C3F4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C3F4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039490; /* jne: not equal / not zero */

loc_00039409: ;
    _fa = (uint32_t)(MEM8(0x307328)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307328), 1 (8-bit) */
    MEM8(0x30C3F4) = LO8(ebx);
    MEM8(0x30D9A3) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(ebx);
    MEM8(0x30F9BC) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0003943E; /* jne: not equal / not zero */

loc_0003942A: ;
    PUSH32(esp, 0x0003942Fu); RECOMP_ABI_CALL(0x00038330u, sub_00038330); /* call 0x00038330 */

loc_0003942F: ;
    MEM8(0x307328) = LO8(ebx);
    MEM8(0x30C680) = 3;
    goto loc_0003947A;

loc_0003943E: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039455; /* jne: not equal / not zero */

loc_00039447: ;
    PUSH32(esp, 0x0003944Cu); RECOMP_ABI_CALL(0x00038330u, sub_00038330); /* call 0x00038330 */

loc_0003944C: ;
    MEM8(0x30C680) = 3;
    goto loc_0003947A;

loc_00039455: ;
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30C680) = 2;
    MEM32(0x335AC0) = ebx;
    MEM32(0x335AC8) = ebx;
    MEM32(0x33488C) = ebx;

loc_0003947A: ;
    PUSH32(esp, 0x0003947Fu); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_0003947F: ;
    PUSH32(esp, 0x00039484u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00039484: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003948Bu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_0003948B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00039490: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000397B4(); return; } /* je: equal / zero */

loc_0003949D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    SET_LO8(eax, MEM8(0x30D9A0));
    if (CMP_NE(_fa, _fb)) goto loc_0003955B; /* jne: not equal / not zero */

loc_000394AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000394DC; /* jne: not equal / not zero */

loc_000394AE: ;
    _fa = (uint32_t)(MEM8(0x30AE16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE16), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000397B4(); return; } /* jne: not equal / not zero */

loc_000394BB: ;
    PUSH32(esp, ebx);
    MEM8(0x30AE16) = LO8(ebx);
    MEM8(0x30AE30) = LO8(ebx);
    MEM8(0x30DAB6) = LO8(ebx);
    PUSH32(esp, 0x000394D3u); RECOMP_ABI_CALL(0x000381C0u, sub_000381C0); /* call 0x000381C0 */

loc_000394D3: ;
    MEM8(0x30AE14) = 1;
    goto loc_00039509;

loc_000394DC: ;
    _fa = (uint32_t)(MEM8(0x30D8E9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D8E9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000397B4(); return; } /* jne: not equal / not zero */

loc_000394E9: ;
    PUSH32(esp, 1);
    MEM8(0x30D8E9) = LO8(ebx);
    MEM8(0x30AE30) = LO8(ebx);
    MEM8(0x30DAB6) = LO8(ebx);
    PUSH32(esp, 0x00039502u); RECOMP_ABI_CALL(0x000381C0u, sub_000381C0); /* call 0x000381C0 */

loc_00039502: ;
    MEM8(0x30AE15) = 1;

loc_00039509: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    MEM32(0x3139D4) = ebx;
    MEM16(0x30DAB8) = LO16(ebx);
    MEM8(0x30D9A3) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(ebx);
    PUSH32(esp, 0x00039531u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_00039531: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039539u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00039539: ;
    PUSH32(esp, 0x0003953Eu); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_0003953E: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x00039556u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039556: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003955B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = 6;
    if (CMP_NE(_fa, _fb)) goto loc_000395DD; /* jne: not equal / not zero */

loc_00039565: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003967D; /* jne: not equal / not zero */

loc_00039571: ;
    _fa = (uint32_t)(MEM8(0x30D8E9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D8E9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039617; /* jne: not equal / not zero */

loc_0003957E: ;
    MEM8(0x30D8E9) = LO8(ebx);
    MEM8(0x30D9F8) = 1;
    MEM8(0x30F9BC) = 2;
    MEM8(0x30AE30) = 1;
    MEM8(0x30DAB6) = LO8(ebx);
    MEM8(0x30AE15) = 1;
    MEM32(0x3139D8) = ebx;
    PUSH32(esp, 1);

loc_000395AE: ;
    PUSH32(esp, 0x000395B3u); RECOMP_ABI_CALL(0x00038220u, sub_00038220); /* call 0x00038220 */

loc_000395B3: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039625; /* je: equal / zero */

loc_000395BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039625; /* je: equal / zero */

loc_000395C3: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000395CAu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_000395CA: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000395D1u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_000395D1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000395D8u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_000395D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00039658;

loc_000395DD: ;
    _fa = (uint32_t)(MEM8(0x30AE16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE16), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039617; /* jne: not equal / not zero */

loc_000395E6: ;
    MEM8(0x30AE16) = LO8(ebx);
    MEM8(0x30D9A0) = 1;
    MEM8(0x30F9BC) = 1;
    MEM8(0x30AE30) = 1;
    MEM8(0x30DAB6) = LO8(ebx);
    MEM8(0x30AE14) = 1;
    MEM32(0x3139D8) = ebx;
    PUSH32(esp, ebx);
    goto loc_000395AE;

loc_00039617: ;
    MEM8(0x30F9BC) = LO8(ebx);
    MEM8(0x30AE30) = LO8(ebx);
    goto loc_0003967D;

loc_00039625: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003962Cu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003962C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00039633u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039633: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039639u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039639: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00039640u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039640: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00039647u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039647: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0003964Eu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003964E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00039655u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039655: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039658: ;
    SET_LO8(ecx, MEM8(0x30554E));
    SET_LO8(eax, 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039673; /* je: equal / zero */

loc_00039664: ;
    PUSH32(esp, 1);
    MEM8(0x30554E) = LO8(eax);
    PUSH32(esp, 0x00039670u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039670: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039673: ;
    MEM32(0x334848) = 0x78;

loc_0003967D: ;
    _fa = (uint32_t)(MEM8(0x3358AA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3358AA), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000397B3(); return; } /* je: equal / zero */

loc_00039689: ;
    MEM8(0x30D9A3) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(ebx);
    PUSH32(esp, 0x0003969Au); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_0003969A: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00039792(); return; } /* jne: not equal / not zero */

loc_000396A7: ;
    PUSH32(esp, 0x000396ACu); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_000396AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00039790(); return; } /* ja: above (unsigned >) */

loc_000396B5: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x397B8)); return; /* indirect tail jmp */

    PUSH32(esp, 0x000396C1u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000396C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000396D8; /* je: equal / zero */

loc_000396C5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000396CCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000396CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000396D4u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000396D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000396C5; /* jne: not equal / not zero */

loc_000396D8: ;
    PUSH32(esp, 0x000396DDu); RECOMP_ABI_CALL(0x00085700u, sub_00085700); /* call 0x00085700 */

loc_000396DD: ;
    MEM8(0x30C680) = 8;
    PUSH32(esp, 0x924E0);
    g_seh_ebp = ebp; sub_0003979D(); return; /* tail jmp 0x0003979D */

    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x316FF1) = LO8(ebx);
    MEM32(0x30F9B4) = esi;
    MEM32(0x30F9B8) = esi;
    PUSH32(esp, 0x0003970Bu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003970B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00039760(); return; } /* je: equal / zero */

loc_00039710: ;
    PUSH32(esp, 0x00039715u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00039715: ;
    esi = eax;
    PUSH32(esp, 0x0003971Cu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003971C: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_0003974C; /* je: equal / zero */

loc_00039720: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM32(0x30F9B4) = 7;
    MEM32(0x30F9B8) = 8;
    PUSH32(esp, 0x00039740u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003974C: ;
    MEM32(0x30F9B8) = 7;

}

/**
 * sub_000396BC
 * Original: 0x000396BC - 0x000397B6 (250 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000396BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000396BC: ;
    PUSH32(esp, 0x000396C1u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000396C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000396D8; /* je: equal / zero */

loc_000396C5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000396CCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000396CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000396D4u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000396D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000396C5; /* jne: not equal / not zero */

loc_000396D8: ;
    PUSH32(esp, 0x000396DDu); RECOMP_ABI_CALL(0x00085700u, sub_00085700); /* call 0x00085700 */

loc_000396DD: ;
    MEM8(0x30C680) = 8;
    PUSH32(esp, 0x924E0);
    goto loc_0003979D;

loc_0003979D: ;
    PUSH32(esp, 2);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x000397AAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000397AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000396EE
 * Original: 0x000396EE - 0x00039778 (138 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000396EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000396EE: ;
    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x316FF1) = LO8(ebx);
    MEM32(0x30F9B4) = esi;
    MEM32(0x30F9B8) = esi;
    PUSH32(esp, 0x0003970Bu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003970B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039760; /* je: equal / zero */

loc_00039710: ;
    PUSH32(esp, 0x00039715u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00039715: ;
    esi = eax;
    PUSH32(esp, 0x0003971Cu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003971C: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_0003974C; /* je: equal / zero */

loc_00039720: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM32(0x30F9B4) = 7;
    MEM32(0x30F9B8) = 8;
    PUSH32(esp, 0x00039740u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003974C: ;
    MEM32(0x30F9B8) = 7;
    MEM32(0x30F9B4) = 8;

loc_00039760: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003976Cu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003976C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039751
 * Original: 0x00039751 - 0x00039760 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039751(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039751: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + LO8(eax));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30F9B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30F9B4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00039760(); return; /* fallthrough 0x00039760 */

}

/**
 * sub_00039760
 * Original: 0x00039760 - 0x00039778 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039760: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003976Cu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003976C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039778
 * Original: 0x00039778 - 0x000397B6 (62 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039778(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039778: ;
    PUSH32(esp, 0x0003977Du); RECOMP_ABI_CALL(0x00085600u, sub_00085600); /* call 0x00085600 */

loc_0003977D: ;
    MEM8(0x30C680) = 8;
    PUSH32(esp, 0x924E0);
    goto loc_0003979D;

loc_0003979D: ;
    PUSH32(esp, 2);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x000397AAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000397AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039790
 * Original: 0x00039790 - 0x00039792 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039790(void)
{

loc_00039790: ;
    goto loc_00039790;

}

/**
 * sub_00039792
 * Original: 0x00039792 - 0x000397D0 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039792(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039792: ;
    MEM8(0x30C680) = LO8(ebx);
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x000397AAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000397AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00039755(); return; } /* js: sign (negative) */

loc_000397BE: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xbox_PortOut((edx & 0xFFFFu), (uint32_t)(LO8(eax)), 1); /* out dx, al */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000397D0(); return; /* fallthrough 0x000397D0 */

}

/**
 * sub_0003979D
 * Original: 0x0003979D - 0x000397B6 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003979D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003979D: ;
    PUSH32(esp, 2);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x000397AAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000397AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3358AA) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000397B3
 * Original: 0x000397B3 - 0x000397D0 (29 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000397B3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00039755(); return; } /* js: sign (negative) */

loc_000397BE: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xbox_PortOut((edx & 0xFFFFu), (uint32_t)(LO8(eax)), 1); /* out dx, al */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000397D0(); return; /* fallthrough 0x000397D0 */

}

/**
 * sub_000397B4
 * Original: 0x000397B4 - 0x000397D0 (28 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000397B4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00039755(); return; } /* js: sign (negative) */

loc_000397BE: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xbox_PortOut((edx & 0xFFFFu), (uint32_t)(LO8(eax)), 1); /* out dx, al */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000397D0(); return; /* fallthrough 0x000397D0 */

}

/**
 * sub_000397D0
 * Original: 0x000397D0 - 0x000398F5 (293 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000397D0: ;
    eax = MEM32(0x335984);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039841; /* je: equal / zero */

loc_000397D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x335984) = eax;
    if ((_fa != 0)) goto loc_00039895; /* jne: not equal / not zero */

loc_000397E5: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0xFFFFFF01u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000397F3u); RECOMP_ABI_CALL(0x00037A70u, sub_00037A70); /* call 0x00037A70 */

loc_000397F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000397FBu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_000397FB: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 2 (8-bit) */
    MEM32(0x33488C) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_00039817; /* jg: greater (signed >) */

loc_0003980E: ;
    MEM8(0x30C680) = 7;
    goto loc_0003982C;

loc_00039817: ;
    MEM8(0x30C680) = 2;
    MEM8(0x30ED4C) = 0;
    MEM8(0x30ED4D) = 0;

loc_0003982C: ;
    MEM32(0x335AC0) = 0;
    MEM32(0x335AC8) = 0;
    esp += 4; return; /* ret */

loc_00039841: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00039896; /* jne: not equal / not zero */

loc_0003984E: ;
    SET_LO8(eax, MEM8(0x335AE0));
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM8(0x30EDC8) = LO8(eax);
    PUSH32(esp, 0x00039864u); RECOMP_ABI_CALL(0x00037CF0u, sub_00037CF0); /* call 0x00037CF0 */

loc_00039864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000398DC; /* jl: less (signed <) */

loc_0003986C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    MEM32(0x335984) = 0xB4;
    if (CMP_EQ(_fa, _fb)) goto loc_00039882; /* je: equal / zero */

loc_0003987B: ;
    MEM8(0x305532) = 3;

loc_00039882: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFF01u);
    PUSH32(esp, 0x00039890u); RECOMP_ABI_CALL(0x00037A70u, sub_00037A70); /* call 0x00037A70 */

loc_00039890: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00039895: ;
    esp += 4; return; /* ret */

loc_00039896: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000398BD; /* jne: not equal / not zero */

loc_0003989B: ;
    SET_LO8(edx, MEM8(0x335AE0));
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM8(0x30EDC8) = LO8(edx);
    PUSH32(esp, 0x000398B3u); RECOMP_ABI_CALL(0x00037D40u, sub_00037D40); /* call 0x00037D40 */

loc_000398B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003986C; /* jge: greater or equal (signed >=) */

loc_000398BB: ;
    goto loc_000398DC;

loc_000398BD: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000398C7u); RECOMP_ABI_CALL(0x00037C90u, sub_00037C90); /* call 0x00037C90 */

loc_000398C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000398DC; /* jl: less (signed <) */

loc_000398CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000398D5u); RECOMP_ABI_CALL(0x00037D90u, sub_00037D90); /* call 0x00037D90 */

loc_000398D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003986C; /* je: equal / zero */

loc_000398DC: ;
    PUSH32(esp, 0x4C110);
    PUSH32(esp, 2);
    MEM8(0x30C680) = 4;
    PUSH32(esp, 0x000398EFu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000398EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039900
 * Original: 0x00039900 - 0x00039B6F (623 bytes, 160 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039900_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
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

loc_00039900: ;
    fp_push((double)SMEM32(0x8FE55C)); /* fild */
    SET_LO16(eax, MEM16(0x8FE55C));
    SET_LO16(ecx, MEM16(0x8FE5FC));
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(0x8FE5FC)); /* fidiv dword ptr [0x8fe5fc] */
    MEM16(0x30AE34) = LO16(eax);
    MEM16(0x30F9C0) = LO16(ecx);
    MEMF(0x30AA60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00039932u); RECOMP_ABI_CALL(0x00038540u, sub_00038540); /* call 0x00038540 */

loc_00039932: ;
    PUSH32(esp, 0x00039937u); RECOMP_ABI_CALL(0x0005DA70u, sub_0005DA70); /* call 0x0005DA70 */

loc_00039937: ;
    PUSH32(esp, 0x368F0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00039943u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039943: ;
    PUSH32(esp, 0x283F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003994Fu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003994F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039956u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039956: ;
    edx = MEM32(0x33598C);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x22D2CC);
    PUSH32(esp, 0x0003996Au); RECOMP_ABI_CALL(0x0009C1B0u, sub_0009C1B0); /* call 0x0009C1B0 */

loc_0003996A: ;
    PUSH32(esp, 0x0003996Fu); RECOMP_ABI_CALL(0x0009F800u, sub_0009F800); /* call 0x0009F800 */

loc_0003996F: ;
    eax = MEM32(0x334870);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003997Cu); RECOMP_ABI_CALL(0x0009C150u, sub_0009C150); /* call 0x0009C150 */

loc_0003997C: ;
    PUSH32(esp, 0x00039981u); RECOMP_ABI_CALL(0x0009F870u, sub_0009F870); /* call 0x0009F870 */

loc_00039981: ;
    ecx = MEM32(0x30EC08);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D2C0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00039998u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039998: ;
    PUSH32(esp, 0x0003999Du); RECOMP_ABI_CALL(0x0002A070u, sub_0002A070); /* call 0x0002A070 */

loc_0003999D: ;
    PUSH32(esp, 0x292B0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000399A9u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000399A9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x000399B3u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000399B3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x22D2B4);
    MEM8(0x30AABA) = LO8(ebx);
    PUSH32(esp, 0x000399C9u); RECOMP_ABI_CALL(0x00035B60u, sub_00035B60); /* call 0x00035B60 */

loc_000399C9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x22D29C);
    PUSH32(esp, 0x000399D9u); RECOMP_ABI_CALL(0x00035B60u, sub_00035B60); /* call 0x00035B60 */

loc_000399D9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x000399F4u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_000399F4: ;
    PUSH32(esp, ebx);
    MEM32(0x335AD4) = eax;
    PUSH32(esp, 0x000399FFu); RECOMP_ABI_CALL(0x00160530u, sub_00160530); /* call 0x00160530 */

loc_000399FF: ;
    PUSH32(esp, ebx);
    MEM32(0x335ADC) = eax;
    PUSH32(esp, 0x00039A0Au); RECOMP_ABI_CALL(0x000389D0u, sub_000389D0); /* call 0x000389D0 */

loc_00039A0A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039A10u); RECOMP_ABI_CALL(0x000684E0u, sub_000684E0); /* call 0x000684E0 */

loc_00039A10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039A17u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039A17: ;
    PUSH32(esp, 0x00039A1Cu); RECOMP_ABI_CALL(0x0004F0A0u, sub_0004F0A0); /* call 0x0004F0A0 */

loc_00039A1C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x22D290);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039A29u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039A29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x22D280);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00039A37u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039A37: ;
    edx = MEM32(0x30EC04);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D274);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00039A4Eu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039A4E: ;
    PUSH32(esp, 0x00039A53u); RECOMP_ABI_CALL(0x00024230u, sub_00024230); /* call 0x00024230 */

loc_00039A53: ;
    eax = MEM32(0x30EC18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D268);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00039A69u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039A69: ;
    ecx = MEM32(0x30EC18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00039A78u); RECOMP_ABI_CALL(0x00028650u, sub_00028650); /* call 0x00028650 */

loc_00039A78: ;
    edx = MEM32(0x30EC00);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D260);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00039A8Fu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039A8F: ;
    eax = MEM32(0x30EC00);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x334834);
    PUSH32(esp, 0x00039AA1u); RECOMP_ABI_CALL(0x0005E9D0u, sub_0005E9D0); /* call 0x0005E9D0 */

loc_00039AA1: ;
    ecx = MEM32(0x30EC0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D254);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00039AB8u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039AB8: ;
    edx = MEM32(0x30EC0C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x00039ACBu); RECOMP_ABI_CALL(0x0005E9D0u, sub_0005E9D0); /* call 0x0005E9D0 */

loc_00039ACB: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3348A8);
    PUSH32(esp, 0x22D248);
    PUSH32(esp, 0x80);
    MEM32(0x334880) = ebx;
    MEM32(0x335AD8) = ebx;
    MEM32(0x335990) = ebx;
    MEM32(0x335994) = ebx;
    MEM8(0x3358A9) = LO8(ebx);
    MEM8(0x3321FC) = 0xFF;
    MEM8(0x3358A8) = 0xFF;
    PUSH32(esp, 0x00039B0Fu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00039B0F: ;
    PUSH32(esp, 0x00039B14u); RECOMP_ABI_CALL(0x0004D610u, sub_0004D610); /* call 0x0004D610 */

loc_00039B14: ;
    PUSH32(esp, 0x00039B19u); RECOMP_ABI_CALL(0x000A7AA0u, sub_000A7AA0); /* call 0x000A7AA0 */

loc_00039B19: ;
    PUSH32(esp, 0x00039B1Eu); RECOMP_ABI_CALL(0x0004D7C0u, sub_0004D7C0); /* call 0x0004D7C0 */

loc_00039B1E: ;
    eax = (uint32_t)(int32_t)SMEM8(0x305599);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039B2Bu); RECOMP_ABI_CALL(0x0004F0E0u, sub_0004F0E0); /* call 0x0004F0E0 */

loc_00039B2B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x3055B4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3055B4), LO16(ebx) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x334888) = LO8(ecx);
    PUSH32(esp, 0x00039B45u); RECOMP_ABI_CALL(0x00037F90u, sub_00037F90); /* call 0x00037F90 */

loc_00039B45: ;
    PUSH32(esp, 0x00039B4Au); RECOMP_ABI_CALL(0x00038140u, sub_00038140); /* call 0x00038140 */

loc_00039B4A: ;
    PUSH32(esp, 0x00039B4Fu); RECOMP_ABI_CALL(0x0004D0B0u, sub_0004D0B0); /* call 0x0004D0B0 */

loc_00039B4F: ;
    eax = 6;
    MEM32(0x30F9B4) = eax;
    MEM32(0x30F9B8) = eax;
    PUSH32(esp, 0x00039B63u); RECOMP_ABI_CALL(0x00038680u, sub_00038680); /* call 0x00038680 */

loc_00039B63: ;
    PUSH32(esp, 0x00039B68u); RECOMP_ABI_CALL(0x0007E370u, sub_0007E370); /* call 0x0007E370 */

loc_00039B68: ;
    MEM32(0x334898) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00039B70
 * Original: 0x00039B70 - 0x0003A2B5 (1861 bytes, 462 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039B70: ;
    SET_LO8(eax, MEM8(0x335AE0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039B83; /* je: equal / zero */

loc_00039B7C: ;
    MEM8(0x30AE16) = 1;

loc_00039B83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039B8E; /* je: equal / zero */

loc_00039B87: ;
    MEM8(0x30D8E9) = 1;

loc_00039B8E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039B96u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039B96: ;
    PUSH32(esp, 0x00039B9Bu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00039B9B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039BA3u); RECOMP_ABI_CALL(0x000389D0u, sub_000389D0); /* call 0x000389D0 */

loc_00039BA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039BABu); RECOMP_ABI_CALL(0x00038260u, sub_00038260); /* call 0x00038260 */

loc_00039BAB: ;
    PUSH32(esp, 0x00039BB0u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00039BB0: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039BC0; /* je: equal / zero */

loc_00039BB9: ;
    PUSH32(esp, 0x00039BBEu); RECOMP_ABI_CALL(0x000392D0u, sub_000392D0); /* call 0x000392D0 */

loc_00039BBE: ;
    goto loc_00039BC5;

loc_00039BC0: ;
    PUSH32(esp, 0x00039BC5u); RECOMP_ABI_CALL(0x00039290u, sub_00039290); /* call 0x00039290 */

loc_00039BC5: ;
    PUSH32(esp, 0x00039BCAu); RECOMP_ABI_CALL(0x00038680u, sub_00038680); /* call 0x00038680 */

loc_00039BCA: ;
    _fa = (uint32_t)(MEM8(0x33484C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33484C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A284; /* jne: not equal / not zero */

loc_00039BD6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 6;
    /* nop */

loc_00039BE0: ;
    _fa = (uint32_t)(MEM8(0x316FF1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x316FF1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039BED; /* jne: not equal / not zero */

loc_00039BE8: ;
    PUSH32(esp, 0x00039BEDu); RECOMP_ABI_CALL(0x00037740u, sub_00037740); /* call 0x00037740 */

loc_00039BED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039BF4u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039BF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039BFCu); RECOMP_ABI_CALL(0x00037970u, sub_00037970); /* call 0x00037970 */

loc_00039BFC: ;
    PUSH32(esp, 0x00039C01u); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_00039C01: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039EA8; /* jne: not equal / not zero */

loc_00039C0E: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039D2C; /* je: equal / zero */

loc_00039C1B: ;
    PUSH32(esp, 0x00039C20u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00039C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00039C31; /* js: sign (negative) */

loc_00039C24: ;
    PUSH32(esp, 0x00039C29u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00039C29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039D2C; /* je: equal / zero */

loc_00039C31: ;
    PUSH32(esp, 0x00039C36u); RECOMP_ABI_CALL(0x00032640u, sub_00032640); /* call 0x00032640 */

loc_00039C36: ;
    esi = 1;
    goto loc_00039C40;

    /* nop */

loc_00039C40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C59: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C5E: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039C6B; /* jne: not equal / not zero */

loc_00039C66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039C74; /* je: equal / zero */

loc_00039C6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039C71u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039C71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039C74: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00039C40; /* jb: below (unsigned <) */

loc_00039C7A: ;
    eax = MEM32(0x33489C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6E9A90), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039D2C; /* je: equal / zero */

loc_00039C8F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039C95u); RECOMP_ABI_CALL(0x00086710u, sub_00086710); /* call 0x00086710 */

loc_00039C95: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039CAF; /* jne: not equal / not zero */

loc_00039CA1: ;
    _fa = (uint32_t)(MEM8(0x30AE28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE28), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039CAF; /* je: equal / zero */

loc_00039CAA: ;
    PUSH32(esp, 0x00039CAFu); RECOMP_ABI_CALL(0x00024AB0u, sub_00024AB0); /* call 0x00024AB0 */

loc_00039CAF: ;
    _fa = (uint32_t)(MEM32(0x91E27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E27C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039CBD; /* jne: not equal / not zero */

loc_00039CB8: ;
    PUSH32(esp, 0x00039CBDu); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_00039CBD: ;
    PUSH32(esp, 0x00039CC2u); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_00039CC2: ;
    PUSH32(esp, 0x00039CC7u); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00039CC7: ;
    PUSH32(esp, 0x00039CCCu); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_00039CCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039CE3; /* je: equal / zero */

loc_00039CD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039CD7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039CD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039CDFu); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_00039CDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039CD0; /* jne: not equal / not zero */

loc_00039CE3: ;
    PUSH32(esp, 0x00039CE8u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00039CE8: ;
    MEM32(0x30F9B8) = ebp;
    MEM32(0x30F9B4) = ebp;
    PUSH32(esp, 0x00039CF9u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00039CF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00039D04; /* jns: not sign (positive) */

loc_00039CFD: ;
    PUSH32(esp, 0x00039D02u); RECOMP_ABI_CALL(0x00039290u, sub_00039290); /* call 0x00039290 */

loc_00039D02: ;
    goto loc_00039D2C;

loc_00039D04: ;
    PUSH32(esp, 0x00039D09u); RECOMP_ABI_CALL(0x00085670u, sub_00085670); /* call 0x00085670 */

loc_00039D09: ;
    PUSH32(esp, 0x924E0);
    PUSH32(esp, 2);
    MEM8(0x30C680) = 8;
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x00039D22u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039D22: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039D29u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039D29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039D2C: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 8 (8-bit) */
    esi = MEM32(0x33489C);
    if (CMP_EQ(_fa, _fb)) goto loc_00039DE3; /* je: equal / zero */

loc_00039D3F: ;
    PUSH32(esp, 0x00039D44u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00039D44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039DE3; /* je: equal / zero */

loc_00039D4C: ;
    PUSH32(esp, 0x00039D51u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00039D51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039D7C; /* jne: not equal / not zero */

loc_00039D56: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039D6C; /* je: equal / zero */

loc_00039D5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039D7C; /* jne: not equal / not zero */

loc_00039D63: ;
    _fa = (uint32_t)(MEM8(0x305B15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x305B15), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039D7C; /* jne: not equal / not zero */

loc_00039D6C: ;
    PUSH32(esp, 0x00039D71u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00039D71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00039D7C; /* js: sign (negative) */

loc_00039D75: ;
    eax = 1;
    goto loc_00039D7E;

loc_00039D7C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00039D7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039D84u); RECOMP_ABI_CALL(0x00086710u, sub_00086710); /* call 0x00086710 */

loc_00039D84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00039DEC; /* ja: above (unsigned >) */

loc_00039D8D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3A2B8); /* switch: 13 entries, 11 targets */
    if (_jt == 0x00039D94u) goto loc_00039D94;
    if (_jt == 0x00039D98u) goto loc_00039D98;
    if (_jt == 0x00039EBFu) goto loc_00039EBF;
    if (_jt == 0x00039EF7u) goto loc_00039EF7;
    if (_jt == 0x00039F79u) goto loc_00039F79;
    if (_jt == 0x00039F9Fu) goto loc_00039F9F;
    if (_jt == 0x00039FBDu) goto loc_00039FBD;
    if (_jt == 0x0003A05Fu) goto loc_0003A05F;
    if (_jt == 0x0003A070u) goto loc_0003A070;
    if (_jt == 0x0003A1F7u) goto loc_0003A1F7;
    if (_jt == 0x0003A271u) goto loc_0003A271;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00039D94: ;
    esi = ebp;
    goto loc_00039DEC;

loc_00039D98: ;
    PUSH32(esp, 0x00039D9Du); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00039D9D: ;
    PUSH32(esp, 0x00039DA2u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_00039DA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039DB9; /* je: equal / zero */

loc_00039DA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039DADu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039DAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039DB5u); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_00039DB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039DA6; /* jne: not equal / not zero */

loc_00039DB9: ;
    PUSH32(esp, 0x00039DBEu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00039DBE: ;
    PUSH32(esp, 0x924E0);
    PUSH32(esp, 2);
    MEM8(0x30C680) = 8;
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x00039DD7u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00039DD7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039DDEu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039DDE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00039DEC;

loc_00039DE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039DE9u); RECOMP_ABI_CALL(0x00086710u, sub_00086710); /* call 0x00086710 */

loc_00039DE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039DEC: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(0x6E9A90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6E9A90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039DFBu); RECOMP_ABI_CALL(0x00075FF0u, sub_00075FF0); /* call 0x00075FF0 */

loc_00039DFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039E03u); RECOMP_ABI_CALL(0x000707F0u, sub_000707F0); /* call 0x000707F0 */

loc_00039E03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, MEM8(0x30AE36));
    if (CMP_NE(_fa, _fb)) goto loc_00039E54; /* jne: not equal / not zero */

loc_00039E0D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039EA8; /* jne: not equal / not zero */

loc_00039E15: ;
    esi = 1;
    /* nop */

loc_00039E20: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E45; /* je: equal / zero */

loc_00039E25: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E45; /* je: equal / zero */

loc_00039E2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E45; /* je: equal / zero */

loc_00039E2F: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039E3C; /* jne: not equal / not zero */

loc_00039E37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E45; /* je: equal / zero */

loc_00039E3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039E42u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00039E42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039E45: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00039E20; /* jb: below (unsigned <) */

loc_00039E4B: ;
    MEM8(0x30AE36) = 1;
    goto loc_00039EA8;

loc_00039E54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E91; /* je: equal / zero */

loc_00039E58: ;
    esi = 1;
    /* nop */

loc_00039E60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E85; /* je: equal / zero */

loc_00039E65: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E85; /* je: equal / zero */

loc_00039E6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E85; /* je: equal / zero */

loc_00039E6F: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039E7C; /* jne: not equal / not zero */

loc_00039E77: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039E85; /* je: equal / zero */

loc_00039E7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039E82u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00039E82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039E85: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00039E60; /* jb: below (unsigned <) */

loc_00039E8B: ;
    MEM8(0x30AE36) = LO8(ebx);

loc_00039E91: ;
    PUSH32(esp, 0x00039E96u); RECOMP_ABI_CALL(0x00070820u, sub_00070820); /* call 0x00070820 */

loc_00039E96: ;
    esi = eax;
    PUSH32(esp, 0x00039E9Du); RECOMP_ABI_CALL(0x00070800u, sub_00070800); /* call 0x00070800 */

loc_00039E9D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039EA5u); RECOMP_ABI_CALL(0x00150383u, sub_00150383); /* call 0x00150383 */

loc_00039EA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039EA8: ;
    eax = ZX8(MEM8(0x30C680));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003A271; /* ja: above (unsigned >) */

loc_00039EB8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3A2C8); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00039EBFu) goto loc_00039EBF;
    if (_jt == 0x00039EF7u) goto loc_00039EF7;
    if (_jt == 0x00039F79u) goto loc_00039F79;
    if (_jt == 0x00039F9Fu) goto loc_00039F9F;
    if (_jt == 0x00039FBDu) goto loc_00039FBD;
    if (_jt == 0x0003A05Fu) goto loc_0003A05F;
    if (_jt == 0x0003A070u) goto loc_0003A070;
    if (_jt == 0x0003A1F7u) goto loc_0003A1F7;
    if (_jt == 0x0003A271u) goto loc_0003A271;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00039EBF: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039EED; /* jne: not equal / not zero */

loc_00039EC8: ;
    ecx = MEM32(0x33489C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039EED; /* je: equal / zero */

loc_00039EDC: ;
    PUSH32(esp, 0x00039EE1u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00039EE1: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039EEAu); RECOMP_ABI_CALL(0x0007E690u, sub_0007E690); /* call 0x0007E690 */

loc_00039EEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039EED: ;
    PUSH32(esp, 0x00039EF2u); RECOMP_ABI_CALL(0x00039170u, sub_00039170); /* call 0x00039170 */

loc_00039EF2: ;
    goto loc_0003A271;

loc_00039EF7: ;
    _fa = (uint32_t)(MEM32(0x334848)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x334848), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039F16; /* je: equal / zero */

loc_00039EFF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039F05u); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_00039F05: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039F0Cu); RECOMP_ABI_CALL(0x0006FDD0u, sub_0006FDD0); /* call 0x0006FDD0 */

loc_00039F0C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00039F14u); RECOMP_ABI_CALL(0x00039110u, sub_00039110); /* call 0x00039110 */

loc_00039F14: ;
    goto loc_00039F60;

loc_00039F16: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039F24; /* jne: not equal / not zero */

loc_00039F1F: ;
    PUSH32(esp, 0x00039F24u); RECOMP_ABI_CALL(0x0003E160u, sub_0003E160); /* call 0x0003E160 */

loc_00039F24: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039F5B; /* jne: not equal / not zero */

loc_00039F2D: ;
    PUSH32(esp, 0x00039F32u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00039F32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039F5B; /* jne: not equal / not zero */

loc_00039F37: ;
    edx = MEM32(0x33489C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    SET_LO8(eax, MEM8(edx + 0x6E9A98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00039F5B; /* jns: not sign (positive) */

loc_00039F4A: ;
    PUSH32(esp, 0x00039F4Fu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00039F4F: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039F58u); RECOMP_ABI_CALL(0x0007E690u, sub_0007E690); /* call 0x0007E690 */

loc_00039F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039F5B: ;
    PUSH32(esp, 0x00039F60u); RECOMP_ABI_CALL(0x000393E0u, sub_000393E0); /* call 0x000393E0 */

loc_00039F60: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A271; /* jne: not equal / not zero */

loc_00039F6D: ;
    MEM8(0x33484C) = 1;
    goto loc_0003A271;

loc_00039F79: ;
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x00039F83u); RECOMP_ABI_CALL(0x000397D0u, sub_000397D0); /* call 0x000397D0 */

loc_00039F83: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A271; /* jne: not equal / not zero */

loc_00039F93: ;
    MEM8(0x33484C) = 1;
    goto loc_0003A271;

loc_00039F9F: ;
    PUSH32(esp, 0x00039FA4u); RECOMP_ABI_CALL(0x00037C20u, sub_00037C20); /* call 0x00037C20 */

loc_00039FA4: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A271; /* jne: not equal / not zero */

loc_00039FB1: ;
    MEM8(0x33484C) = 1;
    goto loc_0003A271;

loc_00039FBD: ;
    _fa = (uint32_t)(MEM8(0x30554E)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30554E), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039FD7; /* je: equal / zero */

loc_00039FC6: ;
    PUSH32(esp, 1);
    MEM8(0x30554E) = 0xFF;
    PUSH32(esp, 0x00039FD4u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039FD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039FD7: ;
    MEM32(0x30F9B4) = ebp;
    MEM32(0x30F9B8) = ebp;
    PUSH32(esp, 0x00039FE8u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00039FE8: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00039FF0u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00039FF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00039FF7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00039FF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30C3F4) = LO8(ebx);
    MEM8(0x30AE30) = 2;
    MEM8(0x30D9A3) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(ebx);
    MEM8(0x3321F4) = 0xFF;
    MEM8(0x3321F5) = 0xFF;
    MEM8(0x3322CC) = 0xFF;
    MEM8(0x3322CD) = 0xFF;
    MEM8(0x332204) = 0xFF;
    MEM8(0x307328) = LO8(ebx);
    MEM8(0x30F9BC) = LO8(ebx);
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    PUSH32(esp, 0x0003A053u); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_0003A053: ;
    MEM8(0x30C680) = 6;
    goto loc_0003A271;

loc_0003A05F: ;
    PUSH32(esp, 0x0003A064u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003A064: ;
    MEM8(0x33484C) = 1;
    goto loc_0003A271;

loc_0003A070: ;
    SET_LO8(eax, MEM8(0x30EDC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A08B; /* jne: not equal / not zero */

loc_0003A079: ;
    _fa = (uint32_t)(MEM8(0x30F924)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F924), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A0A1; /* jne: not equal / not zero */

loc_0003A082: ;
    MEM8(0x335AD0) = 2;
    goto loc_0003A0B3;

loc_0003A08B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A0A1; /* jne: not equal / not zero */

loc_0003A08F: ;
    _fa = (uint32_t)(MEM8(0x30C3E4)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C3E4), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A0A1; /* jne: not equal / not zero */

loc_0003A098: ;
    MEM8(0x335AD1) = 2;
    goto loc_0003A0B3;

loc_0003A0A1: ;
    _fa = (uint32_t)(MEM8(0x306320)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x306320), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A0B3; /* jne: not equal / not zero */

loc_0003A0A9: ;
    ecx = ZX8(LO8(eax));
    MEM8(ecx + 0x335AD0) = 2;

loc_0003A0B3: ;
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM8(edx + 0x335AD0)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x335AD0), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A0CC; /* je: equal / zero */

loc_0003A0BF: ;
    PUSH32(esp, 0x22D2D4);
    PUSH32(esp, 0x0003A0C9u); RECOMP_ABI_CALL(0x00037070u, sub_00037070); /* call 0x00037070 */

loc_0003A0C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A0CC: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A1CF; /* jne: not equal / not zero */

loc_0003A0D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003A0E0u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A0E0: ;
    PUSH32(esp, 0x0003A0E5u); RECOMP_ABI_CALL(0x0002B0F0u, sub_0002B0F0); /* call 0x0002B0F0 */

loc_0003A0E5: ;
    PUSH32(esp, 0x0003A0EAu); RECOMP_ABI_CALL(0x0002B160u, sub_0002B160); /* call 0x0002B160 */

loc_0003A0EA: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x69);
    PUSH32(esp, 0x0003A0F6u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A0F6: ;
    SET_LO8(ecx, MEM8(0x30EDC8));
    eax = ZX8(LO8(ecx));
    edx = MEM32(eax * 4 + 0x30F9B4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A16A; /* jne: not equal / not zero */

loc_0003A117: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A16A; /* jne: not equal / not zero */

loc_0003A11B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A1CF; /* jne: not equal / not zero */

loc_0003A124: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A1CF; /* jne: not equal / not zero */

loc_0003A12C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003A133u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A133: ;
    PUSH32(esp, 0x0003A138u); RECOMP_ABI_CALL(0x0002B0F0u, sub_0002B0F0); /* call 0x0002B0F0 */

loc_0003A138: ;
    PUSH32(esp, 0x0003A13Du); RECOMP_ABI_CALL(0x0002B160u, sub_0002B160); /* call 0x0002B160 */

loc_0003A13D: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x69);
    PUSH32(esp, 0x0003A149u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A149: ;
    SET_LO8(ecx, MEM8(0x30EDC8));
    eax = ZX8(LO8(ecx));
    edx = MEM32(eax * 4 + 0x30F9B4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A117; /* je: equal / zero */

loc_0003A16A: ;
    SET_LO8(edx, MEM8(0x307606));
    eax = ZX8(LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x30ED4C));
    MEM8(esp + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30D8F0));
    MEM8(esp + 0xE) = LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEM8(esp + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(0x30D00D));
    MEM8(esp + 0xF) = LO8(edx);
    edx = ZX8(MEM8(ecx + 0x30D9A1));
    SET_LO8(ecx, MEM8(edx + 0x2C6710));
    edx = MEM32(eax * 4 + 0x30F9B4);
    MEM8(esp + 0x10) = LO8(ecx);
    MEM32(0x33489C) = edx;
    PUSH32(esp, 0x0003A1BDu); RECOMP_ABI_CALL(0x00085840u, sub_00085840); /* call 0x00085840 */

loc_0003A1BD: ;
    PUSH32(esp, 0x0003A1C2u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0003A1C2: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A1CCu); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_0003A1CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A1CF: ;
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30C680) = 2;
    MEM8(0x335AD0) = LO8(ebx);
    MEM8(0x335AD1) = LO8(ebx);
    MEM8(0x33484C) = 1;
    goto loc_0003A271;

loc_0003A1F7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003A1FEu); RECOMP_ABI_CALL(0x00052190u, sub_00052190); /* call 0x00052190 */

loc_0003A1FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A271; /* jne: not equal / not zero */

loc_0003A206: ;
    MEM32(0x30F9B4) = ebp;
    MEM32(0x30F9B8) = ebp;
    PUSH32(esp, 0x0003A217u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003A217: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A256; /* je: equal / zero */

loc_0003A21C: ;
    PUSH32(esp, 0x0003A221u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0003A221: ;
    esi = eax;
    PUSH32(esp, 0x0003A228u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003A228: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_0003A242; /* je: equal / zero */

loc_0003A22C: ;
    MEM32(0x30F9B4) = 7;
    MEM32(0x30F9B8) = 8;
    goto loc_0003A256;

loc_0003A242: ;
    MEM32(0x30F9B8) = 7;
    MEM32(0x30F9B4) = 8;

loc_0003A256: ;
    PUSH32(esp, 0x27570);
    PUSH32(esp, 2);
    MEM8(0x30C680) = LO8(ebx);
    MEM8(0x316FF1) = LO8(ebx);
    PUSH32(esp, 0x0003A26Eu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003A26E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A271: ;
    PUSH32(esp, 0x0003A276u); RECOMP_ABI_CALL(0x00038180u, sub_00038180); /* call 0x00038180 */

loc_0003A276: ;
    _fa = (uint32_t)(MEM8(0x33484C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33484C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039BE0; /* je: equal / zero */

loc_0003A282: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0003A284: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003A28Bu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A28B: ;
    PUSH32(esp, 0x292B0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0003A297u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003A297: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A29Fu); RECOMP_ABI_CALL(0x0004D080u, sub_0004D080); /* call 0x0004D080 */

loc_0003A29F: ;
    MEM8(0x33484C) = LO8(ebx);
    PUSH32(esp, 0x0003A2AAu); RECOMP_ABI_CALL(0x0004CD60u, sub_0004CD60); /* call 0x0004CD60 */

loc_0003A2AA: ;
    MEM32(0x335AD8) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003A2F0
 * Original: 0x0003A2F0 - 0x0003A346 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A2F0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A2F0: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC08) = eax;
    eax = MEM32(0x334880);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0003A329; /* jne: not equal / not zero */

loc_0003A311: ;
    PUSH32(esp, 0x0003A316u); RECOMP_ABI_CALL(0x00039070u, sub_00039070); /* call 0x00039070 */

loc_0003A316: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A326u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A326: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A329: ;
    PUSH32(esp, 0x0003A32Eu); RECOMP_ABI_CALL(0x00038680u, sub_00038680); /* call 0x00038680 */

loc_0003A32E: ;
    _fa = (uint32_t)(MEM32(0x335990)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x335990), ebp (32-bit) */
    edi = 1;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003A403(); return; } /* jne: not equal / not zero */

loc_0003A33F: ;
    ebx = 0x258;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0003A346(); return; /* fallthrough 0x0003A346 */

}

/**
 * sub_0003A346
 * Original: 0x0003A346 - 0x0003A403 (189 bytes, 55 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A346: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A34Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A34C: ;
    PUSH32(esp, 0x22D304);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0003A35Au); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_0003A35A: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A36Au); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A36A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A372u); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_0003A372: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A3A4; /* je: equal / zero */

loc_0003A377: ;
    SET_LO8(eax, MEM8(0x3358A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A387; /* je: equal / zero */

loc_0003A380: ;
    PUSH32(esp, 0x43400000);
    goto loc_0003A39C;

loc_0003A387: ;
    _fa = (uint32_t)(MEM8(0x3321FC)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321FC), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A397; /* je: equal / zero */

loc_0003A390: ;
    PUSH32(esp, 0x43300000);
    goto loc_0003A39C;

loc_0003A397: ;
    PUSH32(esp, 0x43200000);

loc_0003A39C: ;
    PUSH32(esp, 0x0003A3A1u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A3A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A3A4: ;
    _fa = (uint32_t)(MEM8(0x6E9B48)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6E9B48), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A3BD; /* jne: not equal / not zero */

loc_0003A3AD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0003A4B3(); return; } /* je: equal / zero */

loc_0003A3B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x1F (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A346; /* jne: not equal / not zero */

loc_0003A3B9: ;
    esi = esi ^ edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003A346;

loc_0003A3BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003A3C5u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003A3C5: ;
    eax = MEM32(0x334898);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003A403(); return; } /* je: equal / zero */

loc_0003A3D1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003A3E0;

    /* nop */
    edi = edi;

loc_0003A3E0: ;
    ecx = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003A4A8(); return; } /* jne: not equal / not zero */

loc_0003A3EF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003A4A8(); return; } /* jne: not equal / not zero */

loc_0003A3F8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003A3E0; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0003A403(); return; /* fallthrough 0x0003A403 */

}

/**
 * sub_0003A403
 * Original: 0x0003A403 - 0x0003A4A8 (165 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A403_gen(void)   /* mode-hook: shadowed by game_mode.c (menu scene dispatch) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A403: ;
    PUSH32(esp, 0x0003A408u); RECOMP_ABI_CALL(0x0004CA60u, sub_0004CA60); /* call 0x0004CA60 */

loc_0003A408: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003A55A(); return; } /* je: equal / zero */

loc_0003A410: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0003A418u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A418: ;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0003A4CC(); return; } /* je: equal / zero */

loc_0003A424: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003A42Cu); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A42C: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A494; /* jne: not equal / not zero */

loc_0003A439: ;
    edi = 0x55;
    ebx = 1;

loc_0003A443: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A494; /* jne: not equal / not zero */

loc_0003A447: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A450; /* jne: not equal / not zero */

loc_0003A44C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A479; /* je: equal / zero */

loc_0003A450: ;
    PUSH32(esp, 0x0003A455u); RECOMP_ABI_CALL(0x00051250u, sub_00051250); /* call 0x00051250 */

loc_0003A455: ;
    MEM32(esp + 0x10) = 2;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0003A46Au); RECOMP_ABI_CALL(0x0004CA30u, sub_0004CA30); /* call 0x0004CA30 */

loc_0003A46A: ;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003A479u); RECOMP_ABI_CALL(0x000AA099u, sub_000AA099); /* call 0x000AA099 */

loc_0003A479: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003A47Fu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A47F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003A487u); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A487: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A443; /* je: equal / zero */

loc_0003A494: ;
    PUSH32(esp, 0x0003A499u); RECOMP_ABI_CALL(0x0004CA70u, sub_0004CA70); /* call 0x0004CA70 */

loc_0003A499: ;
    PUSH32(esp, 0x0003A49Eu); RECOMP_ABI_CALL(0x0004CA80u, sub_0004CA80); /* call 0x0004CA80 */

loc_0003A49E: ;
    edi = 1;
    g_seh_ebp = ebp; sub_0003A55A(); return; /* tail jmp 0x0003A55A */

}

/**
 * sub_0003A4A8
 * Original: 0x0003A4A8 - 0x0003A4B3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A4A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A4A8: ;
    MEM32(0x3358CC) = edx;
    g_seh_ebp = ebp; sub_0003A403(); return; /* tail jmp 0x0003A403 */

}

/**
 * sub_0003A4B3
 * Original: 0x0003A4B3 - 0x0003A4CC (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A4B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A4B3: ;
    MEM32(0x335990) = ebp;
    MEM8(0x3321FC) = 0xFF;
    MEM8(0x3358A9) = 0;
    g_seh_ebp = ebp; sub_0003AA44(); return; /* tail jmp 0x0003AA44 */

}

/**
 * sub_0003A4CC
 * Original: 0x0003A4CC - 0x0003AAA0 (1492 bytes, 376 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003A4CC_gen(void)   /* mode-hook: shadowed by game_mode.c (main menu handler) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A4CC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0003A4D4u); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A4D4: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A500; /* jne: not equal / not zero */

loc_0003A4E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A500; /* jne: not equal / not zero */

loc_0003A4E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A4EBu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A4EB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0003A4F3u); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A4F3: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A4E1; /* je: equal / zero */

loc_0003A500: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A506u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A506: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0003A50Eu); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A50E: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A550; /* jne: not equal / not zero */

loc_0003A51B: ;
    goto loc_0003A520;

    /* nop */

loc_0003A520: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A550; /* jne: not equal / not zero */

loc_0003A524: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A5FB; /* jne: not equal / not zero */

loc_0003A52D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A5FB; /* jne: not equal / not zero */

loc_0003A535: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A53Bu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A53B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0003A543u); RECOMP_ABI_CALL(0x0002CFE0u, sub_0002CFE0); /* call 0x0002CFE0 */

loc_0003A543: ;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A520; /* je: equal / zero */

loc_0003A550: ;
    PUSH32(esp, 0x0003A555u); RECOMP_ABI_CALL(0x0004CA70u, sub_0004CA70); /* call 0x0004CA70 */

loc_0003A555: ;
    PUSH32(esp, 0x0003A55Au); RECOMP_ABI_CALL(0x0004CA80u, sub_0004CA80); /* call 0x0004CA80 */

loc_0003A55A: ;
    ebx = 6;
    PUSH32(esp, edi);
    MEM8(0x3321FC) = 0xFF;
    MEM8(0x3358A9) = 0;
    MEM8(0x30C680) = LO8(ebx);
    PUSH32(esp, 0x0003A579u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A579: ;
    eax = MEM32(0x334898);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6B2; /* je: equal / zero */

loc_0003A589: ;
    PUSH32(esp, 0x0003A58Eu); RECOMP_ABI_CALL(0x0007E3B0u, sub_0007E3B0); /* call 0x0007E3B0 */

loc_0003A58E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A6B2; /* jne: not equal / not zero */

loc_0003A596: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003A598: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A59Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A59E: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A5AEu); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A5AE: ;
    eax = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003A60A; /* je: equal / zero */

loc_0003A5B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003A650; /* jne: not equal / not zero */

loc_0003A5BE: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0003A5CAu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A5CA: ;
    ecx = MEM32(0x3358CC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A65B; /* jne: not equal / not zero */

loc_0003A5E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A65B; /* jne: not equal / not zero */

loc_0003A5E5: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A5EE; /* jne: not equal / not zero */

loc_0003A5EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A598; /* je: equal / zero */

loc_0003A5EE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003A5F6u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A5F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003A596;

loc_0003A5FB: ;
    PUSH32(esp, 0x0003A600u); RECOMP_ABI_CALL(0x0004CA70u, sub_0004CA70); /* call 0x0004CA70 */

loc_0003A600: ;
    PUSH32(esp, 0x0003A605u); RECOMP_ABI_CALL(0x0004CD60u, sub_0004CD60); /* call 0x0004CD60 */

loc_0003A605: ;
    goto loc_0003A55A;

loc_0003A60A: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x0003A616u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A616: ;
    edx = MEM32(0x3358CC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A69E; /* jne: not equal / not zero */

loc_0003A62D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A69E; /* jne: not equal / not zero */

loc_0003A631: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A63E; /* jne: not equal / not zero */

loc_0003A636: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A598; /* je: equal / zero */

loc_0003A63E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003A646u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A646: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi;
    goto loc_0003A598;

loc_0003A650: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A598; /* jne: not equal / not zero */

loc_0003A659: ;
    goto loc_0003A6A9;

loc_0003A65B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003A663u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A663: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x334898) = ebp;
    PUSH32(esp, 0x0003A671u); RECOMP_ABI_CALL(0x0007E380u, sub_0007E380); /* call 0x0007E380 */

loc_0003A671: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x22D23C);
    PUSH32(esp, 0x0003A68Au); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0003A68A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6A9; /* je: equal / zero */

loc_0003A68F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A695u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0003A695: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003A69Cu); RECOMP_ABI_CALL(0x000386C0u, sub_000386C0); /* call 0x000386C0 */

loc_0003A69C: ;
    goto loc_0003A6A6;

loc_0003A69E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003A6A6u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A6A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A6A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A6AFu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A6AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A6B2: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AA2D; /* jne: not equal / not zero */

loc_0003A6BF: ;
    /* nop */

loc_0003A6C0: ;
    eax = MEM32(0x335994);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D2E0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0003A6D4u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_0003A6D4: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A6E4u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A6E4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30F9B4) = ebx;
    MEM32(0x30F9B8) = ebx;
    MEM16(0x335AE0) = LO16(ebp);
    PUSH32(esp, 0x0003A6FFu); RECOMP_ABI_CALL(0x00037670u, sub_00037670); /* call 0x00037670 */

loc_0003A6FF: ;
    _fa = (uint32_t)(MEM32(0x334898)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x334898), ebp (32-bit) */
    MEM16(0x335AE0) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0003A737; /* je: equal / zero */

loc_0003A70D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A737; /* jne: not equal / not zero */

loc_0003A712: ;
    eax = MEM32(0x3358CC);
    ecx = eax;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx * 4 + 0x30F9B4) = eax;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x335AE0) = LO16(eax);
    MEM32(0x335994) = edi;
    MEM32(0x334898) = ebp;

loc_0003A737: ;
    PUSH32(esp, 0x0003A73Cu); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_0003A73C: ;
    eax = MEM32(0x335994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003A9F4; /* ja: above (unsigned >) */

loc_0003A74A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3AAA0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0003A751u) goto loc_0003A751;
    if (_jt == 0x0003A79Bu) goto loc_0003A79B;
    if (_jt == 0x0003A7F6u) goto loc_0003A7F6;
    if (_jt == 0x0003A82Au) goto loc_0003A82A;
    if (_jt == 0x0003A8C9u) goto loc_0003A8C9;
    if (_jt == 0x0003A8F3u) goto loc_0003A8F3;
    if (_jt == 0x0003A952u) goto loc_0003A952;
    if (_jt == 0x0003A9C3u) goto loc_0003A9C3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003A751: ;
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x0003A75Bu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A75B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A76B: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    MEM8(0x30AAB9) = 0;
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    PUSH32(esp, 0x0003A791u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A791: ;
    PUSH32(esp, 0x0003A796u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A796: ;
    goto loc_0003A9F4;

loc_0003A79B: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x0003A7A5u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A7A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A7B5: ;
    PUSH32(esp, 0x0003A7BAu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0003A7BA: ;
    SET_LO8(eax, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(eax);
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    MEM8(0x30AAB9) = 1;
    PUSH32(esp, 0x0003A7DEu); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A7DE: ;
    PUSH32(esp, 0x0003A7E3u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0003A7E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A7E9u); RECOMP_ABI_CALL(0x00150383u, sub_00150383); /* call 0x00150383 */

loc_0003A7E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A7F1u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A7F1: ;
    goto loc_0003A9F4;

loc_0003A7F6: ;
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x0003A800u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A800: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A812: ;
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    MEM8(0x30C3EC) = 1;
    goto loc_0003A922;

loc_0003A82A: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x0003A834u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A834: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A844: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    MEM8(0x30AAB9) = 1;
    MEM8(0x30C3EC) = 0;
    MEM16(0x335AE0) = 3;
    MEM8(0x3145A0) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003A870: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x30F9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x30F9B4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A8A8; /* jne: not equal / not zero */

loc_0003A879: ;
    eax = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax * 4 + 0x30F9B4;

loc_0003A887: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A899; /* je: equal / zero */

loc_0003A88C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003A892u); RECOMP_ABI_CALL(0x000529F0u, sub_000529F0); /* call 0x000529F0 */

loc_0003A892: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A8A1; /* jne: not equal / not zero */

loc_0003A899: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003A887; /* jb: below (unsigned <) */

loc_0003A89F: ;
    goto loc_0003A8A8;

loc_0003A8A1: ;
    MEM32(edi * 4 + 0x30F9B4) = esi;

loc_0003A8A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003A870; /* jb: below (unsigned <) */

loc_0003A8AE: ;
    PUSH32(esp, 0x0003A8B3u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A8B3: ;
    PUSH32(esp, 0x0003A8B8u); RECOMP_ABI_CALL(0x0004CD60u, sub_0004CD60); /* call 0x0004CD60 */

loc_0003A8B8: ;
    PUSH32(esp, 0x0003A8BDu); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A8BD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    goto loc_0003A9F4;

loc_0003A8C9: ;
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x0003A8D3u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A8D3: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A8E5: ;
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    goto loc_0003A91B;

loc_0003A8F3: ;
    PUSH32(esp, 0x42C00000);
    PUSH32(esp, 0x0003A8FDu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A8FD: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A90F: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);

loc_0003A91B: ;
    MEM8(0x30C3EC) = 0;

loc_0003A922: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    MEM8(0x30AAB9) = 0;
    MEM8(0x3145A0) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0003A943; /* jne: not equal / not zero */

loc_0003A936: ;
    MEM16(0x335AE0) = LO16(edi);
    MEM32(0x30F9B8) = ebx;

loc_0003A943: ;
    PUSH32(esp, 0x0003A948u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A948: ;
    PUSH32(esp, 0x0003A94Du); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A94D: ;
    goto loc_0003A9F4;

loc_0003A952: ;
    PUSH32(esp, 0x42E00000);
    PUSH32(esp, 0x0003A95Cu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A95C: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A96E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    MEM8(0x30AAB9) = 0;
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0003A9A2; /* jne: not equal / not zero */

loc_0003A995: ;
    MEM16(0x335AE0) = LO16(edi);
    MEM32(0x30F9B8) = ebx;

loc_0003A9A2: ;
    PUSH32(esp, 0x0003A9A7u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A9A7: ;
    PUSH32(esp, ebp);
    MEM8(0x30F914) = 0;
    PUSH32(esp, 0x0003A9B4u); RECOMP_ABI_CALL(0x00035BD0u, sub_00035BD0); /* call 0x00035BD0 */

loc_0003A9B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A9BCu); RECOMP_ABI_CALL(0x000292F0u, sub_000292F0); /* call 0x000292F0 */

loc_0003A9BC: ;
    PUSH32(esp, 0x0003A9C1u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A9C1: ;
    goto loc_0003A9F4;

loc_0003A9C3: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x0003A9CDu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A9CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A9D9: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    PUSH32(esp, 0x0003A9EAu); RECOMP_ABI_CALL(0x0003DBD0u, sub_0003DBD0); /* call 0x0003DBD0 */

loc_0003A9EA: ;
    PUSH32(esp, 0x0003A9EFu); RECOMP_ABI_CALL(0x00039070u, sub_00039070); /* call 0x00039070 */

loc_0003A9EF: ;
    PUSH32(esp, 0x0003A9F4u); RECOMP_ABI_CALL(0x00036D00u, sub_00036D00); /* call 0x00036D00 */

loc_0003A9F4: ;
    eax = MEM32(0x335994);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AA01u); RECOMP_ABI_CALL(0x000374F0u, sub_000374F0); /* call 0x000374F0 */

loc_0003AA01: ;
    MEM32(0x335994) = eax;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003AA5D; /* jne: not equal / not zero */

loc_0003AA13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003AA5D; /* jne: not equal / not zero */

loc_0003AA17: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003AA1Du); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003AA1D: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6C0; /* je: equal / zero */

loc_0003AA2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AA38; /* jne: not equal / not zero */

loc_0003AA31: ;
    MEM8(0x30C680) = 2;

loc_0003AA38: ;
    MEM32(0x334880) = ebp;
    MEM32(0x335AD8) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC00);
    PUSH32(esp, 0x0003AA56u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA56: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003AA5D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    MEM8(0x30C680) = 2;
    MEM32(0x335990) = ebp;
    MEM32(0x334880) = edi;
    PUSH32(esp, 0x0003AA7Cu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003AA7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003AA84u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003AA84: ;
    ecx = MEM32(esp + 0xC20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003AA99u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA99: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003A55A
 * Original: 0x0003A55A - 0x0003AAA0 (1350 bytes, 330 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A55A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A55A: ;
    ebx = 6;
    PUSH32(esp, edi);
    MEM8(0x3321FC) = 0xFF;
    MEM8(0x3358A9) = 0;
    MEM8(0x30C680) = LO8(ebx);
    PUSH32(esp, 0x0003A579u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A579: ;
    eax = MEM32(0x334898);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6B2; /* je: equal / zero */

loc_0003A589: ;
    PUSH32(esp, 0x0003A58Eu); RECOMP_ABI_CALL(0x0007E3B0u, sub_0007E3B0); /* call 0x0007E3B0 */

loc_0003A58E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A6B2; /* jne: not equal / not zero */

loc_0003A596: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003A598: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A59Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A59E: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A5AEu); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A5AE: ;
    eax = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003A60A; /* je: equal / zero */

loc_0003A5B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003A650; /* jne: not equal / not zero */

loc_0003A5BE: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0003A5CAu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A5CA: ;
    ecx = MEM32(0x3358CC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A65B; /* jne: not equal / not zero */

loc_0003A5E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A65B; /* jne: not equal / not zero */

loc_0003A5E5: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A5EE; /* jne: not equal / not zero */

loc_0003A5EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A598; /* je: equal / zero */

loc_0003A5EE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003A5F6u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A5F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003A596;

    PUSH32(esp, 0x0003A600u); RECOMP_ABI_CALL(0x0004CA70u, sub_0004CA70); /* call 0x0004CA70 */

loc_0003A600: ;
    PUSH32(esp, 0x0003A605u); RECOMP_ABI_CALL(0x0004CD60u, sub_0004CD60); /* call 0x0004CD60 */

loc_0003A605: ;
    goto loc_0003A55A;

loc_0003A60A: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x0003A616u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0003A616: ;
    edx = MEM32(0x3358CC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A69E; /* jne: not equal / not zero */

loc_0003A62D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A69E; /* jne: not equal / not zero */

loc_0003A631: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003A63E; /* jne: not equal / not zero */

loc_0003A636: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003A598; /* je: equal / zero */

loc_0003A63E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003A646u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A646: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi;
    goto loc_0003A598;

loc_0003A650: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A598; /* jne: not equal / not zero */

loc_0003A659: ;
    goto loc_0003A6A9;

loc_0003A65B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003A663u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A663: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x334898) = ebp;
    PUSH32(esp, 0x0003A671u); RECOMP_ABI_CALL(0x0007E380u, sub_0007E380); /* call 0x0007E380 */

loc_0003A671: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x22D23C);
    PUSH32(esp, 0x0003A68Au); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0003A68A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6A9; /* je: equal / zero */

loc_0003A68F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A695u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0003A695: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003A69Cu); RECOMP_ABI_CALL(0x000386C0u, sub_000386C0); /* call 0x000386C0 */

loc_0003A69C: ;
    goto loc_0003A6A6;

loc_0003A69E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003A6A6u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003A6A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A6A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A6AFu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003A6AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A6B2: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AA2D; /* jne: not equal / not zero */

loc_0003A6BF: ;
    /* nop */

loc_0003A6C0: ;
    eax = MEM32(0x335994);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D2E0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0003A6D4u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_0003A6D4: ;
    PUSH32(esp, 0x335998);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x335944);
    PUSH32(esp, 0x0003A6E4u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003A6E4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30F9B4) = ebx;
    MEM32(0x30F9B8) = ebx;
    MEM16(0x335AE0) = LO16(ebp);
    PUSH32(esp, 0x0003A6FFu); RECOMP_ABI_CALL(0x00037670u, sub_00037670); /* call 0x00037670 */

loc_0003A6FF: ;
    _fa = (uint32_t)(MEM32(0x334898)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x334898), ebp (32-bit) */
    MEM16(0x335AE0) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0003A737; /* je: equal / zero */

loc_0003A70D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A737; /* jne: not equal / not zero */

loc_0003A712: ;
    eax = MEM32(0x3358CC);
    ecx = eax;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx * 4 + 0x30F9B4) = eax;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x335AE0) = LO16(eax);
    MEM32(0x335994) = edi;
    MEM32(0x334898) = ebp;

loc_0003A737: ;
    PUSH32(esp, 0x0003A73Cu); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_0003A73C: ;
    eax = MEM32(0x335994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003A9F4; /* ja: above (unsigned >) */

loc_0003A74A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3AAA0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0003A751u) goto loc_0003A751;
    if (_jt == 0x0003A79Bu) goto loc_0003A79B;
    if (_jt == 0x0003A7F6u) goto loc_0003A7F6;
    if (_jt == 0x0003A82Au) goto loc_0003A82A;
    if (_jt == 0x0003A8C9u) goto loc_0003A8C9;
    if (_jt == 0x0003A8F3u) goto loc_0003A8F3;
    if (_jt == 0x0003A952u) goto loc_0003A952;
    if (_jt == 0x0003A9C3u) goto loc_0003A9C3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003A751: ;
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x0003A75Bu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A75B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A76B: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    MEM8(0x30AAB9) = 0;
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    PUSH32(esp, 0x0003A791u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A791: ;
    PUSH32(esp, 0x0003A796u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A796: ;
    goto loc_0003A9F4;

loc_0003A79B: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x0003A7A5u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A7A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A7B5: ;
    PUSH32(esp, 0x0003A7BAu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0003A7BA: ;
    SET_LO8(eax, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(eax);
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    MEM8(0x30AAB9) = 1;
    PUSH32(esp, 0x0003A7DEu); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A7DE: ;
    PUSH32(esp, 0x0003A7E3u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0003A7E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A7E9u); RECOMP_ABI_CALL(0x00150383u, sub_00150383); /* call 0x00150383 */

loc_0003A7E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A7F1u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A7F1: ;
    goto loc_0003A9F4;

loc_0003A7F6: ;
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x0003A800u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A800: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A812: ;
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    MEM8(0x30C3EC) = 1;
    goto loc_0003A922;

loc_0003A82A: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x0003A834u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A834: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A844: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    MEM8(0x30AAB9) = 1;
    MEM8(0x30C3EC) = 0;
    MEM16(0x335AE0) = 3;
    MEM8(0x3145A0) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003A870: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x30F9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x30F9B4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A8A8; /* jne: not equal / not zero */

loc_0003A879: ;
    eax = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax * 4 + 0x30F9B4;

loc_0003A887: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A899; /* je: equal / zero */

loc_0003A88C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003A892u); RECOMP_ABI_CALL(0x000529F0u, sub_000529F0); /* call 0x000529F0 */

loc_0003A892: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A8A1; /* jne: not equal / not zero */

loc_0003A899: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003A887; /* jb: below (unsigned <) */

loc_0003A89F: ;
    goto loc_0003A8A8;

loc_0003A8A1: ;
    MEM32(edi * 4 + 0x30F9B4) = esi;

loc_0003A8A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003A870; /* jb: below (unsigned <) */

loc_0003A8AE: ;
    PUSH32(esp, 0x0003A8B3u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A8B3: ;
    PUSH32(esp, 0x0003A8B8u); RECOMP_ABI_CALL(0x0004CD60u, sub_0004CD60); /* call 0x0004CD60 */

loc_0003A8B8: ;
    PUSH32(esp, 0x0003A8BDu); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A8BD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    goto loc_0003A9F4;

loc_0003A8C9: ;
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x0003A8D3u); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A8D3: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A8E5: ;
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    goto loc_0003A91B;

loc_0003A8F3: ;
    PUSH32(esp, 0x42C00000);
    PUSH32(esp, 0x0003A8FDu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A8FD: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A90F: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);

loc_0003A91B: ;
    MEM8(0x30C3EC) = 0;

loc_0003A922: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    MEM8(0x30AAB9) = 0;
    MEM8(0x3145A0) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0003A943; /* jne: not equal / not zero */

loc_0003A936: ;
    MEM16(0x335AE0) = LO16(edi);
    MEM32(0x30F9B8) = ebx;

loc_0003A943: ;
    PUSH32(esp, 0x0003A948u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A948: ;
    PUSH32(esp, 0x0003A94Du); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A94D: ;
    goto loc_0003A9F4;

loc_0003A952: ;
    PUSH32(esp, 0x42E00000);
    PUSH32(esp, 0x0003A95Cu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A95C: ;
    SET_LO16(eax, MEM16(0x335AE0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A96E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    SET_LO8(ecx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(ecx);
    MEM8(0x30AAB9) = 0;
    MEM8(0x30C3EC) = 0;
    MEM8(0x3145A0) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0003A9A2; /* jne: not equal / not zero */

loc_0003A995: ;
    MEM16(0x335AE0) = LO16(edi);
    MEM32(0x30F9B8) = ebx;

loc_0003A9A2: ;
    PUSH32(esp, 0x0003A9A7u); RECOMP_ABI_CALL(0x00039B70u, sub_00039B70); /* call 0x00039B70 */

loc_0003A9A7: ;
    PUSH32(esp, ebp);
    MEM8(0x30F914) = 0;
    PUSH32(esp, 0x0003A9B4u); RECOMP_ABI_CALL(0x00035BD0u, sub_00035BD0); /* call 0x00035BD0 */

loc_0003A9B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003A9BCu); RECOMP_ABI_CALL(0x000292F0u, sub_000292F0); /* call 0x000292F0 */

loc_0003A9BC: ;
    PUSH32(esp, 0x0003A9C1u); RECOMP_ABI_CALL(0x00039090u, sub_00039090); /* call 0x00039090 */

loc_0003A9C1: ;
    goto loc_0003A9F4;

loc_0003A9C3: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x0003A9CDu); RECOMP_ABI_CALL(0x00036F00u, sub_00036F00); /* call 0x00036F00 */

loc_0003A9CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x335AE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x335AE0), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A9F4; /* je: equal / zero */

loc_0003A9D9: ;
    SET_LO8(edx, MEM8(0x335994));
    MEM8(0x3139CB) = LO8(edx);
    PUSH32(esp, 0x0003A9EAu); RECOMP_ABI_CALL(0x0003DBD0u, sub_0003DBD0); /* call 0x0003DBD0 */

loc_0003A9EA: ;
    PUSH32(esp, 0x0003A9EFu); RECOMP_ABI_CALL(0x00039070u, sub_00039070); /* call 0x00039070 */

loc_0003A9EF: ;
    PUSH32(esp, 0x0003A9F4u); RECOMP_ABI_CALL(0x00036D00u, sub_00036D00); /* call 0x00036D00 */

loc_0003A9F4: ;
    eax = MEM32(0x335994);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AA01u); RECOMP_ABI_CALL(0x000374F0u, sub_000374F0); /* call 0x000374F0 */

loc_0003AA01: ;
    MEM32(0x335994) = eax;
    eax = MEM32(0x6E9B48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003AA5D; /* jne: not equal / not zero */

loc_0003AA13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003AA5D; /* jne: not equal / not zero */

loc_0003AA17: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003AA1Du); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003AA1D: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A6C0; /* je: equal / zero */

loc_0003AA2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AA38; /* jne: not equal / not zero */

loc_0003AA31: ;
    MEM8(0x30C680) = 2;

loc_0003AA38: ;
    MEM32(0x334880) = ebp;
    MEM32(0x335AD8) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC00);
    PUSH32(esp, 0x0003AA56u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA56: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003AA5D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    MEM8(0x30C680) = 2;
    MEM32(0x335990) = ebp;
    MEM32(0x334880) = edi;
    PUSH32(esp, 0x0003AA7Cu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003AA7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003AA84u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003AA84: ;
    ecx = MEM32(esp + 0xC20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003AA99u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA99: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AA44
 * Original: 0x0003AA44 - 0x0003AAA0 (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AA44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003AA44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC00);
    PUSH32(esp, 0x0003AA56u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA56: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003AA84u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003AA84: ;
    ecx = MEM32(esp + 0xC20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003AA99u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AA99: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AAAA
 * Original: 0x0003AAAA - 0x0003AABD (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AAAA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AAAA: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(eax + -1463222269)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(ecx, HI8(ecx) - MEM8(eax + -1463222269));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -87) = MEM8(edx + -87) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + -87)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AAC0
 * Original: 0x0003AAC0 - 0x0003AB12 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AAC0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AAC0: ;
    PUSH32(esp, 0x0003AAC5u); RECOMP_ABI_CALL(0x00039900u, sub_00039900); /* call 0x00039900 */

loc_0003AAC5: ;
    PUSH32(esp, 0x0003AACAu); RECOMP_ABI_CALL(0x0004D080u, sub_0004D080); /* call 0x0004D080 */

loc_0003AACA: ;
    PUSH32(esp, 0x0003AACFu); RECOMP_ABI_CALL(0x00035B00u, sub_00035B00); /* call 0x00035B00 */

loc_0003AACF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003AAD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AAF3; /* jne: not equal / not zero */

loc_0003AAD5: ;
    PUSH32(esp, 0x0003AADAu); RECOMP_ABI_CALL(0x00038A70u, sub_00038A70); /* call 0x00038A70 */

loc_0003AADA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AAE0u); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_0003AAE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AAE6u); RECOMP_ABI_CALL(0x00038D30u, sub_00038D30); /* call 0x00038D30 */

loc_0003AAE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AAECu); RECOMP_ABI_CALL(0x00038EB0u, sub_00038EB0); /* call 0x00038EB0 */

loc_0003AAEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AAD5; /* je: equal / zero */

loc_0003AAF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003AAFAu); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_0003AAFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003AB01u); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_0003AB01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003AB08u); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_0003AB08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003AB10u); RECOMP_ABI_CALL(0x0003A2F0u, sub_0003A2F0); /* call 0x0003A2F0 */

loc_0003AB10: ;
    goto loc_0003AAD1;

}

/**
 * sub_0003AB20
 * Original: 0x0003AB20 - 0x0003AB38 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AB20: ;
    eax = MEM32(0x30EBFC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3368FC);
    PUSH32(esp, 0x0003AB34u); RECOMP_ABI_CALL(0x0005E9D0u, sub_0005E9D0); /* call 0x0005E9D0 */

loc_0003AB34: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AB40
 * Original: 0x0003AB40 - 0x0003AC45 (261 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AB40: ;
    PUSH32(esp, 0x336928);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3368FC);
    MEM32(0x336928) = 0x41C00000;
    MEM32(0x33692C) = 0;
    MEM32(0x336930) = 0;
    MEM32(0x336934) = 0x3F800000;
    MEM32(0x336938) = 0;
    MEM32(0x33693C) = 0;
    MEM32(0x336940) = 0x442E0000;
    MEM32(0x336944) = 0;
    MEM32(0x336948) = 0;
    MEM32(0x33694C) = 0x3F800000;
    MEM32(0x336950) = 0x3F800000;
    MEM32(0x336954) = 0;
    MEM32(0x336958) = 0x41C00000;
    MEM32(0x33695C) = 0x43F00000;
    MEM32(0x336960) = 0;
    MEM32(0x336964) = 0x3F800000;
    MEM32(0x336968) = 0;
    MEM32(0x33696C) = 0x3F800000;
    MEM32(0x336970) = 0x442E0000;
    MEM32(0x336974) = 0x43F00000;
    MEM32(0x336978) = 0;
    MEM32(0x33697C) = 0x3F800000;
    MEM32(0x336980) = 0x3F800000;
    MEM32(0x336984) = 0x3F800000;
    PUSH32(esp, 0x0003AC41u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0003AC41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AC50
 * Original: 0x0003AC50 - 0x0003AC88 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AC50: ;
    _fa = (uint32_t)(MEM8(0x3369C4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3369C4), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AC87; /* je: equal / zero */

loc_0003AC59: ;
    eax = MEM32(0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AC68; /* jne: not equal / not zero */

loc_0003AC63: ;
    eax = MEM32(0x30F9B8);

loc_0003AC68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AC6Eu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003AC6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AC87; /* jne: not equal / not zero */

loc_0003AC75: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x22D7B8);
    PUSH32(esp, 0x0003AC84u); RECOMP_ABI_CALL(0x0005D140u, sub_0005D140); /* call 0x0005D140 */

loc_0003AC84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003AC87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003AC90
 * Original: 0x0003AC90 - 0x0003AD93 (259 bytes, 74 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AC90: ;
    PUSH32(esp, 5);
    PUSH32(esp, 7);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D814);
    PUSH32(esp, 0x0003ACA0u); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003ACA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x2CCF54));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x2CCF48));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D804);
    PUSH32(esp, 0x0003ACBFu); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003ACBF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CCF56));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x2CCF4A));
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D7F4);
    PUSH32(esp, 0x0003ACDEu); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003ACDE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x336988)) & 0xFFFFu; _fb = (uint32_t)(0xFFC0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336988), 0xFFC0 (16-bit) */
    PUSH32(esp, 3);
    if (CMP_EQ(_fa, _fb)) goto loc_0003AD09; /* je: equal / zero */

loc_0003ACF0: ;
    SET_LO16(ecx, MEM16(0x2CCF58));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CCF4C));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7E4);
    goto loc_0003AD1F;

loc_0003AD09: ;
    SET_LO16(ecx, MEM16(0x2CCF4C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x2CCF58));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22D7D4);

loc_0003AD1F: ;
    PUSH32(esp, 0x0003AD24u); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003AD24: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CCF5A));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x2CCF4E));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D7CC);
    PUSH32(esp, 0x0003AD46u); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003AD46: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x2CCF5C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CCF50));
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22CA70);
    PUSH32(esp, 0x0003AD66u); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0003AD66: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369C7);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2CCF3C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CCF30));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003AD8Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AD8F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003ADA0
 * Original: 0x0003ADA0 - 0x0003AF0E (366 bytes, 124 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003ADA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003ADA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D644);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x0003ADC0u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003ADC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0x30F9B4;
    /* nop */

loc_0003ADD0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE22; /* je: equal / zero */

loc_0003ADD7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0x22D82C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003ADE8u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0003ADE8: ;
    SET_LO16(esi, ZX8(LO8(ebx)));
    PUSH32(esp, 5);
    PUSH32(esp, 6);
    ecx = esp + 0x2C;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003AE01u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AE01: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003AE09u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003AE09: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AE22; /* jne: not equal / not zero */

loc_0003AE10: ;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x22D824);
    PUSH32(esp, 0x0003AE1Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AE1F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003AE22: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003ADD0; /* jb: below (unsigned <) */

loc_0003AE2C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x22CA70);
    PUSH32(esp, 0x0003AE3Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AE3C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = LO8(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = 0x30F9B4;
    /* nop */

loc_0003AE50: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AEE1; /* je: equal / zero */

loc_0003AE5D: ;
    SET_LO16(edi, ZX8(LO8(eax)));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x16);
    ebp = edi + 7;
    /* nop */

loc_0003AE70: ;
    eax = MEM32(esi * 4 + 0x2CD164);
    PUSH32(esp, 3);
    edx = esi + esi + 9;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AE85u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AE85: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003AE70; /* jl: less (signed <) */

loc_0003AE8E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003AE90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003AED7; /* jg: greater (signed >) */

loc_0003AE95: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x336914));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    ecx = esi + esi + 9;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003AEC6; /* je: equal / zero */

loc_0003AEA7: ;
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CD144));
    eax = MEM32(eax + 0x2CD124);
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + LO16(edi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0003AECF;

loc_0003AEC6: ;
    edx = edi + 0x11;
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D820);

loc_0003AECF: ;
    PUSH32(esp, 0x0003AED4u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003AED4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003AED7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003AE90; /* jl: less (signed <) */

loc_0003AEDD: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_0003AEE1: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x14) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0003AE50; /* jb: below (unsigned <) */

loc_0003AEFD: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003AF0Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003AF0A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003AF10
 * Original: 0x0003AF10 - 0x0003B166 (598 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AF10: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx * 4 + 0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B165; /* je: equal / zero */

loc_0003AF24: ;
    PUSH32(esp, ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = eax * 8 + 0x307620;
    edi = esi;
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    edx = ZX8(MEM8(0x2CD118));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AF63; /* je: equal / zero */

loc_0003AF4D: ;
    edx = SX8(LO8(edx));
    SET_LO8(ebx, MEM8(edx + eax * 8 + 0x307620));
    edx = edx + eax * 8 + 0x307620;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);

loc_0003AF63: ;
    edx = ZX8(MEM8(0x2CD11C));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AF8C; /* je: equal / zero */

loc_0003AF76: ;
    edx = SX8(LO8(edx));
    SET_LO8(ebx, MEM8(edx + eax * 8 + 0x307620));
    edx = edx + eax * 8 + 0x307620;
    SET_LO8(ebx, LO8(ebx) | 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);

loc_0003AF8C: ;
    ebx = MEM32(0x2CD120);
    edx = ZX8(LO8(ebx));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AFB3; /* je: equal / zero */

loc_0003AFA1: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 1;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003AFB3: ;
    edx = ZX8(MEM8(0x2CD119));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AFD8; /* je: equal / zero */

loc_0003AFC6: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 2;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003AFD8: ;
    edx = ZX8(MEM8(0x2CD11D));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AFFD; /* je: equal / zero */

loc_0003AFEB: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 4;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003AFFD: ;
    edx = ZX8(HI8(ebx));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B022; /* je: equal / zero */

loc_0003B00C: ;
    edx = SX8(LO8(edx));
    SET_LO8(ebx, MEM8(edx + eax * 8 + 0x307620));
    edx = edx + eax * 8 + 0x307620;
    SET_LO8(ebx, LO8(ebx) | 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);

loc_0003B022: ;
    edx = ZX8(MEM8(0x2CD11A));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B04B; /* je: equal / zero */

loc_0003B035: ;
    edx = SX8(LO8(edx));
    SET_LO8(ebx, MEM8(edx + eax * 8 + 0x307620));
    edx = edx + eax * 8 + 0x307620;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);

loc_0003B04B: ;
    edx = ZX8(MEM8(0x2CD11E));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B074; /* je: equal / zero */

loc_0003B05E: ;
    edx = SX8(LO8(edx));
    SET_LO8(ebx, MEM8(edx + eax * 8 + 0x307620));
    edx = edx + eax * 8 + 0x307620;
    SET_LO8(ebx, LO8(ebx) | 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);

loc_0003B074: ;
    SET_LO16(ebx, MEM16(0x2CD122));
    edx = ZX8(LO8(ebx));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B09C; /* je: equal / zero */

loc_0003B08A: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 1;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003B09C: ;
    edx = ZX8(MEM8(0x2CD11B));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B0C1; /* je: equal / zero */

loc_0003B0AF: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 2;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003B0C1: ;
    edx = ZX8(MEM8(0x2CD11F));
    SET_LO8(edx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B0E6; /* je: equal / zero */

loc_0003B0D4: ;
    edx = SX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x307620) = MEM8(edx + eax * 8 + 0x307620) | 4;
    _fa = (uint32_t)(MEM8(edx + eax * 8 + 0x307620)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx + eax * 8 + 0x307620;

loc_0003B0E6: ;
    edx = ZX8(HI8(ebx));
    SET_LO8(ecx, MEM8(edx + ecx + 0x336914));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B10B; /* je: equal / zero */

loc_0003B0F5: ;
    ecx = SX8(LO8(ecx));
    SET_LO8(edx, MEM8(ecx + eax * 8 + 0x307620));
    ecx = ecx + eax * 8 + 0x307620;
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);

loc_0003B10B: ;
    SET_LO8(edx, MEM8(esi));
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + eax * 8 + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307621));
    MEM8(ecx + eax * 8 + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307622));
    MEM8(ecx + eax * 8 + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307623));
    MEM8(ecx + eax * 8 + 0x1B) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307624));
    MEM8(ecx + eax * 8 + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307625));
    MEM8(ecx + eax * 8 + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307626));
    POP32(esp, edi);
    MEM8(ecx + eax * 8 + 0x1E) = LO8(edx);
    SET_LO8(edx, MEM8(eax * 8 + 0x307627));
    POP32(esp, esi);
    MEM8(ecx + eax * 8 + 0x1F) = LO8(edx);
    POP32(esp, ebx);

loc_0003B165: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003B170
 * Original: 0x0003B170 - 0x0003B2E7 (375 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003B170: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x30F9B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B2E6; /* je: equal / zero */

loc_0003B184: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307620));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0003B1B1; /* je: equal / zero */

loc_0003B190: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x336914) = 0;
    MEM8(ecx + 0x33698C) = 0;

loc_0003B1B1: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307621));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003B1DE; /* je: equal / zero */

loc_0003B1BD: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    MEM8(ecx + 0x336914) = LO8(ebx);
    MEM8(ecx + 0x33698C) = LO8(ebx);

loc_0003B1DE: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307622));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B20A; /* je: equal / zero */

loc_0003B1E9: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 2);
    MEM8(ecx + 0x336914) = LO8(ebx);
    MEM8(ecx + 0x33698C) = LO8(ebx);

loc_0003B20A: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307623));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B236; /* je: equal / zero */

loc_0003B215: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 3);
    MEM8(ecx + 0x336914) = LO8(ebx);
    MEM8(ecx + 0x33698C) = LO8(ebx);

loc_0003B236: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307624));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B262; /* je: equal / zero */

loc_0003B241: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 4);
    MEM8(ecx + 0x336914) = LO8(ebx);
    MEM8(ecx + 0x33698C) = LO8(ebx);

loc_0003B262: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307625));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B28E; /* je: equal / zero */

loc_0003B26D: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 5);
    MEM8(ecx + 0x336914) = LO8(ebx);
    MEM8(ecx + 0x33698C) = LO8(ebx);

loc_0003B28E: ;
    SET_LO8(ecx, MEM8(edx * 8 + 0x307626));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003B2BB; /* je: equal / zero */

loc_0003B29A: ;
    esi = eax;
    ecx = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    SET_LO8(ecx, MEM8(ecx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x336914) = 6;
    MEM8(ecx + 0x33698C) = 6;

loc_0003B2BB: ;
    SET_LO8(edx, MEM8(edx * 8 + 0x307627));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0003B2E6; /* je: equal / zero */

loc_0003B2C7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = ZX8(LO8(edx));
    SET_LO8(ecx, MEM8(edx + 0x2CD110));
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 7);
    MEM8(eax + 0x336914) = LO8(ecx);
    MEM8(eax + 0x33698C) = LO8(ecx);

loc_0003B2E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003B2F0
 * Original: 0x0003B2F0 - 0x0003B3DF (239 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003B2F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 3);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D7F4);
    PUSH32(esp, 0x0003B301u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B301: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003B306: ;
    edx = MEM32(esi * 4 + 0x2CD24C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi * 2 + 0x2CD1C8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2CD1B4));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B32Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B32B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003B3D3; /* jg: greater (signed >) */

loc_0003B337: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003B370; /* jne: not equal / not zero */

loc_0003B33C: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369BC);
    ecx = MEM32(eax * 4 + 0x2CD214);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x17);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003B356u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B356: ;
    edx = (uint32_t)(int32_t)SMEM8(0x3369B4);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B36Bu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B36B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003B3D3;

loc_0003B370: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003B393; /* jne: not equal / not zero */

loc_0003B374: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3369D4);
    ecx = MEM32(eax * 4 + 0x2CD20C);
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003B38Eu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B38E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003B3D3;

loc_0003B393: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003B3B7; /* jne: not equal / not zero */

loc_0003B398: ;
    edx = (uint32_t)(int32_t)SMEM16(0x3369E8);
    eax = MEM32(edx * 4 + 0x2CD204);
    PUSH32(esp, 4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003B3B2u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B3B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003B3D3;

loc_0003B3B7: ;
    edx = (uint32_t)(int32_t)SMEM16(esi * 2 + 0x3369D4);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    ecx = esi + esi + 7;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B3D0u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B3D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003B3D3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003B306; /* jl: less (signed <) */

loc_0003B3DD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003B3E0
 * Original: 0x0003B3E0 - 0x0003B45A (122 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003B3E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 3);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x22D3FC);
    PUSH32(esp, 0x0003B3F1u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B3F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003B3F6: ;
    edx = MEM32(esi * 4 + 0x2CD3C4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi * 2 + 0x2CD450));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2CD43C));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B41Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B41B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003B452; /* jge: greater or equal (signed >=) */

loc_0003B423: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x3368F0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi * 2 + 0x2CD428));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2CD414));
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x2CD3A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003B44Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B44F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003B452: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003B3F6; /* jl: less (signed <) */

loc_0003B458: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003B460
 * Original: 0x0003B460 - 0x0003B577 (279 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B460: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM8(0x336910);
    eax = MEM32(eax * 4 + 0x2CD498);
    PUSH32(esp, ebx);
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    edx = edx + eax + 0x6C;
    PUSH32(esp, edi);
    esi = 8;
    MEM32(esp + 0x10) = edx;
    edi = edi;

loc_0003B490: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + -4);
    eax = 0x57619F1;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebp = edx;
    ebp = ebp >> 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFE890u);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x51EB851F;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    eax = ecx + 1;
    ebx = edx;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0003B4CDu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B4CD: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x22D840);
    PUSH32(esp, 0x0003B4DCu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B4DC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003B4E9u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B4E9: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x22D83C);
    PUSH32(esp, 0x0003B4F8u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B4F8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003B508u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B508: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D838);
    PUSH32(esp, 0x0003B517u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B517: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x64);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003B529u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B529: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = edi + 1;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003B53Du); RECOMP_ABI_CALL(0x0005E550u, sub_0005E550); /* call 0x0005E550 */

loc_0003B53D: ;
    ecx = ZX8(MEM8(edi));
    edx = MEM32(ecx * 4 + 0x2CD464);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B555u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B555: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1C (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0003B490; /* jb: below (unsigned <) */

loc_0003B56F: ;
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
 * sub_0003B580
 * Original: 0x0003B580 - 0x0003B64C (204 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x336910);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x32);
    esi = 8;
    edi = edi + eax + 0x2C9;

loc_0003B5A3: ;
    SET_LO8(ebx, MEM8(edi + -1));
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003B5B4u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B5B4: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x22D840);
    PUSH32(esp, 0x0003B5C3u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B5C3: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x63 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003B5D7; /* jb: below (unsigned <) */

loc_0003B5CB: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x22D848);
    goto loc_0003B608;

loc_0003B5D7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003B5E7u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B5E7: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x22C8F8);
    PUSH32(esp, 0x0003B5F6u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B5F6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003B610; /* jbe: below or equal (unsigned <=) */

loc_0003B5FE: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D844);

loc_0003B608: ;
    PUSH32(esp, 0x0003B60Du); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B60D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003B610: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    edx = edi + 1;
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B620u); RECOMP_ABI_CALL(0x0005E550u, sub_0005E550); /* call 0x0005E550 */

loc_0003B620: ;
    eax = ZX8(MEM8(edi));
    ecx = MEM32(eax * 4 + 0x2CD464);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003B635u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B635: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003B5A3; /* jb: below (unsigned <) */

loc_0003B647: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003B650
 * Original: 0x0003B650 - 0x0003B77E (302 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM8(0x336910);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = eax + eax * 8;
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = 0x2C568C;
    MEM32(esp + 0x18) = 0xA;
    edi = ecx + eax * 8 + 0x332;

loc_0003B684: ;
    SET_LO16(esi, ZX8(MEM8(esp + 0x13)));
    edx = MEM32(esp + 0x14);
    SET_LO8(ebx, MEM8(edx));
    PUSH32(esp, 3);
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22D858);
    PUSH32(esp, 0x0003B6A5u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B6A5: ;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0003B6B9u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B6B9: ;
    esi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003B6C2: ;
    SET_LO8(ebx, MEM8(edi + -2));
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebp = eax + 1;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003B6D5u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B6D5: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x22D840);
    PUSH32(esp, 0x0003B6E4u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B6E4: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D850);
    PUSH32(esp, 0x0003B6F3u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B6F3: ;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = ZX8(LO8(ebx));
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003B703u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B703: ;
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003B719u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003B719: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003B726u); RECOMP_ABI_CALL(0x0005E550u, sub_0005E550); /* call 0x0005E550 */

loc_0003B726: ;
    ecx = ZX8(MEM8(edi + -1));
    edx = MEM32(ecx * 4 + 0x2CD464);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B73Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B73C: ;
    eax = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003B6C2; /* jb: below (unsigned <) */

loc_0003B750: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0003B684; /* jb: below (unsigned <) */

loc_0003B776: ;
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
 * sub_0003B780
 * Original: 0x0003B780 - 0x0003B7C9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B780: ;
    SET_LO8(ecx, MEM8(0x3139C8));
    eax = (uint32_t)(int32_t)SMEM8(0x336910);
    eax = MEM32(eax * 4 + 0x2CD498);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(9)) >> 32) & 1);
    ecx = ecx + 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003B8E2(); return; } /* jbe: below or equal (unsigned <=) */

loc_0003B7A8: ;
    PUSH32(esp, ebx);
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = eax + edx * 8 + 0x1A8;
    PUSH32(esp, edi);
    esi = 0x2CD4D2;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    g_seh_ebp = ebp; sub_0003B7D0(); return; /* tail jmp 0x0003B7D0 */

}

/**
 * sub_0003B7D0
 * Original: 0x0003B7D0 - 0x0003B8E2 (274 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B7D0: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);
    eax = 0x57619F1;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebp = edx;
    ebp = ebp >> 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFFFFE890u);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x51EB851F;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + -6));
    PUSH32(esp, 3);
    ecx = esi + -18;
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003B811u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B811: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + -2));
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003B828u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B828: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 2);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D83C);
    PUSH32(esp, 0x0003B845u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B845: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, 2);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003B860u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B860: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 5);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D838);
    PUSH32(esp, 0x0003B880u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003B880: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 2);
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 6);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, 3);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003B8A0u); RECOMP_ABI_CALL(0x0005E1D0u, sub_0005E1D0); /* call 0x0005E1D0 */

loc_0003B8A0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    edi = MEM32(esp + 0x3C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 9);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003B8C2u); RECOMP_ABI_CALL(0x0005E4E0u, sub_0005E4E0); /* call 0x0005E4E0 */

loc_0003B8C2: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0003B7D0; /* jne: not equal / not zero */

loc_0003B8DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0003B8E2(); return; /* fallthrough 0x0003B8E2 */

}

/**
 * sub_0003B8E2
 * Original: 0x0003B8E2 - 0x0003B8E6 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B8E2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003B8E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003B8F0
 * Original: 0x0003B8F0 - 0x0003B9D6 (230 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B8F0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(0x3139C8));
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BAE7(); return; } /* jle: less or equal (signed <=) */

loc_0003B917: ;
    edx = ZX8(LO8(ebx));
    ecx = edx;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x2C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = edx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BAE7(); return; } /* jle: less or equal (signed <=) */

loc_0003B94C: ;
    ebp = MEM32(esp + 0x40);
    ecx = ZX8(LO8(ebx));
    eax = esp + 0x2C;
    _fb = (uint32_t)(0x3BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x3BC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;

loc_0003B965: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = esp + 0x20;
    edx = ebp;

loc_0003B974: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003B986; /* je: equal / zero */

loc_0003B979: ;
    ecx = ZX16(MEM16(edx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003B986; /* ja: above (unsigned >) */

loc_0003B980: ;
    edi = ecx;
    MEM8(esp + 0x13) = LO8(eax);

loc_0003B986: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003B974; /* jl: less (signed <) */

loc_0003B990: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    edx = ZX8(LO8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + edx + 0x20) = 1;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0003B965; /* jne: not equal / not zero */

loc_0003B9B2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BAE7(); return; } /* jle: less or equal (signed <=) */

loc_0003B9BA: ;
    eax = esp + 0x2C;
    ecx = ZX8(LO8(ebx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 1;
    esi = 8;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    g_seh_ebp = ebp; sub_0003B9E0(); return; /* tail jmp 0x0003B9E0 */

}

/**
 * sub_0003B9D6
 * Original: 0x0003B9D6 - 0x0003BAE7 (273 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B9D6(void)
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

loc_0003B9D6: ;
    eax = MEM32(esp + 0x1C);
    /* nop */
    edx = MEM32(esp + 0x40);
    SET_LO8(ecx, MEM8(eax + ebp));
    eax = MEM32(edx + 0x3D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003B9F7; /* jne: not equal / not zero */

loc_0003B9F1: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0003BA2F;

loc_0003B9F7: ;
    edi = ZX8(LO8(ecx));
    edx = ZX16(MEM16(edx + edi * 2 + 0x3BC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BA17; /* jge: greater or equal (signed >=) */

loc_0003BA11: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0003BA17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BA29; /* jge: greater or equal (signed >=) */

loc_0003BA23: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0003BA29: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003BA2F: ;
    ebx = MEM32(esp + 0x40);
    edi = ZX8(LO8(ecx));
    ecx = edi + edi * 2;
    eax = 7;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x60), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BA57; /* je: equal / zero */

loc_0003BA45: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x22D870);
    PUSH32(esp, 0x0003BA54u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA54: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BA57: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003BA64u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003BA64: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x22D840);
    PUSH32(esp, 0x0003BA73u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA73: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ecx = edi + edi * 4;
    edx = ecx * 4 + 0x2CD4C0;
    PUSH32(esp, 0xB);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003BA88u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA88: ;
    eax = ZX16(MEM16(ebx + edi * 2 + 0x3BC));
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003BA9Du); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003BA9D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22D820);
    PUSH32(esp, 0x0003BAAFu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BAAF: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003BAC2u); RECOMP_ABI_CALL(0x0005DBC0u, sub_0005DBC0); /* call 0x0005DBC0 */

loc_0003BAC2: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x22D86C);
    PUSH32(esp, 0x0003BAD1u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BAD1: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0003B9D6; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0003BAE7(); return; /* fallthrough 0x0003BAE7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003B9E0
 * Original: 0x0003B9E0 - 0x0003BAE7 (263 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B9E0(void)
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

loc_0003B9E0: ;
    edx = MEM32(esp + 0x40);
    SET_LO8(ecx, MEM8(eax + ebp));
    eax = MEM32(edx + 0x3D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003B9F7; /* jne: not equal / not zero */

loc_0003B9F1: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0003BA2F;

loc_0003B9F7: ;
    edi = ZX8(LO8(ecx));
    edx = ZX16(MEM16(edx + edi * 2 + 0x3BC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BA17; /* jge: greater or equal (signed >=) */

loc_0003BA11: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0003BA17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BA29; /* jge: greater or equal (signed >=) */

loc_0003BA23: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0003BA29: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003BA2F: ;
    ebx = MEM32(esp + 0x40);
    edi = ZX8(LO8(ecx));
    ecx = edi + edi * 2;
    eax = 7;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x60), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BA57; /* je: equal / zero */

loc_0003BA45: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x22D870);
    PUSH32(esp, 0x0003BA54u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA54: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BA57: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003BA64u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003BA64: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x22D840);
    PUSH32(esp, 0x0003BA73u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA73: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ecx = edi + edi * 4;
    edx = ecx * 4 + 0x2CD4C0;
    PUSH32(esp, 0xB);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003BA88u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BA88: ;
    eax = ZX16(MEM16(ebx + edi * 2 + 0x3BC));
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003BA9Du); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003BA9D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22D820);
    PUSH32(esp, 0x0003BAAFu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BAAF: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003BAC2u); RECOMP_ABI_CALL(0x0005DBC0u, sub_0005DBC0); /* call 0x0005DBC0 */

loc_0003BAC2: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x22D86C);
    PUSH32(esp, 0x0003BAD1u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BAD1: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0003B9D6(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0003BAE7(); return; /* fallthrough 0x0003BAE7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003BAE7
 * Original: 0x0003BAE7 - 0x0003BAF8 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BAE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BAE7: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003BAF4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003BAF4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003BB00
 * Original: 0x0003BB00 - 0x0003BB7C (124 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BB00: ;
    ecx = ZX8(MEM8(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB18; /* je: equal / zero */

loc_0003BB15: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0003BB18: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB20; /* je: equal / zero */

loc_0003BB1D: ;
    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

loc_0003BB20: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB28; /* je: equal / zero */

loc_0003BB25: ;
    SET_LO8(eax, 4);
    esp += 4; return; /* ret */

loc_0003BB28: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB30; /* je: equal / zero */

loc_0003BB2D: ;
    SET_LO8(eax, 3);
    esp += 4; return; /* ret */

loc_0003BB30: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB38; /* je: equal / zero */

loc_0003BB35: ;
    SET_LO8(eax, 0xC);
    esp += 4; return; /* ret */

loc_0003BB38: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0003BB3F; /* jns: not sign (positive) */

loc_0003BB3C: ;
    SET_LO8(eax, 0xB);
    esp += 4; return; /* ret */

loc_0003BB3F: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB47; /* je: equal / zero */

loc_0003BB44: ;
    SET_LO8(eax, 5);
    esp += 4; return; /* ret */

loc_0003BB47: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003BB79; /* jne: not equal / not zero */

loc_0003BB4C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003BB79; /* jne: not equal / not zero */

loc_0003BB51: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB59; /* je: equal / zero */

loc_0003BB56: ;
    SET_LO8(eax, 7);
    esp += 4; return; /* ret */

loc_0003BB59: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB61; /* je: equal / zero */

loc_0003BB5E: ;
    SET_LO8(eax, 8);
    esp += 4; return; /* ret */

loc_0003BB61: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB69; /* je: equal / zero */

loc_0003BB66: ;
    SET_LO8(eax, 9);
    esp += 4; return; /* ret */

loc_0003BB69: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB71; /* je: equal / zero */

loc_0003BB6E: ;
    SET_LO8(eax, 0xA);
    esp += 4; return; /* ret */

loc_0003BB71: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BB7B; /* je: equal / zero */

loc_0003BB76: ;
    SET_LO8(eax, 0xD);
    esp += 4; return; /* ret */

loc_0003BB79: ;
    SET_LO8(eax, 6);

loc_0003BB7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003BB80
 * Original: 0x0003BB80 - 0x0003BB8F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BB80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x3369BA) = LO16(eax);
    MEM16(0x3369B8) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BB90
 * Original: 0x0003BB90 - 0x0003BBEA (90 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BB90: ;
    SET_LO16(ecx, MEM16(0x3369BA));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x4000 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BBBB; /* jge: greater or equal (signed >=) */

loc_0003BBA4: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(edx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(esi + 0x6E9AAE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x6E9AAE), 0x4000 (16-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0003BBBB; /* jle: less or equal (signed <=) */

loc_0003BBB7: ;
    SET_LO8(eax, 1);
    goto loc_0003BBD5;

loc_0003BBBB: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xC000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xC000 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003BBD5; /* jle: less or equal (signed <=) */

loc_0003BBC2: ;
    ecx = ZX8(LO8(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(ecx + 0x6E9AAE)) & 0xFFFFu; _fb = (uint32_t)(0xC000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x6E9AAE), 0xC000 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BBD5; /* jge: greater or equal (signed >=) */

loc_0003BBD3: ;
    SET_LO8(eax, 2);

loc_0003BBD5: ;
    edx = ZX8(LO8(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    SET_LO16(ecx, MEM16(edx + 0x6E9AAE));
    MEM16(0x3369BA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BBF0
 * Original: 0x0003BBF0 - 0x0003BCED (253 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BBF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003BBFDu); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003BBFD: ;
    esi = MEM32(esp + 0x18);
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BC3C; /* jne: not equal / not zero */

loc_0003BC0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003BC14u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BC14: ;
    eax = ZX16(MEM16(esp + 0x34));
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(edx, MEM8(esp + 0x24));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC22: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0003BC2A; /* jns: not sign (positive) */

loc_0003BC26: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_0003BC2A: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BC22; /* je: equal / zero */

loc_0003BC35: ;
    MEM8(esi) = LO8(ecx);
    goto loc_0003BCBD;

loc_0003BC3C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BC6F; /* jne: not equal / not zero */

loc_0003BC41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003BC4Au); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BC4A: ;
    eax = ZX16(MEM16(esp + 0x34));
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(edx, MEM8(esp + 0x24));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC58: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003BC60; /* jl: less (signed <) */

loc_0003BC5E: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003BC60: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003BC58; /* je: equal / zero */

loc_0003BC6B: ;
    MEM8(esi) = LO8(ecx);
    goto loc_0003BCBD;

loc_0003BC6F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BC95; /* jne: not equal / not zero */

loc_0003BC74: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x20);
    eax = edx + ecx;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    SET_LO8(edx, MEM8(eax + ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + edi) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003BCBD; /* jle: less or equal (signed <=) */

loc_0003BC8F: ;
    MEM8(eax + ecx) = 0;
    goto loc_0003BCBD;

loc_0003BC95: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BCBD; /* jne: not equal / not zero */

loc_0003BC9A: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(eax + ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003BCBD; /* jge: greater or equal (signed >=) */

loc_0003BCB3: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(eax + edx));
    MEM8(eax + ecx) = LO8(edx);

loc_0003BCBD: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    ecx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(edx, MEM16(eax + ecx));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003BCE4u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BCE4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BCF0
 * Original: 0x0003BCF0 - 0x0003BD3C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BCF0: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BDF9(); return; } /* jle: less or equal (signed <=) */

loc_0003BCFF: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(LO8(edx));
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    g_seh_ebp = ebp; sub_0003BD40(); return; /* tail jmp 0x0003BD40 */

}

/**
 * sub_0003BD3C
 * Original: 0x0003BD3C - 0x0003BDF9 (189 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BD3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BD3C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x2C);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(esp + 0x54));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    PUSH32(esp, 3);
    if (TEST_Z(_fa, _fb)) goto loc_0003BD9B; /* je: equal / zero */

loc_0003BD56: ;
    eax = MEM32(eax + edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003BD6Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BD6C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BDDC; /* je: equal / zero */

loc_0003BD75: ;
    edx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + ebp));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + esi));
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(edx + ecx);
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, eax);
    goto loc_0003BDD4;

loc_0003BD9B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D880);
    PUSH32(esp, 0x0003BDB2u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BDB2: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BDDC; /* je: equal / zero */

loc_0003BDBB: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + ebp));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + esi));
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D874);

loc_0003BDD4: ;
    PUSH32(esp, 0x0003BDD9u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BDD9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BDDC: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0003BD3C; /* jne: not equal / not zero */

loc_0003BDF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0003BDF9(); return; /* fallthrough 0x0003BDF9 */

}

/**
 * sub_0003BD40
 * Original: 0x0003BD40 - 0x0003BDF9 (185 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BD40: ;
    ecx = MEM32(esp + 0x2C);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(esp + 0x54));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    PUSH32(esp, 3);
    if (TEST_Z(_fa, _fb)) goto loc_0003BD9B; /* je: equal / zero */

loc_0003BD56: ;
    eax = MEM32(eax + edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003BD6Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BD6C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BDDC; /* je: equal / zero */

loc_0003BD75: ;
    edx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + ebp));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + esi));
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(edx + ecx);
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, eax);
    goto loc_0003BDD4;

loc_0003BD9B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D880);
    PUSH32(esp, 0x0003BDB2u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BDB2: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BDDC; /* je: equal / zero */

loc_0003BDBB: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + ebp));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + esi));
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D874);

loc_0003BDD4: ;
    PUSH32(esp, 0x0003BDD9u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BDD9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BDDC: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0003BD3C(); return; } /* jne: not equal / not zero */

loc_0003BDF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0003BDF9(); return; /* fallthrough 0x0003BDF9 */

}

/**
 * sub_0003BDF9
 * Original: 0x0003BDF9 - 0x0003BE28 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BDF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BDF9: ;
    eax = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(edx, MEM16(eax + ecx));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003BE24u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BE24: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003BE30
 * Original: 0x0003BE30 - 0x0003BE47 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BE30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003BE39u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003BE39: ;
    edi = MEM32(esp + 0x18);
    MEM8(esp + 0xF) = 0;
    esi = 0xFFC0;

    g_seh_ebp = ebp; sub_0003BE47(); return; /* fallthrough 0x0003BE47 */

}

/**
 * sub_0003BE47
 * Original: 0x0003BE47 - 0x0003BEAD (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BE47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BE47: ;
    PUSH32(esp, 0x0003BE4Cu); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003BE4C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003BE53u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003BE53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003BE5Bu); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003BE5B: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BE69; /* jne: not equal / not zero */

loc_0003BE64: ;
    MEM8(esp + 0xF) = 1;

loc_0003BE69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003BE6Fu); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003BE6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0003BE79u); RECOMP_ABI_CALL(0x0003AC90u, sub_0003AC90); /* call 0x0003AC90 */

loc_0003BE79: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003BEDC(); return; } /* jne: not equal / not zero */

loc_0003BE7E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003BE87u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BE87: ;
    SET_LO8(eax, MEM8(0x3369C7));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(0x336988)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336988), LO16(esi) (16-bit) */
    MEM8(0x3369C7) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0003BEA7; /* jne: not equal / not zero */

loc_0003BE9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BEA7; /* jne: not equal / not zero */

loc_0003BEA3: ;
    SET_LO8(eax, LO8(ebx));
    g_seh_ebp = ebp; sub_0003BEAD(); return; /* tail jmp 0x0003BEAD */

loc_0003BEA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BEB2(); return; } /* jge: greater or equal (signed >=) */

loc_0003BEAB: ;
    SET_LO8(eax, 4);

    g_seh_ebp = ebp; sub_0003BEAD(); return; /* fallthrough 0x0003BEAD */

}

/**
 * sub_0003BEAD
 * Original: 0x0003BEAD - 0x0003BEB2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BEAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BEAD: ;
    MEM8(0x3369C7) = LO8(eax);

    g_seh_ebp = ebp; sub_0003BEB2(); return; /* fallthrough 0x0003BEB2 */

}

/**
 * sub_0003BEB2
 * Original: 0x0003BEB2 - 0x0003BEDC (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BEB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BEB2: ;
    eax = SX8(LO8(eax));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2CCF3C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CCF30));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003BED7u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BED7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003BF21(); return; /* tail jmp 0x0003BF21 */

}

/**
 * sub_0003BEDC
 * Original: 0x0003BEDC - 0x0003BFB8 (220 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BEDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BEDC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BF12; /* jne: not equal / not zero */

loc_0003BEE1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003BEEAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BEEA: ;
    SET_LO8(eax, MEM8(0x3369C7));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(0x336988)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336988), LO16(esi) (16-bit) */
    MEM8(0x3369C7) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0003BF0A; /* jne: not equal / not zero */

loc_0003BF02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BF0A; /* jne: not equal / not zero */

loc_0003BF06: ;
    SET_LO8(eax, 3);
    g_seh_ebp = ebp; sub_0003BEAD(); return; /* tail jmp 0x0003BEAD */

loc_0003BF0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003BEB2(); return; } /* jl: less (signed <) */

loc_0003BF0E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0003BEAD(); return; /* tail jmp 0x0003BEAD */

loc_0003BF12: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BF5D; /* je: equal / zero */

loc_0003BF17: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BF5D; /* je: equal / zero */

loc_0003BF1C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BF32; /* je: equal / zero */

loc_0003BF21: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003BE47(); return; } /* je: equal / zero */

loc_0003BF2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BF32: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003BF3Eu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF3E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003BF47u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF47: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BF4A: ;
    MEM8(0x3369C7) = 0;
    MEM8(0x3369AD) = 0xFF;

loc_0003BF58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BF5D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003BF69u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF69: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003BF72u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF72: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369C7);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003BF58; /* ja: above (unsigned >) */

loc_0003BF81: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3BFB8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0003BF4Au) goto loc_0003BF4A;
    if (_jt == 0x0003BF88u) goto loc_0003BF88;
    if (_jt == 0x0003BF94u) goto loc_0003BF94;
    if (_jt == 0x0003BFA0u) goto loc_0003BFA0;
    if (_jt == 0x0003BFACu) goto loc_0003BFAC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003BF88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BF94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 3;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BFA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 4;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BFAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 5;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BF21
 * Original: 0x0003BF21 - 0x0003BFB8 (151 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BF21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BF21: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003BE47(); return; } /* je: equal / zero */

loc_0003BF2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003BF47u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF47: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BF4A: ;
    MEM8(0x3369C7) = 0;
    MEM8(0x3369AD) = 0xFF;

loc_0003BF58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003BF72u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003BF72: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369C7);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003BF58; /* ja: above (unsigned >) */

loc_0003BF81: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3BFB8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0003BF4Au) goto loc_0003BF4A;
    if (_jt == 0x0003BF88u) goto loc_0003BF88;
    if (_jt == 0x0003BF94u) goto loc_0003BF94;
    if (_jt == 0x0003BFA0u) goto loc_0003BFA0;
    if (_jt == 0x0003BFACu) goto loc_0003BFAC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003BF88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BF94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 3;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BFA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 4;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003BFAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 5;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BFD0
 * Original: 0x0003BFD0 - 0x0003C02C (92 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BFD0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x22D88C);
    PUSH32(esp, 0x0003BFE0u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003BFE0: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x2CD0A8);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x2CD090);
    PUSH32(esp, 0x2CD004);
    PUSH32(esp, 0x2CD078);
    PUSH32(esp, 0x2CD060);
    PUSH32(esp, 0x2CCFD8);
    PUSH32(esp, 0x2CD048);
    PUSH32(esp, 0x2CD030);
    PUSH32(esp, 0x2CCF6C);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3369C8);
    PUSH32(esp, 0x3369C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C028u); RECOMP_ABI_CALL(0x0003BCF0u, sub_0003BCF0); /* call 0x0003BCF0 */

loc_0003C028: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003C030
 * Original: 0x0003C030 - 0x0003C114 (228 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi * 4 + 0x30F9B4));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C048u); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003C048: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C077; /* jne: not equal / not zero */

loc_0003C052: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003C05Bu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C05B: ;
    SET_LO8(eax, MEM8(esi + 0x3369C0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x3369C0) = LO8(eax);
    if ((_fas >= 0)) goto loc_0003C0BF; /* jns: not sign (positive) */

loc_0003C06E: ;
    MEM8(esi + 0x3369C0) = 8;
    goto loc_0003C0BF;

loc_0003C077: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C0A5; /* jne: not equal / not zero */

loc_0003C07C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003C085u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C085: ;
    SET_LO8(ecx, MEM8(esi + 0x3369C0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    MEM8(esi + 0x3369C0) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0003C0BF; /* jl: less (signed <) */

loc_0003C09C: ;
    MEM8(esi + 0x3369C0) = 0;
    goto loc_0003C0BF;

loc_0003C0A5: ;
    ecx = MEM32(esi * 4 + 0x30F9B4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A98), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003C0BF; /* je: equal / zero */

loc_0003C0B8: ;
    MEM8(0x3369C3) = 1;

loc_0003C0BF: ;
    SET_LO8(eax, MEM8(esi + 0x3369C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003C263(); return; } /* jg: greater (signed >) */

loc_0003C0CD: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    edx = SX8(LO8(eax));
    PUSH32(esp, ebp);
    ebp = edx + edi + 0x336914;
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C127(); return; } /* je: equal / zero */

loc_0003C0E6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C127(); return; } /* je: equal / zero */

loc_0003C0EB: ;
    eax = MEM32(esi * 4 + 0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    SET_LO8(edx, MEM8(eax + 0x6E9A99));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C113; /* je: equal / zero */

loc_0003C0FF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003C101: ;
    SET_LO8(ecx, 7);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C119(); return; } /* jne: not equal / not zero */

loc_0003C10D: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C101; /* jb: below (unsigned <) */

loc_0003C113: ;
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_0003C114(); return; /* fallthrough 0x0003C114 */

}

/**
 * sub_0003C114
 * Original: 0x0003C114 - 0x0003C119 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C114(void)
{

loc_0003C114: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003C119
 * Original: 0x0003C119 - 0x0003C263 (330 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C119: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(edx, MEM8(ecx + 0x2CD184));
    MEM8(ebp) = LO8(edx);
    goto loc_0003C12B;

    MEM8(ebp) = 0xFF;

loc_0003C12B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C137u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C137: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003C140u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C140: ;
    SET_LO8(ecx, MEM8(esi + 0x3369C0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003C1A6; /* jg: greater (signed >) */

loc_0003C14E: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C183; /* je: equal / zero */

loc_0003C157: ;
    SET_LO16(ecx, SX8(LO8(ecx)));
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + ecx + 9;
    SET_LO16(ecx, ZX8(MEM8(esp + 0x1C)));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2CD124);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    _fb = (uint32_t)(MEM16(eax + 0x2CD144)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(eax + 0x2CD144));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0003C19E;

loc_0003C183: ;
    SET_LO16(edx, ZX8(MEM8(esp + 0x1C)));
    SET_LO16(eax, SX8(LO8(ecx)));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    ecx = eax + eax + 9;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D820);

loc_0003C19E: ;
    PUSH32(esp, 0x0003C1A3u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C1A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C1A6: ;
    SET_LO8(edx, MEM8(ebp));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C24C; /* je: equal / zero */

loc_0003C1B2: ;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x3369C0);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0003C1C0;

    /* nop */

loc_0003C1C0: ;
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C1D0; /* je: equal / zero */

loc_0003C1C7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + edi + 0x336914)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + edi + 0x336914) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C1D8; /* je: equal / zero */

loc_0003C1D0: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C1C0; /* jb: below (unsigned <) */

loc_0003C1D6: ;
    goto loc_0003C248;

loc_0003C1D8: ;
    SET_LO8(edx, MEM8(edi + ebp + 0x33698C));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x336914) = LO8(edx);
    MEM8(ecx + 0x33698C) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C225; /* je: equal / zero */

loc_0003C1F9: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    ecx = SX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + edx + 9;
    SET_LO16(edx, ZX8(MEM8(esp + 0x1C)));
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x2CD124);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    _fb = (uint32_t)(MEM16(ecx + 0x2CD144)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 0x2CD144));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0003C240;

loc_0003C225: ;
    SET_LO16(ecx, ZX8(LO8(eax)));
    SET_LO16(eax, ZX8(MEM8(esp + 0x1C)));
    edx = ecx + ecx + 9;
    PUSH32(esp, edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D820);

loc_0003C240: ;
    PUSH32(esp, 0x0003C245u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C245: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C248: ;
    ebp = MEM32(esp + 0x10);

loc_0003C24C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3369C0);
    SET_LO8(edx, MEM8(ebp));
    POP32(esp, ebp);
    MEM8(ecx + edi + 0x33698C) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003C127
 * Original: 0x0003C127 - 0x0003C263 (316 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C127(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C127: ;
    MEM8(ebp) = 0xFF;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C137u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C137: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003C140u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C140: ;
    SET_LO8(ecx, MEM8(esi + 0x3369C0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003C1A6; /* jg: greater (signed >) */

loc_0003C14E: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C183; /* je: equal / zero */

loc_0003C157: ;
    SET_LO16(ecx, SX8(LO8(ecx)));
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + ecx + 9;
    SET_LO16(ecx, ZX8(MEM8(esp + 0x1C)));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2CD124);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    _fb = (uint32_t)(MEM16(eax + 0x2CD144)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(eax + 0x2CD144));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0003C19E;

loc_0003C183: ;
    SET_LO16(edx, ZX8(MEM8(esp + 0x1C)));
    SET_LO16(eax, SX8(LO8(ecx)));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    ecx = eax + eax + 9;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D820);

loc_0003C19E: ;
    PUSH32(esp, 0x0003C1A3u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C1A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C1A6: ;
    SET_LO8(edx, MEM8(ebp));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C24C; /* je: equal / zero */

loc_0003C1B2: ;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x3369C0);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0003C1C0;

    /* nop */

loc_0003C1C0: ;
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C1D0; /* je: equal / zero */

loc_0003C1C7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + edi + 0x336914)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + edi + 0x336914) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C1D8; /* je: equal / zero */

loc_0003C1D0: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C1C0; /* jb: below (unsigned <) */

loc_0003C1D6: ;
    goto loc_0003C248;

loc_0003C1D8: ;
    SET_LO8(edx, MEM8(edi + ebp + 0x33698C));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x336914) = LO8(edx);
    MEM8(ecx + 0x33698C) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C225; /* je: equal / zero */

loc_0003C1F9: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    ecx = SX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + edx + 9;
    SET_LO16(edx, ZX8(MEM8(esp + 0x1C)));
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x2CD124);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    _fb = (uint32_t)(MEM16(ecx + 0x2CD144)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 0x2CD144));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0003C240;

loc_0003C225: ;
    SET_LO16(ecx, ZX8(LO8(eax)));
    SET_LO16(eax, ZX8(MEM8(esp + 0x1C)));
    edx = ecx + ecx + 9;
    PUSH32(esp, edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D820);

loc_0003C240: ;
    PUSH32(esp, 0x0003C245u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C245: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C248: ;
    ebp = MEM32(esp + 0x10);

loc_0003C24C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3369C0);
    SET_LO8(edx, MEM8(ebp));
    POP32(esp, ebp);
    MEM8(ecx + edi + 0x33698C) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003C263
 * Original: 0x0003C263 - 0x0003C350 (237 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C263: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C316; /* jne: not equal / not zero */

loc_0003C26B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C279; /* je: equal / zero */

loc_0003C270: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C114(); return; } /* jne: not equal / not zero */

loc_0003C279: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C285u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C285: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003C28Eu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C28E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    edi = 0x2CD0C0;
    goto loc_0003C2A0;

    /* nop */

loc_0003C2A0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    SET_LO8(eax, MEM8(edi));
    MEM8(esi + 0x336914) = LO8(eax);
    MEM8(esi + 0x33698C) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_0003C308; /* ja: above (unsigned >) */

loc_0003C2B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C2E5; /* je: equal / zero */

loc_0003C2B9: ;
    SET_LO16(ecx, ZX8(LO8(ebx)));
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + ecx + 9;
    SET_LO16(ecx, ZX8(MEM8(esp + 0x18)));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2CD124);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    _fb = (uint32_t)(MEM16(eax + 0x2CD144)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(eax + 0x2CD144));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0003C300;

loc_0003C2E5: ;
    SET_LO16(edx, ZX8(MEM8(esp + 0x18)));
    SET_LO16(eax, ZX8(LO8(ebx)));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    ecx = eax + eax + 9;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D820);

loc_0003C300: ;
    PUSH32(esp, 0x0003C305u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C305: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C308: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C2A0; /* jb: below (unsigned <) */

loc_0003C311: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003C316: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C114(); return; } /* jne: not equal / not zero */

loc_0003C31E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C32C; /* je: equal / zero */

loc_0003C323: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003C114(); return; } /* jne: not equal / not zero */

loc_0003C32C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C338u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C338: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003C341u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C341: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369C3) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003C350
 * Original: 0x0003C350 - 0x0003C4F3 (419 bytes, 114 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003C35Au); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003C35A: ;
    edi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x3369BC) = LO8(eax);
    MEM8(0x3369C5) = 0xFF;
    MEM8(0x3369B4) = LO8(eax);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x40));
    MEM16(0x3369D4) = LO16(ecx);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edi + 0x41));
    MEM16(0x3369D6) = LO16(edx);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x43));
    PUSH32(esp, 5);
    MEM16(0x3369D8) = LO16(ecx);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edi + 0x42));
    PUSH32(esp, 3);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D7F4);
    MEM32(0x3369B0) = eax;
    MEM32(0x3369A8) = eax;
    MEM16(0x3369DA) = LO16(edx);
    MEM16(0x3369DC) = LO16(eax);
    MEM16(0x3369DE) = LO16(eax);
    MEM16(0x3369E0) = LO16(eax);
    MEM16(0x3369E2) = LO16(eax);
    MEM16(0x3369E4) = LO16(eax);
    PUSH32(esp, 0x0003C3D9u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C3D9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = edi;

loc_0003C3E0: ;
    esi = ZX8(LO8(ebx));
    edx = MEM32(esi * 4 + 0x2CD24C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi * 2 + 0x2CD1C8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2CD1B4));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003C408u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C408: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003C4B4; /* ja: above (unsigned >) */

loc_0003C414: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C44D; /* jne: not equal / not zero */

loc_0003C419: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369BC);
    ecx = MEM32(eax * 4 + 0x2CD214);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x17);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003C433u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C433: ;
    edx = (uint32_t)(int32_t)SMEM8(0x3369B4);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003C448u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003C448: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C4B4;

loc_0003C44D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C470; /* jne: not equal / not zero */

loc_0003C451: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3369D4);
    ecx = MEM32(eax * 4 + 0x2CD20C);
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003C46Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C46B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C4B4;

loc_0003C470: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C494; /* jne: not equal / not zero */

loc_0003C475: ;
    edx = (uint32_t)(int32_t)SMEM16(0x3369D4);
    eax = MEM32(edx * 4 + 0x2CD204);
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C48Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C48F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C4B4;

loc_0003C494: ;
    eax = (uint32_t)(int32_t)SMEM16(esi * 2 + 0x3369D4);
    SET_LO16(ecx, ZX8(LO8(ebx)));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    edx = ecx + ecx + 7;
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C4B1u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003C4B1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C4B4: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C3E0; /* jb: below (unsigned <) */

loc_0003C4BF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x2CD1A0));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CD18C));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003C4DFu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C4DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x18) = 0;
    MEM8(0x3368FA) = 0;
    ebp = 1;

    g_seh_ebp = ebp; sub_0003C4F3(); return; /* fallthrough 0x0003C4F3 */

}

/**
 * sub_0003C4F3
 * Original: 0x0003C4F3 - 0x0003CB1E (1579 bytes, 445 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C4F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C4F3: ;
    PUSH32(esp, 0x0003C4F8u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003C4F8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003C4FEu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003C4FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003C506u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003C506: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C514; /* jne: not equal / not zero */

loc_0003C50F: ;
    MEM8(esp + 0x18) = 1;

loc_0003C514: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C51Eu); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003C51E: ;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x17) = LO8(ebx);
    PUSH32(esp, 0x0003C529u); RECOMP_ABI_CALL(0x0003B2F0u, sub_0003B2F0); /* call 0x0003B2F0 */

loc_0003C529: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3368FA);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2CD1A0));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CD18C));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003C552u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C552: ;
    eax = MEM32(0x3369B0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C587; /* je: equal / zero */

loc_0003C560: ;
    _fa = (uint32_t)(MEM8(0x30554E)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30554E), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CA63; /* jne: not equal / not zero */

loc_0003C56D: ;
    eax = MEM32(0x3369A8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(0x3369B0) = esi;
    PUSH32(esp, 0x0003C57Fu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C57F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C587: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C5DD; /* jne: not equal / not zero */

loc_0003C58C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003C594u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C594: ;
    SET_LO8(eax, MEM8(0x3368FA));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x3368FA) = LO8(eax);
    if ((_fas >= 0)) goto loc_0003C5AC; /* jns: not sign (positive) */

loc_0003C5A5: ;
    MEM8(0x3368FA) = 8;

loc_0003C5AC: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3368FA);

loc_0003C5B3: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2CD1A0));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CD18C));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003C5D5u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C5D5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C5DD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C609; /* jne: not equal / not zero */

loc_0003C5E2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003C5EAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C5EA: ;
    SET_LO8(eax, MEM8(0x3368FA));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    MEM8(0x3368FA) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0003C604; /* jl: less (signed <) */

loc_0003C5FD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3368FA) = LO8(eax);

loc_0003C604: ;
    eax = SX8(LO8(eax));
    goto loc_0003C5B3;

loc_0003C609: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C874; /* je: equal / zero */

loc_0003C612: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8B3; /* je: equal / zero */

loc_0003C61B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C633; /* je: equal / zero */

loc_0003C620: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C633; /* je: equal / zero */

loc_0003C625: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CA71; /* je: equal / zero */

loc_0003C62E: ;
    goto loc_0003CA63;

loc_0003C633: ;
    SET_LO8(eax, MEM8(0x3368FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C651; /* jne: not equal / not zero */

loc_0003C63C: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3369DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C649u); RECOMP_ABI_CALL(0x0004EA40u, sub_0004EA40); /* call 0x0004EA40 */

loc_0003C649: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C651: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C677; /* jne: not equal / not zero */

loc_0003C655: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C661u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C661: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3369E0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003C66Fu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C66F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C677: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C6F2; /* jne: not equal / not zero */

loc_0003C67B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C687u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C687: ;
    SET_LO8(eax, MEM8(0x3369BC));
    SET_LO8(ecx, MEM8(0x3369C5));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0003C6D8; /* je: equal / zero */

loc_0003C69A: ;
    edx = SX8(LO8(eax));
    eax = ZX8(MEM8(edx + 0x2CD37C));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003C6ABu); RECOMP_ABI_CALL(0x0004F120u, sub_0004F120); /* call 0x0004F120 */

loc_0003C6AB: ;
    edx = (uint32_t)(int32_t)SMEM8(0x3369B4);
    SET_LO8(ecx, MEM8(0x3369BC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369C5) = LO8(ecx);
    MEM32(0x3369A8) = edx;
    MEM32(0x3369B0) = ebp;
    goto loc_0003CA63;

loc_0003C6D8: ;
    eax = (uint32_t)(int32_t)SMEM8(0x3369B4);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C6EAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C6EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C6F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C867; /* jne: not equal / not zero */

loc_0003C6FA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003C706u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C706: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003C70Eu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003C70E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003C713: ;
    eax = ZX8(LO8(ebx));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO16(ecx, MEM16(eax + 0x2CD1DC));
    MEM16(eax + 0x3369D4) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0003C745; /* jne: not equal / not zero */

loc_0003C72A: ;
    PUSH32(esp, 4);
    ecx = SX16(LO16(ecx));
    edx = MEM32(ecx * 4 + 0x2CD20C);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1D);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003C740u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C740: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C7B3;

loc_0003C745: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C769; /* jne: not equal / not zero */

loc_0003C74A: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3369E8);
    ecx = MEM32(eax * 4 + 0x2CD204);
    PUSH32(esp, 4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003C764u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C764: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C7B3;

loc_0003C769: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003C7B3; /* ja: above (unsigned >) */

loc_0003C76E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C798; /* jne: not equal / not zero */

loc_0003C773: ;
    edx = MEM32(0x2CD214);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x17);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003C785u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C785: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003C793u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003C793: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003C7B3;

loc_0003C798: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    edx = eax + eax + 7;
    PUSH32(esp, edx);
    eax = SX16(LO16(ecx));
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C7B0u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003C7B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003C7B3: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C713; /* jb: below (unsigned <) */

loc_0003C7BE: ;
    ecx = ZX8(MEM8(0x2CD37C));
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(0x3369BC) = 0;
    MEM8(0x3369B4) = 0;
    PUSH32(esp, 0x0003C7DBu); RECOMP_ABI_CALL(0x0004F120u, sub_0004F120); /* call 0x0004F120 */

loc_0003C7DB: ;
    SET_LO8(edx, MEM8(0x3369BC));
    SET_LO8(eax, MEM8(0x3369D4));
    MEM8(0x3369C5) = LO8(edx);
    MEM8(edi + 0x40) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369D6));
    MEM8(edi + 0x41) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369D8));
    SET_LO8(ecx, MEM8(edi + 0x40));
    MEM8(edi + 0x43) = LO8(edx);
    SET_LO8(eax, MEM8(0x3369DA));
    MEM8(edi + 0x42) = LO8(eax);
    MEM8(0x316FF3) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x41));
    edx = ZX8(LO8(eax));
    PUSH32(esp, edx);
    MEM32(0x3369B0) = ebp;
    MEM32(0x3369A8) = 0xFFFF;
    MEM8(0x3139C9) = LO8(eax);
    PUSH32(esp, 0x0003C833u); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_0003C833: ;
    SET_LO8(eax, MEM8(edi + 0x42));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003C844; /* jl: less (signed <) */

loc_0003C83D: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0003C847;

loc_0003C844: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0003C847: ;
    MEM8(0x30C4C1) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003C855u); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_0003C855: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003C85Bu); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_0003C85B: ;
    SET_LO8(ebx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C867: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CA71; /* je: equal / zero */

loc_0003C86F: ;
    goto loc_0003CA63;

loc_0003C874: ;
    SET_LO8(ecx, MEM8(0x3368FA));
    eax = SX8(LO8(ecx));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 0x3369D4) = MEM16(eax + 0x3369D4) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x3369D4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax + 0x3369D4));
    SET_LO16(esi, MEM16(eax + 0x2CD1F0));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003C8F4; /* jle: less or equal (signed <=) */

loc_0003C899: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C89E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C8A3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C8A8: ;
    MEM16(eax + 0x3369D4) = 0;
    goto loc_0003C8F4;

loc_0003C8B3: ;
    SET_LO8(ecx, MEM8(0x3368FA));
    eax = SX8(LO8(ecx));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 0x3369D4) = MEM16(eax + 0x3369D4) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x3369D4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax + 0x3369D4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3369D4), LO16(esi) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003C8F4; /* jge: greater or equal (signed >=) */

loc_0003C8CE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C8D3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C8D8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C8ED; /* je: equal / zero */

loc_0003C8DD: ;
    SET_LO16(edx, MEM16(eax + 0x2CD1F0));
    MEM16(eax + 0x3369D4) = LO16(edx);
    goto loc_0003C8F4;

loc_0003C8ED: ;
    MEM16(eax + 0x3369D4) = LO16(esi);

loc_0003C8F4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C923; /* jne: not equal / not zero */

loc_0003C8F9: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3369E8);
    edx = MEM32(ecx * 4 + 0x2CD204);
    SET_LO8(eax, MEM8(edi + 0x40));
    PUSH32(esp, 4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x1D);
    PUSH32(esp, edx);
    MEM8(0x316FF3) = LO8(eax);
    PUSH32(esp, 0x0003C91Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C91B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C923: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C93B; /* jne: not equal / not zero */

loc_0003C927: ;
    SET_LO8(eax, MEM8(0x3369D4));
    MEM8(edi + 0x40) = LO8(eax);
    MEM8(0x3369C5) = 0xFF;
    goto loc_0003CA63;

loc_0003C93B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C9BD; /* jne: not equal / not zero */

loc_0003C940: ;
    SET_LO16(edx, MEM16(0x3369DE));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_0003C950: ;
    esi = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi * 2 + 0x2CD23A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi * 2 + 0x2CD23A) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003C964; /* jl: less (signed <) */

loc_0003C95D: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003C950; /* jb: below (unsigned <) */

loc_0003C964: ;
    SET_LO8(eax, MEM8(eax + 0x3369D4));
    edx = ZX8(LO8(ecx));
    _fb = (uint32_t)(MEM8(edx * 2 + 0x2CD238)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(edx * 2 + 0x2CD238));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(0x3369BC) = LO8(ecx);
    PUSH32(esp, 4);
    ecx = SX8(LO8(ecx));
    edx = MEM32(ecx * 4 + 0x2CD214);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x17);
    PUSH32(esp, edx);
    MEM8(0x3369B4) = LO8(eax);
    PUSH32(esp, 0x0003C995u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003C995: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(0x3368FA));
    edx = (uint32_t)(int32_t)SMEM8(0x3369B4);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    ecx = eax + eax + 7;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003C9B5u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003C9B5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA63;

loc_0003C9BD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003CA63; /* jg: greater (signed >) */

loc_0003C9C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003C9E6; /* jne: not equal / not zero */

loc_0003C9CB: ;
    SET_LO8(eax, MEM8(0x3369D6));
    ecx = ZX8(LO8(eax));
    MEM8(edi + 0x41) = LO8(eax);
    PUSH32(esp, ecx);
    MEM8(0x3139C9) = LO8(eax);
    PUSH32(esp, 0x0003C9E1u); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_0003C9E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003CA3A;

loc_0003C9E6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CA17; /* jne: not equal / not zero */

loc_0003C9EB: ;
    SET_LO8(edx, MEM8(0x3369DA));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM8(edi + 0x42) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0003CA01; /* jl: less (signed <) */

loc_0003C9FA: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0003CA04;

loc_0003CA01: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0003CA04: ;
    MEM8(0x30C4C1) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CA12u); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_0003CA12: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 6);
    goto loc_0003CA32;

loc_0003CA17: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CA40; /* jne: not equal / not zero */

loc_0003CA1C: ;
    SET_LO8(ecx, MEM8(0x3369D8));
    PUSH32(esp, 0);
    MEM8(edi + 0x43) = LO8(ecx);
    PUSH32(esp, 0x0003CA2Cu); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_0003CA2C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);

loc_0003CA32: ;
    PUSH32(esp, 0x0003CA37u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CA37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003CA3A: ;
    SET_LO8(ecx, MEM8(0x3368FA));

loc_0003CA40: ;
    SET_LO16(edx, SX8(LO8(ecx)));
    PUSH32(esp, 3);
    ecx = SX8(LO8(ecx));
    PUSH32(esp, 4);
    eax = edx + edx + 7;
    edx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x3369D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CA60u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CA60: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003CA63: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003C4F3; /* je: equal / zero */

loc_0003CA6F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003CA71: ;
    SET_LO8(eax, MEM8(0x3369D4));
    MEM8(edi + 0x40) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369D6));
    MEM8(edi + 0x41) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369D8));
    SET_LO8(ecx, MEM8(edi + 0x40));
    MEM8(edi + 0x43) = LO8(edx);
    SET_LO8(eax, MEM8(0x3369DA));
    MEM8(edi + 0x42) = LO8(eax);
    MEM8(0x316FF3) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x41));
    edx = ZX8(LO8(eax));
    PUSH32(esp, edx);
    MEM8(0x3139C9) = LO8(eax);
    PUSH32(esp, 0x0003CAADu); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_0003CAAD: ;
    SET_LO8(eax, MEM8(edi + 0x42));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003CABE; /* jl: less (signed <) */

loc_0003CAB7: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0003CAC1;

loc_0003CABE: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0003CAC1: ;
    MEM8(0x30C4C1) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CACFu); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_0003CACF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003CAD5u); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_0003CAD5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    MEM8(0x3369AD) = 0;
    PUSH32(esp, 0x0003CAE8u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CAE8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0003CAF5; /* jne: not equal / not zero */

loc_0003CAF1: ;
    PUSH32(esp, 0x29);
    goto loc_0003CAF7;

loc_0003CAF5: ;
    PUSH32(esp, 0x24);

loc_0003CAF7: ;
    PUSH32(esp, 0x0003CAFCu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CAFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003CB04u); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_0003CB04: ;
    PUSH32(esp, 0x0003CB09u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003CB09: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003CB0Fu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003CB0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003AB40(); return; /* tail jmp 0x0003AB40 */

}

/**
 * sub_0003CB20
 * Original: 0x0003CB20 - 0x0003CB80 (96 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003CB20: ;
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D7E4);
    PUSH32(esp, 0x0003CB30u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CB30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x336988));
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2CD36C);
    PUSH32(esp, 0x2CD35C);
    PUSH32(esp, 0x2CD2FC);
    PUSH32(esp, 0x2CD34C);
    PUSH32(esp, 0x2CD33C);
    PUSH32(esp, 0x2CD2DC);
    PUSH32(esp, 0x2CD32C);
    PUSH32(esp, 0x2CD31C);
    PUSH32(esp, 0x2CD278);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3369A0);
    PUSH32(esp, 0x3369C2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CB7Cu); RECOMP_ABI_CALL(0x0003BCF0u, sub_0003BCF0); /* call 0x0003BCF0 */

loc_0003CB7C: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003CB80
 * Original: 0x0003CB80 - 0x0003CDAF (559 bytes, 170 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003CB80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003CB8Cu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003CB8C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 3);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x22D3FC);
    PUSH32(esp, 0x0003CB9Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CB9C: ;
    ebp = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x52) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x52;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 0x3368F0;
    MEM32(esp + 0x14) = ebp;
    edi = 0x2CD3C4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003CBC0;

    /* nop */

loc_0003CBC0: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x2CD450));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x2CD43C));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CBDEu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CBDE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 8 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003CC1F; /* jge: greater or equal (signed >=) */

loc_0003CBE6: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    SET_LO8(eax, MEM8(eax + 0x2C6710));
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x2CD428));
    MEM8(ecx) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x2CD414));
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = SX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x2CD3A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CC1Cu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CC1C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003CC1F: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0003CBC0; /* jl: less (signed <) */

loc_0003CC36: ;
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003CC46u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CC46: ;
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369AC) = 0;
    MEM8(0x3369C6) = 0;
    goto loc_0003CC60;

    /* nop */

loc_0003CC60: ;
    PUSH32(esp, 0x0003CC65u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003CC65: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003CC6Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003CC6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003CC74u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003CC74: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CC84; /* jne: not equal / not zero */

loc_0003CC7D: ;
    MEM8(0x3369AC) = 1;

loc_0003CC84: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CC8Fu); RECOMP_ABI_CALL(0x0003B3E0u, sub_0003B3E0); /* call 0x0003B3E0 */

loc_0003CC8F: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x2CD400);
    PUSH32(esp, 0x2CD3EC);
    PUSH32(esp, 0x2CD388);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3368F0);
    PUSH32(esp, 0x3369C6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003CCB5u); RECOMP_ABI_CALL(0x0003BBF0u, sub_0003BBF0); /* call 0x0003BBF0 */

loc_0003CCB5: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CCDD; /* je: equal / zero */

loc_0003CCBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CCDD; /* je: equal / zero */

loc_0003CCC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CD54; /* jne: not equal / not zero */

loc_0003CCC8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003CCD4u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CCD4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    goto loc_0003CD73;

loc_0003CCDD: ;
    SET_LO8(eax, MEM8(0x3369C6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CD63; /* je: equal / zero */

loc_0003CCE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CD54; /* jne: not equal / not zero */

loc_0003CCEA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003CCF6u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CCF6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003CCFFu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CCFF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003CD10;

    /* nop */
    /* nop */

loc_0003CD10: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 8 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x2CD394));
    MEM8(esi + 0x3368F0) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_0003CD4C; /* jge: greater or equal (signed >=) */

loc_0003CD21: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi * 2 + 0x2CD428));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2CD414));
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = SX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x2CD3A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CD49u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CD49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003CD4C: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003CD10; /* jl: less (signed <) */

loc_0003CD54: ;
    SET_LO8(eax, MEM8(0x3369AC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CC60; /* je: equal / zero */

loc_0003CD61: ;
    goto loc_0003CD82;

loc_0003CD63: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003CD6Fu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CD6F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);

loc_0003CD73: ;
    PUSH32(esp, 0x0003CD78u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003CD78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369AC) = 1;

loc_0003CD82: ;
    ecx = MEM32(esp + 0x14);
    eax = 0x3368F0;
    esi = 8;

loc_0003CD90: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(edx, MEM8(edx + 0x2CD37C));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003CD90; /* jne: not equal / not zero */

loc_0003CDA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3369AD) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003CDB0
 * Original: 0x0003CDB0 - 0x0003CF69 (441 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003CDB0: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x3139C8));
    PUSH32(esp, ebx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ebx);
    goto loc_0003CDD8;

loc_0003CDD0: ;
    SET_LO8(ebx, MEM8(esp + 0x12));
    SET_LO8(edx, MEM8(esp + 0x13));

loc_0003CDD8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CDEC; /* je: equal / zero */

loc_0003CDDC: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CDE6u); RECOMP_ABI_CALL(0x0003BB90u, sub_0003BB90); /* call 0x0003BB90 */

loc_0003CDE6: ;
    SET_LO8(edx, MEM8(esp + 0x17));
    goto loc_0003CDF6;

loc_0003CDEC: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CDF6u); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003CDF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CE12; /* jne: not equal / not zero */

loc_0003CDFD: ;
    eax = SX8(LO8(ebx));
    MEM8(eax + 0x33699C) = MEM8(eax + 0x33699C) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x33699C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0003CE32; /* jns: not sign (positive) */

loc_0003CE08: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x33699C) = LO8(edx);
    goto loc_0003CE32;

loc_0003CE12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CE32; /* jne: not equal / not zero */

loc_0003CE16: ;
    eax = SX8(LO8(ebx));
    SET_LO8(ecx, MEM8(eax + 0x33699C));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(eax + 0x33699C) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0003CE32; /* jl: less (signed <) */

loc_0003CE2B: ;
    MEM8(eax + 0x33699C) = 0;

loc_0003CE32: ;
    SET_LO16(esi, SX8(LO8(ebx)));
    eax = SX8(LO8(ebx));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x33699C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    PUSH32(esp, 3);
    PUSH32(esp, 8);
    edx = esi + 7;
    PUSH32(esp, edx);
    edx = MEM32(ecx * 4 + 0x2CD3A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CE58u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CE58: ;
    ebx = esi + 5;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x2CD574;
    esi = 0x2CD584;
    ebp = 4;
    /* nop */

loc_0003CE70: ;
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CE81u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003CE81: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003CE70; /* jne: not equal / not zero */

loc_0003CE8D: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esp + 0x12) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0003CDD0; /* jl: less (signed <) */

loc_0003CE9F: ;
    SET_LO16(ecx, MEM16(0x33699C));
    eax = SX8(LO8(ecx));
    edx = SX8(HI8(ecx));
    ecx = MEM32(esp + 0x18);
    eax = eax + eax * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    eax = eax + eax * 2;
    edx = ZX8(MEM8(ecx + eax * 2 + 0x3D5));
    PUSH32(esp, 4);
    esi = ecx + eax * 2 + 0x3D4;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CED5u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CED5: ;
    eax = ZX8(MEM8(esi));
    ecx = ZX8(MEM8(esi + 1));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CEECu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CEEC: ;
    edx = ZX8(MEM8(esi + 2));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CEFEu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CEFE: ;
    eax = ZX8(MEM8(esi + 4));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CF10u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CF10: ;
    ecx = ZX8(MEM8(esi));
    edx = ZX8(MEM8(esi + 1));
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x25);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CF2Au); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CF2A: ;
    eax = ZX8(MEM8(esi + 1));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x25);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CF3Cu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CF3C: ;
    ecx = ZX8(MEM8(esi + 3));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x25);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003CF4Eu); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CF4E: ;
    edx = ZX8(MEM8(esi + 5));
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x25);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003CF60u); RECOMP_ABI_CALL(0x0005E0B0u, sub_0005E0B0); /* call 0x0005E0B0 */

loc_0003CF60: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003CF70
 * Original: 0x0003CF70 - 0x0003D23F (719 bytes, 199 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003CF70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x30F9B4);
    ecx = MEM32(0x30F9B8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 2;

loc_0003CF91: ;
    _fa = (uint32_t)(MEM32(esp + ebp * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ebp * 4 + 0x1C), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CFCA; /* jne: not equal / not zero */

loc_0003CF98: ;
    edx = ebp;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(esp + edx * 4 + 0x1C);

loc_0003CFA3: ;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003CFB7; /* je: equal / zero */

loc_0003CFAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003CFB0u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003CFB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003CFC0; /* jne: not equal / not zero */

loc_0003CFB7: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003CFA3; /* jb: below (unsigned <) */

loc_0003CFBE: ;
    goto loc_0003CFCA;

loc_0003CFC0: ;
    eax = ZX8(LO8(ebx));
    MEM32(ebp * 4 + 0x30F9B4) = eax;

loc_0003CFCA: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003CF91; /* jne: not equal / not zero */

loc_0003CFCE: ;
    PUSH32(esp, 0x0003CFD3u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003CFD3: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 2;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_0003CFE0: ;
    edx = esi + 0x33698C;
    ecx = ebx;
    MEM32(edx) = ecx;
    MEM16(edx + 4) = LO16(ecx);
    MEM8(edx + 6) = LO8(ecx);
    ecx = esi + 0x336914;
    eax = ebx;
    MEM32(ecx) = eax;
    MEM16(ecx + 4) = LO16(eax);
    PUSH32(esp, ebp);
    MEM8(ecx + 6) = LO8(eax);
    PUSH32(esp, 0x0003D008u); RECOMP_ABI_CALL(0x0003B170u, sub_0003B170); /* call 0x0003B170 */

loc_0003D008: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003CFE0; /* jne: not equal / not zero */

loc_0003D012: ;
    MEM16(0x3369C0) = 0;
    MEM8(0x3369C3) = 0;

loc_0003D022: ;
    PUSH32(esp, 0x0003D027u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003D027: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003D02Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003D02E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003D036u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003D036: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D046; /* jne: not equal / not zero */

loc_0003D03F: ;
    MEM8(0x3369C3) = 1;

loc_0003D046: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 2;

loc_0003D052: ;
    edx = MEM32(ebp * 4 + 0x30F9B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003D05Fu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003D05F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D074; /* jne: not equal / not zero */

loc_0003D066: ;
    _fa = (uint32_t)(MEM32(ebp * 4 + 0x30F9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp * 4 + 0x30F9B4), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D150; /* jne: not equal / not zero */

loc_0003D074: ;
    _fa = (uint32_t)(MEM32(esp + ebp * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ebp * 4 + 0x1C), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D150; /* jne: not equal / not zero */

loc_0003D07F: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ebp;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax * 4 + 0x30F9B4);
    MEM8(esp + 0x13) = LO8(ecx);

loc_0003D091: ;
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D0AD; /* je: equal / zero */

loc_0003D098: ;
    _fa = (uint32_t)(MEM32(ebp * 4 + 0x30F9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp * 4 + 0x30F9B4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D0AD; /* je: equal / zero */

loc_0003D0A1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6E9A90), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003D0BD; /* jne: not equal / not zero */

loc_0003D0AD: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003D091; /* jb: below (unsigned <) */

loc_0003D0B4: ;
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_0003D150;

loc_0003D0BD: ;
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003D0CCu); RECOMP_ABI_CALL(0x0003AF10u, sub_0003AF10); /* call 0x0003AF10 */

loc_0003D0CC: ;
    edi = ZX8(MEM8(esp + 0x1B));
    PUSH32(esp, ebp);
    MEM32(ebp * 4 + 0x30F9B4) = edi;
    MEM8(esi + 0x336914) = LO8(ebx);
    MEM8(esi + 0x33698C) = LO8(ebx);
    MEM8(esi + 0x336915) = LO8(ebx);
    MEM8(esi + 0x33698D) = LO8(ebx);
    MEM8(esi + 0x336916) = LO8(ebx);
    MEM8(esi + 0x33698E) = LO8(ebx);
    MEM8(esi + 0x336917) = LO8(ebx);
    MEM8(esi + 0x33698F) = LO8(ebx);
    MEM8(esi + 0x336918) = LO8(ebx);
    MEM8(esi + 0x336990) = LO8(ebx);
    MEM8(esi + 0x336919) = LO8(ebx);
    MEM8(esi + 0x336991) = LO8(ebx);
    MEM8(esi + 0x33691A) = LO8(ebx);
    MEM8(esi + 0x336992) = LO8(ebx);
    PUSH32(esp, 0x0003D132u); RECOMP_ABI_CALL(0x0003B170u, sub_0003B170); /* call 0x0003B170 */

loc_0003D132: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = MEM32(eax + 0x6E9A90);
    MEM32(eax + 0x6E9A94) = edx;
    MEM32(eax + 0x6E9A98) = 0;

loc_0003D150: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0003D052; /* jne: not equal / not zero */

loc_0003D163: ;
    MEM8(esp + 0x14) = 0;
    goto loc_0003D170;

    /* nop */

loc_0003D170: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003D17Au); RECOMP_ABI_CALL(0x0003C030u, sub_0003C030); /* call 0x0003C030 */

loc_0003D17A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003D182u); RECOMP_ABI_CALL(0x0003ADA0u, sub_0003ADA0); /* call 0x0003ADA0 */

loc_0003D182: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x30F9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x30F9B4), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D1EC; /* je: equal / zero */

loc_0003D193: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D1BD; /* jne: not equal / not zero */

loc_0003D197: ;
    _fa = (uint32_t)(MEM8(0x3369C1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3369C1), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D1BD; /* jne: not equal / not zero */

loc_0003D1A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x2CD10E));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(0x2CD0EA));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22D898);
    goto loc_0003D1E4;

loc_0003D1BD: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x3369C0);
    ecx = ecx + ecx * 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2CD0EC));
    eax = ZX16(MEM16(eax + 0x2CD0C8));
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x22D7C8);

loc_0003D1E4: ;
    PUSH32(esp, 0x0003D1E9u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D1E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D1EC: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_0003D170; /* jb: below (unsigned <) */

loc_0003D1FE: ;
    SET_LO8(eax, MEM8(0x3369C3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D022; /* je: equal / zero */

loc_0003D20B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 2;

loc_0003D212: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003D21Du); RECOMP_ABI_CALL(0x0003AF10u, sub_0003AF10); /* call 0x0003AF10 */

loc_0003D21D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003D212; /* jne: not equal / not zero */

loc_0003D224: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x30F9B4) = edx;
    MEM32(0x30F9B8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003D240
 * Original: 0x0003D240 - 0x0003D516 (726 bytes, 197 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003D240: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(edi + 0x44));
    MEM8(0x3369A1) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x45));
    MEM8(0x3369A2) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x46));
    MEM8(0x3369A3) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x47));
    MEM8(0x3369A4) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x3F));
    eax = ZX16(MEM16(0x336988));
    MEM8(0x3369A0) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x49));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM8(0x3369A5) = LO8(edx);
    MEM8(0x3369A6) = 0;
    MEM8(0x3369A7) = 0;
    MEM8(0x3369C2) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0003D2B3; /* jne: not equal / not zero */

loc_0003D29A: ;
    /* nop */

loc_0003D2A0: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D2A0; /* je: equal / zero */

loc_0003D2AD: ;
    MEM8(0x3369C2) = LO8(ecx);

loc_0003D2B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D2BAu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003D2BA: ;
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D7E4);
    PUSH32(esp, 0x0003D2CAu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D2CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x336988));
    esi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2CD36C);
    PUSH32(esp, 0x2CD35C);
    PUSH32(esp, 0x2CD2FC);
    PUSH32(esp, 0x2CD34C);
    PUSH32(esp, 0x2CD33C);
    PUSH32(esp, 0x2CD2DC);
    PUSH32(esp, 0x2CD32C);
    PUSH32(esp, 0x2CD31C);
    PUSH32(esp, 0x2CD278);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3369A0);
    PUSH32(esp, 0x3369C2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D316u); RECOMP_ABI_CALL(0x0003BCF0u, sub_0003BCF0); /* call 0x0003BCF0 */

loc_0003D316: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x10) = 0;
    edi = edi;

loc_0003D320: ;
    PUSH32(esp, 0x0003D325u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003D325: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003D32Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003D32C: ;
    PUSH32(esp, 0x0003D331u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003D331: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D337u); RECOMP_ABI_CALL(0x0003CB20u, sub_0003CB20); /* call 0x0003CB20 */

loc_0003D337: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D348; /* jne: not equal / not zero */

loc_0003D343: ;
    MEM8(esp + 0x10) = 1;

loc_0003D348: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x336988));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2CD32C);
    PUSH32(esp, 0x2CD31C);
    PUSH32(esp, 0x2CD278);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3369A0);
    PUSH32(esp, 0x3369C2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D373u); RECOMP_ABI_CALL(0x0003BBF0u, sub_0003BBF0); /* call 0x0003BBF0 */

loc_0003D373: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D382; /* je: equal / zero */

loc_0003D37D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D3C1; /* jne: not equal / not zero */

loc_0003D382: ;
    SET_LO8(edx, MEM8(0x3369C2));
    eax = SX8(LO8(edx));
    ecx = MEM32(eax * 4 + 0x2CD2DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D3C7; /* je: equal / zero */

loc_0003D396: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax * 2 + 0x2CD34C));
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax * 2 + 0x2CD33C));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x3369A0);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003D3BEu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D3BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D3C1: ;
    SET_LO8(edx, MEM8(0x3369C2));

loc_0003D3C7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D3EF; /* je: equal / zero */

loc_0003D3CC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D3EF; /* je: equal / zero */

loc_0003D3D1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D45A; /* jne: not equal / not zero */

loc_0003D3DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D3E6u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D3E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    goto loc_0003D478;

loc_0003D3EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D468; /* je: equal / zero */

loc_0003D3F4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D429; /* jne: not equal / not zero */

loc_0003D3F9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D405u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D405: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003D40Eu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D40E: ;
    edx = MEM32(0x2CD270);
    eax = MEM32(0x2CD274);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3369A0) = edx;
    MEM32(0x3369A4) = eax;
    goto loc_0003D45A;

loc_0003D429: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D45A; /* jne: not equal / not zero */

loc_0003D42D: ;
    _fa = (uint32_t)(MEM8(0x3369A0)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3369A0), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D45A; /* jne: not equal / not zero */

loc_0003D436: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D442u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D442: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003D44Bu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D44B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003D452u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_0003D452: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003D45Au); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003D45A: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D320; /* je: equal / zero */

loc_0003D466: ;
    goto loc_0003D487;

loc_0003D468: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D474u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D474: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);

loc_0003D478: ;
    PUSH32(esp, 0x0003D47Du); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D47D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369AD) = 0;

loc_0003D487: ;
    SET_LO8(ecx, MEM8(0x3369A1));
    MEM8(edi + 0x44) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369A2));
    MEM8(edi + 0x45) = LO8(edx);
    SET_LO8(eax, MEM8(0x3369A3));
    MEM8(edi + 0x46) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369A4));
    MEM8(edi + 0x47) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369A0));
    SET_LO8(ecx, MEM8(edi + 0x44));
    MEM8(edi + 0x3F) = LO8(edx);
    SET_LO8(eax, MEM8(0x3369A5));
    MEM8(edi + 0x49) = LO8(eax);
    MEM8(0x30760F) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x45));
    MEM8(0x30554D) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x46));
    MEM8(0x30EDC9) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x47));
    MEM8(0x30AD94) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x3F));
    ecx = ZX8(MEM8(0x3062E0));
    MEM8(0x317039) = LO8(edx);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x49);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003D50C; /* je: equal / zero */

loc_0003D4F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003D4FEu); RECOMP_ABI_CALL(0x0004F0E0u, sub_0004F0E0); /* call 0x0004F0E0 */

loc_0003D4FE: ;
    SET_LO8(edx, MEM8(edi + 0x49));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3062E0) = LO8(edx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0003D50C: ;
    SET_LO8(eax, MEM8(edi + 0x49));
    MEM8(0x3062E0) = LO8(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D520
 * Original: 0x0003D520 - 0x0003D79B (635 bytes, 200 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D520: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D526u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003D526: ;
    eax = (uint32_t)(int32_t)SMEM8(0x336910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    esi = MEM32(esp + 8);
    if (CMP_A(_fa, _fb)) goto loc_0003D782; /* ja: above (unsigned >) */

loc_0003D53A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3D79C); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0003D541u) goto loc_0003D541;
    if (_jt == 0x0003D57Fu) goto loc_0003D57F;
    if (_jt == 0x0003D5D0u) goto loc_0003D5D0;
    if (_jt == 0x0003D621u) goto loc_0003D621;
    if (_jt == 0x0003D631u) goto loc_0003D631;
    if (_jt == 0x0003D63Eu) goto loc_0003D63E;
    if (_jt == 0x0003D64Eu) goto loc_0003D64E;
    if (_jt == 0x0003D65Bu) goto loc_0003D65B;
    if (_jt == 0x0003D66Bu) goto loc_0003D66B;
    if (_jt == 0x0003D6BCu) goto loc_0003D6BC;
    if (_jt == 0x0003D6C9u) goto loc_0003D6C9;
    if (_jt == 0x0003D6D6u) goto loc_0003D6D6;
    if (_jt == 0x0003D724u) goto loc_0003D724;
    if (_jt == 0x0003D759u) goto loc_0003D759;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003D541: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D974);
    PUSH32(esp, 0x0003D551u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D551: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x22D96C);
    PUSH32(esp, 0x0003D561u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D561: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D571u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D571: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D577u); RECOMP_ABI_CALL(0x0003B460u, sub_0003B460); /* call 0x0003B460 */

loc_0003D577: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D57F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D974);

loc_0003D58A: ;
    PUSH32(esp, 0x0003D58Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D58F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D958);
    PUSH32(esp, 0x0003D59Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D59F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D5AFu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D5AF: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D5BFu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D5BF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D5C8u); RECOMP_ABI_CALL(0x0003B780u, sub_0003B780); /* call 0x0003B780 */

loc_0003D5C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D5D0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D944);

loc_0003D5DB: ;
    PUSH32(esp, 0x0003D5E0u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D5E0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x22D96C);
    PUSH32(esp, 0x0003D5F0u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D5F0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D600u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D600: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D610u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D610: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D619u); RECOMP_ABI_CALL(0x0003B460u, sub_0003B460); /* call 0x0003B460 */

loc_0003D619: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D621: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D944);
    goto loc_0003D58A;

loc_0003D631: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D92C);
    goto loc_0003D5DB;

loc_0003D63E: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D92C);
    goto loc_0003D58A;

loc_0003D64E: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D914);
    goto loc_0003D5DB;

loc_0003D65B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D914);
    goto loc_0003D58A;

loc_0003D66B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22D8FC);

loc_0003D676: ;
    PUSH32(esp, 0x0003D67Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D67B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x22D96C);
    PUSH32(esp, 0x0003D68Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D68B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D69Bu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D69B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D6ABu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D6AB: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D6B4u); RECOMP_ABI_CALL(0x0003B580u, sub_0003B580); /* call 0x0003B580 */

loc_0003D6B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D6BC: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22D8E8);
    goto loc_0003D676;

loc_0003D6C9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D8D4);
    goto loc_0003D6E1;

loc_0003D6D6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D8C0);

loc_0003D6E1: ;
    PUSH32(esp, 0x0003D6E6u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D6E6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x22D96C);
    PUSH32(esp, 0x0003D6F6u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D6F6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D706u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D706: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D716u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D716: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D71Fu); RECOMP_ABI_CALL(0x0003B650u, sub_0003B650); /* call 0x0003B650 */

loc_0003D71F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D724: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x22D8B4);
    PUSH32(esp, 0x0003D734u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D734: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D744u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D744: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x22D7C8);
    PUSH32(esp, 0x0003D754u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D754: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D782;

loc_0003D759: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x22D89C);
    PUSH32(esp, 0x0003D769u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D769: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x22D898);
    PUSH32(esp, 0x0003D779u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D77Fu); RECOMP_ABI_CALL(0x0003B8F0u, sub_0003B8F0); /* call 0x0003B8F0 */

loc_0003D77F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D782: ;
    _fa = (uint32_t)(MEM8(0x336910)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336910), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D799; /* jne: not equal / not zero */

loc_0003D78B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D796u); RECOMP_ABI_CALL(0x0003CDB0u, sub_0003CDB0); /* call 0x0003CDB0 */

loc_0003D796: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D799: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D7E0
 * Original: 0x0003D7E0 - 0x0003D8B0 (208 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D7E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x38));
    MEM8(0x3369C8) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x39));
    MEM8(0x3369C9) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x3A));
    MEM8(0x3369CA) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x3B));
    MEM8(0x3369CB) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x3C));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x3369CC) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x3D));
    MEM8(0x3369CE) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x3E));
    MEM8(0x3369CD) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x48));
    PUSH32(esp, edi);
    MEM8(0x3369CF) = LO8(ecx);
    MEM8(0x3369D0) = 0;
    MEM8(0x3369D1) = 0;
    MEM8(0x3369D2) = 0;
    MEM8(0x3369C4) = 0;
    PUSH32(esp, 0x0003D84Fu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003D84F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x22D88C);
    PUSH32(esp, 0x0003D85Fu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D85F: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x2CD0A8);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, 0x2CD090);
    PUSH32(esp, 0x2CD004);
    PUSH32(esp, 0x2CD078);
    PUSH32(esp, 0x2CD060);
    PUSH32(esp, 0x2CCFD8);
    PUSH32(esp, 0x2CD048);
    PUSH32(esp, 0x2CD030);
    PUSH32(esp, 0x2CCF6C);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3369C8);
    PUSH32(esp, 0x3369C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003D8A7u); RECOMP_ABI_CALL(0x0003BCF0u, sub_0003BCF0); /* call 0x0003BCF0 */

loc_0003D8A7: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x10) = 0;
    /* nop */

    g_seh_ebp = ebp; sub_0003D8B0(); return; /* fallthrough 0x0003D8B0 */

}

/**
 * sub_0003D8B0
 * Original: 0x0003D8B0 - 0x0003DAB7 (519 bytes, 137 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003D8B0: ;
    PUSH32(esp, 0x0003D8B5u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003D8B5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003D8BCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003D8BC: ;
    PUSH32(esp, 0x0003D8C1u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003D8C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003D8C7u); RECOMP_ABI_CALL(0x0003BFD0u, sub_0003BFD0); /* call 0x0003BFD0 */

loc_0003D8C7: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D8D8; /* jne: not equal / not zero */

loc_0003D8D3: ;
    MEM8(esp + 0x10) = 1;

loc_0003D8D8: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x2CD048);
    PUSH32(esp, 0x2CD030);
    PUSH32(esp, 0x2CCF6C);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3369C8);
    PUSH32(esp, 0x3369C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003D8FEu); RECOMP_ABI_CALL(0x0003BBF0u, sub_0003BBF0); /* call 0x0003BBF0 */

loc_0003D8FE: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D90D; /* je: equal / zero */

loc_0003D908: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D94C; /* jne: not equal / not zero */

loc_0003D90D: ;
    SET_LO8(edx, MEM8(0x3369C4));
    eax = SX8(LO8(edx));
    ecx = MEM32(eax * 4 + 0x2CCFD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D952; /* je: equal / zero */

loc_0003D921: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax * 2 + 0x2CD078));
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax * 2 + 0x2CD060));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x3369C8);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003D949u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_0003D949: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D94C: ;
    SET_LO8(edx, MEM8(0x3369C4));

loc_0003D952: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D97A; /* je: equal / zero */

loc_0003D957: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D97A; /* je: equal / zero */

loc_0003D95C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D9FA; /* jne: not equal / not zero */

loc_0003D965: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D971u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D971: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    goto loc_0003DA18;

loc_0003D97A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DA08; /* je: equal / zero */

loc_0003D983: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D9AD; /* jne: not equal / not zero */

loc_0003D988: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D994u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D994: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003D99Du); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D99D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003D9A3u); RECOMP_ABI_CALL(0x0003CF70u, sub_0003CF70); /* call 0x0003CF70 */

loc_0003D9A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003D9ABu); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003D9AB: ;
    goto loc_0003D9FA;

loc_0003D9AD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D9FA; /* jne: not equal / not zero */

loc_0003D9B2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003D9BEu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D9BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0003D9C7u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003D9C7: ;
    edx = MEM32(0x2CCF60);
    eax = MEM32(0x2CCF64);
    SET_LO16(ecx, MEM16(0x2CCF68));
    MEM32(0x3369C8) = edx;
    SET_LO8(edx, MEM8(0x2CCF6A));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3369CC) = eax;
    MEM16(0x3369D0) = LO16(ecx);
    MEM8(0x3369D2) = LO8(edx);

loc_0003D9FA: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D8B0; /* je: equal / zero */

loc_0003DA06: ;
    goto loc_0003DA27;

loc_0003DA08: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003DA14u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DA14: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);

loc_0003DA18: ;
    PUSH32(esp, 0x0003DA1Du); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DA1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369AD) = 0;

loc_0003DA27: ;
    SET_LO8(eax, MEM8(0x3369C8));
    MEM8(esi + 0x38) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369C9));
    MEM8(esi + 0x39) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369CA));
    MEM8(esi + 0x3A) = LO8(edx);
    SET_LO8(eax, MEM8(0x3369CB));
    MEM8(esi + 0x3B) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369CC));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x3C) = LO8(ecx);
    SET_LO8(edx, MEM8(0x3369CE));
    MEM8(esi + 0x3D) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x38));
    SET_LO8(eax, MEM8(0x3369CD));
    MEM8(esi + 0x3E) = LO8(eax);
    SET_LO8(ecx, MEM8(0x3369CF));
    MEM8(esi + 0x48) = LO8(ecx);
    MEM8(0x306320) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x39));
    MEM8(0x30F924) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x3A));
    MEM8(0x30C3E4) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x3B));
    MEM8(0x30D018) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x3C));
    MEM8(0x305B14) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x3D));
    MEM8(0x3139D1) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x3E));
    POP32(esp, edi);
    MEM8(0x30F91C) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x48));
    POP32(esp, esi);
    MEM8(0x30AA65) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DAC0
 * Original: 0x0003DAC0 - 0x0003DBC9 (265 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DAC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x336910) = 0;
    MEM8(0x336911) = 0xFF;
    MEM8(0x33699C) = 0;
    MEM8(0x33699D) = 0;
    PUSH32(esp, 0x0003DAE5u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003DAE5: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    MEM8(esp + 0xF) = 0;

loc_0003DAF2: ;
    PUSH32(esp, 0x0003DAF7u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003DAF7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003DAFEu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003DAFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003DB06u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003DB06: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003DB14; /* jne: not equal / not zero */

loc_0003DB0F: ;
    MEM8(esp + 0xF) = 1;

loc_0003DB14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003DB1Au); RECOMP_ABI_CALL(0x0003BB00u, sub_0003BB00); /* call 0x0003BB00 */

loc_0003DB1A: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DB51; /* je: equal / zero */

loc_0003DB24: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DB51; /* je: equal / zero */

loc_0003DB29: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DB33; /* je: equal / zero */

loc_0003DB2E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003DB7B; /* jne: not equal / not zero */

loc_0003DB33: ;
    SET_LO8(eax, MEM8(0x336910));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003DB7B; /* jle: less or equal (signed <=) */

loc_0003DB3C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003DB45u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DB45: ;
    SET_LO8(eax, MEM8(0x336910));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_0003DB6D;

loc_0003DB51: ;
    _fa = (uint32_t)(MEM8(0x336910)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336910), 0xD (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003DB7B; /* jge: greater or equal (signed >=) */

loc_0003DB5A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0003DB63u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DB63: ;
    SET_LO8(eax, MEM8(0x336910));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0003DB6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    MEM8(0x336910) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0003DB7B; /* jne: not equal / not zero */

loc_0003DB76: ;
    PUSH32(esp, 0x0003DB7Bu); RECOMP_ABI_CALL(0x0003BB80u, sub_0003BB80); /* call 0x0003BB80 */

loc_0003DB7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003DB82u); RECOMP_ABI_CALL(0x0003D520u, sub_0003D520); /* call 0x0003D520 */

loc_0003DB82: ;
    SET_LO8(eax, MEM8(0x336910));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    MEM8(0x336911) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DBA5; /* je: equal / zero */

loc_0003DB94: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DAF2; /* je: equal / zero */

loc_0003DBA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003DBA5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0003DBB1u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DBB1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0003DBBAu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003DBBA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3369AD) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DBD0
 * Original: 0x0003DBD0 - 0x0003DCF0 (288 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DBD0(void)
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

loc_0003DBD0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    SET_LO8(ecx, MEM8(eax * 4 + 0x30F9B0));
    SET_LO8(eax, MEM8(0x30AABA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    MEM8(0x3369AD) = 0;
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DC02; /* je: equal / zero */

loc_0003DBF7: ;
    MEM16(0x336988) = 0xFFFF;
    goto loc_0003DC10;

loc_0003DC02: ;
    SET_LO16(edx, MEM16(0x3055AC));
    MEM16(0x336988) = LO16(edx);

loc_0003DC10: ;
    esi = MEM32(esp + 8);

loc_0003DC14: ;
    PUSH32(esp, 0x0003DC19u); RECOMP_ABI_CALL(0x0003AC50u, sub_0003AC50); /* call 0x0003AC50 */

loc_0003DC19: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003DC20u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003DC20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003DC28u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_0003DC28: ;
    eax = ZX8(MEM8(0x3369AD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003DC8B; /* ja: above (unsigned >) */

loc_0003DC34: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3DCCC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0003DC3Bu) goto loc_0003DC3B;
    if (_jt == 0x0003DC4Bu) goto loc_0003DC4B;
    if (_jt == 0x0003DC5Bu) goto loc_0003DC5B;
    if (_jt == 0x0003DC6Bu) goto loc_0003DC6B;
    if (_jt == 0x0003DC7Bu) goto loc_0003DC7B;
    if (_jt == 0x0003DC8Bu) goto loc_0003DC8B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003DC3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x0003DC46u); RECOMP_ABI_CALL(0x0003BE30u, sub_0003BE30); /* call 0x0003BE30 */

loc_0003DC46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003DC8D;

loc_0003DC4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x0003DC56u); RECOMP_ABI_CALL(0x0003D7E0u, sub_0003D7E0); /* call 0x0003D7E0 */

loc_0003DC56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003DC8D;

loc_0003DC5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x0003DC66u); RECOMP_ABI_CALL(0x0003C350u, sub_0003C350); /* call 0x0003C350 */

loc_0003DC66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003DC8D;

loc_0003DC6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x0003DC76u); RECOMP_ABI_CALL(0x0003D240u, sub_0003D240); /* call 0x0003D240 */

loc_0003DC76: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003DC8D;

loc_0003DC7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305550);
    PUSH32(esp, 0x0003DC86u); RECOMP_ABI_CALL(0x0003DAC0u, sub_0003DAC0); /* call 0x0003DAC0 */

loc_0003DC86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003DC8D;

loc_0003DC8B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003DC8D: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DC9E; /* je: equal / zero */

loc_0003DC96: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003DC14; /* jne: not equal / not zero */

loc_0003DC9E: ;
    eax = ZX8(MEM8(0x30C4C1));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003DCABu); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_0003DCAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003DCB2u); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_0003DCB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30C680) = 6;
    PUSH32(esp, 0x0003DCC1u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_0003DCC1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0004CD60(); return; /* tail jmp 0x0004CD60 */

    /* nop */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esp (32-bit) */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(ebx)); /* fadd qword ptr [ebx] */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x5B0003DC) = MEM8(ebx + 0x5B0003DC) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x5B0003DC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(ebx)); /* fadd qword ptr [ebx] */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -36) = MEM8(ebx + -36) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + -36)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) (void)0; /* goto loc_0003DCBE - dead code, label not in function */

loc_0003DCE2: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003DCF0
 * Original: 0x0003DCF0 - 0x0003DD52 (98 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DCF0: ;
    SET_LO16(eax, MEM16(0x2CD698));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003DD05; /* jne: not equal / not zero */

loc_0003DCFB: ;
    ecx = MEM32(0x3369EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003DD51; /* jne: not equal / not zero */

loc_0003DD05: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    ecx = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DD35; /* je: equal / zero */

loc_0003DD21: ;
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(0x2CD698) = LO16(eax);
    if ((_fas >= 0)) goto loc_0003DD51; /* jns: not sign (positive) */

loc_0003DD2B: ;
    MEM16(0x2CD698) = 5;
    esp += 4; return; /* ret */

loc_0003DD35: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DD51; /* je: equal / zero */

loc_0003DD3A: ;
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    MEM16(0x2CD698) = LO16(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0003DD51; /* jl: less (signed <) */

loc_0003DD48: ;
    MEM16(0x2CD698) = 0;

loc_0003DD51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DD60
 * Original: 0x0003DD60 - 0x0003DD7E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DD60: ;
    eax = ZX8(MEM8(0x301FB2));
    ecx = MEM32(eax * 4 + 0x2CD710);
    PUSH32(esp, 6);
    PUSH32(esp, 8);
    PUSH32(esp, 0x23);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003DD7Au); RECOMP_ABI_CALL(0x0005E440u, sub_0005E440); /* call 0x0005E440 */

loc_0003DD7A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003DD80
 * Original: 0x0003DD80 - 0x0003DD81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DD80(void)
{

loc_0003DD80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DD90
 * Original: 0x0003DD90 - 0x0003DDB9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DD90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x12;
    edi = 0x1E;
    /* nop */

loc_0003DDA0: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x231F90);
    PUSH32(esp, 0x0003DDAFu); RECOMP_ABI_CALL(0x0005D140u, sub_0005D140); /* call 0x0005D140 */

loc_0003DDAF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003DDA0; /* jne: not equal / not zero */

loc_0003DDB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DDC0
 * Original: 0x0003DDC0 - 0x0003DDC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DDC0(void)
{

loc_0003DDC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DDD0
 * Original: 0x0003DDD0 - 0x0003DDD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DDD0(void)
{

loc_0003DDD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DDE0
 * Original: 0x0003DDE0 - 0x0003DE5D (125 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DDE0: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(eax * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9A90);
    MEM32(eax + 0x6E9A94) = ecx;
    PUSH32(esp, 4);
    MEM32(eax + 0x6E9A98) = 0;
    MEM8(0x30AE36) = 0;
    PUSH32(esp, 0x0003DE15u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE15: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0003DE1Cu); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE1C: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0003DE23u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE23: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0003DE2Au); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE2A: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0003DE31u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE31: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003DE38u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003DE38: ;
    PUSH32(esp, 0x0003DE3Du); RECOMP_ABI_CALL(0x0003DD90u, sub_0003DD90); /* call 0x0003DD90 */

loc_0003DE3D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003DE52u); RECOMP_ABI_CALL(0x0005D9F0u, sub_0005D9F0); /* call 0x0005D9F0 */

loc_0003DE52: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369F8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DE60
 * Original: 0x0003DE60 - 0x0003DE91 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DE60: ;
    PUSH32(esp, 0x338C0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003DE6Cu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0003DE6C: ;
    PUSH32(esp, 0x0003DE71u); RECOMP_ABI_CALL(0x0003DD90u, sub_0003DD90); /* call 0x0003DD90 */

loc_0003DE71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003DE86u); RECOMP_ABI_CALL(0x0005D9F0u, sub_0005D9F0); /* call 0x0005D9F0 */

loc_0003DE86: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369F8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DEA0
 * Original: 0x0003DEA0 - 0x0003DEB6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DEA0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = 0x3314B0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x336A08) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DEC0
 * Original: 0x0003DEC0 - 0x0003DF64 (164 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(0x335AE0);
    SET_LO8(edx, MEM8(esi + 0x301E37));
    SET_LO8(ebx, MEM8(esi + 0x301FA7));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF09; /* je: equal / zero */

loc_0003DEE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF09; /* je: equal / zero */

loc_0003DEEB: ;
    ecx = ZX8(LO8(edx));
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(ecx + 0x2CD7B0));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + 0x3314B0) = LO8(edx);
    ecx = 1;

loc_0003DF09: ;
    SET_LO8(ebx, MEM8(esi + 0x3026B7));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF27; /* je: equal / zero */

loc_0003DF14: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + ecx * 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + esi * 4 + 0x3314B0) = 9;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003DF27: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF3F; /* je: equal / zero */

loc_0003DF2C: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + ecx * 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + esi * 4 + 0x3314B0) = 0xA;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003DF3F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF57; /* je: equal / zero */

loc_0003DF44: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + ecx * 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + esi * 4 + 0x3314B0) = 0xB;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003DF57: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF60; /* je: equal / zero */

loc_0003DF5D: ;
    eax = edi + 2;

loc_0003DF60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DF70
 * Original: 0x0003DF70 - 0x0003DFE5 (117 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DF70: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    SET_LO8(ecx, MEM8(eax + 0x301E37));
    SET_LO8(edx, MEM8(eax + 0x301FA7));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DFBD; /* je: equal / zero */

loc_0003DF8A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DFBD; /* je: equal / zero */

loc_0003DF8E: ;
    _fa = (uint32_t)(MEM32(0x336A08)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336A08), 0x26 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003DFA2; /* jle: less or equal (signed <=) */

loc_0003DF97: ;
    MEM32(0x336A08) = ebx;
    PUSH32(esp, 0x0003DFA2u); RECOMP_ABI_CALL(0x0003DEA0u, sub_0003DEA0); /* call 0x0003DEA0 */

loc_0003DFA2: ;
    eax = MEM32(0x336A08);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003DFADu); RECOMP_ABI_CALL(0x0003DEC0u, sub_0003DEC0); /* call 0x0003DEC0 */

loc_0003DFAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x336A04) = ebx;
    MEM32(0x336A08) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003DFBD: ;
    eax = MEM32(0x336A04);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    MEM32(0x336A04) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0003DFE3; /* jle: less or equal (signed <=) */

loc_0003DFCD: ;
    MEM32(0x336A08) = 0x27;
    MEM8(0x3024A9) = LO8(ebx);
    MEM32(0x336A04) = ebx;

loc_0003DFE3: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003DFF0
 * Original: 0x0003DFF0 - 0x0003E00A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003DFF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x3369F8) = LO8(eax);
    MEM16(0x2CD698) = LO16(eax);
    MEM16(0x336A00) = LO16(eax);
    MEM16(0x3369FC) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E010
 * Original: 0x0003E010 - 0x0003E04F (63 bytes, 14 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E010(void)
{

loc_0003E010: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM16(ecx + 2) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 4) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + 8) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(edx);
    MEM32(ecx + 0xC) = 0x40000;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0003E050
 * Original: 0x0003E050 - 0x0003E090 (64 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E050(void)
{

loc_0003E050: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 4) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(esp + 0x14);
    MEM16(ecx + 2) = 0x104;
    MEM16(ecx) = 0x14;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM32(ecx + 0xC) = 0x40000;
    MEM32(ecx + 0x10) = eax;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0003E0B0
 * Original: 0x0003E0B0 - 0x0003E0B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E0B0(void)
{

loc_0003E0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E0C0
 * Original: 0x0003E0C0 - 0x0003E106 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E0C0: ;
    PUSH32(esp, 4);
    MEM8(0x30AE36) = 1;
    PUSH32(esp, 0x0003E0CEu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0CE: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0003E0D5u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0D5: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0003E0DCu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0DC: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0003E0E3u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0E3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0003E0EAu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0EA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0003E0F1u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003E0F1: ;
    SET_LO8(eax, MEM8(0x336A0C));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369F8) = 1;
    MEM8(0x336A0D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E110
 * Original: 0x0003E110 - 0x0003E158 (72 bytes, 18 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E110: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(esp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 6) = LO16(edx);
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(esp + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 2) = 0x104;
    MEM16(ecx) = 0x14;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM32(ecx + 0xC) = 0x40000;
    MEM32(ecx + 0x10) = eax;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0003E160
 * Original: 0x0003E160 - 0x0003E39F (575 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E160: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0003E1DD; /* jne: not equal / not zero */

loc_0003E16D: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D949));
    SET_LO16(edx, MEM16(ecx * 2 + 0x2CD69C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(0x3369F4) = 0x6001200;
    MEM16(0x3369E8) = LO16(edx);
    PUSH32(esp, 0x0003E19Fu); RECOMP_ABI_CALL(0x00035BD0u, sub_00035BD0); /* call 0x00035BD0 */

loc_0003E19F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x336A04) = ebx;
    MEM32(0x336A08) = ebx;
    MEM16(0x336A00) = LO16(ebx);
    MEM16(0x3369FC) = LO16(ebx);
    MEM8(0x3369F8) = LO8(ebx);
    MEM32(0x3369EC) = ebx;
    MEM16(0x2CD698) = 3;
    MEM8(0x307604) = 7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E1DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D2(); return; } /* jne: not equal / not zero */

loc_0003E1E5: ;
    SET_LO8(eax, MEM8(0x3369F8));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E241; /* jne: not equal / not zero */

loc_0003E1F0: ;
    PUSH32(esp, 0x0003E1F5u); RECOMP_ABI_CALL(0x0003DF70u, sub_0003DF70); /* call 0x0003DF70 */

loc_0003E1F5: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(eax * 4 + 0x30F9B0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E222; /* jne: not equal / not zero */

loc_0003E211: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003E217u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003E217: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D2(); return; } /* jne: not equal / not zero */

loc_0003E222: ;
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D2(); return; } /* je: equal / zero */

loc_0003E22F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D2(); return; } /* je: equal / zero */

loc_0003E237: ;
    PUSH32(esp, 0x0003E23Cu); RECOMP_ABI_CALL(0x0003E0C0u, sub_0003E0C0); /* call 0x0003E0C0 */

loc_0003E23C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E241: ;
    eax = (uint32_t)(int32_t)SMEM16(0x2CD698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* ja: above (unsigned >) */

loc_0003E251: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3E814); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0003E286u) goto loc_0003E286;
    if (_jt == 0x0003E370u) goto loc_0003E370;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(edx * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E27C; /* jne: not equal / not zero */

loc_0003E274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E27C: ;
    PUSH32(esp, 0x0003E281u); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E281: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E286: ;
    _fa = (uint32_t)(MEM32(0x3369EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3369EC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E8; /* je: equal / zero */

loc_0003E28E: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2B0; /* je: equal / zero */

loc_0003E2A9: ;
    MEM32(0x3369F0) = MEM32(0x3369F0) ^ 1;
    _fa = (uint32_t)(MEM32(0x3369F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003E2B0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E2BD; /* jne: not equal / not zero */

loc_0003E2B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E2BD: ;
    _fa = (uint32_t)(MEM32(0x3369F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3369F0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2D7; /* je: equal / zero */

loc_0003E2C5: ;
    MEM32(0x3369EC) = ebx;
    MEM16(0x336A00) = LO16(ebx);
    g_seh_ebp = ebp; sub_0003E3A8(); return; /* tail jmp 0x0003E3A8 */

loc_0003E2D7: ;
    PUSH32(esp, 0x0003E2DCu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E2DC: ;
    MEM8(0x30C680) = 5;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E2E8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E30C; /* jne: not equal / not zero */

loc_0003E304: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E30C: ;
    eax = 1;
    MEM32(0x3369EC) = eax;
    MEM32(0x3369F0) = eax;
    MEM16(0x336A00) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E349: ;
    PUSH32(esp, 0x0003E34Eu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E34E: ;
    MEM8(0x332204) = 0xFF;
    MEM8(0x3358AA) = 1;
    MEM8(0x307606) = LO8(ebx);
    MEM8(0x30D8F0) = LO8(ebx);
    MEM8(0x30D00D) = LO8(ebx);
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E370: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D7(); return; } /* je: equal / zero */

loc_0003E38B: ;
    MEM8(0x301FB2) = MEM8(0x301FB2) - 1;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003E39A; /* jne: not equal / not zero */

loc_0003E393: ;
    MEM8(0x301FB2) = 0x1C;

loc_0003E39A: ;
    PUSH32(esp, 0x0003E39Fu); RECOMP_ABI_CALL(0x00029A40u, sub_00029A40); /* call 0x00029A40 */

    g_seh_ebp = ebp; sub_0003E39F(); return; /* fallthrough 0x0003E39F */

}

/**
 * sub_0003E258
 * Original: 0x0003E258 - 0x0003E3D7 (383 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E258(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E258: ;
    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(edx * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E27C; /* jne: not equal / not zero */

loc_0003E274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E39F; /* je: equal / zero */

loc_0003E27C: ;
    PUSH32(esp, 0x0003E281u); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E281: ;
    goto loc_0003E39F;

loc_0003E39F: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3D2; /* jne: not equal / not zero */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

loc_0003E3D2: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E286
 * Original: 0x0003E286 - 0x0003E3D7 (337 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E286(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E286: ;
    _fa = (uint32_t)(MEM32(0x3369EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3369EC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E8; /* je: equal / zero */

loc_0003E28E: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2B0; /* je: equal / zero */

loc_0003E2A9: ;
    MEM32(0x3369F0) = MEM32(0x3369F0) ^ 1;
    _fa = (uint32_t)(MEM32(0x3369F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003E2B0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E2BD; /* jne: not equal / not zero */

loc_0003E2B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E39F; /* je: equal / zero */

loc_0003E2BD: ;
    _fa = (uint32_t)(MEM32(0x3369F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3369F0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2D7; /* je: equal / zero */

loc_0003E2C5: ;
    MEM32(0x3369EC) = ebx;
    MEM16(0x336A00) = LO16(ebx);
    goto loc_0003E3A8;

loc_0003E2D7: ;
    PUSH32(esp, 0x0003E2DCu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E2DC: ;
    MEM8(0x30C680) = 5;
    goto loc_0003E39F;

loc_0003E2E8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E30C; /* jne: not equal / not zero */

loc_0003E304: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E39F; /* je: equal / zero */

loc_0003E30C: ;
    eax = 1;
    MEM32(0x3369EC) = eax;
    MEM32(0x3369F0) = eax;
    MEM16(0x336A00) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E39F: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3D2; /* jne: not equal / not zero */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

loc_0003E3D2: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E329
 * Original: 0x0003E329 - 0x0003E3D7 (174 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E329(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E329: ;
    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(edx * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E349; /* jne: not equal / not zero */

loc_0003E345: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E39F; /* je: equal / zero */

loc_0003E349: ;
    PUSH32(esp, 0x0003E34Eu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E34E: ;
    MEM8(0x332204) = 0xFF;
    MEM8(0x3358AA) = 1;
    MEM8(0x307606) = LO8(ebx);
    MEM8(0x30D8F0) = LO8(ebx);
    MEM8(0x30D00D) = LO8(ebx);
    goto loc_0003E39F;

loc_0003E39F: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3D2; /* jne: not equal / not zero */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

loc_0003E3D2: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E370
 * Original: 0x0003E370 - 0x0003E404 (148 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E370: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3D7; /* je: equal / zero */

loc_0003E38B: ;
    MEM8(0x301FB2) = MEM8(0x301FB2) - 1;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003E39A; /* jne: not equal / not zero */

loc_0003E393: ;
    MEM8(0x301FB2) = 0x1C;

loc_0003E39A: ;
    PUSH32(esp, 0x0003E39Fu); RECOMP_ABI_CALL(0x00029A40u, sub_00029A40); /* call 0x00029A40 */

loc_0003E39F: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3D2; /* jne: not equal / not zero */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

loc_0003E3D2: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E3D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3F4; /* je: equal / zero */

loc_0003E3DB: ;
    SET_LO8(eax, MEM8(0x301FB2));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1D (8-bit) */
    MEM8(0x301FB2) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_0003E39A; /* jb: below (unsigned <) */

loc_0003E3EB: ;
    MEM8(0x301FB2) = 1;
    goto loc_0003E39A;

loc_0003E3F4: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3FD; /* jne: not equal / not zero */

loc_0003E3F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E39F; /* je: equal / zero */

loc_0003E3FD: ;
    PUSH32(esp, 0x0003E402u); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E402: ;
    goto loc_0003E39F;

}

/**
 * sub_0003E39A
 * Original: 0x0003E39A - 0x0003E39F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E39A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E39A: ;
    PUSH32(esp, 0x0003E39Fu); RECOMP_ABI_CALL(0x00029A40u, sub_00029A40); /* call 0x00029A40 */

    g_seh_ebp = ebp; sub_0003E39F(); return; /* fallthrough 0x0003E39F */

}

/**
 * sub_0003E39F
 * Original: 0x0003E39F - 0x0003E3D2 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E39F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E39F: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E3D2(); return; } /* jne: not equal / not zero */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

    g_seh_ebp = ebp; sub_0003E3D2(); return; /* fallthrough 0x0003E3D2 */

}

/**
 * sub_0003E3A8
 * Original: 0x0003E3A8 - 0x0003E3D2 (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E3A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E3A8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3C8; /* jne: not equal / not zero */

loc_0003E3C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3CD; /* je: equal / zero */

loc_0003E3C8: ;
    PUSH32(esp, 0x0003E3CDu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E3CD: ;
    PUSH32(esp, 0x0003E3D2u); RECOMP_ABI_CALL(0x0003DCF0u, sub_0003DCF0); /* call 0x0003DCF0 */

    g_seh_ebp = ebp; sub_0003E3D2(); return; /* fallthrough 0x0003E3D2 */

}

/**
 * sub_0003E3D2
 * Original: 0x0003E3D2 - 0x0003E3D7 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E3D2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E3D2: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E3D7
 * Original: 0x0003E3D7 - 0x0003E49C (197 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E3D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E3D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E3F4; /* je: equal / zero */

loc_0003E3DB: ;
    SET_LO8(eax, MEM8(0x301FB2));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1D (8-bit) */
    MEM8(0x301FB2) = LO8(eax);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39A(); return; } /* jb: below (unsigned <) */

loc_0003E3EB: ;
    MEM8(0x301FB2) = 1;
    g_seh_ebp = ebp; sub_0003E39A(); return; /* tail jmp 0x0003E39A */

loc_0003E3F4: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3FD; /* jne: not equal / not zero */

loc_0003E3F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E3FD: ;
    PUSH32(esp, 0x0003E402u); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E402: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E426; /* je: equal / zero */

loc_0003E41F: ;
    MEM8(0x336A0D) = MEM8(0x336A0D) ^ 1;
    _fa = (uint32_t)(MEM8(0x336A0D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003E426: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E433; /* jne: not equal / not zero */

loc_0003E42B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E433: ;
    SET_LO8(edx, MEM8(0x336A0D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x336A0C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x336A0C) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3FD; /* jne: not equal / not zero */

loc_0003E441: ;
    MEM8(0x307604) = 8;
    MEM32(0x33227C) = ebx;
    PUSH32(esp, 0x0003E453u); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_0003E453: ;
    MEM8(0x316FF4) = LO8(ebx);
    PUSH32(esp, 0x0003E45Eu); RECOMP_ABI_CALL(0x00054190u, sub_00054190); /* call 0x00054190 */

loc_0003E45E: ;
    PUSH32(esp, 0x0003E463u); RECOMP_ABI_CALL(0x00053530u, sub_00053530); /* call 0x00053530 */

loc_0003E463: ;
    SET_LO8(eax, MEM8(0x336A0C));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x336A0C) = LO8(eax);
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(0x30554D) = LO8(eax);
    PUSH32(esp, 0x0003E47Bu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E47B: ;
    _fa = (uint32_t)(MEM8(0x336A0C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336A0C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E49C(); return; } /* je: equal / zero */

loc_0003E483: ;
    PUSH32(esp, 0x0003E488u); RECOMP_ABI_CALL(0x0001A7E0u, sub_0001A7E0); /* call 0x0001A7E0 */

loc_0003E488: ;
    MEM32(0x315AD0) = 0;
    PUSH32(esp, 0x0003E497u); RECOMP_ABI_CALL(0x00044C40u, sub_00044C40); /* call 0x00044C40 */

loc_0003E497: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

}

/**
 * sub_0003E49C
 * Original: 0x0003E49C - 0x0003E4B5 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E49C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E49C: ;
    PUSH32(esp, 0x0003E4A1u); RECOMP_ABI_CALL(0x0001A7F0u, sub_0001A7F0); /* call 0x0001A7F0 */

loc_0003E4A1: ;
    eax = MEM32(0x30F918);
    MEM32(0x315AD0) = eax;
    PUSH32(esp, 0x0003E4B0u); RECOMP_ABI_CALL(0x00044C40u, sub_00044C40); /* call 0x00044C40 */

loc_0003E4B0: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

}

/**
 * sub_0003E4B5
 * Original: 0x0003E4B5 - 0x0003E512 (93 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E4B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E4B5: ;
    _fa = (uint32_t)(MEM8(0x3369FE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3369FE), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E4FB; /* je: equal / zero */

loc_0003E4BD: ;
    PUSH32(esp, 0x90000000u);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x2D0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0003E4D7u); RECOMP_ABI_CALL(0x0003E110u, sub_0003E110); /* call 0x0003E110 */

loc_0003E4D7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ecx = ecx & 0xFFFFFF06u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 8;
    ecx = ecx | 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x0003E4F8u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_0003E4F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003E4FB: ;
    eax = (uint32_t)(int32_t)SMEM16(0x336A00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* ja: above (unsigned >) */

loc_0003E50B: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3E82C)); return; /* indirect tail jmp */

}

/**
 * sub_0003E512
 * Original: 0x0003E512 - 0x0003E57B (105 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E512(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E512: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(eax * 4 + 0x30F9B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E537; /* jne: not equal / not zero */

loc_0003E52E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E537: ;
    eax = MEM32(eax * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM32(eax + 0x6E9A90) = ebx;
    MEM32(eax + 0x6E9A98) = ebx;
    MEM16(0x336A00) = 2;
    PUSH32(esp, 0x0003E55Bu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0003E55B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E56F; /* jne: not equal / not zero */

loc_0003E560: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003E567u); RECOMP_ABI_CALL(0x00035BD0u, sub_00035BD0); /* call 0x00035BD0 */

loc_0003E567: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E56F: ;
    MEM8(0x3369FE) = 1;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

}

/**
 * sub_0003E57B
 * Original: 0x0003E57B - 0x0003E727 (428 bytes, 99 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E57B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E57B: ;
    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = MEM32(edx * 4 + 0x30F9B0);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E6DD; /* jne: not equal / not zero */

loc_0003E59D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E6DD; /* jne: not equal / not zero */

loc_0003E5A5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003E5ABu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0003E5AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E6DD; /* je: equal / zero */

loc_0003E5B6: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = MEM32(ecx * 4 + 0x30F9B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A98);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E5FD; /* je: equal / zero */

loc_0003E5D1: ;
    SET_LO16(eax, MEM16(0x3369FC));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x3369E8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x3369E8) (16-bit) */
    MEM16(0x3369FC) = LO16(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0003E5EF; /* jl: less (signed <) */

loc_0003E5E8: ;
    MEM16(0x3369FC) = LO16(ebx);

loc_0003E5EF: ;
    MEM16(0x336A00) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E5FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E624; /* je: equal / zero */

loc_0003E601: ;
    MEM16(0x3369FC) = MEM16(0x3369FC) - 1;
    _fa = (uint32_t)(MEM16(0x3369FC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0003E616; /* jns: not sign (positive) */

loc_0003E60A: ;
    eax = MEM32(0x3369E8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(0x3369FC) = LO16(eax);

loc_0003E616: ;
    MEM16(0x336A00) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E624: ;
    PUSH32(esp, 0x0003E629u); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0003E629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E658; /* jne: not equal / not zero */

loc_0003E62E: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3369FC);
    edx = MEM32(ecx * 4 + 0x3348A8);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x3348A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3348A8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003E650u); RECOMP_ABI_CALL(0x000357E0u, sub_000357E0); /* call 0x000357E0 */

loc_0003E650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E658: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3369FC);
    ecx = MEM32(eax * 4 + 0x3348A8);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x3348A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3348A8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003E67Au); RECOMP_ABI_CALL(0x000357E0u, sub_000357E0); /* call 0x000357E0 */

loc_0003E67A: ;
    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    ecx = (uint32_t)(int32_t)SMEM16(0x3369FC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    eax = ZX8(MEM8(edx + 0x30D949));
    edx = MEM32(eax * 4 + 0x2CD664);
    eax = MEM32(edx + ecx * 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4D0);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0003E6B5u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0003E6B5: ;
    ecx = esp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F90A3D7;
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0003E6D5u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0003E6D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E6DD: ;
    edx = (uint32_t)(int32_t)SMEM16(0x335AE0);
    eax = MEM32(edx * 4 + 0x30F9B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9A90);
    MEM32(eax + 0x6E9A94) = ecx;
    edx = MEM32(eax + 0x6E9A98);
    edx = edx & 0xFFFFFDDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(eax + 0x6E9A98) = edx;
    MEM16(0x336A00) = LO16(ebx);
    PUSH32(esp, 0x0003E719u); RECOMP_ABI_CALL(0x00035BD0u, sub_00035BD0); /* call 0x00035BD0 */

loc_0003E719: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3369FE) = LO8(ebx);
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

}

/**
 * sub_0003E727
 * Original: 0x0003E727 - 0x0003E7F1 (202 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E727(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E727: ;
    PUSH32(esp, 0x0003E72Cu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0003E72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E763; /* jne: not equal / not zero */

loc_0003E731: ;
    edx = (uint32_t)(int32_t)SMEM16(0x3369FC);
    eax = MEM32(edx * 4 + 0x3348A8);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x3348A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3348A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003E752u); RECOMP_ABI_CALL(0x000357E0u, sub_000357E0); /* call 0x000357E0 */

loc_0003E752: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x336A00) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E763: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3369FC);
    edx = MEM32(ecx * 4 + 0x3348A8);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x3348A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3348A8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003E785u); RECOMP_ABI_CALL(0x000357E0u, sub_000357E0); /* call 0x000357E0 */

loc_0003E785: ;
    eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    edx = (uint32_t)(int32_t)SMEM16(0x3369FC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D949));
    eax = MEM32(ecx * 4 + 0x2CD664);
    ecx = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4D0);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0003E7C0u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0003E7C0: ;
    edx = esp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F90A3D7;
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0003E7E0u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0003E7E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x336A00) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E7F1
 * Original: 0x0003E7F1 - 0x0003E814 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E7F1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E7F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003E803u); RECOMP_ABI_CALL(0x0005D9F0u, sub_0005D9F0); /* call 0x0005D9F0 */

loc_0003E803: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x336A00) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E840
 * Original: 0x0003E840 - 0x0003E854 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0003E840: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FA4)); /* fmul dword ptr [0x231fa4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003E860
 * Original: 0x0003E860 - 0x0003E891 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E860: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edx = eax;
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E8A0
 * Original: 0x0003E8A0 - 0x0003E958 (184 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E8A0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x347EB4));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E901; /* je: equal / zero */

loc_0003E8B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx * 2 + 0x347EFC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8F5; /* je: equal / zero */

loc_0003E8C2: ;
    esi = 0xB;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ecx * 2 + 0x347EB0) = LO16(esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x34869C);
    MEM32(ecx * 4 + 0x349D48) = esi;
    MEM8(ecx + 0x337174) = 3;
    MEM32(ecx * 4 + 0x3487C0) = edx;
    MEM8(ecx + 0x348CF8) = 1;

loc_0003E8F5: ;
    MEM32(ecx * 4 + 0x349DF0) = edx;
    eax = SX16(LO16(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003E901: ;
    edx = MEM32(0x3489A4);
    SET_LO8(eax, MEM8(edx + 0x2D));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2A));
    SET_LO8(edx, MEM8(ecx + 0x348148));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E945; /* jne: not equal / not zero */

loc_0003E918: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E945; /* jne: not equal / not zero */

loc_0003E91C: ;
    SET_LO8(ecx, MEM8(ecx + 0x336CB4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x13 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E92C; /* jbe: below or equal (unsigned <=) */

loc_0003E927: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003E92C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x13 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003E927; /* ja: above (unsigned >) */

loc_0003E931: ;
    eax = ZX8(LO8(ecx));
    ecx = ZX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 4 + 0x2CD950);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003E945: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E953; /* jne: not equal / not zero */

loc_0003E94A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E953; /* jne: not equal / not zero */

loc_0003E94E: ;
    esi = 7;

loc_0003E953: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E960
 * Original: 0x0003E960 - 0x0003E978 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E960(void)
{

loc_0003E960: ;
    eax = MEM32(0x3489A4);
    ecx = MEM32(esp + 4);
    MEM8(eax + 0x35) = 1;
    MEM16(ecx * 2 + 0x347F04) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E980
 * Original: 0x0003E980 - 0x0003EA1C (156 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003E980: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x347EAC));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(edx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0003E99C; /* je: equal / zero */

loc_0003E993: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x33) = LO8(edx);

loc_0003E99C: ;
    _fa = (uint32_t)(MEM8(eax + 0x348320)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x348320), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E9B3; /* je: equal / zero */

loc_0003E9A4: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x41) = LO8(edx);
    MEM8(eax + 0x348320) = LO8(ebx);

loc_0003E9B3: ;
    _fa = (uint32_t)(MEM8(eax + 0x348690)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x348690), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E9CA; /* je: equal / zero */

loc_0003E9BB: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x42) = LO8(edx);
    MEM8(eax + 0x348690) = LO8(ebx);

loc_0003E9CA: ;
    _fa = (uint32_t)(MEM8(eax + 0x3485AC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3485AC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E9E1; /* je: equal / zero */

loc_0003E9D2: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x2E) = MEM8(ecx + 0x2E) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x3485AC) = LO8(ebx);

loc_0003E9E1: ;
    _fa = (uint32_t)(MEM8(eax + 0x347EEC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x347EEC), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E9F8; /* jne: not equal / not zero */

loc_0003E9E9: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x4A) = LO8(edx);
    MEM8(eax + 0x347EEC) = LO8(ebx);

loc_0003E9F8: ;
    _fa = (uint32_t)(MEM8(eax + 0x348B74)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x348B74), LO8(edx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0003EA1B; /* jne: not equal / not zero */

loc_0003EA01: ;
    edx = MEM32(0x3489A4);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edx + 0x34));
    MEM16(eax * 2 + 0x336E24) = LO16(ecx);
    MEM8(eax + 0x348B74) = 2;

loc_0003EA1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003EA20
 * Original: 0x0003EA20 - 0x0003EA40 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003EA20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003EA3B; /* jle: less or equal (signed <=) */

loc_0003EA36: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0003EA3B: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003EA40
 * Original: 0x0003EA40 - 0x0003EA78 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003EA40: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ecx + edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0003EA5F; /* jle: less or equal (signed <=) */

loc_0003EA5B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0003EA63;

loc_0003EA5F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;

loc_0003EA63: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003EA70; /* jg: greater (signed >) */

loc_0003EA6B: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003EA70: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003EA80
 * Original: 0x0003EA80 - 0x0003EAB6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003EA80: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x348148));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EAB5; /* jne: not equal / not zero */

loc_0003EA90: ;
    ecx = MEM32(0x3489A4);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EAAB; /* jne: not equal / not zero */

loc_0003EA9E: ;
    SET_LO8(ecx, MEM8(ecx + 0x2A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x59 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003EAB0; /* jbe: below or equal (unsigned <=) */

loc_0003EAA6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5E (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003EAB0; /* jae: above or equal (unsigned >=) */

loc_0003EAAB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EAB5; /* jne: not equal / not zero */

loc_0003EAB0: ;
    eax = 1;

loc_0003EAB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003EAC0
 * Original: 0x0003EAC0 - 0x0003EAF8 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EAC0(void)
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

loc_0003EAC0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    fp_push(MEMF(eax + 0x3489C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30C274)); /* fsub dword ptr [eax + 0x30c274] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003EAED; /* jne: not equal / not zero */

loc_0003EAE3: ;
    eax = MEM32(0x3489A4);
    MEM8(eax + 0x2F) = 0;
    esp += 4; return; /* ret */

loc_0003EAED: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x2F) = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003EB00
 * Original: 0x0003EB00 - 0x0003EBCB (203 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003EB00: ;
    ecx = MEM32(0x3489A4);
    edx = ZX8(MEM8(ecx + 0x2D));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x2A));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx + 0x2B));
    ecx = ZX16(MEM16(ecx + 0x28));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB3E; /* jne: not equal / not zero */

loc_0003EB1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003EB2E; /* jl: less (signed <) */

loc_0003EB24: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x31 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003EB2E; /* jg: greater (signed >) */

loc_0003EB29: ;
    eax = 1;

loc_0003EB2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */

loc_0003EB34: ;
    if (CMP_NE(_fa, _fb)) goto loc_0003EB3B; /* jne: not equal / not zero */

loc_0003EB36: ;
    eax = 1;

loc_0003EB3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EB3E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB6F; /* jne: not equal / not zero */

loc_0003EB43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x73 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003EB3B; /* jl: less (signed <) */

loc_0003EB48: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003EB3B; /* jg: greater (signed >) */

loc_0003EB50: ;
    ecx = ecx & 0x21FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x43 (32-bit) */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB6A; /* je: equal / zero */

loc_0003EB60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x42 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB6A; /* je: equal / zero */

loc_0003EB65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB3B; /* jne: not equal / not zero */

loc_0003EB6A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EB6F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB87; /* je: equal / zero */

loc_0003EB78: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB87; /* je: equal / zero */

loc_0003EB7D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB87; /* je: equal / zero */

loc_0003EB82: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB91; /* jne: not equal / not zero */

loc_0003EB87: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB91; /* jne: not equal / not zero */

loc_0003EB8C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003EB36; /* jl: less (signed <) */

loc_0003EB91: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EBA3; /* jne: not equal / not zero */

loc_0003EB96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003EB3B; /* jge: greater or equal (signed >=) */

loc_0003EB9B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EBA3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EBB2; /* je: equal / zero */

loc_0003EBA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EBB2; /* je: equal / zero */

loc_0003EBAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EB3B; /* jne: not equal / not zero */

loc_0003EBB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003EB3B; /* jl: less (signed <) */

loc_0003EBBA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003EB3B; /* jge: greater or equal (signed >=) */

loc_0003EBC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    goto loc_0003EB34;

}

/**
 * sub_0003EBD0
 * Original: 0x0003EBD0 - 0x0003ECB2 (226 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003EBD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    SET_LO8(edx, MEM8(esi + 0x30D9CD));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEM8(eax + 0x33715C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0003EC04; /* jne: not equal / not zero */

loc_0003EBED: ;
    _fa = (uint32_t)(MEM8(eax + 0x348148)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x348148), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC04; /* je: equal / zero */

loc_0003EBF5: ;
    SET_LO8(edx, MEM8(esi + 0x30D9CA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC18; /* je: equal / zero */

loc_0003EBFF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC18; /* je: equal / zero */

loc_0003EC04: ;
    MEM8(eax + 0x349DC8) = LO8(ecx);
    MEM16(eax * 2 + 0x348848) = LO16(ecx);
    MEM8(eax + 0x336EE8) = LO8(ecx);

loc_0003EC18: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x348848)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x348848), LO16(ecx) (16-bit) */
    MEM32(eax * 4 + 0x34880C) = 0xFFFFFFFFu;
    MEM16(eax * 2 + 0x348838) = LO16(ecx);
    MEM8(eax + 0x348BCC) = LO8(ecx);
    MEM8(eax + 0x348D0C) = LO8(ecx);
    MEM32(eax * 4 + 0x3484D8) = ecx;
    MEM8(eax + 0x349DF8) = LO8(ecx);
    MEM8(eax + 0x34859C) = LO8(ecx);
    MEM8(eax + 0x336E20) = LO8(ecx);
    MEM8(eax + 0x337178) = LO8(ecx);
    MEM32(eax * 4 + 0x348818) = ecx;
    MEM32(eax * 4 + 0x348B98) = ecx;
    MEM8(eax * 2 + 0x348990) = LO8(ecx);
    MEM8(eax * 2 + 0x348991) = LO8(ecx);
    MEM16(eax * 2 + 0x336F1C) = LO16(ecx);
    MEM16(eax * 2 + 0x347EB8) = LO16(ecx);
    MEM8(eax + 0x3485A0) = LO8(ecx);
    MEM8(eax + 0x336E40) = LO8(ecx);
    MEM8(eax + 0x347ECC) = LO8(ecx);
    POP32(esp, esi);
    MEM32(eax * 4 + 0x348070) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) goto loc_0003ECB1; /* jne: not equal / not zero */

loc_0003ECAA: ;
    MEM32(eax * 4 + 0x349E40) = ecx;

loc_0003ECB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003ECC0
 * Original: 0x0003ECC0 - 0x0003EF17 (599 bytes, 131 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003ECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003ECC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x3489A4);
    PUSH32(esp, esi);
    esi = 0x3F800000;
    MEM32(eax * 4 + 0x348640) = esi;
    SET_LO8(ecx, MEM8(edx + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EE21; /* jne: not equal / not zero */

loc_0003ECE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 0x28));
    ecx = ecx & 0x21FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x189) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x189 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003EDDD; /* jg: greater (signed >) */

loc_0003ECFB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0003ED16; /* je: equal / zero */

loc_0003ECFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0003ED8F; /* jg: greater (signed >) */

loc_0003ED06: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0003ED68; /* je: equal / zero */

loc_0003ED08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ED3D; /* je: equal / zero */

loc_0003ED0D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x65 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EEFD; /* jne: not equal / not zero */

loc_0003ED16: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM16(ecx + 0x33717C) = 0xFFFF;

loc_0003ED24: ;
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717E) = 3;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003ED3D: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x33717E) = 2;
    MEM16(ecx + 0x337184) = LO16(eax);
    MEM32(eax * 4 + 0x348640) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003ED68: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717C) = 0xFFF5;
    MEM16(ecx + 0x33717E) = 5;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003ED8F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EDB6; /* je: equal / zero */

loc_0003ED97: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x188) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x188 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EEFD; /* jne: not equal / not zero */

loc_0003EDA3: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM16(ecx + 0x33717C) = 0xFFF9;
    goto loc_0003ED24;

loc_0003EDB6: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x33717E) = 5;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EDDD: ;
    _fb = (uint32_t)(0x18E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003EEFD; /* ja: above (unsigned >) */

loc_0003EDEC: ;
    ecx = ZX8(MEM8(ecx + 0x3EF24));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3EF18); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0003ED16u) goto loc_0003ED16;
    if (_jt == 0x0003EDFAu) goto loc_0003EDFA;
    if (_jt == 0x0003EEFDu) goto loc_0003EEFD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003EDFA: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717E) = 5;
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EE21: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EEC1; /* jne: not equal / not zero */

loc_0003EE2A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 0x28));
    ecx = ecx & 0x21FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003EE9A; /* je: equal / zero */

loc_0003EE3B: ;
    _fb = (uint32_t)(0x165) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x165;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003EE73; /* je: equal / zero */

loc_0003EE43: ;
    _fb = (uint32_t)(0x23) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x23;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0003EEFD; /* jne: not equal / not zero */

loc_0003EE4C: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x33717E) = 6;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EE73: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x33717E) = 1;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EE9A: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x33717E) = LO16(edx);
    MEM16(ecx + 0x337184) = LO16(eax);
    MEM32(eax * 4 + 0x348640) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EEC1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EF15; /* jne: not equal / not zero */

loc_0003EEC6: ;
    edx = ZX16(MEM16(edx + 0x28));
    edx = edx & 0x21FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x2E (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003EEFD; /* jne: not equal / not zero */

loc_0003EED6: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    MEM32(eax * 4 + 0x348640) = esi;
    MEM16(ecx + 0x33717E) = 4;
    MEM16(ecx + 0x33717C) = 0xFFFF;
    MEM16(ecx + 0x337184) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003EEFD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fa = (uint32_t)(MEM16(eax + 0x33717C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x33717C), 0 (16-bit) */
    eax = eax + 0x33717C;
    if (CMP_EQ(_fa, _fb)) goto loc_0003EF15; /* je: equal / zero */

loc_0003EF10: ;
    MEM16(eax) = 2;

loc_0003EF15: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003EF90
 * Original: 0x0003EF90 - 0x0003EFFD (109 bytes, 27 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0003EF90(void)
{
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

loc_0003EF90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x347EF4);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x347EF4) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x347EF4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FA4)); /* fmul dword ptr [0x231fa4] */
    MEM32(esp) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x347EF4) = ecx;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = edx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FA4)); /* fmul dword ptr [0x231fa4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FA4)); /* fmul dword ptr [0x231fa4] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003F000
 * Original: 0x0003F000 - 0x0003F0EE (238 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003F000: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + ecx * 4;
    ecx = MEM32(eax * 4 + 0x34814C);
    SET_LO8(edx, MEM8(ecx + 1));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx);
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edx = edx & 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edi = (uint32_t)(int32_t)SMEM8(ecx + 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 2));
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 4) = edx;
    edi = (uint32_t)(int32_t)SMEM8(ecx + 2);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 3));
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx + 4));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0xC) = edx;
    esi = MEM32(eax * 4 + 0x34814C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x34814C) = esi;
    ecx = esi;
    SET_LO8(edx, MEM8(ecx + 1));
    esi = (uint32_t)(int32_t)SMEM8(ecx);
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x348850) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x348850;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    esi = (uint32_t)(int32_t)SMEM8(ecx + 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 2));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 4) = edx;
    esi = (uint32_t)(int32_t)SMEM8(ecx + 2);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 3));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = edx;
    edx = ZX8(MEM8(ecx + 4));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003F0F0
 * Original: 0x0003F0F0 - 0x0003F18C (156 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003F0F0: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D9A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F12A; /* je: equal / zero */

loc_0003F106: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F12A; /* je: equal / zero */

loc_0003F10B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F12A; /* je: equal / zero */

loc_0003F110: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F12A; /* je: equal / zero */

loc_0003F115: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F12A; /* je: equal / zero */

loc_0003F11A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F18B; /* jne: not equal / not zero */

loc_0003F11F: ;
    SET_LO8(eax, MEM8(eax + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x34 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003F18B; /* jb: below (unsigned <) */

loc_0003F126: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3F (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003F18B; /* ja: above (unsigned >) */

loc_0003F12A: ;
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x336A10)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x336A10), 0x200 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003F18B; /* jb: below (unsigned <) */

loc_0003F136: ;
    SET_LO8(eax, MEM8(ecx + 0x348D08));
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(0x348318));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xD2);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x52);
    SET_LO16(edx, MEM16(ecx * 2 + 0x336A10));
    ebx = SX8(LO8(eax));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    esi = edx;
    esi = esi | 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x348D08) = LO8(eax);
    eax = ZX16(LO16(edx));
    PUSH32(esp, eax);
    MEM16(edi * 2 + 0x3371B8) = LO16(esi);
    PUSH32(esp, 0x0003F185u); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0003F185: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0003F18B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003F190
 * Original: 0x0003F190 - 0x0003F1EB (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003F190: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x348BCC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x348BCC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F1EA; /* jne: not equal / not zero */

loc_0003F19D: ;
    SET_LO8(ecx, MEM8(eax + 0x348D0C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F1E2; /* jne: not equal / not zero */

loc_0003F1A7: ;
    ecx = MEM32(eax * 4 + 0x347EBC);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F1BD; /* jne: not equal / not zero */

loc_0003F1B5: ;
    MEM8(eax + 0x348BCC) = 0;
    esp += 4; return; /* ret */

loc_0003F1BD: ;
    SET_LO16(edx, SX8(LO8(edx)));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x347EBC) = ecx;
    MEM16(eax * 2 + 0x336F1C) = LO16(edx);
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x348D0C) = LO8(edx);
    MEM32(eax * 4 + 0x347EBC) = ecx;
    esp += 4; return; /* ret */

loc_0003F1E2: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x348D0C) = LO8(ecx);

loc_0003F1EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003F1F0
 * Original: 0x0003F1F0 - 0x0003F28B (155 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003F1F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30D9A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F214; /* je: equal / zero */

loc_0003F208: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F214; /* je: equal / zero */

loc_0003F20C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F214; /* je: equal / zero */

loc_0003F210: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F286; /* jne: not equal / not zero */

loc_0003F214: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F23F; /* jne: not equal / not zero */

loc_0003F21D: ;
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F229u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_0003F229: ;
    ecx = ZX8(MEM8(edi + 1));
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x2CE30C);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    goto loc_0003F253;

loc_0003F23F: ;
    PUSH32(esp, 0x0003F244u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0003F244: ;
    ecx = ZX8(MEM8(edi + 1));
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x2CE30C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_0003F253: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F286; /* jne: not equal / not zero */

loc_0003F257: ;
    SET_LO8(eax, MEM8(esi + 0x348BCC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F286; /* jne: not equal / not zero */

loc_0003F261: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x336F1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x336F1C), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F286; /* jne: not equal / not zero */

loc_0003F26B: ;
    edx = MEM32(0x2CDD50);
    MEM8(esi + 0x348BCC) = 1;
    MEM32(esi * 4 + 0x347EBC) = edx;
    MEM8(esi + 0x348D0C) = 0;

loc_0003F286: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003F290
 * Original: 0x0003F290 - 0x0003F4D5 (581 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F290(void)
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

loc_0003F290: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    SET_LO16(eax, MEM16(esi * 2 + 0x347F04));
    ebx = esi * 2 + 0x347F04;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0003F369; /* jne: not equal / not zero */

loc_0003F2B6: ;
    ecx = esi * 4;
    eax = MEM32(ecx + 0x347EF4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebp, MEM16(eax));
    edi = eax + 2;
    edx = esi + esi * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x347EF4) = edi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003F2DDu); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F2DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), LO16(eax) (16-bit) */
    esi = edi + 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0003F2F4; /* je: equal / zero */

loc_0003F2EC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x348CC0)); /* fadd dword ptr [edx + 0x348cc0] */
    goto loc_0003F2FA;

loc_0003F2F4: ;
    fp_top() = RECOMP_FP_PC(MEMF(edx + 0x348CC0) - fp_top()); /* fsubr dword ptr [edx + 0x348cc0] */

loc_0003F2FA: ;
    MEMF(edx + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(edi));
    MEM32(ecx + 0x347EF4) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F30Fu); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F30F: ;
    MEMF(edx + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x347EF4) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F329u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F329: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x348CC8)); /* fadd dword ptr [edx + 0x348cc8] */
    eax = MEM32(ecx + 0x348694);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(ecx + 0x348278)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx + 0x348694) = eax;
    MEM16(ebx) = 2;
    MEMF(ecx + 0x348278) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003F369: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0003F4CB; /* jle: less or equal (signed <=) */

loc_0003F36F: ;
    fp_push(MEMF(esi * 4 + 0x348818)); /* fld float */
    eax = MEM32(0x3489A4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x348070)); /* fadd dword ptr [esi*4 + 0x348070] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x348278)); /* fadd dword ptr [esi*4 + 0x348278] */
    MEMF(esi * 4 + 0x348278) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    PUSH32(esp, 0x0003F39Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0003F39E: ;
    ecx = MEM32(esi * 4 + 0x347EF4);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7777) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0x7777 (16-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003F4CB; /* je: equal / zero */

loc_0003F3B4: ;
    edx = MEM32(esi * 4 + 0x347EF4);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x7770) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0x7770 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F4CB; /* je: equal / zero */

loc_0003F3C6: ;
    edi = MEM32(esi * 4 + 0x348694);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0003F4CB; /* jge: greater or equal (signed >=) */

loc_0003F3DB: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F3E6u); RECOMP_ABI_CALL(0x0003EF90u, sub_0003EF90); /* call 0x0003EF90 */

loc_0003F3E6: ;
    eax = MEM32(esi * 4 + 0x336F30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F426; /* jne: not equal / not zero */

loc_0003F3F5: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi * 4 + 0x336EFC)); /* fsub dword ptr [esi*4 + 0x336efc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0003F426: ;
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    MEM32(esi * 4 + 0x336F30) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0003F44E; /* je: equal / zero */

loc_0003F442: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC0)); /* fadd dword ptr [eax + 0x348cc0] */
    goto loc_0003F458;

loc_0003F44E: ;
    fp_push(MEMF(eax + 0x348CC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */

loc_0003F458: ;
    MEM16(ebx) = MEM16(ebx) + 1;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC4)); /* fadd dword ptr [eax + 0x348cc4] */
    MEMF(eax + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC8)); /* fadd dword ptr [eax + 0x348cc8] */
    MEMF(eax + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = edi + 1;
    MEM32(esp + 0x10) = eax;
    MEM32(esi * 4 + 0x348694) = eax;
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(MEM16(esi * 2 + 0x347F00)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x347F00), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F4B9; /* je: equal / zero */

loc_0003F49D: ;
    ecx = MEM32(esi * 4 + 0x347EF4);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7777) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0x7777 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F3B4; /* jne: not equal / not zero */

loc_0003F4AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003F4B9: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM8(esi + 0x348618) = 1;
    MEMF(esi * 4 + 0x348278) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003F4CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003F4E0
 * Original: 0x0003F4E0 - 0x0003F696 (438 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F4E0(void)
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

loc_0003F4E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xB4);
    _fb = (uint32_t)(0x336E48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x336E48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x336FC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x336FC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = 3;

loc_0003F510: ;
    eax = MEM32(esi);
    eax = eax + ebp * 4 + -4;
    MEM32(esi) = eax;
    ecx = MEM32(eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0003F52Au); RECOMP_ABI_CALL(0x0003E860u, sub_0003E860); /* call 0x0003E860 */

loc_0003F52A: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebx * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(edi + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0003F54B; /* jne: not equal / not zero */

loc_0003F547: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0003F54B: ;
    eax = MEM32(esp + 0x34);
    MEM32(edi + -4) = ecx;
    MEM32(edi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    if ((_fa != 0)) goto loc_0003F510; /* jne: not equal / not zero */

loc_0003F561: ;
    eax = ebp + ebp * 2 + -3;
    MEM32(esp + 0x18) = eax;
    eax = eax + ebp * 2 + -2;
    MEM32(esp + 0x14) = eax;
    edi = ebx;
    eax = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x440);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    esi = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x348D58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x348D58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_0003F590: ;
    edx = MEM32(esi + 0x34814C);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x336A24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM32(esi + 0x34814C) = edx;
    PUSH32(esp, 0x0003F5AEu); RECOMP_ABI_CALL(0x00045E60u, sub_00045E60); /* call 0x00045E60 */

loc_0003F5AE: ;
    edx = MEM32(esi + 0x336F3C);
    eax = MEM32(esp + 0x24);
    eax = edx + eax * 2;
    MEM32(esi + 0x336F3C) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    ecx = eax + 2;
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003F5D5u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F5D5: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F5EDu); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F5ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F601u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003F601: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ebx * 2 + 0x30F920));
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0003F628; /* jne: not equal / not zero */

loc_0003F61D: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003F62F;

loc_0003F628: ;
    edx = MEM32(esp + 0x34);
    MEM32(edi + -4) = edx;

loc_0003F62F: ;
    edx = MEM32(esp + 0x1C);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x336A24);
    ecx = ecx + ecx * 2;
    ecx = ecx * 4 + 0x336FB8;
    MEM32(ecx) = edx;
    edx = MEM32(0x336A2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    eax = MEM32(0x336A28);
    if (CMP_NE(_fa, _fb)) goto loc_0003F66D; /* jne: not equal / not zero */

loc_0003F65D: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x336A30);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_0003F675;

loc_0003F66D: ;
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x336A30);

loc_0003F675: ;
    MEM32(edi + 0x14) = eax;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(ecx + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0003F590; /* jl: less (signed <) */

loc_0003F68E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003F6A0
 * Original: 0x0003F6A0 - 0x0003F7BD (285 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F6A0(void)
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

loc_0003F6A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(MEM32(esi * 4 + 0x3487E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x3487E4), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0003F6C9; /* jne: not equal / not zero */

loc_0003F6B4: ;
    eax = MEM32(0x3489A4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F6C9; /* jne: not equal / not zero */

loc_0003F6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F6C6u); RECOMP_ABI_CALL(0x00045B40u, sub_00045B40); /* call 0x00045B40 */

loc_0003F6C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003F6C9: ;
    eax = esi + esi * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x348298);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F6FF; /* je: equal / zero */

loc_0003F6DB: ;
    edx = MEM32(eax + 0x348288);
    ecx = esi + esi * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x348B5C) = edx;
    edx = MEM32(eax + 0x348290);
    MEM32(ecx + 0x348B64) = edx;
    MEM32(eax + 0x348298) = ebx;

loc_0003F6FF: ;
    SET_LO16(ecx, MEM16(esi * 2 + 0x348814));
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x348824);
    MEM32(eax + 0x348CC4) = edx;
    SET_LO8(edx, MEM8(esi + 0x348CF8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM16(0x349E4C) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003F76F; /* je: equal / zero */

loc_0003F72A: ;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x38) = ecx;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x348B5C)); /* fmul dword ptr [eax + 0x348b5c] */
    MEMF(eax + 0x3487C8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x348B60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x348824)); /* fsub dword ptr [eax + 0x348824] */
    fp_top() = RECOMP_FP_PC(fp_top() / g_fp_stack[(g_fp_top + 2) & 7]); /* fdiv st(2) */
    MEMF(eax + 0x3487CC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x348B64)); /* fmul dword ptr [eax + 0x348b64] */
    MEMF(eax + 0x3487D0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0003F798;

loc_0003F76F: ;
    fp_push(MEMF(eax + 0x348B60)); /* fld float */
    edx = SX16(LO16(ecx));
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x348824)); /* fsub dword ptr [eax + 0x348824] */
    MEM32(esp + 0x38) = edx;
    MEM32(eax + 0x3487C8) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x38)); /* fidiv dword ptr [esp + 0x38] */
    MEM32(eax + 0x3487D0) = ebx;
    MEMF(eax + 0x3487CC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003F798: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x440);
    eax = esi + esi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x3485B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3485B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi;
    _fb = (uint32_t)(0x348D78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x348D78;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3C) = eax;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0003F7C0(); return; /* tail jmp 0x0003F7C0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003F7C0
 * Original: 0x0003F7C0 - 0x0003F901 (321 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F7C0(void)
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

loc_0003F7C0: ;
    ecx = MEM32(ebp + 0x336F3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003F7D1u); RECOMP_ABI_CALL(0x00046040u, sub_00046040); /* call 0x00046040 */

loc_0003F7D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F7E9; /* je: equal / zero */

loc_0003F7DF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003F7E9: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    eax = edi + -36;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F7FDu); RECOMP_ABI_CALL(0x00046080u, sub_00046080); /* call 0x00046080 */

loc_0003F7FD: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F809u); RECOMP_ABI_CALL(0x00045E60u, sub_00045E60); /* call 0x00045E60 */

loc_0003F809: ;
    ecx = MEM32(ebp + 0x34814C);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    MEM32(ebp + 0x34814C) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003F844; /* je: equal / zero */

loc_0003F82E: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_0003F854;

loc_0003F844: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;

loc_0003F854: ;
    eax = MEM32(edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F862u); RECOMP_ABI_CALL(0x00045F10u, sub_00045F10); /* call 0x00045F10 */

loc_0003F862: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F87A; /* je: equal / zero */

loc_0003F874: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x34) = eax;

loc_0003F87A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F882u); RECOMP_ABI_CALL(0x00046110u, sub_00046110); /* call 0x00046110 */

loc_0003F882: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x3C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0003F7C0; /* jl: less (signed <) */

loc_0003F8A3: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x336E48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x336E48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_0003F8B1: ;
    edx = MEM32(edi);
    eax = MEM32(edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003F8C0u); RECOMP_ABI_CALL(0x0003E860u, sub_0003E860); /* call 0x0003E860 */

loc_0003F8C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003F8E2; /* je: equal / zero */

loc_0003F8CE: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;

loc_0003F8E2: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003F8EEu); RECOMP_ABI_CALL(0x00045F10u, sub_00045F10); /* call 0x00045F10 */

loc_0003F8EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003F8B1; /* jl: less (signed <) */

loc_0003F8FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003F910
 * Original: 0x0003F910 - 0x0003FC73 (867 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F910(void)
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

loc_0003F910: ;
    eax = MEM32(0x3489A4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    MEM8(eax + 0x4A) = 0;
    SET_LO8(eax, MEM8(ebp + 0x3485AC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0003F941; /* je: equal / zero */

loc_0003F92E: ;
    ecx = MEM32(0x3489A4);
    MEM8(ecx + 0x2E) = 1;
    MEM8(ebp + 0x3485AC) = 0;
    goto loc_0003F94B;

loc_0003F941: ;
    edx = MEM32(0x3489A4);
    MEM8(edx + 0x2E) = 0;

loc_0003F94B: ;
    eax = MEM32(esp + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x307344);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp * 4;
    MEM16(ebp * 2 + 0x3484E8) = LO16(eax);
    MEM32(esi + 0x336F30) = eax;
    SET_LO8(eax, MEM8(ebp + 0x337174));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0x317034) = 0;
    MEM16(ebp * 2 + 0x336EE4) = 0xFFFF;
    MEM8(esp + 0x2C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0003F99A; /* je: equal / zero */

loc_0003F98E: ;
    MEM16(ebp * 2 + 0x347F04) = 1;
    goto loc_0003F9AA;

loc_0003F99A: ;
    SET_LO16(edx, MEM16(ebp * 2 + 0x34869C));
    MEM16(ebp * 2 + 0x347F04) = LO16(edx);

loc_0003F9AA: ;
    edi = MEM32(esp + 0x34);
    eax = ebp * 2 + 0x34869C;
    MEM32(esp + 0x38) = eax;
    eax = (uint32_t)(int32_t)SMEM16(eax);
    edx = eax + -1;
    eax = edx + edx * 2;
    MEM32(esp + 0x10) = eax;
    eax = eax + edx * 2;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x30);
    eax = MEM32(edi + eax * 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003F9DE; /* jne: not equal / not zero */

loc_0003F9DA: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003F9DE: ;
    edx = SX16(LO16(edx));
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ebp * 2 + 0x348270) = 0x7777;
    ebx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x336E48) = ebx;
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x336E4C) = ebx;
    ebx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp * 2 + 0x30F920));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(edi + 0x336E50) = ebx;
    MEM32(esp + 0x18) = edx;
    edx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0003FA83; /* jne: not equal / not zero */

loc_0003FA2E: ;
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x34814C) = edi;
    edi = MEM32(eax + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348150) = edi;
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348154) = edi;
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348158) = edi;
    edi = MEM32(eax + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F3C) = edi;
    edi = MEM32(eax + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F40) = edi;
    edi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F44) = edi;
    edi = MEM32(eax + 0x1C);
    goto loc_0003FAD6;

loc_0003FA83: ;
    edi = MEM32(eax + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x34814C) = edi;
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348150) = edi;
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348154) = edi;
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x348158) = edi;
    edi = MEM32(eax + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F3C) = edi;
    edi = MEM32(eax + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F40) = edi;
    edi = MEM32(eax + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F44) = edi;
    edi = MEM32(eax + 0x24);

loc_0003FAD6: ;
    ebx = MEM32(esi * 4 + 0x34814C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x336F48) = edi;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edi = MEM32(esi * 4 + 0x336F3C);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x336F3C) = edi;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x34814C) = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x336F40) = MEM32(esi * 4 + 0x336F40) + edx;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x336F40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x348150) = MEM32(esi * 4 + 0x348150) + edi;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x348150)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x336F44) = MEM32(esi * 4 + 0x336F44) + edx;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x336F44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x348154) = MEM32(esi * 4 + 0x348154) + edi;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x348154)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x336F48) = MEM32(esi * 4 + 0x336F48) + edx;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x336F48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi * 4 + 0x348158) = MEM32(esi * 4 + 0x348158) + edi;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x348158)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336A1C) = edx;
    eax = MEM32(eax + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x38);
    ebx = ebp + ebp * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x348B5C;
    MEM32(esi + 0x347EF4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 1 (16-bit) */
    PUSH32(esp, edi);
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0003FBFD; /* je: equal / zero */

loc_0003FB71: ;
    PUSH32(esp, 0x0003FB76u); RECOMP_ABI_CALL(0x0003EF90u, sub_0003EF90); /* call 0x0003EF90 */

loc_0003FB76: ;
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 2 (16-bit) */
    MEM32(esp + 0x34) = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0003FBF2; /* jle: less or equal (signed <=) */

loc_0003FB8B: ;
    eax = edx;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x30) = ecx;

loc_0003FB94: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0003FB9Fu); RECOMP_ABI_CALL(0x0003EF90u, sub_0003EF90); /* call 0x0003EF90 */

loc_0003FB9F: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FBC5; /* jne: not equal / not zero */

loc_0003FBAA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x347EB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FBC5; /* jne: not equal / not zero */

loc_0003FBB8: ;
    MEM32(edi) = 0;
    MEM32(edi + 8) = 0;

loc_0003FBC5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0003FB94; /* jl: less (signed <) */

loc_0003FBF2: ;
    ecx = MEM32(edi + 4);
    MEM32(ebx + 0x348CC4) = ecx;
    goto loc_0003FC14;

loc_0003FBFD: ;
    PUSH32(esp, 0x0003FC02u); RECOMP_ABI_CALL(0x0003EF90u, sub_0003EF90); /* call 0x0003EF90 */

loc_0003FC02: ;
    eax = MEM32(esi + 0x347EF4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x347EF4) = eax;

loc_0003FC14: ;
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003FC22; /* je: equal / zero */

loc_0003FC1C: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003FC22: ;
    edx = MEM32(esp + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esp + 0x34) = eax;
    MEM32(esi + 0x348694) = eax;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    MEMF(esi + 0x348278) = (float)fp_top(); /* fst */
    if (CMP_NE(_fa, _fb)) goto loc_0003FC60; /* jne: not equal / not zero */

loc_0003FC45: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3487C0)); /* fadd dword ptr [esi + 0x3487c0] */
    POP32(esp, edi);
    eax = edx;
    MEM16(eax) = 1;
    MEMF(esi + 0x348278) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003FC60: ;
    ecx = MEM32(esp + 0x38);
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ecx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003FC80
 * Original: 0x0003FC80 - 0x0003FCB0 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003FC80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x2E5AF0;
    PUSH32(esp, 0x0003FC8Cu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0003FC8C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FC96u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_0003FC96: ;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x440);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x348D30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x348D30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 0x24;
    edi = 4;

    g_seh_ebp = ebp; sub_0003FCB0(); return; /* fallthrough 0x0003FCB0 */

}

/**
 * sub_0003FCB0
 * Original: 0x0003FCB0 - 0x0003FCD9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003FCB0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FCC1u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_0003FCC1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003FCB0; /* jne: not equal / not zero */

loc_0003FCCD: ;
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006AC70(); return; /* tail jmp 0x0006AC70 */

}

/**
 * sub_0003FCE0
 * Original: 0x0003FCE0 - 0x0003FE91 (433 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FCE0(void)
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

loc_0003FCE0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = MEM32(edi * 4 + 0x336F30);
    fp_push(MEMF(edi * 4 + 0x348278)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FD17; /* jne: not equal / not zero */

loc_0003FCFD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEM32(edi * 4 + 0x336F30) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(edi * 4 + 0x348694)); /* fisub dword ptr [edi*4 + 0x348694] */
    goto loc_0003FD1E;

loc_0003FD17: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi * 4 + 0x336EFC)); /* fsub dword ptr [edi*4 + 0x336efc] */

loc_0003FD1E: ;
    eax = MEM32(edi * 4 + 0x347EF4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    ecx = eax + 2;
    MEM32(edi * 4 + 0x347EF4) = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003FD3Au); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003FD3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FD69; /* jne: not equal / not zero */

loc_0003FD46: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x347EF4) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FD5Du); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003FD5D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    PUSH32(esp, eax);
    goto loc_0003FD8D;

loc_0003FD69: ;
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ecx + -2));
    MEM32(edi * 4 + 0x347EF4) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FD83u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003FD83: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx));
    PUSH32(esp, edx);

loc_0003FD8D: ;
    PUSH32(esp, 0x0003FD92u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_0003FD92: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = edi + edi * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB4);
    ebx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC0)); /* fadd dword ptr [eax + 0x348cc0] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);
    MEMF(eax + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC4)); /* fadd dword ptr [eax + 0x348cc4] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x336FB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x336FB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x347EF4) = ecx;
    MEMF(eax + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x336E48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x336E48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x30) = 3;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC8)); /* fadd dword ptr [eax + 0x348cc8] */
    MEMF(eax + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0003FE02: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003FE11u); RECOMP_ABI_CALL(0x0003E860u, sub_0003E860); /* call 0x0003E860 */

loc_0003FE11: ;
    edx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FE33; /* jne: not equal / not zero */

loc_0003FE27: ;
    ebp = (uint32_t)(0u - (uint32_t)(ebp));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = edx;

loc_0003FE33: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003FE40u); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_0003FE40: ;
    MEM32(esi) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FE4Cu); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_0003FE4C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0003FE59u); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_0003FE59: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_0003FE02; /* jne: not equal / not zero */

loc_0003FE70: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x440);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    _fb = (uint32_t)(0x348D30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x348D30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_0003FE91(); return; /* fallthrough 0x0003FE91 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003FE91
 * Original: 0x0003FE91 - 0x0003FF72 (225 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FE91(void)
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

loc_0003FE91: ;
    eax = MEM32(ebx + 0x336F3C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003FEA2u); RECOMP_ABI_CALL(0x00046040u, sub_00046040); /* call 0x00046040 */

loc_0003FEA2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003FEBA; /* jne: not equal / not zero */

loc_0003FEB0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003FEBA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + -4)); /* fadd dword ptr [esi - 4] */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0003FEF4u); RECOMP_ABI_CALL(0x00045E60u, sub_00045E60); /* call 0x00045E60 */

loc_0003FEF4: ;
    ecx = MEM32(ebx + 0x34814C);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(ebx + 0x34814C) = ecx;
    ecx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0003FF2F; /* jne: not equal / not zero */

loc_0003FF15: ;
    eax = MEM32(esp + 0x20);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x24);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;

loc_0003FF2F: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x1C);
    eax = eax + eax * 2;
    eax = eax * 4 + 0x336FB8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x14) = ecx;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(eax + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0003FE91; /* jl: less (signed <) */

loc_0003FF6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003FF80
 * Original: 0x0003FF80 - 0x0003FFC0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003FF80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x7777;
    _fa = (uint32_t)(MEM16(edi * 2 + 0x348270)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x348270), LO16(edx) (16-bit) */
    ebp = 2;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000400DE(); return; } /* je: equal / zero */

loc_0003FFBC: ;
    PUSH32(esp, esi);
    /* nop */

    g_seh_ebp = ebp; sub_0003FFC0(); return; /* fallthrough 0x0003FFC0 */

}

/**
 * sub_0003FFC0
 * Original: 0x0003FFC0 - 0x00040001 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003FFC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi * 2 + 0x348270));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_0004001A(); return; } /* jns: not sign (positive) */

loc_0003FFCE: ;
    SET_LO16(ecx, MEM16(edi * 2 + 0x347F04));
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_000400DD(); return; } /* jg: greater (signed >) */

loc_0003FFE5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000400DD(); return; } /* je: equal / zero */

loc_0003FFEE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    eax = MEM32(edi * 4 + 0x348BC4);
    ebx = ebp;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00040001(); return; } /* jl: less (signed <) */

loc_0003FFFC: ;
    ebx = 1;

    g_seh_ebp = ebp; sub_00040001(); return; /* fallthrough 0x00040001 */

}

/**
 * sub_00040001
 * Original: 0x00040001 - 0x00040003 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040001: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00040003(); return; /* fallthrough 0x00040003 */

}

/**
 * sub_00040003
 * Original: 0x00040003 - 0x0004000A (7 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040003(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040003: ;
    MEM32(edi * 4 + 0x348BC4) = eax;

    g_seh_ebp = ebp; sub_0004000A(); return; /* fallthrough 0x0004000A */

}

/**
 * sub_0004000A
 * Original: 0x0004000A - 0x0004000D (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004000A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004000A: ;
    SET_LO16(eax, MEM16(eax));

    g_seh_ebp = ebp; sub_0004000D(); return; /* fallthrough 0x0004000D */

}

/**
 * sub_0004000D
 * Original: 0x0004000D - 0x0004001A (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004000D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004000D: ;
    MEM16(edi * 2 + 0x348270) = LO16(eax);
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_00040015
 * Original: 0x00040015 - 0x0004001A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040015(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040015: ;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_0004001A
 * Original: 0x0004001A - 0x00040036 (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004001A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004001A: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_000400C7(); return; } /* je: equal / zero */

loc_00040023: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0004003D(); return; } /* je: equal / zero */

loc_00040028: ;
    ecx = MEM32(edi * 4 + 0x348BC4);
    eax = edi * 4 + 0x348BC4;

    g_seh_ebp = ebp; sub_00040036(); return; /* fallthrough 0x00040036 */

}

/**
 * sub_00040036
 * Original: 0x00040036 - 0x00040039 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040036(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00040039(); return; /* fallthrough 0x00040039 */

}

/**
 * sub_00040039
 * Original: 0x00040039 - 0x000400C7 (142 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040039: ;
    MEM32(eax) = ecx;
    goto loc_000400B3;

    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    edx = edi * 4;
    esi = MEM32(edx + 0x348BC4);
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_0004003B
 * Original: 0x0004003B - 0x000400C7 (140 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004003B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004003B: ;
    goto loc_000400B3;

    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    edx = edi * 4;
    esi = MEM32(edx + 0x348BC4);
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_0004003D
 * Original: 0x0004003D - 0x000400C7 (138 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004003D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004003D: ;
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    edx = edi * 4;
    esi = MEM32(edx + 0x348BC4);
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_00040042
 * Original: 0x00040042 - 0x000400C7 (133 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040042(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040042: ;
    ecx = eax;
    edx = edi * 4;
    esi = MEM32(edx + 0x348BC4);
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_00040044
 * Original: 0x00040044 - 0x000400C7 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040044: ;
    edx = edi * 4;
    esi = MEM32(edx + 0x348BC4);
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_00040051
 * Original: 0x00040051 - 0x000400C7 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040051(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040051: ;
    eax = edx + 0x348BC4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax) = esi;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(_fa, _fb)) goto loc_0004008F; /* jne: not equal / not zero */

loc_00040069: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + ecx * 4 + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

loc_0004008F: ;
    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_0004006E
 * Original: 0x0004006E - 0x000400C7 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004006E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004006E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x336F7C) = 1;
    SET_LO16(edx, MEM16(esi));
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_00040083
 * Original: 0x00040083 - 0x000400C7 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040083(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040083: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(ecx + 0x336F78) = edx;
    goto loc_000400B3;

    ebp = ecx + edx;
    MEM8(ebp * 8 + 0x336F7C) = 1;
    SET_LO16(ebp, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = LO16(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x336F78) = esi;
    ebp = 2;

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_000400AE
 * Original: 0x000400AE - 0x000400C7 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400AE: ;
    ebp = 2;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_000400B3
 * Original: 0x000400B3 - 0x000400C7 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400B3: ;
    eax = MEM32(eax);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi * 2 + 0x348270) = LO16(ecx);
    edx = 0x7777;
    g_seh_ebp = ebp; sub_000400CF(); return; /* tail jmp 0x000400CF */

}

/**
 * sub_000400C7
 * Original: 0x000400C7 - 0x000400DD (22 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400C7: ;
    MEM16(edi * 2 + 0x348270) = LO16(edx);
    _fa = (uint32_t)(MEM16(edi * 2 + 0x348270)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x348270), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003FFC0(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000400DD(); return; /* fallthrough 0x000400DD */

}

/**
 * sub_000400CF
 * Original: 0x000400CF - 0x000400DD (14 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400CF: ;
    _fa = (uint32_t)(MEM16(edi * 2 + 0x348270)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x348270), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003FFC0(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000400DD(); return; /* fallthrough 0x000400DD */

}

/**
 * sub_000400DD
 * Original: 0x000400DD - 0x000400DE (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400DD: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_000400DE(); return; /* fallthrough 0x000400DE */

}

/**
 * sub_000400DE
 * Original: 0x000400DE - 0x000400E5 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000400DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000400DE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000400F0
 * Original: 0x000400F0 - 0x00040260 (368 bytes, 78 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000400F0(void)
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

loc_000400F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0 (16-bit) */
    MEM32(esp + 0x10) = 2;
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x18) = 5;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = 4;
    MEM32(esp + 0x28) = 6;
    if (CMP_NE(_fa, _fb)) goto loc_00040147; /* jne: not equal / not zero */

loc_0004013E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    goto loc_0004014E;

loc_00040147: ;
    eax = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004014E: ;
    esi = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x348814);
    SET_LO8(ecx, MEM8(edi + 0x349DC8));
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    fp_push(MEMF(esi + 0x2CDD98)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_00040197; /* je: equal / zero */

loc_00040169: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebp = SX16(LO16(eax));
    ecx = edi * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + ecx * 2;
    edx = edi + edi * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx * 4 + 0x3485DC)); /* fmul dword ptr [ecx*4 + 0x3485dc] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx * 4 + 0x348CC8)); /* fadd dword ptr [edx*4 + 0x348cc8] */
    MEMF(edx * 4 + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00040197: ;
    edx = SX16(LO16(eax));
    edx = edx + edi * 4;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    ebp = MEM32(eax + 0x348D6C);
    ecx = edx + edx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ecx + 0x3485B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348D54)); /* fadd dword ptr [eax + 0x348d54] */
    MEMF(eax + 0x348D54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3485B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348D58)); /* fadd dword ptr [eax + 0x348d58] */
    MEMF(eax + 0x348D58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3485B8)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x336F68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348D5C)); /* fadd dword ptr [eax + 0x348d5c] */
    edx = SX16(LO16(ebx));
    MEMF(eax + 0x348D5C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x2CDDF0)); /* fld float */
    MEM32(eax + 0x348D6C) = ebp;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = edx + edi * 4;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x110);
    eax = ecx + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x336F68);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3485B0)); /* fmul dword ptr [eax + 0x3485b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x348D54)); /* fadd dword ptr [esi + 0x348d54] */
    MEMF(esi + 0x348D54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3485B4)); /* fmul dword ptr [eax + 0x3485b4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x348D58)); /* fadd dword ptr [esi + 0x348d58] */
    MEMF(esi + 0x348D58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3485B8)); /* fmul dword ptr [eax + 0x3485b8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x348D5C)); /* fadd dword ptr [esi + 0x348d5c] */
    MEMF(esi + 0x348D5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0EC)); /* fmul dword ptr [0x22c0ec] */
    PUSH32(esp, 0x00040260u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

    g_seh_ebp = ebp; sub_00040260(); return; /* fallthrough 0x00040260 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040260
 * Original: 0x00040260 - 0x00040278 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040260(void)
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

loc_00040260: ;
    fp_push(MEMF(0x231FA8)); /* fld float */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x348D6C) = MEM32(esi + 0x348D6C) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x348D6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00040276u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00040276: ;
    ecx = edi;

    g_seh_ebp = ebp; sub_00040278(); return; /* fallthrough 0x00040278 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040278
 * Original: 0x00040278 - 0x000402A0 (40 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040278(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040278: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x440);
    edx = edi + edi * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x348F78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x348F78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi * 8 + 0x336F6C;
    _fb = (uint32_t)(0x3485CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3485CC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 2;
    /* nop */

    g_seh_ebp = ebp; sub_000402A0(); return; /* fallthrough 0x000402A0 */

}

/**
 * sub_000402A0
 * Original: 0x000402A0 - 0x00040310 (112 bytes, 30 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000402A0(void)
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

loc_000402A0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebx = (uint32_t)(int32_t)SMEM16(esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) - ebx;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -4)); /* fadd dword ptr [ecx - 4] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(ecx + -276) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -12)); /* fmul dword ptr [edx - 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -272)); /* fadd dword ptr [ecx - 0x110] */
    MEMF(ecx + -272) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -8)); /* fmul dword ptr [edx - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -268)); /* fadd dword ptr [ecx - 0x10c] */
    MEMF(ecx + -268) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000402A0; /* jne: not equal / not zero */

loc_000402E8: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = edi + edi * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3487C8)); /* fmul dword ptr [ecx + 0x3487c8] */
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF);
    esi = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x348CC0)); /* fadd dword ptr [ecx + 0x348cc0] */
    ebx = 4;
    MEMF(ecx + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00040310(); return; /* fallthrough 0x00040310 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040310
 * Original: 0x00040310 - 0x00040330 (32 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00040310(void)
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

loc_00040310: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3487CC)); /* fmul dword ptr [ecx + 0x3487cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x348CC4)); /* fadd dword ptr [ecx + 0x348cc4] */
    MEMF(ecx + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3487D0)); /* fmul dword ptr [ecx + 0x3487d0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x348CC8)); /* fadd dword ptr [ecx + 0x348cc8] */

    g_seh_ebp = ebp; sub_00040330(); return; /* fallthrough 0x00040330 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040330
 * Original: 0x00040330 - 0x00040336 (6 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00040330(void)
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

loc_00040330: ;
    MEMF(ecx + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00040336(); return; /* fallthrough 0x00040336 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040336
 * Original: 0x00040336 - 0x00040368 (50 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040336(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040336: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(ecx + 0x348370);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x336FB8) = MEM32(ecx + 0x336FB8) + ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FB8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 0x348374);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x336FBC) = MEM32(ecx + 0x336FBC) + ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FBC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 0x348378);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x336FC0) = MEM32(ecx + 0x336FC0) + ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00040368(); return; /* fallthrough 0x00040368 */

}

/**
 * sub_00040368
 * Original: 0x00040368 - 0x00040374 (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040368: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00040336(); return; } /* jne: not equal / not zero */

loc_0004036B: ;
    esi = esp + 0x10;
    ebx = 3;

    g_seh_ebp = ebp; sub_00040374(); return; /* fallthrough 0x00040374 */

}

/**
 * sub_00040374
 * Original: 0x00040374 - 0x0004037C (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040374: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;

    g_seh_ebp = ebp; sub_0004037C(); return; /* fallthrough 0x0004037C */

}

/**
 * sub_0004037C
 * Original: 0x0004037C - 0x00040388 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004037C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004037C: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(ecx + 0x348370);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);

    g_seh_ebp = ebp; sub_00040388(); return; /* fallthrough 0x00040388 */

}

/**
 * sub_00040388
 * Original: 0x00040388 - 0x00040403 (123 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040388: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x336FB8) = MEM32(ecx + 0x336FB8) - ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FB8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(ecx + 0x348374);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x336FBC) = MEM32(ecx + 0x336FBC) - ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FBC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(ecx + 0x348378);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x336FC0) = MEM32(ecx + 0x336FC0) - ebp;
    _fa = (uint32_t)(MEM32(ecx + 0x336FC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00040374(); return; } /* jne: not equal / not zero */

loc_000403B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi * 2 + 0x348814));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    MEM16(edi * 2 + 0x348814) = LO16(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040403(); return; } /* jne: not equal / not zero */

loc_000403CC: ;
    eax = MEM32(edi * 4 + 0x347EF4);
    MEM8(edi + 0x337174) = LO8(ecx);
    MEM32(edi * 4 + 0x348280) = ecx;
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7777) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7777 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000403EF; /* je: equal / zero */

loc_000403E9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7770) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7770 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040403(); return; } /* jne: not equal / not zero */

loc_000403EF: ;
    _fa = (uint32_t)(MEM16(edi * 2 + 0x347F00)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x347F00), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040403(); return; } /* jne: not equal / not zero */

loc_000403FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00040400u); RECOMP_ABI_CALL(0x0003E960u, sub_0003E960); /* call 0x0003E960 */

loc_00040400: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00040403(); return; /* fallthrough 0x00040403 */

}

/**
 * sub_00040403
 * Original: 0x00040403 - 0x0004040B (8 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040403: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00040410
 * Original: 0x00040410 - 0x00040434 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00040410(void)
{
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

loc_00040410: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00040426u); RECOMP_ABI_CALL(0x0015043Bu, sub_0015043B); /* call 0x0015043B */

loc_00040426: ;
    fp_push(MEMD(esp + 0xC)); /* fld double */
    ecx = MEM32(esp + 0x1C);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040440
 * Original: 0x00040440 - 0x000406ED (685 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040440(void)
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

loc_00040440: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(esi * 2 + 0x347F04));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0004051F; /* jne: not equal / not zero */

loc_0004045E: ;
    eax = MEM32(esi * 4 + 0x347EF4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(eax));
    edx = eax + 2;
    ecx = esi + esi * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi * 4 + 0x347EF4) = edx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00040480u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_00040480: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00040494; /* je: equal / zero */

loc_0004048C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x348CC0)); /* fadd dword ptr [ecx + 0x348cc0] */
    goto loc_0004049A;

loc_00040494: ;
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x348CC0) - fp_top()); /* fsubr dword ptr [ecx + 0x348cc0] */

loc_0004049A: ;
    MEMF(ecx + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x347EF4) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000404B3u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_000404B3: ;
    MEMF(ecx + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x347EF4) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000404CEu); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_000404CE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x348CC8)); /* fadd dword ptr [ecx + 0x348cc8] */
    eax = MEM32(esi * 4 + 0x348694);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push(MEMF(esi * 4 + 0x348278)); /* fld float */
    MEM32(esi * 4 + 0x348694) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEM16(esi * 2 + 0x347F04) = 2;
    ebp = 1;
    MEMF(esi * 4 + 0x348278) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(edx));
    MEM16(esi * 2 + 0x349E48) = LO16(eax);
    goto loc_000406CC;

loc_0004051F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_000406CC; /* jle: less or equal (signed <=) */

loc_00040525: ;
    fp_push(MEMF(esi * 4 + 0x348818)); /* fld float */
    ecx = MEM32(0x3489A4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x348070)); /* fadd dword ptr [esi*4 + 0x348070] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x348278)); /* fadd dword ptr [esi*4 + 0x348278] */
    MEMF(esi * 4 + 0x348278) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    PUSH32(esp, 0x00040555u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00040555: ;
    ecx = 0x7777;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x349E48)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x349E48), LO16(ecx) (16-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000406CC; /* je: equal / zero */

loc_0004056C: ;
    PUSH32(esp, ebx);
    /* nop */

loc_00040570: ;
    SET_LO16(eax, MEM16(esi * 2 + 0x349E48));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7770) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7770 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000406CB; /* je: equal / zero */

loc_00040582: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7771) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7771 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000406CB; /* je: equal / zero */

loc_0004058C: ;
    edi = MEM32(esi * 4 + 0x348694);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x24) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000406CB; /* jge: greater or equal (signed >=) */

loc_0004059D: ;
    SET_LO16(ebx, MEM16(esi * 2 + 0x347F04));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000405D0; /* je: equal / zero */

loc_000405AA: ;
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x336F04);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x336F08);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x336F0C);
    MEM32(esp + 0x1C) = edx;
    goto loc_00040607;

loc_000405D0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000405DBu); RECOMP_ABI_CALL(0x0003EF90u, sub_0003EF90); /* call 0x0003EF90 */

loc_000405DB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = esi + esi * 2;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x336F04) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x336F0C) = ecx;
    MEM32(eax + 0x336F08) = edx;
    ecx = 0x7777;

loc_00040607: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004061E; /* je: equal / zero */

loc_00040612: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC0)); /* fadd dword ptr [eax + 0x348cc0] */
    goto loc_00040628;

loc_0004061E: ;
    fp_push(MEMF(eax + 0x348CC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */

loc_00040628: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x349E48)) & 0xFFFFu; _fb = (uint32_t)(0x7772) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x349E48), 0x7772 (16-bit) */
    MEMF(eax + 0x348CC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC4)); /* fadd dword ptr [eax + 0x348cc4] */
    MEMF(eax + 0x348CC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x348CC8)); /* fadd dword ptr [eax + 0x348cc8] */
    MEMF(eax + 0x348CC8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0004067D; /* je: equal / zero */

loc_0004065A: ;
    edx = MEM32(esi * 4 + 0x347EF4);
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    MEM16(esi * 2 + 0x349E48) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00040685; /* jne: not equal / not zero */

loc_00040671: ;
    MEM16(esi * 2 + 0x349E48) = 0x7771;
    goto loc_00040685;

loc_0004067D: ;
    MEM16(esi * 2 + 0x349E48) = LO16(ecx);

loc_00040685: ;
    eax = edi + 1;
    MEM32(esp + 0x10) = eax;
    MEM32(esi * 4 + 0x348694) = eax;
    eax = ebx + 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x347F00)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x347F00), LO16(eax) (16-bit) */
    MEM16(esi * 2 + 0x347F04) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000406B9; /* je: equal / zero */

loc_000406A9: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x349E48)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x349E48), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00040570; /* jne: not equal / not zero */

loc_000406B7: ;
    goto loc_000406CB;

loc_000406B9: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM8(esi + 0x348618) = 1;
    MEMF(esi * 4 + 0x348278) = (float)fp_top(); fp_pop(); /* fstp */

loc_000406CB: ;
    POP32(esp, ebx);

loc_000406CC: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x349E48)) & 0xFFFFu; _fb = (uint32_t)(0x7771) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x349E48), 0x7771 (16-bit) */
    eax = esi * 2 + 0x349E48;
    if (CMP_NE(_fa, _fb)) goto loc_000406E4; /* jne: not equal / not zero */

loc_000406DF: ;
    MEM16(eax) = 0x7772;

loc_000406E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000406F0
 * Original: 0x000406F0 - 0x00040720 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000406F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000406F0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000406FEu); RECOMP_ABI_CALL(0x0003FF80u, sub_0003FF80); /* call 0x0003FF80 */

loc_000406FE: ;
    ecx = MEM32(esp + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00040B36(); return; } /* je: equal / zero */

loc_0004070D: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edi);
    /* nop */

    g_seh_ebp = ebp; sub_00040720(); return; /* fallthrough 0x00040720 */

}

/**
 * sub_00040720
 * Original: 0x00040720 - 0x00040750 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040720: ;
    SET_LO8(eax, MEM8(ebp + 0x347EC8));
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    esi = ebp;
    _fb = (uint32_t)(0x336E48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x336E48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040929(); return; } /* jne: not equal / not zero */

loc_00040741: ;
    MEM32(esp + 0x50) = 3;
    /* nop */

    g_seh_ebp = ebp; sub_00040750(); return; /* fallthrough 0x00040750 */

}

/**
 * sub_00040750
 * Original: 0x00040750 - 0x000407E2 (146 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040750: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00040764u); RECOMP_ABI_CALL(0x0003E860u, sub_0003E860); /* call 0x0003E860 */

loc_00040764: ;
    ebx = MEM32(esp + 0x28);
    SET_LO16(edx, MEM16(ebp * 2 + 0x30F920));
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFFFFFFu (16-bit) */
    MEM32(esi + 0x347F08) = ebx;
    MEM32(esi + 0x347F0C) = eax;
    MEM32(esi + 0x347F10) = ecx;
    MEM32(esi + 0x336FB8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0004079D; /* jne: not equal / not zero */

loc_00040799: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0004079D: ;
    MEM32(esi + 0x336FBC) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(esi + 0x336FC0) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = eax;
    if ((_fa != 0)) goto loc_00040750; /* jne: not equal / not zero */

loc_000407BA: ;
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x440);
    ebx = ebp + ebp * 2;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp;
    _fb = (uint32_t)(0x348214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x348214;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x348D58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x348D58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_000407E2(); return; /* fallthrough 0x000407E2 */

}

/**
 * sub_000407E2
 * Original: 0x000407E2 - 0x00040929 (327 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000407E2(void)
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

loc_000407E2: ;
    ecx = MEM32(esi + 0x336F3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000407FCu); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_000407FC: ;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00040814u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_00040814: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x336F3C) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00040828u); RECOMP_ABI_CALL(0x0003E840u, sub_0003E840); /* call 0x0003E840 */

loc_00040828: ;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x5C);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0004085A; /* jne: not equal / not zero */

loc_00040848: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_top() = -fp_top(); /* fchs */
    MEM32(edi + 4) = edx;
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00040868;

loc_0004085A: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + -4) = eax;
    MEM32(edi + 4) = ecx;

loc_00040868: ;
    eax = MEM32(esp + 0x10);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0004087Au); RECOMP_ABI_CALL(0x0003F000u, sub_0003F000); /* call 0x0003F000 */

loc_0004087A: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esp + 0x44);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x4C);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x347F08) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x347F0C) = ecx;
    MEM32(eax + 0x347F10) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(esi + 0x3487EC) = edx;
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM32(eax + 0x336FB8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000408E8; /* jne: not equal / not zero */

loc_000408C9: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax + 0x336FBC) = ecx;
    ecx = MEM32(esp + 0x40);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax + 0x336FC0) = ecx;
    eax = MEM32(esp + 0x44);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi + 0x14) = eax;
    goto loc_000408FF;

loc_000408E8: ;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x336FBC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x336FC0) = ecx;
    MEM32(edi + 0x14) = edx;

loc_000408FF: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000407E2; /* jl: less (signed <) */

loc_0004091D: ;
    MEM8(ebp + 0x347EC8) = 1;
    g_seh_ebp = ebp; sub_00040B29(); return; /* tail jmp 0x00040B29 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040929
 * Original: 0x00040929 - 0x000409F8 (207 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040929(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040929: ;
    MEM32(esp + 0x50) = 3;

loc_00040931: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00040940u); RECOMP_ABI_CALL(0x0003E860u, sub_0003E860); /* call 0x0003E860 */

loc_00040940: ;
    eax = MEM32(esi + 0x347F08);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00040951u); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_00040951: ;
    edx = MEM32(esi + 0x347F0C);
    ebx = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00040968u); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_00040968: ;
    ecx = MEM32(esi + 0x347F10);
    edx = eax;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, 0x0004097Fu); RECOMP_ABI_CALL(0x0003EA20u, sub_0003EA20); /* call 0x0003EA20 */

loc_0004097F: ;
    SET_LO16(ecx, MEM16(ebp * 2 + 0x30F920));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esi + 0x336FB8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0004099E; /* jne: not equal / not zero */

loc_0004099A: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0004099E: ;
    MEM32(esi + 0x336FC0) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(esi + 0x336FBC) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = eax;
    if ((_fa != 0)) goto loc_00040931; /* jne: not equal / not zero */

loc_000409BF: ;
    esi = ebp;
    eax = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x440);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x336F7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x336F7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = ebp + ebp * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x348214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x348214;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp;
    _fb = (uint32_t)(0x348858) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x348858;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x348D58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x348D58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;

    g_seh_ebp = ebp; sub_000409F8(); return; /* fallthrough 0x000409F8 */

}

/**
 * sub_000409F8
 * Original: 0x000409F8 - 0x00040A60 (104 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000409F8(void)
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

loc_000409F8: ;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = 4;
    edx = MEM32(ebx + 0x336F3C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00040A14u); RECOMP_ABI_CALL(0x00046040u, sub_00046040); /* call 0x00046040 */

loc_00040A14: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = MEM32(esp + 0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040A6A(); return; } /* jne: not equal / not zero */

loc_00040A58: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x34);

    g_seh_ebp = ebp; sub_00040A60(); return; /* fallthrough 0x00040A60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040A03
 * Original: 0x00040A03 - 0x00040A60 (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00040A03(void)
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

loc_00040A03: ;
    edx = MEM32(ebx + 0x336F3C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00040A14u); RECOMP_ABI_CALL(0x00046040u, sub_00046040); /* call 0x00046040 */

loc_00040A14: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = MEM32(esp + 0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00040A6A(); return; } /* jne: not equal / not zero */

loc_00040A58: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x34);

    g_seh_ebp = ebp; sub_00040A60(); return; /* fallthrough 0x00040A60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040A60
 * Original: 0x00040A60 - 0x00040A68 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00040A60(void)
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

loc_00040A60: ;
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 4) = eax;
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00040A68(); return; /* fallthrough 0x00040A68 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00040A68
 * Original: 0x00040A68 - 0x00040A6A (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040A68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040A68: ;
    g_seh_ebp = ebp; sub_00040A78(); return; /* tail jmp 0x00040A78 */

}

/**
 * sub_00040A6A
 * Original: 0x00040A6A - 0x00040A78 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040A6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040A6A: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x34);
    MEM32(esi + -4) = ecx;
    MEM32(esi + 4) = edx;

    g_seh_ebp = ebp; sub_00040A78(); return; /* fallthrough 0x00040A78 */

}
