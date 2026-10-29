/**
 * DOAU1 - Recompiled code chunk 73
 * Functions: 250 (0x001EE27B - 0x001F1331)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001EE27B
 * Original: 0x001EE27B - 0x001EE2A9 (46 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE27B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE27B: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE284: ;
    eax = MEM32(ebx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE761(); return; } /* je: equal / zero */

loc_001EE296: ;
    MEM32(ebx + 0x10) = 0x63;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE2A9
 * Original: 0x001EE2A9 - 0x001EE2BD (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2A9: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA8), ecx (32-bit) */
    eax = MEM32(esi + 0xC4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE2BD(); return; } /* je: equal / zero */

loc_001EE2B7: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) | 3;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EE2C1(); return; /* tail jmp 0x001EE2C1 */

}

/**
 * sub_001EE2BD
 * Original: 0x001EE2BD - 0x001EE2C1 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2BD: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xFC;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EE2C1(); return; /* fallthrough 0x001EE2C1 */

}

/**
 * sub_001EE2C1
 * Original: 0x001EE2C1 - 0x001EE313 (82 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2C1: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7BA(); return; } /* jne: not equal / not zero */

loc_001EE2CD: ;
    edi = ebx + 0xB0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE2E4; /* je: equal / zero */

loc_001EE2D9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE2E1u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE2E1: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EE2E4: ;
    _fa = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x594), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE31B(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EE2ED: ;
    eax = ebx + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = MEM32(ebx + 0x84);
    PUSH32(esp, MEM32(esi + eax * 4 + 0x598));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001EE30Fu); RECOMP_ABI_CALL(0x001ED8ABu, sub_001ED8AB); /* call 0x001ED8AB */

loc_001EE30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE322(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001EE313(); return; /* fallthrough 0x001EE313 */

}

/**
 * sub_001EE313
 * Original: 0x001EE313 - 0x001EE31B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE313: ;
    MEM32(ebx + 0xC) = eax;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE31B
 * Original: 0x001EE31B - 0x001EE322 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE31B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE31B: ;
    MEM32(ebp + 8) = 1;

    g_seh_ebp = ebp; sub_001EE322(); return; /* fallthrough 0x001EE322 */

}

/**
 * sub_001EE322
 * Original: 0x001EE322 - 0x001EE32E (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE322: ;
    MEM32(ebx + 0x10) = 7;
    g_seh_ebp = ebp; sub_001EE693(); return; /* tail jmp 0x001EE693 */

}

/**
 * sub_001EE32E
 * Original: 0x001EE32E - 0x001EE3D9 (171 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE32E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE32E: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, 0x001EE33Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EE33B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE45F(); return; } /* jne: not equal / not zero */

loc_001EE346: ;
    eax = MEM32(ebx + 0xB0);
    ecx = eax + 0x150;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x140)) >> 32) & 1);
    eax = eax + 0x140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE360u); RECOMP_ABI_CALL(0x001ED0E2u, sub_001ED0E2); /* call 0x001ED0E2 */

loc_001EE360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE44D(); return; } /* je: equal / zero */

loc_001EE368: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE371u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001EE371: ;
    edi = MEM32(ebx + 0xB0);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE411(); return; } /* jl: less (signed <) */

loc_001EE383: ;
    if (CMP_G(_fas, _fbs)) goto loc_001EE391; /* jg: greater (signed >) */

loc_001EE385: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE411(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EE391: ;
    eax = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EE3ACu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EE3AC: ;
    ecx = MEM32(edi + 0x28);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -16) = edx;
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, 0x64);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE3CDu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EE3CD: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE411(); return; } /* jg: greater (signed >) */

loc_001EE3D2: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE3D9(); return; } /* jl: less (signed <) */

loc_001EE3D4: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE411(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001EE3D9(); return; /* fallthrough 0x001EE3D9 */

}

/**
 * sub_001EE3D9
 * Original: 0x001EE3D9 - 0x001EE3EE (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE3D9: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE3EE(); return; } /* je: equal / zero */

loc_001EE3E2: ;
    MEM32(ebx + 0x10) = 4;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE3E2
 * Original: 0x001EE3E2 - 0x001EE3EE (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE3E2: ;
    MEM32(ebx + 0x10) = 4;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE3EE
 * Original: 0x001EE3EE - 0x001EE3FB (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE3EE: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xAC) = edi;

    g_seh_ebp = ebp; sub_001EE3FB(); return; /* fallthrough 0x001EE3FB */

}

/**
 * sub_001EE3FB
 * Original: 0x001EE3FB - 0x001EE411 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE3FB: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xFC;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebx + 0x10) = 5;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE411
 * Original: 0x001EE411 - 0x001EE44D (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE411(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE411: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE3FB(); return; } /* je: equal / zero */

loc_001EE41A: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFEFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0xA4) = eax;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(esi + 0x73C) = eax;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE44D
 * Original: 0x001EE44D - 0x001EE45F (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE44D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE44D: ;
    eax = ebx + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x730));
    g_seh_ebp = ebp; sub_001EE679(); return; /* tail jmp 0x001EE679 */

}

/**
 * sub_001EE45F
 * Original: 0x001EE45F - 0x001EE46C (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE45F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jge: greater or equal (signed >=) */

loc_001EE467: ;
    g_seh_ebp = ebp; sub_001EE3E2(); return; /* tail jmp 0x001EE3E2 */

}

/**
 * sub_001EE46C
 * Original: 0x001EE46C - 0x001EE48E (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE46C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE46C: ;
    eax = MEM32(esi + 0x738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* je: equal / zero */

loc_001EE47B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE48E(); return; } /* je: equal / zero */

loc_001EE47F: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE48E(); return; } /* je: equal / zero */

loc_001EE486: ;
    MEM32(ebx + 0x10) = ecx;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE486
 * Original: 0x001EE486 - 0x001EE48E (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE486(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE486: ;
    MEM32(ebx + 0x10) = ecx;
    g_seh_ebp = ebp; sub_001EE1CF(); return; /* tail jmp 0x001EE1CF */

}

/**
 * sub_001EE48E
 * Original: 0x001EE48E - 0x001EE5B3 (293 bytes, 77 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE48E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE48E: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFDFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2014);
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, 0x568);
    ecx = esi;
    PUSH32(esp, 0x001EE4B7u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EE4B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xB0) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7C3(); return; } /* je: equal / zero */

loc_001EE4C5: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 0x18);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x594), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE508; /* jbe: below or equal (unsigned <=) */

loc_001EE4DA: ;
    ecx = esi + 0x598;
    MEM32(ebp + 8) = ecx;

loc_001EE4E3: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    edi = MEM32(ecx);
    edx = MEM32(ebx + 0xB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 8 + 8) = edi;
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax * 8 + 0xC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE4E3; /* jb: below (unsigned <) */

loc_001EE508: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x8C;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebx + 0xB0);
    edx = eax + 0xB0;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x98) = 0x4B8;
    MEM32(ebx + 0x9C) = edx;
    MEM32(ebx + 0x94) = eax;
    PUSH32(esp, MEM32(esi + 0x730));
    ecx = esi;
    PUSH32(esp, 0x001EE547u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001EE547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE685(); return; } /* jl: less (signed <) */

loc_001EE54F: ;
    edi = ebx + 0x8C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE685(); return; } /* je: equal / zero */

loc_001EE55E: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE567u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001EE567: ;
    eax = MEM32(ebx + 0xB0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EE587; /* jg: greater (signed >) */

loc_001EE575: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE672(); return; } /* jl: less (signed <) */

loc_001EE57B: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE672(); return; } /* jb: below (unsigned <) */

loc_001EE587: ;
    _fa = (uint32_t)(MEM32(ebx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x90), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE5B3(); return; } /* je: equal / zero */

loc_001EE590: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x730));
    PUSH32(esp, 0x001EE5A4u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001EE5A4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001EE486(); return; /* tail jmp 0x001EE486 */

}

/**
 * sub_001EE5B3
 * Original: 0x001EE5B3 - 0x001EE672 (191 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE5B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE5B3: ;
    ecx = eax + 0x150;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x140)) >> 32) & 1);
    eax = eax + 0x140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE5C7u); RECOMP_ABI_CALL(0x001ED0E2u, sub_001ED0E2); /* call 0x001ED0E2 */

loc_001EE5C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE672(); return; } /* je: equal / zero */

loc_001EE5CF: ;
    edi = MEM32(ebx + 0xB0);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001EE637; /* jl: less (signed <) */

loc_001EE5DD: ;
    if (CMP_G(_fas, _fbs)) goto loc_001EE5E7; /* jg: greater (signed >) */

loc_001EE5DF: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001EE637; /* jbe: below or equal (unsigned <=) */

loc_001EE5E7: ;
    eax = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EE602u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EE602: ;
    ecx = MEM32(edi + 0x28);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = edx;
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, 0x64);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE623u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EE623: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001EE637; /* jg: greater (signed >) */

loc_001EE628: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE3D9(); return; } /* jl: less (signed <) */

loc_001EE62E: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE3D9(); return; } /* jb: below (unsigned <) */

loc_001EE637: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE3FB(); return; } /* je: equal / zero */

loc_001EE644: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFEFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xA4) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE672
 * Original: 0x001EE672 - 0x001EE679 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE672(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE672: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x730));

    g_seh_ebp = ebp; sub_001EE679(); return; /* fallthrough 0x001EE679 */

}

/**
 * sub_001EE679
 * Original: 0x001EE679 - 0x001EE685 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE679(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE679: ;
    ecx = esi;
    PUSH32(esp, 0x001EE680u); RECOMP_ABI_CALL(0x0020A728u, sub_0020A728); /* call 0x0020A728 */

loc_001EE680: ;
    g_seh_ebp = ebp; sub_001EE3E2(); return; /* tail jmp 0x001EE3E2 */

}

/**
 * sub_001EE685
 * Original: 0x001EE685 - 0x001EE693 (14 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE685(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE685: ;
    MEM32(ebx + 0x10) = 4;
    MEM32(ebp + 8) = 1;

    g_seh_ebp = ebp; sub_001EE693(); return; /* fallthrough 0x001EE693 */

}

/**
 * sub_001EE693
 * Original: 0x001EE693 - 0x001EE6A2 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE693(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE693: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE1CF(); return; } /* jne: not equal / not zero */

loc_001EE69D: ;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE6A2
 * Original: 0x001EE6A2 - 0x001EE761 (191 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE6A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE6A2: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE6AB: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE6B8: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE6C4: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE6D0: ;
    eax = MEM32(esi + 0x738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE6E8; /* je: equal / zero */

loc_001EE6DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE6E8; /* je: equal / zero */

loc_001EE6DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE7D4(); return; } /* jne: not equal / not zero */

loc_001EE6E8: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(ebx + 0xB0);
    edi = eax + 0x740;
    ecx = 0x15A;
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
    ecx = eax + 0x890;
    PUSH32(esp, ecx);
    ecx = eax + 0x880;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001EE713u); RECOMP_ABI_CALL(0x001ECF93u, sub_001ECF93); /* call 0x001ECF93 */

loc_001EE713: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    eax = ecx + 0x7F0;
    PUSH32(esp, eax);
    eax = ecx + 0x740;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x734));
    PUSH32(esp, MEM32(ecx + 0x730));
    PUSH32(esp, 0x001EE737u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001EE737: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE752; /* jl: less (signed <) */

loc_001EE73B: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x738) = 3;
    MEM32(eax + 0x73C) = 1;

loc_001EE752: ;
    esi = MEM32(ebp + -4);
    MEM32(ebx + 0xA0) = 1;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE761
 * Original: 0x001EE761 - 0x001EE795 (52 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE761(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE761: ;
    eax = ebx + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xB0));
    ecx = esi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001EE77Eu); RECOMP_ABI_CALL(0x001ED8ABu, sub_001ED8AB); /* call 0x001ED8AB */

loc_001EE77E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE313(); return; } /* jl: less (signed <) */

loc_001EE786: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE795
 * Original: 0x001EE795 - 0x001EE7BA (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE795(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE795: ;
    ecx = MEM32(ebx + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x594) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE313(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EE7A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151908u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151908u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE313(); return; } /* jne: not equal / not zero */

loc_001EE7B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001EE313(); return; /* tail jmp 0x001EE313 */

}

/**
 * sub_001EE7BA
 * Original: 0x001EE7BA - 0x001EE7C3 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE7BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE7BA: ;
    MEM32(ebx + 0xC) = 0x80151916u;
    g_seh_ebp = ebp; sub_001EE7D4(); return; /* tail jmp 0x001EE7D4 */

}

/**
 * sub_001EE7C3
 * Original: 0x001EE7C3 - 0x001EE7D4 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE7C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE7C3: ;
    eax = MEM32(esi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xC) = 0x80150008u;

    g_seh_ebp = ebp; sub_001EE7D4(); return; /* fallthrough 0x001EE7D4 */

}

/**
 * sub_001EE7D4
 * Original: 0x001EE7D4 - 0x001EE84C (120 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE7D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE7D4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE842; /* je: equal / zero */

loc_001EE7DB: ;
    MEM32(ebx + 0x10) = 0x63;
    if (CMP_GE(_fas, _fbs)) goto loc_001EE842; /* jge: greater or equal (signed >=) */

loc_001EE7E4: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE842; /* jne: not equal / not zero */

loc_001EE7F0: ;
    _fa = (uint32_t)(MEM32(ebx + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xAC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE842; /* je: equal / zero */

loc_001EE7F9: ;
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFEFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebx + 0xB0;
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE822; /* je: equal / zero */

loc_001EE817: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE81Fu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE81F: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EE822: ;
    eax = MEM32(ebx + 0xAC);
    MEM32(ebx + 0xAC) = MEM32(ebx + 0xAC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    MEM32(ebx + 0xA4) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;

loc_001EE842: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE84C
 * Original: 0x001EE84C - 0x001EE88B (63 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE84C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE84C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2017);
    esi = ecx;
    PUSH32(esp, 0xB4);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE86Du); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EE86D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE88B(); return; } /* jne: not equal / not zero */

loc_001EE873: ;
    eax = MEM32(esi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = MEM32(edi) & ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x80150008u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EE884
 * Original: 0x001EE884 - 0x001EE88B (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EE88B
 * Original: 0x001EE88B - 0x001EE8DE (83 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE88B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE88B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EE893u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001EE893: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x1B);
    POP32(esp, ecx);
    MEM32(ebx + 0x10) = 7;
    MEM32(ebx) = 0x1EE1BE;
    MEM32(ebx + 4) = 0x1EC7C2;
    MEM32(ebx + 0xA8) = eax;
    edi = ebx + 0x14;
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
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x10) = 2;
    PUSH32(esp, 0x001EE8D5u); RECOMP_ABI_CALL(0x001EE1BEu, sub_001EE1BE); /* call 0x001EE1BE */

loc_001EE8D5: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001EE884(); return; /* tail jmp 0x001EE884 */

}

/**
 * sub_001EE8DE
 * Original: 0x001EE8DE - 0x001EE92B (77 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE8DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE8DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x5DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5DC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x694));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -1500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    edi = ecx;
    MEM32(ebp + -4) = 0x5C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE90Eu); RECOMP_ABI_CALL(0x00214336u, sub_00214336); /* call 0x00214336 */

loc_001EE90E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE92B(); return; } /* jge: greater or equal (signed >=) */

loc_001EE915: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = 0x80150008u;
    g_seh_ebp = ebp; sub_001EE9EE(); return; /* tail jmp 0x001EE9EE */

}

/**
 * sub_001EE92B
 * Original: 0x001EE92B - 0x001EE9B9 (142 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE92B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE92B: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x18);
    MEM16(ebp + -28) = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    PUSH32(esp, 0);
    eax = MEM32(ecx + edx * 4 + 8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    MEM32(ebp + -12) = eax;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = ebp + -1500;
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, 1);
    ecx = ebp + -12;
    MEM16(ebp + -26) = 0x5800;
    eax = MEM32(eax + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE985u); RECOMP_ABI_CALL(0x001CF0E4u, sub_001CF0E4); /* call 0x001CF0E4 */

loc_001EE985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE9B9(); return; } /* jne: not equal / not zero */

loc_001EE993: ;
    ecx = ecx & 0xFFFF9FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, 0x001EE9A7u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_001EE9A7: ;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    MEM32(ebp + 8) = 0x8015190Au;
    g_seh_ebp = ebp; sub_001EE9EE(); return; /* tail jmp 0x001EE9EE */

}

/**
 * sub_001EE9B9
 * Original: 0x001EE9B9 - 0x001EE9EE (53 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE9B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE9B9: ;
    ecx = ecx & 0xFFFF3FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(eax + 0x30) = ecx;
    ebx = MEM32(esi + 0x18);
    ebx = ebx * 4 + 0x2F7A90;
    PUSH32(esp, 0x001EE9D8u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EE9D8: ;
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -4) = eax;
    PUSH32(esp, MEM32(ebx));
    ecx = edi;
    PUSH32(esp, MEM32(esi + -24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE9EDu); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001EE9ED: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001EE9EE(); return; /* fallthrough 0x001EE9EE */

}

/**
 * sub_001EE9EE
 * Original: 0x001EE9EE - 0x001EE9F7 (9 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE9EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE9EE: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE9F7
 * Original: 0x001EE9F7 - 0x001EEAD3 (220 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE9F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE9F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001EEA45; /* je: equal / zero */

loc_001EEA0E: ;
    edi = ebx + 0x38;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA17u); RECOMP_ABI_CALL(0x001ED233u, sub_001ED233); /* call 0x001ED233 */

loc_001EEA17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebx + 0x50) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001EEA45; /* jne: not equal / not zero */

loc_001EEA21: ;
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA2Du); RECOMP_ABI_CALL(0x001EC712u, sub_001EC712); /* call 0x001EC712 */

loc_001EEA2D: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFEFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;

loc_001EEA45: ;
    eax = MEM32(ebx + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEC51(); return; } /* je: equal / zero */

loc_001EEA50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEB2F(); return; } /* je: equal / zero */

loc_001EEA57: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEF3E(); return; } /* je: equal / zero */

loc_001EEA5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEF5A(); return; } /* je: equal / zero */

loc_001EEA65: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EEDF7(); return; } /* jne: not equal / not zero */

loc_001EEA6E: ;
    edi = ebx + 0x74;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA79u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EEA79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEF01(); return; } /* jne: not equal / not zero */

loc_001EEA84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA97u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001EEA97: ;
    PUSH32(esp, MEM32(ebx + 0x694));
    eax = ebx + 0xAC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEAB1u); RECOMP_ABI_CALL(0x00213C51u, sub_00213C51); /* call 0x00213C51 */

loc_001EEAB1: ;
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEAD3(); return; } /* jne: not equal / not zero */

loc_001EEABE: ;
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF012(); return; } /* jae: above or equal (unsigned >=) */

loc_001EEACA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x14) = ecx;
    g_seh_ebp = ebp; sub_001EEDD1(); return; /* tail jmp 0x001EEDD1 */

}

/**
 * sub_001EEA45
 * Original: 0x001EEA45 - 0x001EEAD3 (142 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEA45: ;
    eax = MEM32(ebx + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEC51(); return; } /* je: equal / zero */

loc_001EEA50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEB2F(); return; } /* je: equal / zero */

loc_001EEA57: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEF3E(); return; } /* je: equal / zero */

loc_001EEA5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EEF5A(); return; } /* je: equal / zero */

loc_001EEA65: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EEDF7(); return; } /* jne: not equal / not zero */

loc_001EEA6E: ;
    edi = ebx + 0x74;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EEA79u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EEA79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEF01(); return; } /* jne: not equal / not zero */

loc_001EEA84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EEA97u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001EEA97: ;
    PUSH32(esp, MEM32(ebx + 0x694));
    eax = ebx + 0xAC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x34));
    PUSH32(esp, 0x001EEAB1u); RECOMP_ABI_CALL(0x00213C51u, sub_00213C51); /* call 0x00213C51 */

loc_001EEAB1: ;
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEAD3(); return; } /* jne: not equal / not zero */

loc_001EEABE: ;
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF012(); return; } /* jae: above or equal (unsigned >=) */

loc_001EEACA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x14) = ecx;
    g_seh_ebp = ebp; sub_001EEDD1(); return; /* tail jmp 0x001EEDD1 */

}

/**
 * sub_001EEAD3
 * Original: 0x001EEAD3 - 0x001EEB2F (92 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEAD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEAD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000006Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000006Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF02E(); return; } /* je: equal / zero */

loc_001EEADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000009Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000009Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF05F(); return; } /* je: equal / zero */

loc_001EEAE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF083(); return; } /* jl: less (signed <) */

loc_001EEAF1: ;
    eax = MEM32(ebx + 0x694);
    _fa = (uint32_t)(MEM32(eax + 0xD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xD8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF0CE(); return; } /* jl: less (signed <) */

loc_001EEB04: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFF5FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(ebx + 0x10) = 0x63;
    g_seh_ebp = ebp; sub_001EEA45(); return; /* tail jmp 0x001EEA45 */

}

/**
 * sub_001EEB2F
 * Original: 0x001EEB2F - 0x001EEBC9 (154 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEB2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEB2F: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, 0x001EEB3Cu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EEB3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEC44(); return; } /* jne: not equal / not zero */

loc_001EEB47: ;
    eax = MEM32(ebx + 0x694);
    ecx = eax + 0x2C8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2B8)) >> 32) & 1);
    eax = eax + 0x2B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EEB61u); RECOMP_ABI_CALL(0x001ED0E2u, sub_001ED0E2); /* call 0x001ED0E2 */

loc_001EEB61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEC32(); return; } /* je: equal / zero */

loc_001EEB69: ;
    edi = MEM32(ebx + 0x694);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x68) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEBF2(); return; } /* jl: less (signed <) */

loc_001EEB77: ;
    if (CMP_G(_fas, _fbs)) goto loc_001EEB81; /* jg: greater (signed >) */

loc_001EEB79: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x64) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEBF2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EEB81: ;
    eax = MEM32(edi + 0x64);
    edx = MEM32(edi + 0x6C);
    ecx = MEM32(edi + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EEB9Cu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EEB9C: ;
    ecx = MEM32(edi + 0x64);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -16) = edx;
    edx = MEM32(edi + 0x68);
    PUSH32(esp, 0x64);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EEBBDu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EEBBD: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEBF2(); return; } /* jg: greater (signed >) */

loc_001EEBC2: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEBC9(); return; } /* jl: less (signed <) */

loc_001EEBC4: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEBF2(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001EEBC9(); return; /* fallthrough 0x001EEBC9 */

}

/**
 * sub_001EEBC9
 * Original: 0x001EEBC9 - 0x001EEBF2 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEBC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEBC9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEDEB(); return; } /* jne: not equal / not zero */

loc_001EEBD6: ;
    eax = ebx + 0x68C;
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x690) = edi;
    MEM32(ebx + 0x694) = ecx;
    g_seh_ebp = ebp; sub_001EEDC7(); return; /* tail jmp 0x001EEDC7 */

}

/**
 * sub_001EEBF2
 * Original: 0x001EEBF2 - 0x001EEC32 (64 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEBF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEBF2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEDC7(); return; } /* je: equal / zero */

loc_001EEBFF: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x684) = eax;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(esi + 0xCB4) = eax;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EEC32
 * Original: 0x001EEC32 - 0x001EEC44 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEC32: ;
    eax = ebx + 0x66C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xCA8));
    g_seh_ebp = ebp; sub_001EEDE4(); return; /* tail jmp 0x001EEDE4 */

}

/**
 * sub_001EEC44
 * Original: 0x001EEC44 - 0x001EEC51 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEC44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jge: greater or equal (signed >=) */

loc_001EEC4C: ;
    g_seh_ebp = ebp; sub_001EEDEB(); return; /* tail jmp 0x001EEDEB */

}

/**
 * sub_001EEC51
 * Original: 0x001EEC51 - 0x001EED36 (229 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEC51: ;
    eax = MEM32(esi + 0xCB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* je: equal / zero */

loc_001EEC60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEC70; /* je: equal / zero */

loc_001EEC65: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EED2E; /* jne: not equal / not zero */

loc_001EEC70: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xF7FFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x4000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x66C;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebx + 0x694);
    edx = eax + 0x1B8;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x678) = 0x528;
    MEM32(ebx + 0x67C) = edx;
    MEM32(ebx + 0x674) = eax;
    PUSH32(esp, MEM32(esi + 0xCA8));
    ecx = esi;
    PUSH32(esp, 0x001EECC7u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001EECC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEDEB(); return; } /* jl: less (signed <) */

loc_001EECCF: ;
    edi = ebx + 0x66C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEDEB(); return; } /* je: equal / zero */

loc_001EECDE: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EECE7u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001EECE7: ;
    eax = MEM32(ebx + 0x694);
    ecx = MEM32(eax + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EED07; /* jg: greater (signed >) */

loc_001EECF5: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEDDD(); return; } /* jl: less (signed <) */

loc_001EECFB: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEDDD(); return; } /* jb: below (unsigned <) */

loc_001EED07: ;
    _fa = (uint32_t)(MEM32(ebx + 0x670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x670), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EED36(); return; } /* je: equal / zero */

loc_001EED10: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xCA8));
    PUSH32(esp, 0x001EED24u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001EED24: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EED2E: ;
    MEM32(ebx + 0x10) = ecx;
    g_seh_ebp = ebp; sub_001EEA45(); return; /* tail jmp 0x001EEA45 */

}

/**
 * sub_001EED36
 * Original: 0x001EED36 - 0x001EEDC7 (145 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EED36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EED36: ;
    ecx = eax + 0x2C8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2B8)) >> 32) & 1);
    eax = eax + 0x2B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EED4Au); RECOMP_ABI_CALL(0x001ED0E2u, sub_001ED0E2); /* call 0x001ED0E2 */

loc_001EED4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEDDD(); return; } /* je: equal / zero */

loc_001EED52: ;
    edi = MEM32(ebx + 0x694);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x68) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001EEDBA; /* jl: less (signed <) */

loc_001EED60: ;
    if (CMP_G(_fas, _fbs)) goto loc_001EED6A; /* jg: greater (signed >) */

loc_001EED62: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x64) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001EEDBA; /* jbe: below or equal (unsigned <=) */

loc_001EED6A: ;
    eax = MEM32(edi + 0x64);
    edx = MEM32(edi + 0x6C);
    ecx = MEM32(edi + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EED85u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EED85: ;
    ecx = MEM32(edi + 0x64);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = edx;
    edx = MEM32(edi + 0x68);
    PUSH32(esp, 0x64);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EEDA6u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001EEDA6: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001EEDBA; /* jg: greater (signed >) */

loc_001EEDAB: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEBC9(); return; } /* jl: less (signed <) */

loc_001EEDB1: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEBC9(); return; } /* jb: below (unsigned <) */

loc_001EEDBA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEFE4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001EEDC7(); return; /* fallthrough 0x001EEDC7 */

}

/**
 * sub_001EEDC7
 * Original: 0x001EEDC7 - 0x001EEDD1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDC7: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xF3;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EEDD1(); return; /* fallthrough 0x001EEDD1 */

}

/**
 * sub_001EEDD1
 * Original: 0x001EEDD1 - 0x001EEDDD (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDD1: ;
    MEM32(ebx + 0x10) = 5;
    g_seh_ebp = ebp; sub_001EEA45(); return; /* tail jmp 0x001EEA45 */

}

/**
 * sub_001EEDDD
 * Original: 0x001EEDDD - 0x001EEDEB (14 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDDD: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xCA8));
    ecx = esi;
    PUSH32(esp, 0x001EEDEBu); RECOMP_ABI_CALL(0x0020A728u, sub_0020A728); /* call 0x0020A728 */

    g_seh_ebp = ebp; sub_001EEDEB(); return; /* fallthrough 0x001EEDEB */

}

/**
 * sub_001EEDE4
 * Original: 0x001EEDE4 - 0x001EEDEB (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDE4: ;
    ecx = esi;
    PUSH32(esp, 0x001EEDEBu); RECOMP_ABI_CALL(0x0020A728u, sub_0020A728); /* call 0x0020A728 */

    g_seh_ebp = ebp; sub_001EEDEB(); return; /* fallthrough 0x001EEDEB */

}

/**
 * sub_001EEDEB
 * Original: 0x001EEDEB - 0x001EEDF7 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDEB: ;
    MEM32(ebx + 0x10) = 4;
    g_seh_ebp = ebp; sub_001EEA45(); return; /* tail jmp 0x001EEA45 */

}

/**
 * sub_001EEDF7
 * Original: 0x001EEDF7 - 0x001EEE6F (120 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEDF7: ;
    _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x5B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEE00: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEE0D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x684)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x684), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEE1B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x680)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x680), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEE27: ;
    eax = MEM32(esi + 0xCB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEE40; /* je: equal / zero */

loc_001EEE32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEE40; /* je: equal / zero */

loc_001EEE37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEE40: ;
    eax = ebx + 0x694;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEE6F(); return; } /* ja: above (unsigned >) */

loc_001EEE50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEE8A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EEE54: ;
    eax = edx;
    eax = MEM32(eax + 0x30);
    ecx = edx + 0x200;

loc_001EEE5F: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EEE67; /* jge: greater or equal (signed >=) */

loc_001EEE64: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EEE67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EEE5F; /* jne: not equal / not zero */

loc_001EEE6D: ;
    g_seh_ebp = ebp; sub_001EEE86(); return; /* tail jmp 0x001EEE86 */

}

/**
 * sub_001EEE6F
 * Original: 0x001EEE6F - 0x001EEE86 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEE6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEE6F: ;
    PUSH32(esp, 0x10);
    eax = edx + 0x200;
    POP32(esp, ecx);

loc_001EEE78: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EEE80; /* jge: greater or equal (signed >=) */

loc_001EEE7D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EEE80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EEE78; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001EEE86(); return; /* fallthrough 0x001EEE86 */

}

/**
 * sub_001EEE86
 * Original: 0x001EEE86 - 0x001EEE8A (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEE86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEE86: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEEF2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001EEE8A(); return; /* fallthrough 0x001EEE8A */

}

/**
 * sub_001EEE8A
 * Original: 0x001EEE8A - 0x001EEEF2 (104 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEE8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEE8A: ;
    eax = MEM32(ebp + -4);
    edi = eax + 0xCB8;
    esi = edx;
    ecx = 0x1B8;
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
    ecx = eax + 0xF80;
    PUSH32(esp, ecx);
    ecx = eax + 0xF70;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001EEEB1u); RECOMP_ABI_CALL(0x001ECF93u, sub_001ECF93); /* call 0x001ECF93 */

loc_001EEEB1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    eax = ecx + 0xE70;
    PUSH32(esp, eax);
    eax = ecx + 0xCB8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0xCAC));
    PUSH32(esp, MEM32(ecx + 0xCA8));
    PUSH32(esp, 0x001EEED5u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001EEED5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + -4);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EEEF2(); return; } /* jl: less (signed <) */

loc_001EEEDC: ;
    eax = esi;
    MEM32(eax + 0xCB0) = 3;
    MEM32(eax + 0xCB4) = 1;

    g_seh_ebp = ebp; sub_001EEEF2(); return; /* fallthrough 0x001EEEF2 */

}

/**
 * sub_001EEEF2
 * Original: 0x001EEEF2 - 0x001EEF01 (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEEF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEEF2: ;
    MEM32(ebx + 0x680) = 1;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EEF01
 * Original: 0x001EEF01 - 0x001EEF3E (61 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEF01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF105(); return; } /* jl: less (signed <) */

loc_001EEF09: ;
    PUSH32(esp, 0x001EEF0Eu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EEF0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jb: below (unsigned <) */

loc_001EEF17: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F7A88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2F7A88) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF126(); return; } /* jae: above or equal (unsigned >=) */

loc_001EEF29: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EEF31u); RECOMP_ABI_CALL(0x001EE8DEu, sub_001EE8DE); /* call 0x001EE8DE */

loc_001EEF31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF146(); return; } /* jl: less (signed <) */

loc_001EEF39: ;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EEF3E
 * Original: 0x001EEF3E - 0x001EEF54 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEF3E: ;
    eax = MEM32(esi + 0xC4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EEF54(); return; } /* je: equal / zero */

loc_001EEF4E: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) | 0xC;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EEF5C(); return; /* tail jmp 0x001EEF5C */

}

/**
 * sub_001EEF54
 * Original: 0x001EEF54 - 0x001EEF5A (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEF54: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xF3;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001EEF5C(); return; /* tail jmp 0x001EEF5C */

}

/**
 * sub_001EEF5A
 * Original: 0x001EEF5A - 0x001EEFE4 (138 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEF5A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF14B(); return; } /* jne: not equal / not zero */

loc_001EEF68: ;
    _fa = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF14B(); return; } /* je: equal / zero */

loc_001EEF71: ;
    eax = MEM32(ebx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF139(); return; } /* jl: less (signed <) */

loc_001EEF7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEF87: ;
    eax = ebx + 0x6C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEFB8; /* jne: not equal / not zero */

loc_001EEF8E: ;
    ecx = ebx + 0xAC;
    MEM32(ebx + 0x70) = ecx;
    ecx = ebx + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(eax) = 0x5C0;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = esi;
    PUSH32(esp, 0x001EEFB8u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001EEFB8: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EEFC0u); RECOMP_ABI_CALL(0x001EE8DEu, sub_001EE8DE); /* call 0x001EE8DE */

loc_001EEFC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF146(); return; } /* jl: less (signed <) */

loc_001EEFC8: ;
    PUSH32(esp, edi);
    eax = ebx + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EEFD4u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001EEFD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF043(); return; } /* jl: less (signed <) */

loc_001EEFD8: ;
    MEM32(ebx + 0x10) = 8;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EEF5C
 * Original: 0x001EEF5C - 0x001EEFE4 (136 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEF5C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x688)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x688), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF14B(); return; } /* jne: not equal / not zero */

loc_001EEF68: ;
    _fa = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF14B(); return; } /* je: equal / zero */

loc_001EEF71: ;
    eax = MEM32(ebx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF139(); return; } /* jl: less (signed <) */

loc_001EEF7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jne: not equal / not zero */

loc_001EEF87: ;
    eax = ebx + 0x6C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEFB8; /* jne: not equal / not zero */

loc_001EEF8E: ;
    ecx = ebx + 0xAC;
    MEM32(ebx + 0x70) = ecx;
    ecx = ebx + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(eax) = 0x5C0;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = esi;
    PUSH32(esp, 0x001EEFB8u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001EEFB8: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EEFC0u); RECOMP_ABI_CALL(0x001EE8DEu, sub_001EE8DE); /* call 0x001EE8DE */

loc_001EEFC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF146(); return; } /* jl: less (signed <) */

loc_001EEFC8: ;
    PUSH32(esp, edi);
    eax = ebx + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EEFD4u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001EEFD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF043(); return; } /* jl: less (signed <) */

loc_001EEFD8: ;
    MEM32(ebx + 0x10) = 8;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EEFE4
 * Original: 0x001EEFE4 - 0x001EF012 (46 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEFE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEFE4: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0x684) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF012
 * Original: 0x001EF012 - 0x001EF02E (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF012(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF012: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF7FFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x6000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EF11C(); return; /* tail jmp 0x001EF11C */

}

/**
 * sub_001EF02E
 * Original: 0x001EF02E - 0x001EF043 (21 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF02E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF02E: ;
    PUSH32(esp, 0);
    eax = ebx + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF03Bu); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001EF03B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EF152(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001EF043(); return; /* fallthrough 0x001EF043 */

}

/**
 * sub_001EF043
 * Original: 0x001EF043 - 0x001EF05F (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF043(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF043: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF9FFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EF11C(); return; /* tail jmp 0x001EF11C */

}

/**
 * sub_001EF05F
 * Original: 0x001EF05F - 0x001EF083 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF05F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF05F: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFDFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xC000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xC) = 0x80150008u;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF083
 * Original: 0x001EF083 - 0x001EF0C2 (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF083(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF083: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF7FFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x6000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF0C2(); return; } /* je: equal / zero */

loc_001EF0AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF0C2(); return; } /* je: equal / zero */

loc_001EF0B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF0C2(); return; } /* je: equal / zero */

loc_001EF0B6: ;
    MEM32(ebx + 0xC) = 0x8015190Au;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF0B6
 * Original: 0x001EF0B6 - 0x001EF0C2 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF0B6: ;
    MEM32(ebx + 0xC) = 0x8015190Au;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF0C2
 * Original: 0x001EF0C2 - 0x001EF0CE (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF0C2: ;
    MEM32(ebx + 0xC) = 0x80151915u;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF0CE
 * Original: 0x001EF0CE - 0x001EF105 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF0CE: ;
    eax = esi + 0xC4;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFF7FFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x6000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax);
    ecx = ebx + 0x694;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0xD8);
    MEM32(eax + 0x34) = edx;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xD8);
    g_seh_ebp = ebp; sub_001EF146(); return; /* tail jmp 0x001EF146 */

}

/**
 * sub_001EF105
 * Original: 0x001EF105 - 0x001EF11C (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF105(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF105: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFBFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0xA000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001EF11C(); return; /* fallthrough 0x001EF11C */

}

/**
 * sub_001EF11C
 * Original: 0x001EF11C - 0x001EF126 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF11C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF11C: ;
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x34) = eax;
    g_seh_ebp = ebp; sub_001EF0B6(); return; /* tail jmp 0x001EF0B6 */

}

/**
 * sub_001EF126
 * Original: 0x001EF126 - 0x001EF139 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF126(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF126: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x31) = MEM8(eax + 0x31) | 0xE0;
    _fa = (uint32_t)(MEM8(eax + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0xC) = 0x8015190Bu;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF139
 * Original: 0x001EF139 - 0x001EF146 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF139(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF139: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x32) = MEM8(eax + 0x32) | 0x30;
    _fa = (uint32_t)(MEM8(eax + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebx + 0x50);

    g_seh_ebp = ebp; sub_001EF146(); return; /* fallthrough 0x001EF146 */

}

/**
 * sub_001EF146
 * Original: 0x001EF146 - 0x001EF14B (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF146(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF146: ;
    MEM32(ebx + 0xC) = eax;
    g_seh_ebp = ebp; sub_001EF152(); return; /* tail jmp 0x001EF152 */

}

/**
 * sub_001EF14B
 * Original: 0x001EF14B - 0x001EF152 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF14B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF14B: ;
    MEM32(ebx + 0xC) = 0x80151916u;

    g_seh_ebp = ebp; sub_001EF152(); return; /* fallthrough 0x001EF152 */

}

/**
 * sub_001EF152
 * Original: 0x001EF152 - 0x001EF1CA (120 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF152(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF152: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1C0; /* je: equal / zero */

loc_001EF159: ;
    MEM32(ebx + 0x10) = 0x63;
    if (CMP_GE(_fas, _fbs)) goto loc_001EF1C0; /* jge: greater or equal (signed >=) */

loc_001EF162: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF1C0; /* jne: not equal / not zero */

loc_001EF16E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x690)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x690), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1C0; /* je: equal / zero */

loc_001EF177: ;
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebx + 0x694;
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1A0; /* je: equal / zero */

loc_001EF195: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF19Du); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF19D: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EF1A0: ;
    eax = MEM32(ebx + 0x690);
    MEM32(ebx + 0x690) = MEM32(ebx + 0x690) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x690)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    MEM32(ebx + 0x684) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;

loc_001EF1C0: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF1CA
 * Original: 0x001EF1CA - 0x001EF247 (125 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF1CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF1CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1E1; /* je: equal / zero */

loc_001EF1D8: ;
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF1E1u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF1E1: ;
    eax = MEM32(edi + 0xC4);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1F5; /* je: equal / zero */

loc_001EF1EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF1F5u); RECOMP_ABI_CALL(0x001CF078u, sub_001CF078); /* call 0x001CF078 */

loc_001EF1F5: ;
    eax = MEM32(esi + 0x68C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF207; /* je: equal / zero */

loc_001EF1FF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EF207u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF207: ;
    eax = MEM32(esi + 0x690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF219; /* je: equal / zero */

loc_001EF211: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EF219u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF219: ;
    eax = MEM32(esi + 0x694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF22B; /* je: equal / zero */

loc_001EF223: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EF22Bu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF22B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EF23Au); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001EF23A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EF242u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF247
 * Original: 0x001EF247 - 0x001EF305 (190 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF247(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF247: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2019);
    PUSH32(esp, 0x698);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF260u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EF260: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2C7; /* je: equal / zero */

loc_001EF266: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF26Eu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001EF26E: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x688) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x2018);
    ebx = 0x6E0;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi) = 0x1EE9F7;
    MEM32(esi + 4) = 0x1EF1CA;
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF2A6u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EF2A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x694) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2C7; /* je: equal / zero */

loc_001EF2B0: ;
    PUSH32(esp, 0x2018);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF2BDu); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EF2BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x68C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF305(); return; } /* jne: not equal / not zero */

loc_001EF2C7: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0x10) = 0x80150008u;
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2FB; /* je: equal / zero */

loc_001EF2E2: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2F3; /* je: equal / zero */

loc_001EF2E8: ;
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF2F3u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF2F3: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF2FBu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF2FB: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001EF2FB
 * Original: 0x001EF2FB - 0x001EF305 (10 bytes, 6 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF2FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF2FB: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001EF305
 * Original: 0x001EF305 - 0x001EF3F5 (240 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF305(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF305: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edi + 0x594)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x594), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EF363; /* jbe: below or equal (unsigned <=) */

loc_001EF312: ;
    eax = edi + 0x598;
    MEM32(ebp + -4) = eax;

loc_001EF31B: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    ebx = MEM32(ecx);
    eax = MEM32(ebp + 0x14);
    edx = MEM32(esi + 0x694);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + eax + 8) = ebx;
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    ebx = MEM32(ecx);
    edx = MEM32(esi + 0x68C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx + 8) = ebx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + edx + 0xC) = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x594) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EF31B; /* jb: below (unsigned <) */

loc_001EF363: ;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(esi + 0x694);
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(esi + 0x68C);
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x694);
    ecx = MEM32(edi + 4);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(esi + 0x694);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(esi + 0x68C);
    ecx = MEM32(edi + 4);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(edi + 8);
    eax = MEM32(esi + 0x68C);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF3F5(); return; } /* ja: above (unsigned >) */

loc_001EF3BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF469(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EF3C5: ;
    PUSH32(esp, 0x34);
    POP32(esp, eax);
    MEM32(ebp + 0x14) = ecx;

loc_001EF3CB: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x694);
    ecx = ecx + eax + -52;
    ebx = MEM32(ecx);
    MEM32(eax + edx) = ebx;
    edx = MEM32(esi + 0x68C);
    ecx = MEM32(ecx);
    MEM32(eax + edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EF3CB; /* jne: not equal / not zero */

loc_001EF3F0: ;
    ecx = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_001EF469(); return; /* tail jmp 0x001EF469 */

}

/**
 * sub_001EF3F5
 * Original: 0x001EF3F5 - 0x001EF408 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF3F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF3F5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF469(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EF401: ;
    MEM32(ebp + -8) = 0x54;

    g_seh_ebp = ebp; sub_001EF408(); return; /* fallthrough 0x001EF408 */

}

/**
 * sub_001EF408
 * Original: 0x001EF408 - 0x001EF43F (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF408: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    eax = eax + ecx * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF43F(); return; } /* jae: above or equal (unsigned >=) */

loc_001EF419: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF43F(); return; } /* jae: above or equal (unsigned >=) */

loc_001EF421: ;
    edx = MEM32(esi + 0x694);
    SET_LO8(ebx, MEM8(eax));
    MEM8(edx + ecx + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x68C);
    SET_LO8(eax, MEM8(eax));
    MEM8(edx + ecx + 0x34) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_001EF45E(); return; /* tail jmp 0x001EF45E */

}

/**
 * sub_001EF43F
 * Original: 0x001EF43F - 0x001EF45E (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF43F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF43F: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(esi + 0x694);
    ebx = MEM32(eax);
    MEM32(ecx + edx) = ebx;
    edx = MEM32(esi + 0x68C);
    eax = MEM32(eax);
    MEM32(ecx + edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

    g_seh_ebp = ebp; sub_001EF45E(); return; /* fallthrough 0x001EF45E */

}

/**
 * sub_001EF45E
 * Original: 0x001EF45E - 0x001EF469 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF45E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF45E: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF408(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001EF469(); return; /* fallthrough 0x001EF469 */

}

/**
 * sub_001EF469
 * Original: 0x001EF469 - 0x001EF4C7 (94 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF469(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF469: ;
    eax = MEM32(esi + 0x694);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(esi + 0x68C);
    PUSH32(esp, 2);
    MEM32(eax + 0x30) = ecx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EF4B2; /* je: equal / zero */

loc_001EF488: ;
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EF497u); RECOMP_ABI_CALL(0x001ED31Eu, sub_001ED31E); /* call 0x001ED31E */

loc_001EF497: ;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFDFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;

loc_001EF4B2: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x001EF4BDu); RECOMP_ABI_CALL(0x001EE9F7u, sub_001EE9F7); /* call 0x001EE9F7 */

loc_001EF4BD: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = esi;
    g_seh_ebp = ebp; sub_001EF2FB(); return; /* tail jmp 0x001EF2FB */

}

/**
 * sub_001EF4C7
 * Original: 0x001EF4C7 - 0x001EF4DA (19 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF4C7(void)
{

loc_001EF4C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001EF4CFu); RECOMP_ABI_CALL(0x001ECC3Eu, sub_001ECC3E); /* call 0x001ECC3E */

loc_001EF4CF: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x001EF4D8u); RECOMP_ABI_CALL(0x00209778u, sub_00209778); /* call 0x00209778 */

loc_001EF4D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF4DA
 * Original: 0x001EF4DA - 0x001EF4F4 (26 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF4DA(void)
{

loc_001EF4DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001EF4E2u); RECOMP_ABI_CALL(0x001EF4C7u, sub_001EF4C7); /* call 0x001EF4C7 */

loc_001EF4E2: ;
    ecx = esi;
    PUSH32(esp, 0x001EF4E9u); RECOMP_ABI_CALL(0x001ECC01u, sub_001ECC01); /* call 0x001ECC01 */

loc_001EF4E9: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001EF4F2u); RECOMP_ABI_CALL(0x00209778u, sub_00209778); /* call 0x00209778 */

loc_001EF4F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF4F4
 * Original: 0x001EF4F4 - 0x001EF67F (395 bytes, 133 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF4F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF4F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x001EF503u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001EF503: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF515u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001EF515: ;
    MEM32(esi + 0x1B9C) = ebp;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF52D; /* je: equal / zero */

loc_001EF523: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF529u); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_001EF529: ;
    MEM32(edi + 0x4C) = MEM32(edi + 0x4C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EF52D: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF53C; /* je: equal / zero */

loc_001EF534: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF53Cu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF53C: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF550; /* je: equal / zero */

loc_001EF543: ;
    PUSH32(esp, 0x8043);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF550u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001EF550: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF55F; /* je: equal / zero */

loc_001EF557: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF55Fu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF55F: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF56E; /* je: equal / zero */

loc_001EF566: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF56Eu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF56E: ;
    eax = MEM32(edi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF580; /* je: equal / zero */

loc_001EF578: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF580u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF580: ;
    eax = MEM32(edi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF592; /* je: equal / zero */

loc_001EF58A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF592u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EF592: ;
    eax = MEM32(edi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF5A1; /* je: equal / zero */

loc_001EF599: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF5A1u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF5A1: ;
    eax = MEM32(edi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF5B3; /* je: equal / zero */

loc_001EF5AB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF5B3u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF5B3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EF5BBu); RECOMP_ABI_CALL(0x001EC87Bu, sub_001EC87B); /* call 0x001EC87B */

loc_001EF5BB: ;
    _fa = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF657; /* jne: not equal / not zero */

loc_001EF5C7: ;
    ecx = esi;
    PUSH32(esp, 0x001EF5CEu); RECOMP_ABI_CALL(0x001ECC01u, sub_001ECC01); /* call 0x001ECC01 */

loc_001EF5CE: ;
    ecx = esi;
    PUSH32(esp, 0x001EF5D5u); RECOMP_ABI_CALL(0x001ECC3Eu, sub_001ECC3E); /* call 0x001ECC3E */

loc_001EF5D5: ;
    ecx = esi;
    PUSH32(esp, 0x001EF5DCu); RECOMP_ABI_CALL(0x001FA2B7u, sub_001FA2B7); /* call 0x001FA2B7 */

loc_001EF5DC: ;
    ecx = esi;
    PUSH32(esp, 0x001EF5E3u); RECOMP_ABI_CALL(0x001DFCAFu, sub_001DFCAF); /* call 0x001DFCAF */

loc_001EF5E3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x5A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5A8), ebp (32-bit) */
    MEM32(esi + 0xD0) = ebp;
    MEM32(esi + 0x6B8) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_001EF616; /* jbe: below or equal (unsigned <=) */

loc_001EF5F9: ;
    edi = esi + 0x5AC;

loc_001EF5FF: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EF608u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EF608: ;
    MEM32(edi) = ebp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x5A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EF5FF; /* jb: below (unsigned <) */

loc_001EF616: ;
    PUSH32(esp, 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi + 0xD4;
    MEM32(esi + 0x5A8) = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0xC0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF63D; /* je: equal / zero */

loc_001EF635: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF63Bu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001EF63B: ;
    MEM32(edi) = ebp;

loc_001EF63D: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, MEM32(esi + 0xC8));
    ecx = esi;
    PUSH32(esp, 0x001EF64Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001EF64F: ;
    MEM32(esi + 0xC8) = ebp;
    goto loc_001EF672;

loc_001EF657: ;
    ebx = esi + 0xCC;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF672; /* jne: not equal / not zero */

loc_001EF663: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF670u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001EF670: ;
    MEM32(ebx) = ebp;

loc_001EF672: ;
    POP32(esp, edi);
    MEM32(esi + 0xC4) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF687
 * Original: 0x001EF687 - 0x001EF6A1 (26 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF687(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF687: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001EF694u); RECOMP_ABI_CALL(0x001EC990u, sub_001EC990); /* call 0x001EC990 */

loc_001EF694: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF6A1
 * Original: 0x001EF6A1 - 0x001EF6AC (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF6A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF6AC(); return; } /* jne: not equal / not zero */

loc_001EF6A5: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001EF707(); return; /* tail jmp 0x001EF707 */

}

/**
 * sub_001EF6AC
 * Original: 0x001EF6AC - 0x001EF6BC (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF6AC: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF6BC(); return; } /* jne: not equal / not zero */

loc_001EF6B5: ;
    eax = 0x80150002u;
    g_seh_ebp = ebp; sub_001EF707(); return; /* tail jmp 0x001EF707 */

}

/**
 * sub_001EF6BC
 * Original: 0x001EF6BC - 0x001EF6E5 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF6BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_001EF6C5: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF6D9; /* je: equal / zero */

loc_001EF6CD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF6C5; /* jl: less (signed <) */

loc_001EF6D6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EF6D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF6E5(); return; } /* jne: not equal / not zero */

loc_001EF6DE: ;
    eax = 0x80151100u;
    g_seh_ebp = ebp; sub_001EF706(); return; /* tail jmp 0x001EF706 */

}

/**
 * sub_001EF6E5
 * Original: 0x001EF6E5 - 0x001EF706 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF6E5: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF6FB; /* je: equal / zero */

loc_001EF6EE: ;
    edx = eax + eax * 4;
    esi = ecx + edx * 4 + 0xD4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001EF6FB: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE0);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001EF706(); return; /* fallthrough 0x001EF706 */

}

/**
 * sub_001EF706
 * Original: 0x001EF706 - 0x001EF707 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF706(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF706: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001EF707(); return; /* fallthrough 0x001EF707 */

}

/**
 * sub_001EF707
 * Original: 0x001EF707 - 0x001EF70A (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF707(void)
{

loc_001EF707: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF70A
 * Original: 0x001EF70A - 0x001EF731 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF70A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF70A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_001EF713: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF727; /* je: equal / zero */

loc_001EF71B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF713; /* jl: less (signed <) */

loc_001EF724: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EF727: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF731(); return; } /* jne: not equal / not zero */

loc_001EF72D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001EF73B(); return; /* tail jmp 0x001EF73B */

}

/**
 * sub_001EF731
 * Original: 0x001EF731 - 0x001EF73B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF731(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF731: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE4);

    g_seh_ebp = ebp; sub_001EF73B(); return; /* fallthrough 0x001EF73B */

}

/**
 * sub_001EF73B
 * Original: 0x001EF73B - 0x001EF74A (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF73B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EF73B: ;
    ecx = eax + 0xDC;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF74A
 * Original: 0x001EF74A - 0x001EF794 (74 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF74A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF74A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_001EF756: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF769; /* je: equal / zero */

loc_001EF75D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF756; /* jl: less (signed <) */

loc_001EF766: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EF769: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF794(); return; } /* je: equal / zero */

loc_001EF76F: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF794(); return; } /* je: equal / zero */

loc_001EF77D: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF792u); RECOMP_ABI_CALL(0x002146A6u, sub_002146A6); /* call 0x002146A6 */

loc_001EF792: ;
    g_seh_ebp = ebp; sub_001EF799(); return; /* tail jmp 0x001EF799 */

}

/**
 * sub_001EF794
 * Original: 0x001EF794 - 0x001EF799 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF794: ;
    eax = 0xC0000001u;

    g_seh_ebp = ebp; sub_001EF799(); return; /* fallthrough 0x001EF799 */

}

/**
 * sub_001EF799
 * Original: 0x001EF799 - 0x001EF79D (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF799(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF799: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001EF79D
 * Original: 0x001EF79D - 0x001EF7EA (77 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF79D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF79D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_001EF7A9: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF7BC; /* je: equal / zero */

loc_001EF7B0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF7A9; /* jl: less (signed <) */

loc_001EF7B9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EF7BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF7EA(); return; } /* je: equal / zero */

loc_001EF7C2: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF7EA(); return; } /* je: equal / zero */

loc_001EF7D0: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF7E8u); RECOMP_ABI_CALL(0x00212F44u, sub_00212F44); /* call 0x00212F44 */

loc_001EF7E8: ;
    g_seh_ebp = ebp; sub_001EF7EF(); return; /* tail jmp 0x001EF7EF */

}

/**
 * sub_001EF7EA
 * Original: 0x001EF7EA - 0x001EF7EF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF7EA: ;
    eax = 0xC0000001u;

    g_seh_ebp = ebp; sub_001EF7EF(); return; /* fallthrough 0x001EF7EF */

}

/**
 * sub_001EF7EF
 * Original: 0x001EF7EF - 0x001EF7F3 (4 bytes, 2 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF7EF: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EF7F3
 * Original: 0x001EF7F3 - 0x001EF7F8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF7F3: ;
    g_seh_ebp = ebp; sub_001EF70A(); return; /* tail jmp 0x001EF70A */

}

/**
 * sub_001EF7F8
 * Original: 0x001EF7F8 - 0x001EF81F (39 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF7F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF7F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF812u); RECOMP_ABI_CALL(0x001EF74Au, sub_001EF74A); /* call 0x001EF74A */

loc_001EF812: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001EF81F
 * Original: 0x001EF81F - 0x001EF849 (42 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF81F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF81F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF83Cu); RECOMP_ABI_CALL(0x001EF79Du, sub_001EF79D); /* call 0x001EF79D */

loc_001EF83C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EF849
 * Original: 0x001EF849 - 0x001EF86A (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF849(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF849: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EF85Bu); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001EF85B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF864; /* jl: less (signed <) */

loc_001EF85F: ;
    eax = MEM32(ebp + -8);
    goto loc_001EF866;

loc_001EF864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF866: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF86A
 * Original: 0x001EF86A - 0x001EF8CF (101 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF86A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF86A: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFA4F(); return; } /* jne: not equal / not zero */

loc_001EF88C: ;
    ecx = MEM32(esi + 0xCB0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF8A5; /* je: equal / zero */

loc_001EF89B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF8A5; /* je: equal / zero */

loc_001EF8A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF8EF(); return; } /* jne: not equal / not zero */

loc_001EF8A5: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, 0x001EF8B2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EF8B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF8EF(); return; } /* jne: not equal / not zero */

loc_001EF8B9: ;
    ecx = MEM32(esi + 0xCB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF8CF(); return; } /* jne: not equal / not zero */

loc_001EF8C3: ;
    MEM32(esi + 0xCB0) = 2;
    g_seh_ebp = ebp; sub_001EF8EF(); return; /* tail jmp 0x001EF8EF */

}

/**
 * sub_001EF8CF
 * Original: 0x001EF8CF - 0x001EF8E0 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF8CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF8E0(); return; } /* jne: not equal / not zero */

loc_001EF8D4: ;
    MEM32(esi + 0xCB0) = 4;
    g_seh_ebp = ebp; sub_001EF8EF(); return; /* tail jmp 0x001EF8EF */

}

/**
 * sub_001EF8E0
 * Original: 0x001EF8E0 - 0x001EF8EF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF8E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF8EF(); return; } /* jne: not equal / not zero */

loc_001EF8E5: ;
    MEM32(esi + 0xCB0) = 6;

    g_seh_ebp = ebp; sub_001EF8EF(); return; /* fallthrough 0x001EF8EF */

}

/**
 * sub_001EF8EF
 * Original: 0x001EF8EF - 0x001EF981 (146 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF8EF: ;
    _fa = (uint32_t)(MEM32(esi + 0xCB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xCB4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF936; /* je: equal / zero */

loc_001EF8F8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EF936; /* jb: below (unsigned <) */

loc_001EF8FE: ;
    ecx = MEM32(esi + 0xCB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF90E; /* je: equal / zero */

loc_001EF909: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF936; /* jne: not equal / not zero */

loc_001EF90E: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xCA8));
    PUSH32(esp, 0x001EF921u); RECOMP_ABI_CALL(0x0020A63Au, sub_0020A63A); /* call 0x0020A63A */

loc_001EF921: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF92F; /* jl: less (signed <) */

loc_001EF925: ;
    MEM32(esi + 0xCB0) = 5;

loc_001EF92F: ;
    MEM32(esi + 0xCB4) = MEM32(esi + 0xCB4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xCB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EF936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF941; /* jge: greater or equal (signed >=) */

loc_001EF93A: ;
    ecx = esi;
    PUSH32(esp, 0x001EF941u); RECOMP_ABI_CALL(0x001ECC3Eu, sub_001ECC3E); /* call 0x001ECC3E */

loc_001EF941: ;
    ecx = MEM32(esi + 0x738);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF957; /* je: equal / zero */

loc_001EF94D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF957; /* je: equal / zero */

loc_001EF952: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF9A1(); return; } /* jne: not equal / not zero */

loc_001EF957: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, 0x001EF964u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EF964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF9A1(); return; } /* jne: not equal / not zero */

loc_001EF96B: ;
    ecx = MEM32(esi + 0x738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF981(); return; } /* jne: not equal / not zero */

loc_001EF975: ;
    MEM32(esi + 0x738) = 2;
    g_seh_ebp = ebp; sub_001EF9A1(); return; /* tail jmp 0x001EF9A1 */

}

/**
 * sub_001EF981
 * Original: 0x001EF981 - 0x001EF992 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF981(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF981: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF992(); return; } /* jne: not equal / not zero */

loc_001EF986: ;
    MEM32(esi + 0x738) = 4;
    g_seh_ebp = ebp; sub_001EF9A1(); return; /* tail jmp 0x001EF9A1 */

}

/**
 * sub_001EF992
 * Original: 0x001EF992 - 0x001EF9A1 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF992: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EF9A1(); return; } /* jne: not equal / not zero */

loc_001EF997: ;
    MEM32(esi + 0x738) = 6;

    g_seh_ebp = ebp; sub_001EF9A1(); return; /* fallthrough 0x001EF9A1 */

}

/**
 * sub_001EF9A1
 * Original: 0x001EF9A1 - 0x001EFA4F (174 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF9A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF9A1: ;
    _fa = (uint32_t)(MEM32(esi + 0x73C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x73C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF9E8; /* je: equal / zero */

loc_001EF9AA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EF9E8; /* jb: below (unsigned <) */

loc_001EF9B0: ;
    ecx = MEM32(esi + 0x738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF9C0; /* je: equal / zero */

loc_001EF9BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF9E8; /* jne: not equal / not zero */

loc_001EF9C0: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x730));
    PUSH32(esp, 0x001EF9D3u); RECOMP_ABI_CALL(0x0020A63Au, sub_0020A63A); /* call 0x0020A63A */

loc_001EF9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF9E1; /* jl: less (signed <) */

loc_001EF9D7: ;
    MEM32(esi + 0x738) = 5;

loc_001EF9E1: ;
    MEM32(esi + 0x73C) = MEM32(esi + 0x73C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x73C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EF9E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF9F3; /* jge: greater or equal (signed >=) */

loc_001EF9EC: ;
    ecx = esi;
    PUSH32(esp, 0x001EF9F3u); RECOMP_ABI_CALL(0x001ECC01u, sub_001ECC01); /* call 0x001ECC01 */

loc_001EF9F3: ;
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFA4F(); return; } /* je: equal / zero */

loc_001EF9FA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFA02u); RECOMP_ABI_CALL(0x00215759u, sub_00215759); /* call 0x00215759 */

loc_001EFA02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFA4F(); return; } /* je: equal / zero */

loc_001EFA06: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x54));
    ecx = esi;
    PUSH32(esp, 0x001EFA14u); RECOMP_ABI_CALL(0x002148DFu, sub_002148DF); /* call 0x002148DF */

loc_001EFA14: ;
    PUSH32(esp, MEM32(ebx + 0x54));
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001EFA20u); RECOMP_ABI_CALL(0x00215112u, sub_00215112); /* call 0x00215112 */

loc_001EFA20: ;
    MEM32(ebx + 0x54) = MEM32(ebx + 0x54) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x8043);
    PUSH32(esp, MEM32(ebx + 0x50));
    ecx = esi;
    PUSH32(esp, 0x001EFA33u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001EFA33: ;
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFA47; /* je: equal / zero */

loc_001EFA3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151917u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80151917u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFA4F(); return; } /* jne: not equal / not zero */

loc_001EFA47: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x001EFA4Fu); RECOMP_ABI_CALL(0x001E002Du, sub_001E002D); /* call 0x001E002D */

    g_seh_ebp = ebp; sub_001EFA4F(); return; /* fallthrough 0x001EFA4F */

}

/**
 * sub_001EFA4F
 * Original: 0x001EFA4F - 0x001EFA95 (70 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFA4F: ;
    ecx = MEM32(esi + 0x72C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFB74(); return; } /* je: equal / zero */

loc_001EFA5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFA6A; /* je: equal / zero */

loc_001EFA65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFAA4(); return; } /* jne: not equal / not zero */

loc_001EFA6A: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0x001EFA77u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EFA77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFAA4(); return; } /* jne: not equal / not zero */

loc_001EFA7E: ;
    ecx = MEM32(esi + 0x72C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFA95(); return; } /* jne: not equal / not zero */

loc_001EFA89: ;
    MEM32(esi + 0x72C) = 2;
    g_seh_ebp = ebp; sub_001EFAA4(); return; /* tail jmp 0x001EFAA4 */

}

/**
 * sub_001EFA95
 * Original: 0x001EFA95 - 0x001EFAA4 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFA95: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFAA4(); return; } /* jne: not equal / not zero */

loc_001EFA9A: ;
    MEM32(esi + 0x72C) = 6;

    g_seh_ebp = ebp; sub_001EFAA4(); return; /* fallthrough 0x001EFAA4 */

}

/**
 * sub_001EFAA4
 * Original: 0x001EFAA4 - 0x001EFB74 (208 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFAA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFAA4: ;
    _fa = (uint32_t)(MEM32(ebx + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFB69; /* jne: not equal / not zero */

loc_001EFAB1: ;
    ecx = MEM32(esi + 0x72C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFAC5; /* je: equal / zero */

loc_001EFABC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFB69; /* jne: not equal / not zero */

loc_001EFAC5: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x34;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EFAD8u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001EFAD8: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EFADC: ;
    eax = MEM32(ebp + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xCC);
    edx = MEM32(eax + 0xD0);
    edi = ecx;
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001EFB35; /* je: equal / zero */

loc_001EFAF6: ;
    _fa = (uint32_t)(MEM8(eax + 0xD4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD4), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFB35; /* jne: not equal / not zero */

loc_001EFAFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x728));
    MEM32(ebp + 0x34) = ecx;
    PUSH32(esp, MEM32(esi + 0x724));
    ecx = esi;
    MEM32(ebp + 0x38) = edx;
    PUSH32(esp, 0x001EFB20u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001EFB20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFB35; /* jl: less (signed <) */

loc_001EFB24: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0x001EFB31u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EFB31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFB24; /* je: equal / zero */

loc_001EFB35: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFADC; /* jb: below (unsigned <) */

loc_001EFB3E: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x724));
    PUSH32(esp, 0x001EFB51u); RECOMP_ABI_CALL(0x0020A63Au, sub_0020A63A); /* call 0x0020A63A */

loc_001EFB51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFB5F; /* jl: less (signed <) */

loc_001EFB55: ;
    MEM32(esi + 0x72C) = 5;

loc_001EFB5F: ;
    MEM32(ebx + 0xB0) = 1;

loc_001EFB69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EFB74(); return; } /* jge: greater or equal (signed >=) */

loc_001EFB6D: ;
    ecx = esi;
    PUSH32(esp, 0x001EFB74u); RECOMP_ABI_CALL(0x001ECBC4u, sub_001ECBC4); /* call 0x001ECBC4 */

    g_seh_ebp = ebp; sub_001EFB74(); return; /* fallthrough 0x001EFB74 */

}

/**
 * sub_001EFB74
 * Original: 0x001EFB74 - 0x001EFB97 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFB74: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFB97(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EFB7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFB97(); return; } /* jae: above or equal (unsigned >=) */

loc_001EFB81: ;
    PUSH32(esp, 0x001EFB86u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EFB86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFB97(); return; } /* jb: below (unsigned <) */

loc_001EFB8B: ;
    MEM32(ebx + 0x10) = 0x80151911u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001EFB97
 * Original: 0x001EFB97 - 0x001EFBDF (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFB97: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    MEM32(ebp + 0x68) = edi;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F07BA(); return; } /* ja: above (unsigned >) */

loc_001EFBA8: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F02FD(); return; } /* je: equal / zero */

loc_001EFBAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F027A(); return; } /* je: equal / zero */

loc_001EFBB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0224(); return; } /* je: equal / zero */

loc_001EFBBE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0244(); return; } /* je: equal / zero */

loc_001EFBC5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F015D(); return; } /* je: equal / zero */

loc_001EFBCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0181(); return; } /* je: equal / zero */

loc_001EFBD3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EFBDF(); return; } /* je: equal / zero */

loc_001EFBD6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001EFBDD: ;
    g_seh_ebp = ebp; sub_001EFC55(); return; /* tail jmp 0x001EFC55 */

}

/**
 * sub_001EFB99
 * Original: 0x001EFB99 - 0x001EFBDF (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFB99: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    MEM32(ebp + 0x68) = edi;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F07BA(); return; } /* ja: above (unsigned >) */

loc_001EFBA8: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F02FD(); return; } /* je: equal / zero */

loc_001EFBAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F027A(); return; } /* je: equal / zero */

loc_001EFBB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0224(); return; } /* je: equal / zero */

loc_001EFBBE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0244(); return; } /* je: equal / zero */

loc_001EFBC5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F015D(); return; } /* je: equal / zero */

loc_001EFBCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0181(); return; } /* je: equal / zero */

loc_001EFBD3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EFBDF(); return; } /* je: equal / zero */

loc_001EFBD6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001EFBDD: ;
    g_seh_ebp = ebp; sub_001EFC55(); return; /* tail jmp 0x001EFC55 */

}

/**
 * sub_001EFBDF
 * Original: 0x001EFBDF - 0x001EFBF2 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFBDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFBDF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFBF2(); return; } /* jne: not equal / not zero */

loc_001EFBE4: ;
    _fa = (uint32_t)(MEM32(ebx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x60), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFBF2(); return; } /* jne: not equal / not zero */

loc_001EFBE9: ;
    MEM32(ebx + 0x14) = 0xB;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001EFBE9
 * Original: 0x001EFBE9 - 0x001EFBF2 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFBE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFBE9: ;
    MEM32(ebx + 0x14) = 0xB;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001EFBF2
 * Original: 0x001EFBF2 - 0x001EFC55 (99 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFBF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFBF2: ;
    MEM32(ebx + 0xA4) = edi;
    MEM32(ebp + 0x7C) = edi;

loc_001EFBFB: ;
    eax = MEM32(ebp + 0x7C);
    eax = eax + eax * 4;
    eax = MEM32(ebx + eax * 4 + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFC1C; /* je: equal / zero */

loc_001EFC0C: ;
    ecx = MEM32(ebx + 0xA4);
    MEM32(ebx + ecx * 4 + 0x64) = eax;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EFC1C: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFBFB; /* jb: below (unsigned <) */

loc_001EFC25: ;
    eax = ebx + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x64;
    PUSH32(esp, MEM32(ebx + 0x40));
    ecx = esi;
    PUSH32(esp, MEM32(ebx + 0xA4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x60));
    PUSH32(esp, 0x001EFC46u); RECOMP_ABI_CALL(0x001EF247u, sub_001EF247); /* call 0x001EF247 */

loc_001EFC46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0D8F(); return; } /* jl: less (signed <) */

loc_001EFC4E: ;
    MEM32(ebx + 0x14) = 0xE;

    g_seh_ebp = ebp; sub_001EFC55(); return; /* fallthrough 0x001EFC55 */

}

/**
 * sub_001EFC55
 * Original: 0x001EFC55 - 0x001EFCB4 (95 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFC55: ;
    edi = ebx + 0xA8;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EFC64u); RECOMP_ABI_CALL(0x001EE9F7u, sub_001EE9F7); /* call 0x001EE9F7 */

loc_001EFC64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F00B8(); return; } /* jne: not equal / not zero */

loc_001EFC6F: ;
    ecx = ebp + 0x64;
    PUSH32(esp, ecx);
    eax = ebx + 0xAC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EFC83u); RECOMP_ABI_CALL(0x001EC843u, sub_001EC843); /* call 0x001EC843 */

loc_001EFC83: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EFC8Cu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EFC8C: ;
    eax = MEM32(ebx + 0xAC);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFD59(); return; } /* ja: above (unsigned >) */

loc_001EFCA6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = esi;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFE82(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001EFCB4(); return; /* fallthrough 0x001EFCB4 */

}

/**
 * sub_001EFCB4
 * Original: 0x001EFCB4 - 0x001EFD06 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFCB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFCB4: ;
    edx = MEM32(ebx + 0xAC);
    edi = MEM32(edx + esi * 4 + 0x34);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 0x28C;

loc_001EFCC6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFCD6; /* je: equal / zero */

loc_001EFCCA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFCC6; /* jl: less (signed <) */

loc_001EFCD3: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EFCD6: ;
    edx = MEM32(edx + esi * 4 + 0x200);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    eax = ecx + ecx * 4;
    eax = ebx + eax * 4;
    MEM32(eax + 0x298) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFD06(); return; } /* jne: not equal / not zero */

loc_001EFCEE: ;
    ecx = MEM32(ebx + 0xA4);
    eax = MEM32(eax + 0x28C);
    MEM32(ebx + ecx * 4 + 0x64) = eax;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001EFD3E(); return; /* tail jmp 0x001EFD3E */

}

/**
 * sub_001EFD06
 * Original: 0x001EFD06 - 0x001EFD3E (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD06: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFD3E(); return; } /* jne: not equal / not zero */

loc_001EFD0A: ;
    edi = MEM32(ebp + 0x7C);
    edx = ebx + 0xAC;
    esi = MEM32(edx);
    SET_LO16(esi, MEM16(esi + edi * 2 + 0x230));
    ecx = ecx + ecx * 4 + 0xA5;
    MEM16(ebx + ecx * 4) = LO16(esi);
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x1B8);
    MEM32(eax + 0x290) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 0x29C) = ecx;

    g_seh_ebp = ebp; sub_001EFD3E(); return; /* fallthrough 0x001EFD3E */

}

/**
 * sub_001EFD3E
 * Original: 0x001EFD3E - 0x001EFD59 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD3E: ;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebx + 0xAC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x7C) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x30) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFCB4(); return; } /* jb: below (unsigned <) */

loc_001EFD54: ;
    g_seh_ebp = ebp; sub_001EFE82(); return; /* tail jmp 0x001EFE82 */

}

/**
 * sub_001EFD59
 * Original: 0x001EFD59 - 0x001EFD5D (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD59: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EFD5D(); return; /* fallthrough 0x001EFD5D */

}

/**
 * sub_001EFD5D
 * Original: 0x001EFD5D - 0x001EFDB6 (89 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD5D: ;
    ecx = MEM32(ebp + 0x7C);
    SET_LO8(ecx, MEM8(eax + ecx + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFDE2(); return; } /* je: equal / zero */

loc_001EFD68: ;
    esi = ZX8(LO8(ecx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x28C;

loc_001EFD73: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFD83; /* je: equal / zero */

loc_001EFD77: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFD73; /* jl: less (signed <) */

loc_001EFD80: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EFD83: ;
    esi = MEM32(ebp + 0x7C);
    esi = MEM32(eax + esi * 4 + 0x200);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    ecx = edx + edx * 4;
    ecx = ebx + ecx * 4;
    MEM32(ecx + 0x298) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFDB6(); return; } /* jne: not equal / not zero */

loc_001EFD9E: ;
    edx = MEM32(ebx + 0xA4);
    ecx = MEM32(ecx + 0x28C);
    MEM32(ebx + edx * 4 + 0x64) = ecx;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001EFDE2(); return; /* tail jmp 0x001EFDE2 */

}

/**
 * sub_001EFDB6
 * Original: 0x001EFDB6 - 0x001EFDE2 (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFDB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFDB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFDE2(); return; } /* jne: not equal / not zero */

loc_001EFDBA: ;
    esi = MEM32(ebp + 0x7C);
    SET_LO16(esi, MEM16(eax + esi * 2 + 0x1C0));
    edx = edx + edx * 4 + 0xA5;
    MEM16(ebx + edx * 4) = LO16(esi);
    edx = MEM32(eax + 0x1B8);
    MEM32(ecx + 0x290) = edx;
    MEM32(ecx + 0x29C) = eax;

    g_seh_ebp = ebp; sub_001EFDE2(); return; /* fallthrough 0x001EFDE2 */

}

/**
 * sub_001EFDE2
 * Original: 0x001EFDE2 - 0x001EFDF3 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFDE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFDE2: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFD5D(); return; } /* jb: below (unsigned <) */

loc_001EFDEF: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EFDF3(); return; /* fallthrough 0x001EFDF3 */

}

/**
 * sub_001EFDF3
 * Original: 0x001EFDF3 - 0x001EFE49 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFDF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFDF3: ;
    ecx = MEM32(ebp + 0x7C);
    esi = MEM32(eax + ecx * 4 + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFE75(); return; } /* je: equal / zero */

loc_001EFDFE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x28C;

loc_001EFE06: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFE16; /* je: equal / zero */

loc_001EFE0A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFE06; /* jl: less (signed <) */

loc_001EFE13: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EFE16: ;
    esi = MEM32(ebp + 0x7C);
    esi = MEM32(eax + esi * 4 + 0x230);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    ecx = edx + edx * 4;
    ecx = ebx + ecx * 4;
    MEM32(ecx + 0x298) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFE49(); return; } /* jne: not equal / not zero */

loc_001EFE31: ;
    edx = MEM32(ebx + 0xA4);
    ecx = MEM32(ecx + 0x28C);
    MEM32(ebx + edx * 4 + 0x64) = ecx;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001EFE75(); return; /* tail jmp 0x001EFE75 */

}

/**
 * sub_001EFE49
 * Original: 0x001EFE49 - 0x001EFE75 (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFE49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFE75(); return; } /* jne: not equal / not zero */

loc_001EFE4D: ;
    esi = MEM32(ebp + 0x7C);
    SET_LO16(esi, MEM16(eax + esi * 2 + 0x1D8));
    edx = edx + edx * 4 + 0xA5;
    MEM16(ebx + edx * 4) = LO16(esi);
    edx = MEM32(eax + 0x1B8);
    MEM32(ecx + 0x290) = edx;
    MEM32(ecx + 0x29C) = eax;

    g_seh_ebp = ebp; sub_001EFE75(); return; /* fallthrough 0x001EFE75 */

}

/**
 * sub_001EFE75
 * Original: 0x001EFE75 - 0x001EFE82 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFE75: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFDF3(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001EFE82(); return; /* fallthrough 0x001EFE82 */

}

/**
 * sub_001EFE82
 * Original: 0x001EFE82 - 0x001EFEFA (120 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFE82: ;
    edx = ebx + 0xAC;
    ecx = MEM32(edx);
    eax = ecx + 0xDC;
    esi = ecx + 0x2B8;
    edi = eax + 0xC0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(ebx + 0x3CC);
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x2DC);
    edx = MEM32(ebp + 0x70);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x118;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xD4) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 0xCC) (32-bit) */
    MEM32(ebp + 0x68) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFF2C(); return; } /* jne: not equal / not zero */

loc_001EFECE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = ecx;

loc_001EFED3: ;
    esi = ecx + ecx * 4;
    esi = MEM32(edx + esi * 4 + 0xE4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFEEF; /* je: equal / zero */

loc_001EFEE1: ;
    esi = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFEFA(); return; } /* je: equal / zero */

loc_001EFEEF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(ebp + 0x7C) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001EFED3; /* jb: below (unsigned <) */

loc_001EFEF8: ;
    g_seh_ebp = ebp; sub_001EFF2F(); return; /* tail jmp 0x001EFF2F */

}

/**
 * sub_001EFEFA
 * Original: 0x001EFEFA - 0x001EFF2C (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFEFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFEFA: ;
    ecx = ecx + ecx * 4;
    esi = MEM32(edx + ecx * 4 + 0xE4);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xDC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
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
    ecx = MEM32(ebp + 0x7C);
    ecx = ecx + ecx * 4;
    esi = MEM32(edx + ecx * 4 + 0xE4);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x13C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x60;
    POP32(esp, ecx);
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

    g_seh_ebp = ebp; sub_001EFF2C(); return; /* fallthrough 0x001EFF2C */

}

/**
 * sub_001EFF2C
 * Original: 0x001EFF2C - 0x001EFF2F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFF2C: ;
    ecx = MEM32(ebp + 0x7C);

    g_seh_ebp = ebp; sub_001EFF2F(); return; /* fallthrough 0x001EFF2F */

}

/**
 * sub_001EFF2F
 * Original: 0x001EFF2F - 0x001EFF6D (62 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFF2F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 0xC8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFF3C; /* je: equal / zero */

loc_001EFF37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFF65; /* jne: not equal / not zero */

loc_001EFF3C: ;
    esi = MEM32(ebp + 0x68);
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EFF47u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001EFF47: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x1E3810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E3870);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EFF5Du); RECOMP_ABI_CALL(0x001059FAu, sub_001059FA); /* call 0x001059FA */

loc_001EFF5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0B9D(); return; } /* je: equal / zero */

loc_001EFF65: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EFF6D(); return; /* fallthrough 0x001EFF6D */

}

/**
 * sub_001EFF6D
 * Original: 0x001EFF6D - 0x001EFFA7 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFF6D: ;
    eax = MEM32(ebp + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    esi = eax + ebx;
    edx = MEM32(esi + 0xCC);
    edi = MEM32(esi + 0xD0);
    eax = edx;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EFFBD(); return; } /* je: equal / zero */

loc_001EFF88: ;
    eax = MEM32(ebx + 0xAC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EFF93: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFF9C; /* jne: not equal / not zero */

loc_001EFF97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFFA7(); return; } /* je: equal / zero */

loc_001EFF9C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFF93; /* jb: below (unsigned <) */

loc_001EFFA5: ;
    g_seh_ebp = ebp; sub_001EFFBD(); return; /* tail jmp 0x001EFFBD */

}

/**
 * sub_001EFFA7
 * Original: 0x001EFFA7 - 0x001EFFBD (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFFA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFFA7: ;
    SET_LO8(eax, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) << 6);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x7C);
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + ecx + 0x6C) = LO8(eax);

    g_seh_ebp = ebp; sub_001EFFBD(); return; /* fallthrough 0x001EFFBD */

}

/**
 * sub_001EFFBD
 * Original: 0x001EFFBD - 0x001F001B (94 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFFBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFFBD: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EFF6D(); return; } /* jb: below (unsigned <) */

loc_001EFFC6: ;
    eax = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x68);
    MEM32(ecx + 0xD8) = eax;
    ecx = MEM32(ebx + 0x3CC);
    eax = ebx + 0xAC;
    edx = MEM32(eax);
    MEM32(ebx + ecx * 4 + 0x3D0) = edx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0xA4);
    MEM32(ebx + 0x3CC) = MEM32(ebx + 0x3CC) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x3CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F00A9(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EFFFE: ;
    ecx = ebx + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, eax);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x60));
    PUSH32(esp, 0x001F001Bu); RECOMP_ABI_CALL(0x001EF247u, sub_001EF247); /* call 0x001EF247 */

    g_seh_ebp = ebp; sub_001F001B(); return; /* fallthrough 0x001F001B */

}

/**
 * sub_001F001B
 * Original: 0x001F001B - 0x001F0026 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F001B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F001B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F00B0(); return; } /* jge: greater or equal (signed >=) */

loc_001F0023: ;
    MEM32(ebx + 0x10) = eax;

    g_seh_ebp = ebp; sub_001F0026(); return; /* fallthrough 0x001F0026 */

}

/**
 * sub_001F0026
 * Original: 0x001F0026 - 0x001F0029 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0026(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0026: ;
    esi = MEM32(ebp + 0x70);

    g_seh_ebp = ebp; sub_001F0029(); return; /* fallthrough 0x001F0029 */

}

/**
 * sub_001F0029
 * Original: 0x001F0029 - 0x001F00A9 (128 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0029(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0029: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F009C; /* je: equal / zero */

loc_001F0030: ;
    MEM32(ebx + 0xC) = eax;
    eax = eax & 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151900u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151900u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0046; /* jne: not equal / not zero */

loc_001F003F: ;
    MEM32(ebx + 0xC) = 0x80151001u;

loc_001F0046: ;
    edi = ebx + 0xB4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x14) = 0x63;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0064; /* je: equal / zero */

loc_001F0059: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F0061u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F0061: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0064: ;
    eax = MEM32(ebx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0076; /* je: equal / zero */

loc_001F006C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0072u); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_001F0072: ;
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F0076: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F009C; /* jge: greater or equal (signed >=) */

loc_001F007C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F009C; /* jne: not equal / not zero */

loc_001F0084: ;
    eax = esi + 0xD0;
    ecx = esi + 0x3D4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F009C; /* jne: not equal / not zero */

loc_001F0094: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x214;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;

loc_001F009C: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F00A9
 * Original: 0x001F00A9 - 0x001F00B0 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F00A9: ;
    MEM32(ebx + 0x14) = 0xF;

    g_seh_ebp = ebp; sub_001F00B0(); return; /* fallthrough 0x001F00B0 */

}

/**
 * sub_001F00B0
 * Original: 0x001F00B0 - 0x001F00B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F00B0: ;
    esi = MEM32(ebp + 0x70);
    g_seh_ebp = ebp; sub_001EFB97(); return; /* tail jmp 0x001EFB97 */

}

/**
 * sub_001F00B8
 * Original: 0x001F00B8 - 0x001F0102 (74 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F00B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jge: greater or equal (signed >=) */

loc_001F00C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8015190Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8015190Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0102(); return; } /* jne: not equal / not zero */

loc_001F00C7: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001F00D0u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F00D0: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F00E3; /* jne: not equal / not zero */

loc_001F00D9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x38), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0BA9(); return; } /* je: equal / zero */

loc_001F00E3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F00EBu); RECOMP_ABI_CALL(0x001EC87Bu, sub_001EC87B); /* call 0x001EC87B */

loc_001F00EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x38) = eax;
    MEM32(ebx + 0x3C) = eax;
    MEM32(ebx + 0x40) = eax;
    MEM32(ebx + 0x14) = 9;
    g_seh_ebp = ebp; sub_001EFB97(); return; /* tail jmp 0x001EFB97 */

}

/**
 * sub_001F0102
 * Original: 0x001F0102 - 0x001F012D (43 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0102(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0102: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151916u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151916u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F012D(); return; } /* jne: not equal / not zero */

loc_001F0109: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001F0112u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F0112: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F011Du); RECOMP_ABI_CALL(0x001EC87Bu, sub_001EC87B); /* call 0x001EC87B */

loc_001F011D: ;
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = 0xB;
    g_seh_ebp = ebp; sub_001EFB97(); return; /* tail jmp 0x001EFB97 */

}

/**
 * sub_001F012D
 * Original: 0x001F012D - 0x001F015D (48 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F012D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F012D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151915u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151915u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0D8F(); return; } /* jne: not equal / not zero */

loc_001F0138: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001F0141u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F0141: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0BB9(); return; } /* je: equal / zero */

loc_001F014E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F0156u); RECOMP_ABI_CALL(0x001EC87Bu, sub_001EC87B); /* call 0x001EC87B */

loc_001F0156: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F026F(); return; /* tail jmp 0x001F026F */

}

/**
 * sub_001F015D
 * Original: 0x001F015D - 0x001F0181 (36 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F015D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F015D: ;
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = esi + 0x24;
    PUSH32(esp, MEM32(ebx + 0x3C));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0172u); RECOMP_ABI_CALL(0x001EE84Cu, sub_001EE84C); /* call 0x001EE84C */

loc_001F0172: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0D8F(); return; } /* jl: less (signed <) */

loc_001F017A: ;
    MEM32(ebx + 0x14) = 0xC;

    g_seh_ebp = ebp; sub_001F0181(); return; /* fallthrough 0x001F0181 */

}

/**
 * sub_001F0181
 * Original: 0x001F0181 - 0x001F01D0 (79 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0181: ;
    PUSH32(esp, MEM32(ebx + 0x5C));
    ecx = esi;
    PUSH32(esp, 0x001F018Bu); RECOMP_ABI_CALL(0x001EE1BEu, sub_001EE1BE); /* call 0x001EE1BE */

loc_001F018B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F01D0(); return; } /* jne: not equal / not zero */

loc_001F0192: ;
    edi = ebx + 0x60;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F01A3; /* je: equal / zero */

loc_001F019B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F01A3u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F01A3: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x5C));
    ecx = esi;
    PUSH32(esp, 0x001F01B2u); RECOMP_ABI_CALL(0x001EC80Bu, sub_001EC80B); /* call 0x001EC80B */

loc_001F01B2: ;
    PUSH32(esp, MEM32(ebx + 0x5C));
    ecx = esi;
    PUSH32(esp, 0x001F01BCu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F01BC: ;
    MEM32(ebx + 0x5C) = MEM32(ebx + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = 0xD;
    g_seh_ebp = ebp; sub_001EFB97(); return; /* tail jmp 0x001EFB97 */

}

/**
 * sub_001F01D0
 * Original: 0x001F01D0 - 0x001F01FE (46 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F01D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F01D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jge: greater or equal (signed >=) */

loc_001F01D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151914u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151914u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F020A(); return; } /* jne: not equal / not zero */

loc_001F01DF: ;
    PUSH32(esp, MEM32(ebx + 0x5C));
    ecx = esi;
    PUSH32(esp, 0x001F01E9u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F01E9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x38), edi (32-bit) */
    MEM32(ebx + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0BC5(); return; } /* je: equal / zero */

loc_001F01F5: ;
    MEM32(ebx + 0x38) = edi;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;

    g_seh_ebp = ebp; sub_001F01FE(); return; /* fallthrough 0x001F01FE */

}

/**
 * sub_001F01F8
 * Original: 0x001F01F8 - 0x001F01FE (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F01F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F01F8: ;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;

    g_seh_ebp = ebp; sub_001F01FE(); return; /* fallthrough 0x001F01FE */

}

/**
 * sub_001F01FE
 * Original: 0x001F01FE - 0x001F020A (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F01FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F01FE: ;
    MEM32(ebx + 0x14) = 9;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001F020A
 * Original: 0x001F020A - 0x001F0224 (26 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F020A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F020A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151916u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151916u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0D8F(); return; } /* jne: not equal / not zero */

loc_001F0215: ;
    PUSH32(esp, MEM32(ebx + 0x5C));
    ecx = esi;
    PUSH32(esp, 0x001F021Fu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F021F: ;
    MEM32(ebx + 0x5C) = edi;
    g_seh_ebp = ebp; sub_001F01F8(); return; /* tail jmp 0x001F01F8 */

}

/**
 * sub_001F0224
 * Original: 0x001F0224 - 0x001F0244 (32 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0224(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0224: ;
    eax = ebx + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, MEM32(ebx + 0x38));
    PUSH32(esp, 0x001F0235u); RECOMP_ABI_CALL(0x001EE0AFu, sub_001EE0AF); /* call 0x001EE0AF */

loc_001F0235: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0BD1(); return; } /* jl: less (signed <) */

loc_001F023D: ;
    MEM32(ebx + 0x14) = 0xA;

    g_seh_ebp = ebp; sub_001F0244(); return; /* fallthrough 0x001F0244 */

}

/**
 * sub_001F0244
 * Original: 0x001F0244 - 0x001F027A (54 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0244(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0244: ;
    PUSH32(esp, MEM32(ebx + 0x58));
    ecx = esi;
    PUSH32(esp, 0x001F024Eu); RECOMP_ABI_CALL(0x001EDC3Au, sub_001EDC3A); /* call 0x001EDC3A */

loc_001F024E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0ABC(); return; } /* jne: not equal / not zero */

loc_001F0259: ;
    PUSH32(esp, MEM32(ebx + 0x58));
    ecx = esi;
    PUSH32(esp, 0x001F0263u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F0263: ;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x38), edi (32-bit) */
    MEM32(ebx + 0x58) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F09CD(); return; } /* jne: not equal / not zero */

loc_001F026F: ;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;
    g_seh_ebp = ebp; sub_001EFBE9(); return; /* tail jmp 0x001EFBE9 */

}

/**
 * sub_001F026F
 * Original: 0x001F026F - 0x001F027A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F026F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F026F: ;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;
    g_seh_ebp = ebp; sub_001EFBE9(); return; /* tail jmp 0x001EFBE9 */

}

/**
 * sub_001F027A
 * Original: 0x001F027A - 0x001F02FD (131 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F027A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F027A: ;
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0283u); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001F0283: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0AC9(); return; } /* je: equal / zero */

loc_001F028B: ;
    ecx = eax;
    ecx = ecx & 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x60 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0BFB(); return; } /* jne: not equal / not zero */

loc_001F0299: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) { g_seh_ebp = ebp; sub_001F0BFB(); return; } /* js: sign (negative) */

loc_001F02A1: ;
    _fa = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F02D8; /* jne: not equal / not zero */

loc_001F02A9: ;
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F02B2u); RECOMP_ABI_CALL(0x001CEEB8u, sub_001CEEB8); /* call 0x001CEEB8 */

loc_001F02B2: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F02D8; /* je: equal / zero */

loc_001F02B7: ;
    PUSH32(esp, MEM32(ebx + 0x50));
    ecx = esi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0x001F02CAu); RECOMP_ABI_CALL(0x00215CD5u, sub_00215CD5); /* call 0x00215CD5 */

loc_001F02CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0BDD(); return; } /* jl: less (signed <) */

loc_001F02D2: ;
    eax = MEM32(ebx + 0x50);
    MEM32(ebx + 0x54) = eax;

loc_001F02D8: ;
    PUSH32(esp, 0x001F02DDu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001F02DD: ;
    ecx = eax;
    eax = 0x15F90;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x18;
    MEM32(ebx + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F02F8u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001F02F8: ;
    g_seh_ebp = ebp; sub_001F01FE(); return; /* tail jmp 0x001F01FE */

}

/**
 * sub_001F02FD
 * Original: 0x001F02FD - 0x001F0309 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F02FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F02FD: ;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F0306: ;
    MEM32(ebp + 0x7C) = edi;

    g_seh_ebp = ebp; sub_001F0309(); return; /* fallthrough 0x001F0309 */

}

/**
 * sub_001F0309
 * Original: 0x001F0309 - 0x001F0341 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0309(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0309: ;
    eax = MEM32(ebp + 0x7C);
    ecx = MEM32(ebx + 0x3D0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + 8;

loc_001F031E: ;
    edi = MEM32(eax + 0xCC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0333; /* jne: not equal / not zero */

loc_001F0328: ;
    edi = MEM32(eax + 0xD0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0341(); return; } /* je: equal / zero */

loc_001F0333: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F031E; /* jb: below (unsigned <) */

loc_001F033F: ;
    g_seh_ebp = ebp; sub_001F03A5(); return; /* tail jmp 0x001F03A5 */

}

/**
 * sub_001F0341
 * Original: 0x001F0341 - 0x001F03A5 (100 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0341(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0341: ;
    edx = MEM32(ebp + 0x6C);
    ecx = MEM32(ecx + edx * 4 + 0x1F0);
    MEM32(eax + 0xD4) = MEM32(eax + 0xD4) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0xD4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x7C);
    eax = MEM32(ebx + 0x3D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(eax + edx * 4 + 0x1E0);
    MEM32(ecx + ebx + 0x138) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0389; /* jne: not equal / not zero */

loc_001F0373: ;
    eax = MEM32(ebp + 0x7C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + ebx + 0x138);
    MEM32(ebx + eax * 4 + 0xBC) = ecx;

loc_001F0389: ;
    eax = MEM32(ebp + 0x7C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(ecx + ebx + 0x138)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx + 0x138), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F03A5(); return; } /* jge: greater or equal (signed >=) */

loc_001F039B: ;
    eax = eax + esi + 0x6B8;
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001F03A5(); return; /* fallthrough 0x001F03A5 */

}

/**
 * sub_001F03A5
 * Original: 0x001F03A5 - 0x001F03B9 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03A5: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0309(); return; } /* jb: below (unsigned <) */

loc_001F03B2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = edx;

    g_seh_ebp = ebp; sub_001F03B9(); return; /* fallthrough 0x001F03B9 */

}

/**
 * sub_001F03B9
 * Original: 0x001F03B9 - 0x001F03E2 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03B9: ;
    eax = MEM32(ebp + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax + 0xCC);
    edi = edi | MEM32(eax + 0xD0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F03E4(); return; } /* je: equal / zero */

loc_001F03CF: ;
    SET_LO8(eax, MEM8(eax + 0xD5));
    _fa = (uint32_t)(MEM8(esi + 0x90)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x90), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F03E2(); return; } /* jne: not equal / not zero */

loc_001F03DD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F03E4(); return; /* tail jmp 0x001F03E4 */

}

/**
 * sub_001F03E2
 * Original: 0x001F03E2 - 0x001F03E4 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03E2: ;
    SET_LO8(ecx, LO8(eax));

    g_seh_ebp = ebp; sub_001F03E4(); return; /* fallthrough 0x001F03E4 */

}

/**
 * sub_001F03E4
 * Original: 0x001F03E4 - 0x001F04ED (265 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03E4: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F03B9(); return; } /* jb: below (unsigned <) */

loc_001F03ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0404; /* jne: not equal / not zero */

loc_001F03F3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0404; /* je: equal / zero */

loc_001F03F7: ;
    MEM8(esi + 0x90) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x001F0404u); RECOMP_ABI_CALL(0x001F272Bu, sub_001F272B); /* call 0x001F272B */

loc_001F0404: ;
    eax = MEM32(ebx + 0x3D0);
    eax = MEM32(eax + 0x1BC);
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F0426u); RECOMP_ABI_CALL(0x001DFC99u, sub_001DFC99); /* call 0x001DFC99 */

loc_001F0426: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F05CE(); return; } /* jne: not equal / not zero */

loc_001F0432: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = ecx;

loc_001F0437: ;
    eax = ecx + ecx * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi + 0xE0), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0453; /* jl: less (signed <) */

loc_001F0446: ;
    _fa = (uint32_t)(MEM32(eax + ebx + 0x298)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebx + 0x298), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0CC5(); return; } /* jl: less (signed <) */

loc_001F0453: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(ebp + 0x7C) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001F0437; /* jb: below (unsigned <) */

loc_001F045C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001F0465u); RECOMP_ABI_CALL(0x001DFCC5u, sub_001DFCC5); /* call 0x001DFCC5 */

loc_001F0465: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = eax;

loc_001F046A: ;
    eax = eax + eax * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + esi;
    _fa = (uint32_t)(MEM32(ecx + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xE0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0488; /* jne: not equal / not zero */

loc_001F047B: ;
    eax = MEM32(eax + ebx + 0x29C);
    MEM32(ecx + 0xE4) = eax;

loc_001F0488: ;
    eax = MEM32(ebp + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F046A; /* jb: below (unsigned <) */

loc_001F0494: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F049Cu); RECOMP_ABI_CALL(0x001DFCC5u, sub_001DFCC5); /* call 0x001DFCC5 */

loc_001F049C: ;
    _fa = (uint32_t)(MEM32(esi + 0x5A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5A8), edi (32-bit) */
    MEM32(ebp + 0x7C) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001F04C6; /* jbe: below or equal (unsigned <=) */

loc_001F04A7: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, MEM32(esi + eax * 4 + 0x5AC));
    ecx = esi;
    PUSH32(esp, 0x001F04B8u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F04B8: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x5A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F04A7; /* jb: below (unsigned <) */

loc_001F04C6: ;
    edx = MEM32(ebp + 0x70);
    eax = ebx + 0x3CC;
    ecx = MEM32(eax);
    MEM32(edx + 0x5A8) = ecx;
    esi = ebx + 0x3D0;
    edi = edx + 0x5AC;
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
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = ecx;

    g_seh_ebp = ebp; sub_001F04ED(); return; /* fallthrough 0x001F04ED */

}

/**
 * sub_001F04ED
 * Original: 0x001F04ED - 0x001F0503 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F04ED: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0xD4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0503(); return; } /* je: equal / zero */

loc_001F04FD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F050F(); return; /* tail jmp 0x001F050F */

}

/**
 * sub_001F0503
 * Original: 0x001F0503 - 0x001F050F (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0503(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0503: ;
    edx = MEM32(eax + 0xCC);
    eax = MEM32(eax + 0xD0);

    g_seh_ebp = ebp; sub_001F050F(); return; /* fallthrough 0x001F050F */

}

/**
 * sub_001F050F
 * Original: 0x001F050F - 0x001F05CE (191 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F050F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F050F: ;
    MEM32(ebp + ecx * 8 + 0x14) = edx;
    MEM32(ebp + ecx * 8 + 0x18) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(ebp + 0x7C) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F04ED(); return; } /* jb: below (unsigned <) */

loc_001F0520: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 0x70);

loc_001F0527: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = esi;
    PUSH32(esp, 0x001F0531u); RECOMP_ABI_CALL(0x001FDB88u, sub_001FDB88); /* call 0x001FDB88 */

loc_001F0531: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0527; /* jb: below (unsigned <) */

loc_001F053A: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F0545u); RECOMP_ABI_CALL(0x001DFC3Du, sub_001DFC3D); /* call 0x001DFC3D */

loc_001F0545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0C0E(); return; } /* je: equal / zero */

loc_001F054D: ;
    MEM32(ebx + 0xC) = 0x1513F0;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F059F; /* je: equal / zero */

loc_001F0560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = eax;

loc_001F0565: ;
    ecx = eax + eax * 8;
    _fa = (uint32_t)(MEM32(esi + ecx * 8 + 0x13E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ecx * 8 + 0x13E0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0596; /* je: equal / zero */

loc_001F0572: ;
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, MEM32(ecx + 8));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0583u); RECOMP_ABI_CALL(0x001DFC74u, sub_001DFC74); /* call 0x001DFC74 */

loc_001F0583: ;
    ecx = MEM32(ebp + 0x7C);
    ecx = ecx + ecx * 8;
    ecx = MEM32(esi + ecx * 8 + 0x13E0);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebp + 0x7C);

loc_001F0596: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F0565; /* jb: below (unsigned <) */

loc_001F059F: ;
    eax = MEM32(ebx + 0x30);
    edi = MEM32(ebp + 0x70);
    eax = eax & 0xDFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x14) = 0x10;
    eax = MEM32(esi + 0xC8);
    MEM32(eax + 0xB8) = 1;
    g_seh_ebp = ebp; sub_001F0774(); return; /* tail jmp 0x001F0774 */

}

/**
 * sub_001F05CE
 * Original: 0x001F05CE - 0x001F0692 (196 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F05CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F05CE: ;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x5A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5A8), 0 (32-bit) */
    PUSH32(esp, 0x50);
    esi = ebx + 0x28C;
    edi = eax + 0xD4;
    POP32(esp, ecx);
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
    if (CMP_BE(_fa, _fb)) goto loc_001F0613; /* jbe: below or equal (unsigned <=) */

loc_001F05EF: ;
    esi = eax;

loc_001F05F1: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, MEM32(esi + eax * 4 + 0x5AC));
    ecx = esi;
    PUSH32(esp, 0x001F0602u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F0602: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x5A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F05F1; /* jb: below (unsigned <) */

loc_001F0610: ;
    eax = MEM32(ebp + 0x70);

loc_001F0613: ;
    edx = ebx + 0x3CC;
    ecx = MEM32(edx);
    MEM32(eax + 0x5A8) = ecx;
    esi = ebx + 0x3D0;
    edi = eax + 0x5AC;
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
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0636: ;
    ecx = MEM32(ebp + 0x7C);
    ecx = ecx + ecx * 4;
    ecx = eax + ecx * 4;
    edx = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0649: ;
    esi = MEM32(ecx + 0xD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0653: ;
    _fa = (uint32_t)(MEM32(ecx + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xE0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0684; /* jne: not equal / not zero */

loc_001F065C: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F0667u); RECOMP_ABI_CALL(0x001CF2E9u, sub_001CF2E9); /* call 0x001CF2E9 */

loc_001F0667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0C1A(); return; } /* jne: not equal / not zero */

loc_001F066F: ;
    eax = MEM32(ebp + 0x7C);
    edx = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x4C);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 0xD8) = ecx;
    eax = edx;

loc_001F0684: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0636; /* jb: below (unsigned <) */

loc_001F068D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = ecx;

    g_seh_ebp = ebp; sub_001F0692(); return; /* fallthrough 0x001F0692 */

}

/**
 * sub_001F0692
 * Original: 0x001F0692 - 0x001F06A8 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0692: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0xD4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F06A8(); return; } /* je: equal / zero */

loc_001F06A2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F06B4(); return; /* tail jmp 0x001F06B4 */

}

/**
 * sub_001F06A8
 * Original: 0x001F06A8 - 0x001F06B4 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06A8: ;
    edx = MEM32(eax + 0xCC);
    eax = MEM32(eax + 0xD0);

    g_seh_ebp = ebp; sub_001F06B4(); return; /* fallthrough 0x001F06B4 */

}

/**
 * sub_001F06B4
 * Original: 0x001F06B4 - 0x001F06DE (42 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06B4: ;
    MEM32(ebp + ecx * 8 + -12) = edx;
    MEM32(ebp + ecx * 8 + -8) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(ebp + 0x7C) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0692(); return; } /* jb: below (unsigned <) */

loc_001F06C5: ;
    edi = MEM32(ebp + 0x70);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001F06D5u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001F06D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F06DE(); return; } /* jl: less (signed <) */

loc_001F06D9: ;
    esi = MEM32(ebp + 0x54);
    g_seh_ebp = ebp; sub_001F06E0(); return; /* tail jmp 0x001F06E0 */

}

/**
 * sub_001F06DE
 * Original: 0x001F06DE - 0x001F06E0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06DE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F06E0(); return; /* fallthrough 0x001F06E0 */

}

/**
 * sub_001F06E0
 * Original: 0x001F06E0 - 0x001F06FA (26 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F06FC(); return; } /* jne: not equal / not zero */

loc_001F06E4: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = edi;
    PUSH32(esp, 0x001F06F1u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001F06F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F06FA(); return; } /* jl: less (signed <) */

loc_001F06F5: ;
    esi = MEM32(ebp + 0x54);
    g_seh_ebp = ebp; sub_001F06FC(); return; /* tail jmp 0x001F06FC */

}

/**
 * sub_001F06FA
 * Original: 0x001F06FA - 0x001F06FC (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06FA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F06FC(); return; /* fallthrough 0x001F06FC */

}

/**
 * sub_001F06FC
 * Original: 0x001F06FC - 0x001F0721 (37 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06FC: ;
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F070Bu); RECOMP_ABI_CALL(0x001DFF13u, sub_001DFF13); /* call 0x001DFF13 */

loc_001F070B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0721(); return; } /* jne: not equal / not zero */

loc_001F0711: ;
    MEM32(ebx + 0x14) = 0x13;
    MEM32(ebp + 0x68) = 1;
    g_seh_ebp = ebp; sub_001F0774(); return; /* tail jmp 0x001F0774 */

}

/**
 * sub_001F0721
 * Original: 0x001F0721 - 0x001F0774 (83 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0721: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F075D; /* je: equal / zero */

loc_001F0726: ;
    MEM32(ebp + 0x7C) = eax;

loc_001F0729: ;
    ecx = eax + eax * 8;
    _fa = (uint32_t)(MEM32(edi + ecx * 8 + 0x13E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx * 8 + 0x13E0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0754; /* je: equal / zero */

loc_001F0736: ;
    PUSH32(esp, MEM32(ebx + 8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0741u); RECOMP_ABI_CALL(0x001DFC74u, sub_001DFC74); /* call 0x001DFC74 */

loc_001F0741: ;
    ecx = MEM32(ebp + 0x7C);
    ecx = ecx + ecx * 8;
    ecx = MEM32(edi + ecx * 8 + 0x13E0);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebp + 0x7C);

loc_001F0754: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F0729; /* jb: below (unsigned <) */

loc_001F075D: ;
    eax = MEM32(ebx + 0x30);
    eax = eax & 0xDFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x14) = 0x10;

    g_seh_ebp = ebp; sub_001F0774(); return; /* fallthrough 0x001F0774 */

}

/**
 * sub_001F0774
 * Original: 0x001F0774 - 0x001F07BA (70 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0774: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001F0781u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001F0781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151101u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151101u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0A2B(); return; } /* jne: not equal / not zero */

loc_001F078C: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0790: ;
    eax = MEM32(ebp + 0x7C);
    ecx = MEM32(ebp + 0x70);
    eax = eax + eax * 8;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 0x13E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x13E0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F07AC; /* je: equal / zero */

loc_001F07A5: ;
    MEM32(eax + 0x13B4) = MEM32(eax + 0x13B4) | 0x40;
    _fa = (uint32_t)(MEM32(eax + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F07AC: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0790; /* jb: below (unsigned <) */

loc_001F07B5: ;
    g_seh_ebp = ebp; sub_001F0A2B(); return; /* tail jmp 0x001F0A2B */

}

/**
 * sub_001F07BA
 * Original: 0x001F07BA - 0x001F083F (133 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F07BA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0985(); return; } /* je: equal / zero */

loc_001F07C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0917(); return; } /* je: equal / zero */

loc_001F07CA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F088B(); return; } /* je: equal / zero */

loc_001F07D2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0A3A(); return; } /* jne: not equal / not zero */

loc_001F07D9: ;
    eax = MEM32(ebx + 0x410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F087F(); return; } /* je: equal / zero */

loc_001F07E7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F07EFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F07EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* je: equal / zero */

loc_001F07F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F083F(); return; } /* jne: not equal / not zero */

loc_001F07FE: ;
    esi = MEM32(ebp + 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x410));
    ecx = esi;
    PUSH32(esp, 0x001F081Cu); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F081C: ;
    eax = MEM32(ebp + 0x70);
    edi = esi + 0x6BC;
    esi = MEM32(ebp + 0x5C);
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
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
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x720) = 1;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F0844(); return; /* tail jmp 0x001F0844 */

}

/**
 * sub_001F083F
 * Original: 0x001F083F - 0x001F0844 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F083F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F083F: ;
    edx = 0x80151001u;

    g_seh_ebp = ebp; sub_001F0844(); return; /* fallthrough 0x001F0844 */

}

/**
 * sub_001F0844
 * Original: 0x001F0844 - 0x001F087F (59 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0844(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0844: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x28C;

loc_001F084C: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F085D; /* je: equal / zero */

loc_001F0851: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F084C; /* jl: less (signed <) */

loc_001F085A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F085D: ;
    eax = eax + eax * 4;
    MEM32(esi + eax * 4 + 0xE0) = edx;
    PUSH32(esp, MEM32(ebx + 0x410));
    ecx = esi;
    PUSH32(esp, 0x001F0874u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F0874: ;
    MEM32(ebx + 0x410) = edi;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001F087F
 * Original: 0x001F087F - 0x001F088B (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F087F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F087F: ;
    MEM32(ebx + 0x14) = 0x15;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001F088B
 * Original: 0x001F088B - 0x001F0912 (135 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F088B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F088B: ;
    edi = ebx + 0x410;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ecx;
    eax = ebx + 0x28C;

loc_001F089B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0912(); return; } /* je: equal / zero */

loc_001F08A0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F089B; /* jl: less (signed <) */

loc_001F08A9: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F08FF; /* je: equal / zero */

loc_001F08B5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F08FF; /* je: equal / zero */

loc_001F08BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2710);
    PUSH32(esp, eax);
    ecx = ebp + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA69E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = esi;
    MEM32(ebp + 0x7C) = 0x400;
    PUSH32(esp, 0x001F08E7u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F08E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F0906; /* jge: greater or equal (signed >=) */

loc_001F08EB: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax + eax * 4;
    MEM32(esi + eax * 4 + 0xE0) = 0x80151001u;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F08FF: ;
    MEM32(ebp + 0x68) = 1;

loc_001F0906: ;
    MEM32(ebx + 0x14) = 0x14;
    g_seh_ebp = ebp; sub_001F0A2B(); return; /* tail jmp 0x001F0A2B */

}

/**
 * sub_001F08AD
 * Original: 0x001F08AD - 0x001F0912 (101 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F08AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F08AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F08FF; /* je: equal / zero */

loc_001F08B5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F08FF; /* je: equal / zero */

loc_001F08BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2710);
    PUSH32(esp, eax);
    ecx = ebp + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA69E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = esi;
    MEM32(ebp + 0x7C) = 0x400;
    PUSH32(esp, 0x001F08E7u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F08E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F0906; /* jge: greater or equal (signed >=) */

loc_001F08EB: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax + eax * 4;
    MEM32(esi + eax * 4 + 0xE0) = 0x80151001u;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F08FF: ;
    MEM32(ebp + 0x68) = 1;

loc_001F0906: ;
    MEM32(ebx + 0x14) = 0x14;
    g_seh_ebp = ebp; sub_001F0A2B(); return; /* tail jmp 0x001F0A2B */

}

/**
 * sub_001F0912
 * Original: 0x001F0912 - 0x001F0917 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0912(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0912: ;
    MEM32(ebp + 0x6C) = ecx;
    g_seh_ebp = ebp; sub_001F08AD(); return; /* tail jmp 0x001F08AD */

}

/**
 * sub_001F0917
 * Original: 0x001F0917 - 0x001F0985 (110 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0917(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0917: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + 0x60) = edi;
    PUSH32(esp, 0x001F0926u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001F0926: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0D50(); return; } /* je: equal / zero */

loc_001F092D: ;
    eax = MEM32(ebx + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* je: equal / zero */

loc_001F093B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F0943u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F0943: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* je: equal / zero */

loc_001F094D: ;
    PUSH32(esp, MEM32(ebx + 0xB4));
    ecx = esi;
    PUSH32(esp, 0x001F095Au); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F095A: ;
    MEM32(ebx + 0xB4) = MEM32(ebx + 0xB4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0C26(); return; } /* jl: less (signed <) */

loc_001F0969: ;
    eax = MEM32(ebx + 0x30);
    eax = eax & 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x14) = 0x13;
    g_seh_ebp = ebp; sub_001EFB97(); return; /* tail jmp 0x001EFB97 */

}

/**
 * sub_001F0985
 * Original: 0x001F0985 - 0x001F09CD (72 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0985(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0985: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F098Eu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001F098E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F09D9(); return; } /* jne: not equal / not zero */

loc_001F0993: ;
    MEM8(ebx + 0x33) = MEM8(ebx + 0x33) | 0x30;
    _fa = (uint32_t)(MEM8(ebx + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x48), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0D79(); return; } /* jne: not equal / not zero */

loc_001F09A0: ;
    ecx = esi;
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 0x001F09AAu); RECOMP_ABI_CALL(0x001DFCAFu, sub_001DFCAF); /* call 0x001DFCAF */

loc_001F09AA: ;
    MEM32(ebp + 0x7C) = edi;

loc_001F09AD: ;
    eax = MEM32(ebp + 0x7C);
    eax = eax + eax * 8;
    eax = MEM32(esi + eax * 8 + 0x13E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F09C1; /* je: equal / zero */

loc_001F09BE: ;
    MEM32(eax + 8) = edi;

loc_001F09C1: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F09AD; /* jb: below (unsigned <) */

loc_001F09CA: ;
    MEM32(ebx + 0x40) = edi;

    g_seh_ebp = ebp; sub_001F09CD(); return; /* fallthrough 0x001F09CD */

}

/**
 * sub_001F09CD
 * Original: 0x001F09CD - 0x001F09D9 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F09CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F09CD: ;
    MEM32(ebx + 0x14) = 0xD;
    g_seh_ebp = ebp; sub_001EFB99(); return; /* tail jmp 0x001EFB99 */

}

/**
 * sub_001F09D9
 * Original: 0x001F09D9 - 0x001F0A1D (68 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F09D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F09D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F09E2: ;
    edi = MEM32(ebx + 0x30);
    eax = ebp + 0x50;
    edi = edi & 0xEFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edi = edi | 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(ebx + 0x30) = edi;
    PUSH32(esp, 0x001F0A01u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001F0A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0A1D(); return; } /* jl: less (signed <) */

loc_001F0A05: ;
    edi = edi & 0x3FFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x40000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = edi;
    MEM32(ebx + 0x14) = 0x11;
    g_seh_ebp = ebp; sub_001F0A24(); return; /* tail jmp 0x001F0A24 */

}

/**
 * sub_001F0A1D
 * Original: 0x001F0A1D - 0x001F0A24 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0A1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0A1D: ;
    MEM32(ebx + 0x14) = 0x13;

    g_seh_ebp = ebp; sub_001F0A24(); return; /* fallthrough 0x001F0A24 */

}

/**
 * sub_001F0A24
 * Original: 0x001F0A24 - 0x001F0A2B (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0A24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0A24: ;
    MEM32(ebp + 0x68) = 1;

    g_seh_ebp = ebp; sub_001F0A2B(); return; /* fallthrough 0x001F0A2B */

}

/**
 * sub_001F0A2B
 * Original: 0x001F0A2B - 0x001F0A3A (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0A2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0A2B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0026(); return; } /* je: equal / zero */

loc_001F0A35: ;
    g_seh_ebp = ebp; sub_001F00B0(); return; /* tail jmp 0x001F00B0 */

}

/**
 * sub_001F0A3A
 * Original: 0x001F0A3A - 0x001F0ABC (130 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0A3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0A3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0AE1(); return; } /* je: equal / zero */

loc_001F0A41: ;
    _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F0A4A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F0A56: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jl: less (signed <) */

loc_001F0A5F: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + 0x60) = edi;
    PUSH32(esp, 0x001F0A6Eu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001F0A6E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0D50(); return; } /* je: equal / zero */

loc_001F0A75: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F0A7E: ;
    eax = ebx + 0xB8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0AA3; /* jne: not equal / not zero */

loc_001F0A89: ;
    MEM32(eax) = edi;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0AA3; /* je: equal / zero */

loc_001F0A95: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0AA3; /* je: equal / zero */

loc_001F0A9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0AA3u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F0AA3: ;
    _fa = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xCC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0029(); return; } /* jne: not equal / not zero */

loc_001F0AAF: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F0AB7u); RECOMP_ABI_CALL(0x001E91E2u, sub_001E91E2); /* call 0x001E91E2 */

loc_001F0AB7: ;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0ABC
 * Original: 0x001F0ABC - 0x001F0AC9 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0ABC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0ABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0D8F(); return; } /* jl: less (signed <) */

loc_001F0AC4: ;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0AC9
 * Original: 0x001F0AC9 - 0x001F0AE1 (24 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0AC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0AC9: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F0ADCu); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001F0ADC: ;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0AE1
 * Original: 0x001F0AE1 - 0x001F0AFE (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0AE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0AE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + 0x68) = 0;
    edi = ebp + 0x69;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0x68);
    MEM32(ebp + 0x64) = ecx;
    MEM32(ebp + 0x6C) = ecx;
    eax = esi + 0xD8;

    g_seh_ebp = ebp; sub_001F0AFE(); return; /* fallthrough 0x001F0AFE */

}

/**
 * sub_001F0AFE
 * Original: 0x001F0AFE - 0x001F0B1C (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0AFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0AFE: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0B1C(); return; } /* jne: not equal / not zero */

loc_001F0B04: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0B35(); return; } /* jl: less (signed <) */

loc_001F0B0A: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = edx;
    g_seh_ebp = ebp; sub_001F0B29(); return; /* tail jmp 0x001F0B29 */

}

/**
 * sub_001F0B1C
 * Original: 0x001F0B1C - 0x001F0B29 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B1C: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0B29(); return; } /* jl: less (signed <) */

loc_001F0B22: ;
    MEM32(ebp + 0x64) = 1;

    g_seh_ebp = ebp; sub_001F0B29(); return; /* fallthrough 0x001F0B29 */

}

/**
 * sub_001F0B29
 * Original: 0x001F0B29 - 0x001F0B35 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B29: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0AFE(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001F0B35(); return; /* fallthrough 0x001F0B35 */

}

/**
 * sub_001F0B35
 * Original: 0x001F0B35 - 0x001F0B5A (37 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B35: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0B5A(); return; } /* je: equal / zero */

loc_001F0B39: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0B5A(); return; } /* je: equal / zero */

loc_001F0B3F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F0B48u); RECOMP_ABI_CALL(0x001DFF1Eu, sub_001DFF1E); /* call 0x001DFF1E */

loc_001F0B48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0B5A(); return; } /* jne: not equal / not zero */

loc_001F0B4D: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x001F0B55u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F0B55: ;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0B5A
 * Original: 0x001F0B5A - 0x001F0B9D (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B5A: ;
    eax = MEM32(ebp + 0x70);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC8) (32-bit) */
    edx = eax + 0x214;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x70);
    esi = ebx + 0xCC;
    edi = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFCFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1513F1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1513F1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x10) = ecx;
    POP32(esp, ecx);
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
    MEM32(eax + 0xD0) = edx;
    MEM32(ebx + 0x14) = 0x63;
    g_seh_ebp = ebp; sub_001F0026(); return; /* tail jmp 0x001F0026 */

}

/**
 * sub_001F0B9D
 * Original: 0x001F0B9D - 0x001F0BA9 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B9D: ;
    MEM32(ebx + 0x10) = 0x80150007u;
    g_seh_ebp = ebp; sub_001F0026(); return; /* tail jmp 0x001F0026 */

}

/**
 * sub_001F0BA9
 * Original: 0x001F0BA9 - 0x001F0BB9 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BA9: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 4;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x10) = 0x8015190Cu;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0BB9
 * Original: 0x001F0BB9 - 0x001F0BC5 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BB9: ;
    MEM32(ebx + 0x10) = 0x8015190Au;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0BC5
 * Original: 0x001F0BC5 - 0x001F0BD1 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BC5: ;
    MEM32(ebx + 0x10) = 0x80151908u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0BD1
 * Original: 0x001F0BD1 - 0x001F0BDD (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BD1: ;
    MEM32(ebx + 0x10) = 0x80151906u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0BDD
 * Original: 0x001F0BDD - 0x001F0BFB (30 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BDD: ;
    PUSH32(esp, 0x8043);
    PUSH32(esp, MEM32(ebx + 0x50));
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80151919u;
    PUSH32(esp, 0x001F0BF3u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F0BF3: ;
    MEM32(ebx + 0x50) = edi;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0BFB
 * Original: 0x001F0BFB - 0x001F0C0E (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0BFB: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 1;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x10) = 0x80151901u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0C0E
 * Original: 0x001F0C0E - 0x001F0C1A (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C0E: ;
    MEM32(ebx + 0x10) = 0x80151300u;
    g_seh_ebp = ebp; sub_001F0026(); return; /* tail jmp 0x001F0026 */

}

/**
 * sub_001F0C1A
 * Original: 0x001F0C1A - 0x001F0C26 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C1A: ;
    MEM32(ebx + 0x10) = 0x8015190Eu;
    g_seh_ebp = ebp; sub_001F0026(); return; /* tail jmp 0x001F0026 */

}

/**
 * sub_001F0C26
 * Original: 0x001F0C26 - 0x001F0C75 (79 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C26: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80152005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80152005u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0CD1(); return; } /* jne: not equal / not zero */

loc_001F0C32: ;
    ecx = esi;
    PUSH32(esp, 0x001F0C39u); RECOMP_ABI_CALL(0x001DFCAFu, sub_001DFCAF); /* call 0x001DFCAF */

loc_001F0C39: ;
    ecx = esi;
    PUSH32(esp, 0x001F0C40u); RECOMP_ABI_CALL(0x001EF4C7u, sub_001EF4C7); /* call 0x001EF4C7 */

loc_001F0C40: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0C81(); return; } /* jne: not equal / not zero */

loc_001F0C48: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0C4C: ;
    eax = MEM32(ebp + 0x7C);
    eax = eax + eax * 8;
    eax = MEM32(esi + eax * 8 + 0x13E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0C61; /* je: equal / zero */

loc_001F0C5D: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0C61: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0C4C; /* jb: below (unsigned <) */

loc_001F0C6A: ;
    MEM8(ebx + 0x33) = MEM8(ebx + 0x33) | 0xC0;
    _fa = (uint32_t)(MEM8(ebx + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x34) = 0x80152005u;

    g_seh_ebp = ebp; sub_001F0C75(); return; /* fallthrough 0x001F0C75 */

}

/**
 * sub_001F0C75
 * Original: 0x001F0C75 - 0x001F0C81 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C75: ;
    MEM32(ebx + 0x10) = 0x80151004u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0C81
 * Original: 0x001F0C81 - 0x001F0CC5 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x7C) = eax;

loc_001F0C86: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + ebx + 0x138);
    MEM32(ebx + eax * 4 + 0xBC) = ecx;
    eax = MEM32(ebp + 0x7C);
    ecx = eax + eax * 8;
    ecx = MEM32(esi + ecx * 8 + 0x13E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0CB1; /* je: equal / zero */

loc_001F0CAA: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x7C);

loc_001F0CB1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F0C86; /* jb: below (unsigned <) */

loc_001F0CBA: ;
    MEM8(ebx + 0x33) = MEM8(ebx + 0x33) | 0xC0;
    _fa = (uint32_t)(MEM8(ebx + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x34) = 0x80152005u;

    g_seh_ebp = ebp; sub_001F0CC5(); return; /* fallthrough 0x001F0CC5 */

}

/**
 * sub_001F0CC5
 * Original: 0x001F0CC5 - 0x001F0CD1 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0CC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0CC5: ;
    MEM32(ebx + 0x10) = 0x80151300u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0CD1
 * Original: 0x001F0CD1 - 0x001F0D38 (103 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0CD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0CD1: ;
    MEM8(ebx + 0x33) = MEM8(ebx + 0x33) | 0xC0;
    _fa = (uint32_t)(MEM8(ebx + 0x33)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x34) = edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0D38(); return; } /* jne: not equal / not zero */

loc_001F0CE0: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0CE4: ;
    eax = MEM32(ebp + 0x7C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + ebx + 0x138);
    MEM32(ebx + eax * 4 + 0xBC) = ecx;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0CE4; /* jb: below (unsigned <) */

loc_001F0D03: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80151300u;
    PUSH32(esp, 0x001F0D11u); RECOMP_ABI_CALL(0x001DFCAFu, sub_001DFCAF); /* call 0x001DFCAF */

loc_001F0D11: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0D15: ;
    eax = MEM32(ebp + 0x7C);
    eax = eax + eax * 8;
    eax = MEM32(esi + eax * 8 + 0x13E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0D2A; /* je: equal / zero */

loc_001F0D26: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F0D2A: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0D15; /* jb: below (unsigned <) */

loc_001F0D33: ;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0D38
 * Original: 0x001F0D38 - 0x001F0D50 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80152001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80152001u (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFF6F4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8015190Fu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8015190Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F0D8F(); return; /* tail jmp 0x001F0D8F */

}

/**
 * sub_001F0D50
 * Original: 0x001F0D50 - 0x001F0D79 (41 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D50: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0C75(); return; } /* jne: not equal / not zero */

loc_001F0D5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0C75(); return; } /* jne: not equal / not zero */

loc_001F0D66: ;
    ecx = esi;
    PUSH32(esp, 0x001F0D6Du); RECOMP_ABI_CALL(0x001EF4C7u, sub_001EF4C7); /* call 0x001EF4C7 */

loc_001F0D6D: ;
    MEM32(ebx + 0x10) = 0x80151005u;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0D79
 * Original: 0x001F0D79 - 0x001F0D8F (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC8) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x60E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80151300u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80151300u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001F0D8F(); return; /* fallthrough 0x001F0D8F */

}

/**
 * sub_001F0D8F
 * Original: 0x001F0D8F - 0x001F0D97 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D8F: ;
    MEM32(ebx + 0x10) = eax;
    g_seh_ebp = ebp; sub_001F0029(); return; /* tail jmp 0x001F0029 */

}

/**
 * sub_001F0D97
 * Original: 0x001F0D97 - 0x001F0DB4 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F0D97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0D97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0DB4(); return; } /* jne: not equal / not zero */

loc_001F0DAA: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F138F(); return; /* tail jmp 0x001F138F */

}

/**
 * sub_001F0DB4
 * Original: 0x001F0DB4 - 0x001F0DDE (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0DB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0DB4: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -32) = edi;
    MEM32(ebp + -28) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001F0DCEu); RECOMP_ABI_CALL(0x001048BDu, sub_001048BD); /* call 0x001048BD */

loc_001F0DCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0DDE(); return; } /* jne: not equal / not zero */

loc_001F0DD2: ;
    MEM32(ebp + 0xC) = 0x80151000u;
    g_seh_ebp = ebp; sub_001F134D(); return; /* tail jmp 0x001F134D */

}

/**
 * sub_001F0DDE
 * Original: 0x001F0DDE - 0x001F0E26 (72 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0DDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0DDE: ;
    ecx = esi;
    PUSH32(esp, 0x001F0DE5u); RECOMP_ABI_CALL(0x001E0085u, sub_001E0085); /* call 0x001E0085 */

loc_001F0DE5: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, 0x414);
    ecx = esi;
    PUSH32(esp, 0x001F0DF6u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F0DF6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + -20) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0E46(); return; } /* je: equal / zero */

loc_001F0DFF: ;
    edi = esi + 0xC8;
    MEM32(ebp + -36) = edi;
    eax = 0;
    ecx = MEM32(ebp + -36);
    edx = MEM32(ebp + -20);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0E26(); return; } /* je: equal / zero */

loc_001F0E1A: ;
    MEM32(ebp + 0xC) = 0x80150009u;
    g_seh_ebp = ebp; sub_001F134D(); return; /* tail jmp 0x001F134D */

}

/**
 * sub_001F0E26
 * Original: 0x001F0E26 - 0x001F0E46 (32 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0E26: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x8043);
    PUSH32(esp, 0x38F8);
    ecx = esi;
    MEM32(esi + 0xC4) = eax;
    PUSH32(esp, 0x001F0E3Fu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F0E3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x50) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0E52(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F0E46(); return; /* fallthrough 0x001F0E46 */

}

/**
 * sub_001F0E46
 * Original: 0x001F0E46 - 0x001F0E52 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0E46: ;
    MEM32(ebp + 0xC) = 0x80150008u;
    g_seh_ebp = ebp; sub_001F134D(); return; /* tail jmp 0x001F134D */

}

/**
 * sub_001F0E52
 * Original: 0x001F0E52 - 0x001F0E6A (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0E52: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0EFE(); return; } /* jle: less or equal (signed <=) */

loc_001F0E61: ;
    ecx = ebx + 0x28C;
    MEM32(ebp + -20) = ecx;

    g_seh_ebp = ebp; sub_001F0E6A(); return; /* fallthrough 0x001F0E6A */

}

/**
 * sub_001F0E6A
 * Original: 0x001F0E6A - 0x001F0EC2 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0E6A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F0E88; /* jle: less or equal (signed <=) */

loc_001F0E70: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + edx * 4);
    esi = ebx + 0x28C;

loc_001F0E7C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0E88; /* je: equal / zero */

loc_001F0E80: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0E7C; /* jl: less (signed <) */

loc_001F0E88: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0EED(); return; } /* jne: not equal / not zero */

loc_001F0E8C: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 0x14;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + edx * 4;
    esi = MEM32(ecx);
    MEM32(edi) = esi;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0EE6(); return; } /* je: equal / zero */

loc_001F0EA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0EDD(); return; } /* je: equal / zero */

loc_001F0EA9: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0ED4(); return; } /* je: equal / zero */

loc_001F0EAE: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0ECB(); return; } /* je: equal / zero */

loc_001F0EB3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F0EC2(); return; } /* je: equal / zero */

loc_001F0EB6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0EED(); return; } /* jne: not equal / not zero */

loc_001F0EB9: ;
    MEM32(ebp + -28) = 1;
    g_seh_ebp = ebp; sub_001F0EED(); return; /* tail jmp 0x001F0EED */

}

/**
 * sub_001F0EC2
 * Original: 0x001F0EC2 - 0x001F0ECB (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EC2: ;
    MEM32(ebp + -32) = 1;
    g_seh_ebp = ebp; sub_001F0EED(); return; /* tail jmp 0x001F0EED */

}

/**
 * sub_001F0ECB
 * Original: 0x001F0ECB - 0x001F0ED4 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0ECB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0ECB: ;
    MEM32(ebp + -8) = 1;
    g_seh_ebp = ebp; sub_001F0EED(); return; /* tail jmp 0x001F0EED */

}

/**
 * sub_001F0ED4
 * Original: 0x001F0ED4 - 0x001F0EDD (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0ED4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0ED4: ;
    MEM32(ebp + -16) = 1;
    g_seh_ebp = ebp; sub_001F0EED(); return; /* tail jmp 0x001F0EED */

}

/**
 * sub_001F0EDD
 * Original: 0x001F0EDD - 0x001F0EE6 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EDD: ;
    MEM32(ebp + -24) = 1;
    g_seh_ebp = ebp; sub_001F0EED(); return; /* tail jmp 0x001F0EED */

}

/**
 * sub_001F0EE6
 * Original: 0x001F0EE6 - 0x001F0EED (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EE6: ;
    MEM32(ebp + -12) = 1;

    g_seh_ebp = ebp; sub_001F0EED(); return; /* fallthrough 0x001F0EED */

}

/**
 * sub_001F0EED
 * Original: 0x001F0EED - 0x001F0EFE (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EED: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F0E6A(); return; } /* jl: less (signed <) */

loc_001F0EF7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F0F01(); return; /* tail jmp 0x001F0F01 */

}

/**
 * sub_001F0EFE
 * Original: 0x001F0EFE - 0x001F0F1E (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EFE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0F42(); return; } /* je: equal / zero */

loc_001F0F08: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F0F0A: ;
    edi = MEM32(ecx);
    edi = edi | MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0F1E(); return; } /* jne: not equal / not zero */

loc_001F0F11: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0F0A; /* jl: less (signed <) */

loc_001F0F1A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F0F42(); return; /* tail jmp 0x001F0F42 */

}

/**
 * sub_001F0F01
 * Original: 0x001F0F01 - 0x001F0F1E (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0F01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0F01: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0F42(); return; } /* je: equal / zero */

loc_001F0F08: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F0F0A: ;
    edi = MEM32(ecx);
    edi = edi | MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F0F1E(); return; } /* jne: not equal / not zero */

loc_001F0F11: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0F0A; /* jl: less (signed <) */

loc_001F0F1A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F0F42(); return; /* tail jmp 0x001F0F42 */

}

/**
 * sub_001F0F1E
 * Original: 0x001F0F1E - 0x001F0F42 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0F1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0F1E: ;
    ecx = eax + eax * 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    MEM32(ebx + ecx * 4 + 0x28C) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F0F42(); return; } /* jne: not equal / not zero */

loc_001F0F30: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 0x12;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = esi;

    g_seh_ebp = ebp; sub_001F0F42(); return; /* fallthrough 0x001F0F42 */

}

/**
 * sub_001F0F42
 * Original: 0x001F0F42 - 0x001F102A (232 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0F42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0F42: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0F5B; /* je: equal / zero */

loc_001F0F47: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F5B; /* jne: not equal / not zero */

loc_001F0F4C: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 0x14;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F0F5B: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0F77; /* je: equal / zero */

loc_001F0F60: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F77; /* jne: not equal / not zero */

loc_001F0F65: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = esi;

loc_001F0F77: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FA7; /* je: equal / zero */

loc_001F0F7C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F90; /* jne: not equal / not zero */

loc_001F0F81: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F0F90: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0FAC; /* jne: not equal / not zero */

loc_001F0F95: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 0xF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = esi;

loc_001F0FA7: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FBB; /* je: equal / zero */

loc_001F0FAC: ;
    ecx = eax + eax * 4;
    MEM32(ebx + ecx * 4 + 0x28C) = 0xE;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F0FBB: ;
    edx = eax + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1001; /* jle: less or equal (signed <=) */

loc_001F0FC2: ;
    MEM32(ebp + 0xC) = 1;
    ecx = ebx + 0x28C;
    MEM32(ebp + -32) = edx;

loc_001F0FD2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F0FF6; /* jge: greater or equal (signed >=) */

loc_001F0FD7: ;
    edx = eax;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 0x14;
    MEM32(ebp + 0x10) = edx;

loc_001F0FE2: ;
    edx = MEM32(ecx);
    edi = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F0FEE; /* jbe: below or equal (unsigned <=) */

loc_001F0FEA: ;
    MEM32(ecx) = edi;
    MEM32(esi) = edx;

loc_001F0FEE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F0FE2; /* jne: not equal / not zero */

loc_001F0FF6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F0FD2; /* jne: not equal / not zero */

loc_001F1001: ;
    PUSH32(esp, 0x10);
    eax = ebx + 0x298;
    POP32(esp, ecx);

loc_001F100A: ;
    MEM32(eax) = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F100A; /* jne: not equal / not zero */

loc_001F1016: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, 0x70);
    edi = ebx + 0xCC;
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F102A(); return; } /* je: equal / zero */

loc_001F1026: ;
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
    g_seh_ebp = ebp; sub_001F102E(); return; /* tail jmp 0x001F102E */

}

/**
 * sub_001F102A
 * Original: 0x001F102A - 0x001F102E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F102A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F102A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

    g_seh_ebp = ebp; sub_001F102E(); return; /* fallthrough 0x001F102E */

}

/**
 * sub_001F102E
 * Original: 0x001F102E - 0x001F1202 (468 bytes, 154 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F102E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F102E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx + 0xD4;

loc_001F1038: ;
    eax = MEM32(ecx + -8);
    edx = MEM32(ecx + -4);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F107E; /* je: equal / zero */

loc_001F1042: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F107E; /* je: equal / zero */

loc_001F1048: ;
    eax = eax | 0x30000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 0xD4;

loc_001F1057: ;
    esi = MEM32(eax + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F106C; /* jne: not equal / not zero */

loc_001F105F: ;
    esi = MEM32(eax + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F106C; /* jne: not equal / not zero */

loc_001F1067: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1075; /* je: equal / zero */

loc_001F106C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1057; /* jl: less (signed <) */

loc_001F1075: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1202(); return; } /* je: equal / zero */

loc_001F107E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    POP32(esp, edx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1038; /* jl: less (signed <) */

loc_001F108C: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x594) = MEM32(eax + 0x594) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx + 0xCC;
    MEM32(ebp + 8) = edx;

loc_001F109F: ;
    esi = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edi = esi;
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F10FE; /* je: equal / zero */

loc_001F10AA: ;
    edx = MEM32(eax + 0x594);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -36) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F10EC; /* jle: less or equal (signed <=) */

loc_001F10BB: ;
    edx = eax + 0x598;
    MEM32(ebp + 0x10) = edx;

loc_001F10C4: ;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F10D7; /* jne: not equal / not zero */

loc_001F10CF: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F10E9; /* je: equal / zero */

loc_001F10D7: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x594) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F10C4; /* jl: less (signed <) */

loc_001F10E9: ;
    edx = MEM32(ebp + -36);

loc_001F10EC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F10FE; /* jne: not equal / not zero */

loc_001F10F1: ;
    MEM32(eax + edx * 4 + 0x598) = ecx;
    MEM32(eax + 0x594) = MEM32(eax + 0x594) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F10FE: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F109F; /* jne: not equal / not zero */

loc_001F1106: ;
    ecx = MEM32(eax + 0x594);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1176; /* jle: less or equal (signed <=) */

loc_001F1111: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ecx;
    esi = eax + 0x598;

loc_001F111D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x594) (32-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001F1161; /* jge: greater or equal (signed >=) */

loc_001F1128: ;
    ecx = esi + 4;
    MEM32(ebp + 0x10) = ecx;

loc_001F112E: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(esi);
    ecx = MEM32(ecx);
    edi = MEM32(edx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F114C; /* jb: below (unsigned <) */

loc_001F113D: ;
    if (CMP_A(_fa, _fb)) goto loc_001F1145; /* ja: above (unsigned >) */

loc_001F113F: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F114C; /* jbe: below or equal (unsigned <=) */

loc_001F1145: ;
    MEM32(esi) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edx;

loc_001F114C: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x594) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F112E; /* jl: less (signed <) */

loc_001F115E: ;
    ecx = MEM32(ebp + 8);

loc_001F1161: ;
    edx = MEM32(eax + 0x594);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F111D; /* jl: less (signed <) */

loc_001F1176: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F1181u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F1181: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 0x9C;
    MEM32(ebx) = 0x1EF86A;
    MEM32(ebx + 4) = 0x1EF4F4;
    MEM32(ebx + 0x38) = edi;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F11BE; /* je: equal / zero */

loc_001F11B1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x3C) = ecx;
    MEM32(ebx + 0x40) = ecx;
    MEM32(ebx + 0x44) = edi;
    MEM32(eax) = ecx;

loc_001F11BE: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F11C7u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F11C7: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C19A15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x1C19A15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F11DF; /* ja: above (unsigned >) */

loc_001F11D0: ;
    if (CMP_B(_fa, _fb)) goto loc_001F11DB; /* jb: below (unsigned <) */

loc_001F11D2: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF088EA60u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0xF088EA60u (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F11DF; /* jae: above or equal (unsigned >=) */

loc_001F11DB: ;
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F11DF: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F120E(); return; } /* jne: not equal / not zero */

loc_001F11E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F11EFu); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001F11EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC0) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F120E(); return; } /* jne: not equal / not zero */

loc_001F11F9: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001F1331(); return; /* tail jmp 0x001F1331 */

}

/**
 * sub_001F1202
 * Original: 0x001F1202 - 0x001F120E (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1202(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1202: ;
    MEM32(ebp + 0xC) = 0x80150004u;
    g_seh_ebp = ebp; sub_001F134A(); return; /* tail jmp 0x001F134A */

}

/**
 * sub_001F120E
 * Original: 0x001F120E - 0x001F1255 (71 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F120E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F120E: ;
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebx + 0x14) = edi;
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1228; /* je: equal / zero */

loc_001F1223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F125B(); return; } /* jne: not equal / not zero */

loc_001F1228: ;
    eax = esi + 0x734;
    PUSH32(esp, eax);
    eax = esi + 0x730;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F1245u); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F1245: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F1255(); return; } /* jge: greater or equal (signed >=) */

loc_001F124C: ;
    ecx = esi;
    PUSH32(esp, 0x001F1253u); RECOMP_ABI_CALL(0x001ECC01u, sub_001ECC01); /* call 0x001ECC01 */

loc_001F1253: ;
    g_seh_ebp = ebp; sub_001F125B(); return; /* tail jmp 0x001F125B */

}

/**
 * sub_001F1255
 * Original: 0x001F1255 - 0x001F125B (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1255: ;
    MEM32(esi + 0x738) = edi;

    g_seh_ebp = ebp; sub_001F125B(); return; /* fallthrough 0x001F125B */

}

/**
 * sub_001F125B
 * Original: 0x001F125B - 0x001F1298 (61 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F125B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F125B: ;
    eax = MEM32(esi + 0xCB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F126A; /* je: equal / zero */

loc_001F1265: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F129E(); return; } /* jne: not equal / not zero */

loc_001F126A: ;
    eax = esi + 0xCAC;
    PUSH32(esp, eax);
    eax = esi + 0xCA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001F1288u); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F1288: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F1298(); return; } /* jge: greater or equal (signed >=) */

loc_001F128F: ;
    ecx = esi;
    PUSH32(esp, 0x001F1296u); RECOMP_ABI_CALL(0x001ECC3Eu, sub_001ECC3E); /* call 0x001ECC3E */

loc_001F1296: ;
    g_seh_ebp = ebp; sub_001F129E(); return; /* tail jmp 0x001F129E */

}

/**
 * sub_001F1298
 * Original: 0x001F1298 - 0x001F129E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1298(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1298: ;
    MEM32(esi + 0xCB0) = edi;

    g_seh_ebp = ebp; sub_001F129E(); return; /* fallthrough 0x001F129E */

}

/**
 * sub_001F129E
 * Original: 0x001F129E - 0x001F12B2 (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F129E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F129E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001F12AAu); RECOMP_ABI_CALL(0x001CEFCEu, sub_001CEFCE); /* call 0x001CEFCE */

loc_001F12AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x4C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F12D3(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F12B2(); return; /* fallthrough 0x001F12B2 */

}

/**
 * sub_001F12B2
 * Original: 0x001F12B2 - 0x001F12D3 (33 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F12B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F12B2: ;
    eax = MEM32(ebx + 0x30);
    eax = eax & 0xFFFF927Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x9200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = eax;
    PUSH32(esp, 0x001F12C7u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_001F12C7: ;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0xC) = 0x80150007u;
    g_seh_ebp = ebp; sub_001F1345(); return; /* tail jmp 0x001F1345 */

}

/**
 * sub_001F12D3
 * Original: 0x001F12D3 - 0x001F1331 (94 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F12D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F12D3: ;
    PUSH32(esp, 0x10);
    ecx = ebp + -60;
    MEM16(ebp + -60) = 2;
    MEM32(ebp + -56) = edi;
    MEM16(ebp + -58) = 0xE904;
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F12F1u); RECOMP_ABI_CALL(0x001CF02Eu, sub_001CF02E); /* call 0x001CF02E */

loc_001F12F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F12B2(); return; } /* jne: not equal / not zero */

loc_001F12F5: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebx + 0x4C));
    PUSH32(esp, 0x001F130Au); RECOMP_ABI_CALL(0x001CEFFAu, sub_001CEFFA); /* call 0x001CEFFA */

loc_001F130A: ;
    ecx = esi;
    PUSH32(esp, 0x001F1311u); RECOMP_ABI_CALL(0x001FA23Cu, sub_001FA23C); /* call 0x001FA23C */

loc_001F1311: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F1331(); return; } /* jl: less (signed <) */

loc_001F1315: ;
    eax = ebx + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0xCC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F132Du); RECOMP_ABI_CALL(0x001FD1E3u, sub_001FD1E3); /* call 0x001FD1E3 */

loc_001F132D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F133A(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F1331(); return; /* fallthrough 0x001F1331 */

}

/**
 * sub_001F1331
 * Original: 0x001F1331 - 0x001F133A (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1331(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1331: ;
    MEM32(ebp + 0xC) = 0x80150008u;
    g_seh_ebp = ebp; sub_001F134A(); return; /* tail jmp 0x001F134A */

}
