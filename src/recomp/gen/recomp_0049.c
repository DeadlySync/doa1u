/**
 * DOAU1 - Recompiled code chunk 49
 * Functions: 250 (0x00187973 - 0x0018B11B)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00187973
 * Original: 0x00187973 - 0x001879C9 (86 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187973(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187973: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001879A0; /* jne: not equal / not zero */

loc_0018797C: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00187989u); RECOMP_ABI_CALL(0x00168460u, sub_00168460); /* call 0x00168460 */

loc_00187989: ;
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x00187991u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00187991: ;
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

loc_001879A0: ;
    PUSH32(esp, MEM32(ebp + 8));
    _cf = 0; /* logical op clears CF */
    edi = edi | 0x70000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001879AEu); RECOMP_ABI_CALL(0x001683C0u, sub_001683C0); /* call 0x001683C0 */

loc_001879AE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001879BA; /* jne: not equal / not zero */

loc_001879B7: ;
    MEM32(ebp + 0x10) = esi;

loc_001879BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001879C9(); return; } /* jb: below (unsigned <) */

loc_001879BF: ;
    eax = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187ADA(); return; /* tail jmp 0x00187ADA */

}

/**
 * sub_001879C9
 * Original: 0x001879C9 - 0x001879F0 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001879C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001879C9: ;
    eax = edi;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001879E0; /* je: equal / zero */

loc_001879D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001879E7; /* jne: not equal / not zero */

loc_001879E0: ;
    MEM32(ebp + -16) = 1;

loc_001879E7: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = esi;
    ebx = 0x8007000Eu;

    g_seh_ebp = ebp; sub_001879F0(); return; /* fallthrough 0x001879F0 */

}

/**
 * sub_001879F0
 * Original: 0x001879F0 - 0x00187A23 (51 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001879F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001879F0: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001879FEu); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_001879FE: ;
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
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00187ABB(); return; } /* js: sign (negative) */

loc_00187A15: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187A9A(); return; } /* jae: above or equal (unsigned >=) */

loc_00187A21: ;
    g_seh_ebp = ebp; sub_00187A26(); return; /* tail jmp 0x00187A26 */

}

/**
 * sub_00187A23
 * Original: 0x00187A23 - 0x00187A26 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A23: ;
    eax = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_00187A26(); return; /* fallthrough 0x00187A26 */

}

/**
 * sub_00187A26
 * Original: 0x00187A26 - 0x00187A7E (88 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A26: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00187A32u); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_00187A32: ;
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
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00187ABB(); return; } /* js: sign (negative) */

loc_00187A45: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187A5Cu); RECOMP_ABI_CALL(0x0018759Au, sub_0018759A); /* call 0x0018759A */

loc_00187A5C: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00187ABB(); return; } /* jl: less (signed <) */

loc_00187A64: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187A7E(); return; } /* je: equal / zero */

loc_00187A69: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187A76; /* je: equal / zero */

loc_00187A6E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187A76u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187A76: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x14) = eax;
    g_seh_ebp = ebp; sub_00187A8B(); return; /* tail jmp 0x00187A8B */

}

/**
 * sub_00187A7E
 * Original: 0x00187A7E - 0x00187A8B (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A7E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187A8F(); return; } /* je: equal / zero */

loc_00187A83: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187A8Bu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

    g_seh_ebp = ebp; sub_00187A8B(); return; /* fallthrough 0x00187A8B */

}

/**
 * sub_00187A8B
 * Original: 0x00187A8B - 0x00187A8F (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A8B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00187A8F(); return; /* fallthrough 0x00187A8F */

}

/**
 * sub_00187A8F
 * Original: 0x00187A8F - 0x00187A9A (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A8F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00187A23(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_00187A9A(); return; /* fallthrough 0x00187A9A */

}

/**
 * sub_00187A9A
 * Original: 0x00187A9A - 0x00187ABB (33 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187A9A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187AAC; /* je: equal / zero */

loc_00187AA0: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187AA8u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187AA8: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00187AAC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001879F0(); return; } /* jb: below (unsigned <) */

loc_00187AB9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00187ABB(); return; /* fallthrough 0x00187ABB */

}

/**
 * sub_00187ABB
 * Original: 0x00187ABB - 0x00187ADA (31 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187ABB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187ABB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00187ACA; /* je: equal / zero */

loc_00187AC2: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187ACAu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187ACA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187AD8; /* je: equal / zero */

loc_00187AD0: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187AD8u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187AD8: ;
    eax = esi;

    g_seh_ebp = ebp; sub_00187ADA(); return; /* fallthrough 0x00187ADA */

}

/**
 * sub_00187ADA
 * Original: 0x00187ADA - 0x00187ADB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187ADA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187ADA: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00187ADB(); return; /* fallthrough 0x00187ADB */

}

/**
 * sub_00187ADB
 * Original: 0x00187ADB - 0x00187AE0 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187ADB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187ADB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00187AE0
 * Original: 0x00187AE0 - 0x00187C43 (355 bytes, 127 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00187AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00187AE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00187AFB; /* jne: not equal / not zero */

loc_00187AF1: ;
    eax = 0x8876086Cu;
    goto loc_00187C3D;

loc_00187AFB: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00187B26; /* jne: not equal / not zero */

loc_00187B04: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187B0Fu); RECOMP_ABI_CALL(0x001684D0u, sub_001684D0); /* call 0x001684D0 */

loc_00187B0F: ;
    PUSH32(esp, MEM32(ebp + -40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187B17u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00187B17: ;
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

loc_00187B26: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187B2Cu); RECOMP_ABI_CALL(0x001683C0u, sub_001683C0); /* call 0x001683C0 */

loc_00187B2C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00187B38; /* jne: not equal / not zero */

loc_00187B35: ;
    MEM32(ebp + 0x10) = ebx;

loc_00187B38: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00187B47; /* jb: below (unsigned <) */

loc_00187B3D: ;
    eax = 0x8876086Cu;
    goto loc_00187C3C;

loc_00187B47: ;
    eax = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00187B5E; /* je: equal / zero */

loc_00187B56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00187B65; /* jne: not equal / not zero */

loc_00187B5E: ;
    MEM32(ebp + -8) = 1;

loc_00187B65: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187B6Eu); RECOMP_ABI_CALL(0x001684E0u, sub_001684E0); /* call 0x001684E0 */

loc_00187B6E: ;
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
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00187C1E; /* js: sign (negative) */

loc_00187B8A: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x10) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00187C0C; /* jae: above or equal (unsigned >=) */

loc_00187B96: ;
    goto loc_00187B9B;

loc_00187B98: ;
    eax = MEM32(ebp + 0x10);

loc_00187B9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187BA4u); RECOMP_ABI_CALL(0x001684E0u, sub_001684E0); /* call 0x001684E0 */

loc_00187BA4: ;
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
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00187C1E; /* js: sign (negative) */

loc_00187BB7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187BCEu); RECOMP_ABI_CALL(0x001876C3u, sub_001876C3); /* call 0x001876C3 */

loc_00187BCE: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00187C1E; /* jl: less (signed <) */

loc_00187BD6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187BF0; /* je: equal / zero */

loc_00187BDB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187BE8; /* je: equal / zero */

loc_00187BE0: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187BE8u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187BE8: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x14) = eax;
    goto loc_00187BFD;

loc_00187BF0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187C01; /* je: equal / zero */

loc_00187BF5: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187BFDu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187BFD: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00187C01: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00187B98; /* jb: below (unsigned <) */

loc_00187C0C: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187C1E; /* je: equal / zero */

loc_00187C13: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C1Bu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187C1B: ;
    MEM32(ebp + 0x14) = esi;

loc_00187C1E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00187C2C; /* je: equal / zero */

loc_00187C24: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C2Cu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187C2C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00187C3A; /* je: equal / zero */

loc_00187C32: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C3Au); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187C3A: ;
    eax = esi;

loc_00187C3C: ;
    POP32(esp, edi);

loc_00187C3D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00187C43
 * Original: 0x00187C43 - 0x00187C93 (80 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00187C43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187C43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C51u); RECOMP_ABI_CALL(0x0018D086u, sub_0018D086); /* call 0x0018D086 */

loc_00187C51: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C5Eu); RECOMP_ABI_CALL(0x0018D090u, sub_0018D090); /* call 0x0018D090 */

loc_00187C5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00187C82; /* jl: less (signed <) */

loc_00187C62: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C82u); RECOMP_ABI_CALL(0x001874E4u, sub_001874E4); /* call 0x001874E4 */

loc_00187C82: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187C8Cu); RECOMP_ABI_CALL(0x0018D178u, sub_0018D178); /* call 0x0018D178 */

loc_00187C8C: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00187C93
 * Original: 0x00187C93 - 0x00187CB0 (29 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00187C93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187C93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00187CA6u); RECOMP_ABI_CALL(0x0018B4FFu, sub_0018B4FF); /* call 0x0018B4FF */

loc_00187CA6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187CB7(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00187CB0(); return; /* fallthrough 0x00187CB0 */

}

/**
 * sub_00187CB0
 * Original: 0x00187CB0 - 0x00187CB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CB0: ;
    esi = 0x8876086Cu;
    g_seh_ebp = ebp; sub_00187CDD(); return; /* tail jmp 0x00187CDD */

}

/**
 * sub_00187CB7
 * Original: 0x00187CB7 - 0x00187CDD (38 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CB7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187CB0(); return; } /* je: equal / zero */

loc_00187CBC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187CB0(); return; } /* je: equal / zero */

loc_00187CC1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187CB0(); return; } /* je: equal / zero */

loc_00187CC6: ;
    PUSH32(esp, MEM32(ebp + 0x38));
    ecx = ebp + -52;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x00187CD7u); RECOMP_ABI_CALL(0x0018CF3Cu, sub_0018CF3C); /* call 0x0018CF3C */

loc_00187CD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00187CEA(); return; } /* jge: greater or equal (signed >=) */

loc_00187CDB: ;
    esi = eax;

    g_seh_ebp = ebp; sub_00187CDD(); return; /* fallthrough 0x00187CDD */

}

/**
 * sub_00187CDD
 * Original: 0x00187CDD - 0x00187CEA (13 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CDD: ;
    ecx = ebp + -52;
    PUSH32(esp, 0x00187CE5u); RECOMP_ABI_CALL(0x0018B615u, sub_0018B615); /* call 0x0018B615 */

loc_00187CE5: ;
    g_seh_ebp = ebp; sub_00188027(); return; /* tail jmp 0x00188027 */

}

/**
 * sub_00187CEA
 * Original: 0x00187CEA - 0x00187CF6 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CEA: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = 1;
    g_seh_ebp = ebp; sub_00187CFC(); return; /* tail jmp 0x00187CFC */

}

/**
 * sub_00187CF6
 * Original: 0x00187CF6 - 0x00187CFC (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CF6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x28);

    g_seh_ebp = ebp; sub_00187CFC(); return; /* fallthrough 0x00187CFC */

}

/**
 * sub_00187CFC
 * Original: 0x00187CFC - 0x00187D59 (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187CFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187CF6(); return; } /* jne: not equal / not zero */

loc_00187D00: ;
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187D0E; /* je: equal / zero */

loc_00187D09: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187D14; /* jne: not equal / not zero */

loc_00187D0E: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + 0x14) = eax;

loc_00187D14: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187D1E; /* je: equal / zero */

loc_00187D19: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187D24; /* jne: not equal / not zero */

loc_00187D1E: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + 0x18) = eax;

loc_00187D24: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), edi (32-bit) */
    edx = MEM32(ebp + -52);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 2);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187D79(); return; } /* jne: not equal / not zero */

loc_00187D32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187D67(); return; } /* je: equal / zero */

loc_00187D36: ;
    eax = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00187D5E(); return; } /* je: equal / zero */

loc_00187D3C: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00187D59(); return; } /* je: equal / zero */

loc_00187D41: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00187D50; /* je: equal / zero */

loc_00187D45: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00187D50; /* je: equal / zero */

loc_00187D49: ;
    _fb = (uint32_t)(0x992) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x992;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00187D76(); return; } /* jne: not equal / not zero */

loc_00187D50: ;
    MEM32(ebp + 0x24) = 6;
    g_seh_ebp = ebp; sub_00187D79(); return; /* tail jmp 0x00187D79 */

}

/**
 * sub_00187D59
 * Original: 0x00187D59 - 0x00187D5E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187D59: ;
    MEM32(ebp + 0x24) = esi;
    g_seh_ebp = ebp; sub_00187D79(); return; /* tail jmp 0x00187D79 */

}

/**
 * sub_00187D5E
 * Original: 0x00187D5E - 0x00187D67 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187D5E: ;
    MEM32(ebp + 0x24) = 0x1A;
    g_seh_ebp = ebp; sub_00187D79(); return; /* tail jmp 0x00187D79 */

}

/**
 * sub_00187D67
 * Original: 0x00187D67 - 0x00187D76 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187D67: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x999) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x999 (32-bit) */
    MEM32(ebp + 0x24) = 7;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187D79(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00187D76(); return; /* fallthrough 0x00187D76 */

}

/**
 * sub_00187D76
 * Original: 0x00187D76 - 0x00187D79 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187D76: ;
    MEM32(ebp + 0x24) = edx;

    g_seh_ebp = ebp; sub_00187D79(); return; /* fallthrough 0x00187D79 */

}

/**
 * sub_00187D79
 * Original: 0x00187D79 - 0x00187E28 (175 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187D79: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00187D96; /* jne: not equal / not zero */

loc_00187D7E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00187D84u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00187D84: ;
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
    MEM32(ebp + 0x2C) = eax;

loc_00187D96: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00187DB1; /* jne: not equal / not zero */

loc_00187D9B: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00187DA1u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_00187DA1: ;
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
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x30) = eax;

loc_00187DB1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x2C), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187DCB; /* je: equal / zero */

loc_00187DB7: ;
    eax = MEM32(ebp + 0x30);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00187DCB; /* je: equal / zero */

loc_00187DC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00187DD2; /* jne: not equal / not zero */

loc_00187DCB: ;
    MEM32(ebp + 0xC) = 1;

loc_00187DD2: ;
    esi = MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187E28(); return; } /* je: equal / zero */

loc_00187DD9: ;
    eax = ZX8(MEM8(ebp + 0x36));
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x10) _cf = (int)(((edx) >> (32 - (0x10))) & 1);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebp + -1076;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;

loc_00187E01: ;
    edi = esi + ecx * 4;
    edi = MEM32(ebp + edi + -1076);
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + ecx * 4 + -1076) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00187E01; /* jb: below (unsigned <) */

loc_00187E21: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x34) = ebx;
    g_seh_ebp = ebp; sub_00187E39(); return; /* tail jmp 0x00187E39 */

}

/**
 * sub_00187E28
 * Original: 0x00187E28 - 0x00187E39 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187E28: ;
    edx = 0x100;
    eax = edi;
    ecx = edx;
    edi = ebp + -1076;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

    g_seh_ebp = ebp; sub_00187E39(); return; /* fallthrough 0x00187E39 */

}

/**
 * sub_00187E39
 * Original: 0x00187E39 - 0x00187E4C (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187E39: ;
    edi = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00187E4C(); return; } /* je: equal / zero */

loc_00187E40: ;
    ecx = edx;
    esi = ebp + -1076;
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
    g_seh_ebp = ebp; sub_00187E77(); return; /* tail jmp 0x00187E77 */

}

/**
 * sub_00187E4C
 * Original: 0x00187E4C - 0x00187E70 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187E4C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187E77(); return; } /* jne: not equal / not zero */

loc_00187E52: ;
    eax = MEM32(ebp + -24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x24) = 7;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00187E61: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187E70(); return; } /* jne: not equal / not zero */

loc_00187E66: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00187E61; /* jb: below (unsigned <) */

loc_00187E6E: ;
    g_seh_ebp = ebp; sub_00187E77(); return; /* tail jmp 0x00187E77 */

}

/**
 * sub_00187E70
 * Original: 0x00187E70 - 0x00187E77 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187E70: ;
    MEM32(ebp + 0x24) = 6;

    g_seh_ebp = ebp; sub_00187E77(); return; /* fallthrough 0x00187E77 */

}

/**
 * sub_00187E77
 * Original: 0x00187E77 - 0x00187F58 (225 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187E77: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00187E95u); RECOMP_ABI_CALL(0x00186FF5u, sub_00186FF5); /* call 0x00186FF5 */

loc_00187E95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018801E(); return; } /* jl: less (signed <) */

loc_00187E9F: ;
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00187EB7u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_00187EB7: ;
    esi = eax;
    MEM32(ebp + 0x18) = esi;
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
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00188010(); return; } /* js: sign (negative) */

loc_00187ED3: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = ebp + -52;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187F58(); return; } /* jbe: below or equal (unsigned <=) */

loc_00187EE0: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187F58(); return; } /* jae: above or equal (unsigned >=) */

loc_00187EE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x00187EF1u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00187EF1: ;
    esi = eax;
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
    MEM32(ebp + -4) = eax;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00188002(); return; } /* js: sign (negative) */

loc_00187F08: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    ecx = edi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, ecx);
    ecx = ebp + -1076;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00187F2Cu); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_00187F2C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00187F40; /* je: equal / zero */

loc_00187F34: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187F3Cu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187F3C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00187F40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00188002(); return; } /* jl: less (signed <) */

loc_00187F48: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187F58(); return; } /* jae: above or equal (unsigned >=) */

loc_00187F53: ;
    edi = MEM32(edi + 0x28);
    goto loc_00187EE0;

}

/**
 * sub_00187F58
 * Original: 0x00187F58 - 0x00187FD3 (123 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187F58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187F58: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187FD3(); return; } /* jne: not equal / not zero */

loc_00187F5E: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187FF5(); return; } /* jae: above or equal (unsigned >=) */

loc_00187F6A: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x00187F75u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00187F75: ;
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
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00188002(); return; } /* js: sign (negative) */

loc_00187F88: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    eax = edi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, eax);
    eax = ebp + -1076;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187FAEu); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_00187FAE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00187FC2; /* je: equal / zero */

loc_00187FB6: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00187FBEu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00187FBE: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00187FC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00188002(); return; } /* jl: less (signed <) */

loc_00187FC6: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00187F6A; /* jb: below (unsigned <) */

loc_00187FD1: ;
    g_seh_ebp = ebp; sub_00187FF5(); return; /* tail jmp 0x00187FF5 */

}

/**
 * sub_00187FD3
 * Original: 0x00187FD3 - 0x00187FF5 (34 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187FD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187FD3: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00187FF5(); return; } /* jae: above or equal (unsigned >=) */

loc_00187FDB: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = ebp + -1076;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x00187FEFu); RECOMP_ABI_CALL(0x00187808u, sub_00187808); /* call 0x00187808 */

loc_00187FEF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00188002(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00187FF5(); return; /* fallthrough 0x00187FF5 */

}

/**
 * sub_00187FF5
 * Original: 0x00187FF5 - 0x00188002 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187FF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187FF5: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(ebp + 0x18) = esi;

    g_seh_ebp = ebp; sub_00188002(); return; /* fallthrough 0x00188002 */

}

/**
 * sub_00188002
 * Original: 0x00188002 - 0x00188010 (14 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188002: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00188010(); return; } /* je: equal / zero */

loc_00188008: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00188010u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

    g_seh_ebp = ebp; sub_00188010(); return; /* fallthrough 0x00188010 */

}

/**
 * sub_00188010
 * Original: 0x00188010 - 0x0018801E (14 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188010: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018801E(); return; } /* je: equal / zero */

loc_00188016: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x0018801Eu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

    g_seh_ebp = ebp; sub_0018801E(); return; /* fallthrough 0x0018801E */

}

/**
 * sub_0018801E
 * Original: 0x0018801E - 0x00188027 (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018801E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018801E: ;
    ecx = ebp + -52;
    PUSH32(esp, 0x00188026u); RECOMP_ABI_CALL(0x0018B615u, sub_0018B615); /* call 0x0018B615 */

loc_00188026: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00188027(); return; /* fallthrough 0x00188027 */

}

/**
 * sub_00188027
 * Original: 0x00188027 - 0x0018802F (8 bytes, 5 insns)
 * CC: cdecl, 15 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188027(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188027: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 64; return; /* ret 60 */

}

/**
 * sub_0018802F
 * Original: 0x0018802F - 0x001883FA (971 bytes, 332 insns)
 * Category: game_render
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018802F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0018802F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x434));
    esp = esp - 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188042u); RECOMP_ABI_CALL(0x0018B4FFu, sub_0018B4FF); /* call 0x0018B4FF */

loc_00188042: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00188056; /* jne: not equal / not zero */

loc_0018804C: ;
    esi = 0x8876086Cu;
    goto loc_001883EA;

loc_00188056: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018804C; /* je: equal / zero */

loc_0018805B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018804C; /* je: equal / zero */

loc_00188060: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018804C; /* je: equal / zero */

loc_00188065: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    ecx = ebp + -52;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188076u); RECOMP_ABI_CALL(0x0018CF3Cu, sub_0018CF3C); /* call 0x0018CF3C */

loc_00188076: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00188081; /* jge: greater or equal (signed >=) */

loc_0018807A: ;
    esi = eax;
    goto loc_001883EA;

loc_00188081: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018809A; /* je: equal / zero */

loc_0018808D: ;
    eax = MEM32(eax + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018808D; /* jne: not equal / not zero */

loc_00188095: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001880A4; /* je: equal / zero */

loc_0018809A: ;
    esi = 0x80004005u;
    goto loc_001883EA;

loc_001880A4: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0xC) = edx;
    goto loc_001880B2;

loc_001880AC: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x28);

loc_001880B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001880AC; /* jne: not equal / not zero */

loc_001880B6: ;
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001880C4; /* je: equal / zero */

loc_001880BF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001880D4; /* jne: not equal / not zero */

loc_001880C4: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001880D4; /* jg: greater (signed >) */

loc_001880D1: ;
    MEM32(ebp + 0x14) = ecx;

loc_001880D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(ebp + -52);
    if (CMP_NE(_fa, _fb)) goto loc_001880F4; /* jne: not equal / not zero */

loc_001880DC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001880E2u); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_001880E2: ;
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
    MEM32(ebp + 0x28) = eax;

loc_001880F4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018810F; /* jne: not equal / not zero */

loc_001880F9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001880FFu); RECOMP_ABI_CALL(0x00186813u, sub_00186813); /* call 0x00186813 */

loc_001880FF: ;
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
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x2C) = eax;

loc_0018810F: ;
    eax = 0x70000;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x28), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00188137; /* je: equal / zero */

loc_00188123: ;
    eax = MEM32(ebp + 0x2C);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00188137; /* je: equal / zero */

loc_0018812F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x34) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0018813E; /* jne: not equal / not zero */

loc_00188137: ;
    MEM32(ebp + 0x34) = 1;

loc_0018813E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(ebp + 0x30);
    if (CMP_NE(_fa, _fb)) goto loc_00188177; /* jne: not equal / not zero */

loc_00188146: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00188174; /* je: equal / zero */

loc_0018814A: ;
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0018816B; /* je: equal / zero */

loc_00188150: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00188166; /* je: equal / zero */

loc_00188155: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0018815D; /* je: equal / zero */

loc_00188159: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00188174; /* jne: not equal / not zero */

loc_0018815D: ;
    MEM32(ebp + 0x20) = 6;
    goto loc_00188177;

loc_00188166: ;
    MEM32(ebp + 0x20) = edx;
    goto loc_00188177;

loc_0018816B: ;
    MEM32(ebp + 0x20) = 0x1A;
    goto loc_00188177;

loc_00188174: ;
    MEM32(ebp + 0x20) = esi;

loc_00188177: ;
    esi = MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001881CD; /* je: equal / zero */

loc_0018817E: ;
    eax = ZX8(MEM8(ebp + 0x32));
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x10) _cf = (int)(((edx) >> (32 - (0x10))) & 1);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebp + -1076;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;

loc_001881A6: ;
    edi = esi + ecx * 4;
    edi = MEM32(ebp + edi + -1076);
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + ecx * 4 + -1076) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001881A6; /* jb: below (unsigned <) */

loc_001881C6: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x30) = ebx;
    goto loc_001881DE;

loc_001881CD: ;
    edx = 0x100;
    eax = edi;
    ecx = edx;
    edi = ebp + -1076;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001881DE: ;
    edi = MEM32(ebp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001881F1; /* je: equal / zero */

loc_001881E5: ;
    ecx = edx;
    esi = ebp + -1076;
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
    goto loc_0018821C;

loc_001881F1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018821C; /* jne: not equal / not zero */

loc_001881F7: ;
    eax = MEM32(ebp + -24);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x20) = 7;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00188206: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00188215; /* jne: not equal / not zero */

loc_0018820B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00188206; /* jb: below (unsigned <) */

loc_00188213: ;
    goto loc_0018821C;

loc_00188215: ;
    MEM32(ebp + 0x20) = 6;

loc_0018821C: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188236u); RECOMP_ABI_CALL(0x0018722Eu, sub_0018722E); /* call 0x0018722E */

loc_00188236: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001883E9; /* jl: less (signed <) */

loc_00188240: ;
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188258u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_00188258: ;
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
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001883DB; /* js: sign (negative) */

loc_00188274: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -52;
    MEM32(ebp + 8) = eax;

loc_0018827E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(ebp + 8);
    if (CMP_BE(_fa, _fb)) goto loc_00188306; /* jbe: below or equal (unsigned <=) */

loc_0018828B: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00188306; /* jae: above or equal (unsigned >=) */

loc_00188293: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018829Fu); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_0018829F: ;
    esi = eax;
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
    MEM32(ebp + -4) = eax;
    if ((_fas < 0)) goto loc_001883CD; /* js: sign (negative) */

loc_001882B6: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = edi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, ecx);
    ecx = ebp + -1076;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001882DAu); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_001882DA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001883CD; /* jl: less (signed <) */

loc_001882E4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001882F6; /* je: equal / zero */

loc_001882EA: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001882F2u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001882F2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001882F6: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00188306; /* jae: above or equal (unsigned >=) */

loc_00188301: ;
    edi = MEM32(edi + 0x28);
    goto loc_0018828B;

loc_00188306: ;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00188382; /* jne: not equal / not zero */

loc_0018830C: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00188382; /* jae: above or equal (unsigned >=) */

loc_00188314: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188322u); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_00188322: ;
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
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001883CD; /* js: sign (negative) */

loc_00188339: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = edi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, eax);
    eax = ebp + -1076;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018835Fu); RECOMP_ABI_CALL(0x00186BEDu, sub_00186BED); /* call 0x00186BED */

loc_0018835F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001883CD; /* jl: less (signed <) */

loc_00188365: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00188377; /* je: equal / zero */

loc_0018836B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188373u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00188373: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00188377: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00188314; /* jb: below (unsigned <) */

loc_00188382: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + 8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0018827E; /* jb: below (unsigned <) */

loc_00188398: ;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001883C0; /* je: equal / zero */

loc_0018839E: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001883C0; /* jae: above or equal (unsigned >=) */

loc_001883A6: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = ebp + -1076;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001883BAu); RECOMP_ABI_CALL(0x0018795Bu, sub_0018795B); /* call 0x0018795B */

loc_001883BA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001883CD; /* jl: less (signed <) */

loc_001883C0: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x3C);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(ebp + 0x14) = esi;

loc_001883CD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001883DB; /* je: equal / zero */

loc_001883D3: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001883DBu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001883DB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001883E9; /* je: equal / zero */

loc_001883E1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001883E9u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001883E9: ;
    POP32(esp, edi);

loc_001883EA: ;
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001883F2u); RECOMP_ABI_CALL(0x0018B615u, sub_0018B615); /* call 0x0018B615 */

loc_001883F2: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_001883FA
 * Original: 0x001883FA - 0x0018845C (98 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001883FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001883FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188408u); RECOMP_ABI_CALL(0x0018D086u, sub_0018D086); /* call 0x0018D086 */

loc_00188408: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188415u); RECOMP_ABI_CALL(0x0018D090u, sub_0018D090); /* call 0x0018D090 */

loc_00188415: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018844B; /* jl: less (signed <) */

loc_00188419: ;
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018844Bu); RECOMP_ABI_CALL(0x00187C93u, sub_00187C93); /* call 0x00187C93 */

loc_0018844B: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188455u); RECOMP_ABI_CALL(0x0018D178u, sub_0018D178); /* call 0x0018D178 */

loc_00188455: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_0018845C
 * Original: 0x0018845C - 0x00188485 (41 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018845C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018845C: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x3C));
    PUSH32(esp, MEM32(esp + 0x3C));
    PUSH32(esp, MEM32(esp + 0x3C));
    PUSH32(esp, 0x00188482u); RECOMP_ABI_CALL(0x00187C93u, sub_00187C93); /* call 0x00187C93 */

loc_00188482: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00188485
 * Original: 0x00188485 - 0x001884E4 (95 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00188485(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188485: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188493u); RECOMP_ABI_CALL(0x0018D086u, sub_0018D086); /* call 0x0018D086 */

loc_00188493: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001884A0u); RECOMP_ABI_CALL(0x0018D090u, sub_0018D090); /* call 0x0018D090 */

loc_001884A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001884D3; /* jl: less (signed <) */

loc_001884A4: ;
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001884D3u); RECOMP_ABI_CALL(0x0018802Fu, sub_0018802F); /* call 0x0018802F */

loc_001884D3: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001884DDu); RECOMP_ABI_CALL(0x0018D178u, sub_0018D178); /* call 0x0018D178 */

loc_001884DD: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 56; return; /* ret 52 */

}

/**
 * sub_001884E4
 * Original: 0x001884E4 - 0x0018850C (40 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001884E4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001884E4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x38));
    PUSH32(esp, MEM32(esp + 0x38));
    PUSH32(esp, MEM32(esp + 0x38));
    PUSH32(esp, 0x00188509u); RECOMP_ABI_CALL(0x0018802Fu, sub_0018802F); /* call 0x0018802F */

loc_00188509: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0018850C
 * Original: 0x0018850C - 0x00188531 (37 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018850C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018850C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x38));
    PUSH32(esp, MEM32(esp + 0x38));
    PUSH32(esp, 0x0018852Eu); RECOMP_ABI_CALL(0x001883FAu, sub_001883FA); /* call 0x001883FA */

loc_0018852E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00188531
 * Original: 0x00188531 - 0x00188555 (36 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188531(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188531: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x34));
    PUSH32(esp, MEM32(esp + 0x34));
    PUSH32(esp, 0x00188552u); RECOMP_ABI_CALL(0x00188485u, sub_00188485); /* call 0x00188485 */

loc_00188552: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00188555
 * Original: 0x00188555 - 0x0018855F (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188555(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188555: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018855F
 * Original: 0x0018855F - 0x0018857D (30 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018855F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018855F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018856F; /* je: equal / zero */

loc_00188569: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018856Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018856Du); } /* indirect call */
    }

loc_0018856F: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018857C; /* je: equal / zero */

loc_00188576: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018857Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018857Au); } /* indirect call */
    }

loc_0018857C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00188587
 * Original: 0x00188587 - 0x001885C1 (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00188587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188587: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 0x103C);
    edx = edx | MEM32(esi + 0x1038);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x1034);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1030);
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 3 (8-bit) */
    MEM32(ebp + -16) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001885C1(); return; } /* je: equal / zero */

loc_001885B7: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00188707(); return; /* tail jmp 0x00188707 */

}

/**
 * sub_001885C1
 * Original: 0x001885C1 - 0x001885E2 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001885C1: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x103C);
    ebx = ebx | MEM32(edx + 0x1038);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | MEM32(edx + 0x1034);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | MEM32(edx + 0x1030);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001885EC(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001885E2(); return; /* fallthrough 0x001885E2 */

}

/**
 * sub_001885E2
 * Original: 0x001885E2 - 0x001885EC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001885E2: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00188706(); return; /* tail jmp 0x00188706 */

}

/**
 * sub_001885EC
 * Original: 0x001885EC - 0x00188607 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001885EC: ;
    edx = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00188607(); return; } /* je: equal / zero */

loc_001885F7: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001885FE; /* je: equal / zero */

loc_001885FB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001885E2(); return; } /* jne: not equal / not zero */

loc_001885FE: ;
    MEM32(ebp + -4) = 0x10;
    g_seh_ebp = ebp; sub_0018860E(); return; /* tail jmp 0x0018860E */

}

/**
 * sub_00188607
 * Original: 0x00188607 - 0x0018860E (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188607: ;
    MEM32(ebp + -4) = 8;

    g_seh_ebp = ebp; sub_0018860E(); return; /* fallthrough 0x0018860E */

}

/**
 * sub_0018860E
 * Original: 0x0018860E - 0x00188706 (248 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018860E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018860E: ;
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0x1050);
    ebx = MEM32(eax + 0x104C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(eax + 0x1040));
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 0x1034);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax + 0x1030);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + -4));
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x104C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1040));
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1058), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00188704; /* jbe: below or equal (unsigned <=) */

loc_0018868D: ;
    ecx = MEM32(ecx + 0x1054);

loc_00188693: ;
    esi = MEM32(ebp + -20);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = edx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001886E3; /* jbe: below or equal (unsigned <=) */

loc_001886A6: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = MEM32(eax + 4);
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ecx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 0x1048);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -16);
    ebx = MEM32(eax);
    _fb = (uint32_t)(MEM32(ebx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebx + 0x1048);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 0x1054);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001886A6; /* jb: below (unsigned <) */

loc_001886E3: ;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    ebx = MEM32(esi + 0x104C);
    _fb = (uint32_t)(MEM32(edi + 0x104C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(edi + 0x104C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00188693; /* jb: below (unsigned <) */

loc_00188704: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00188706(); return; /* fallthrough 0x00188706 */

}

/**
 * sub_00188706
 * Original: 0x00188706 - 0x00188707 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188706(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188706: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00188707(); return; /* fallthrough 0x00188707 */

}

/**
 * sub_00188707
 * Original: 0x00188707 - 0x0018870B (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188707(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188707: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018870B
 * Original: 0x0018870B - 0x00188711 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018870B(void)
{

loc_0018870B: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188711
 * Original: 0x00188711 - 0x00188873 (354 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188711(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188711: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x1054);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x28) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_0018886A; /* jae: above or equal (unsigned >=) */

loc_00188749: ;
    PUSH32(esp, ebp);
    ebp = 0xFFC03FC0u;

loc_0018874F: ;
    eax = MEM32(edx + 0x1048);
    edx = MEM32(edx + 0x1050);
    edx = ebx + edx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00188845; /* jae: above or equal (unsigned >=) */

loc_00188778: ;
    esi = MEM32(ebx + 4);
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx + ebx + -8388480;
    ecx = eax;
    ecx = ecx & 0xFF00FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edi;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edx;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ebp + 0x20002;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3FC03FC0;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF00FF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + edx + 0x800080;
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = eax;
    ebp = 0xFFC03FC0u;
    if (CMP_B(_fa, _fb)) goto loc_00188778; /* jb: below (unsigned <) */

loc_00188835: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x2C);

loc_00188845: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 0x1048);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x1048);
    ebx = ebx + eax * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0018874F; /* jb: below (unsigned <) */

loc_00188869: ;
    POP32(esp, ebp);

loc_0018886A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188873
 * Original: 0x00188873 - 0x0018898E (283 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188873(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188873: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x1054);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x1048));
    ebp = MEM32(eax + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x20) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00188986; /* jae: above or equal (unsigned >=) */

loc_001888AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_001888AC: ;
    esi = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebp + eax * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0018895F; /* jae: above or equal (unsigned >=) */

loc_001888D2: ;
    eax = MEM32(ebp);
    edi = MEM32(ebp + 4);
    ebx = MEM32(esi);
    edx = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx & 0xFF00FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebx;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edx;
    ebp = ebp & 0xFF00FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx + ebp + 0x20002;
    ecx = 0xFF00;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp & 0x3FC03FC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + edx + 0x200;
    eax = eax & 0x3FC00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp >> 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x20) (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_001888D2; /* jb: below (unsigned <) */

loc_0018894F: ;
    ecx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x28);

loc_0018895F: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 0x1048);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    esi = MEM32(eax + 0x1048);
    ebp = ebp + esi * 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_001888AC; /* jb: below (unsigned <) */

loc_00188984: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00188986: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018898E
 * Original: 0x0018898E - 0x00188AE0 (338 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018898E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018898E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    ebx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1054);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(eax + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_00188AD7; /* jae: above or equal (unsigned >=) */

loc_001889C6: ;
    edx = 0xF81F;
    PUSH32(esp, edi);

loc_001889CC: ;
    edi = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebx + eax * 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x28) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00188AB2; /* jae: above or equal (unsigned >=) */

loc_001889F5: ;
    ecx = ZX16(MEM16(ebx));
    esi = ZX16(MEM16(ebx + 2));
    eax = ZX16(MEM16(edi + 2));
    edi = ZX16(MEM16(edi));
    ebp = ecx;
    ebx = eax;
    SET_LO16(ebx, LO16(ebx) & LO16(edx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esp + 0x24) = ecx;
    ecx = ecx & 0xFFFF07E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi;
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi;
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ebx = ebx + ebp + 0x1002;
    ebp = eax;
    ebp = ebp & 0xFFFF07E0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = ecx & 0xFFFF07E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ecx = ecx & 0xFFFF07E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + ebp + 0x40;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x24);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x18);
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFFFF07E0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 0x1002;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebx);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001889F5; /* jb: below (unsigned <) */

loc_00188AA2: ;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x30);

loc_00188AB2: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edi = MEM32(eax + 0x1048);
    ebx = ebx + edi * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_001889CC; /* jb: below (unsigned <) */

loc_00188AD6: ;
    POP32(esp, edi);

loc_00188AD7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188AE0
 * Original: 0x00188AE0 - 0x00188B81 (161 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188AE0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x1054);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x1048));
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = edx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00188C00(); return; } /* jae: above or equal (unsigned >=) */

loc_00188B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7C1F;
    esi = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebp + eax * 2;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00188BD9(); return; } /* jae: above or equal (unsigned >=) */

loc_00188B44: ;
    ecx = ZX16(MEM16(ebp));
    edx = ZX16(MEM16(ebp + 2));
    eax = ZX16(MEM16(esi + 2));
    ebx = ZX16(MEM16(esi));
    ebp = eax;
    ebp = ebp & 0xFFFF03E0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = ecx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx + ebp + 0x40;
    ecx = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00188B81(); return; /* fallthrough 0x00188B81 */

}

/**
 * sub_00188B1E
 * Original: 0x00188B1E - 0x00188B81 (99 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B1E: ;
    esi = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebp + eax * 2;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00188BD9(); return; } /* jae: above or equal (unsigned >=) */

loc_00188B44: ;
    ecx = ZX16(MEM16(ebp));
    edx = ZX16(MEM16(ebp + 2));
    eax = ZX16(MEM16(esi + 2));
    ebx = ZX16(MEM16(esi));
    ebp = eax;
    ebp = ebp & 0xFFFF03E0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = ecx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx + ebp + 0x40;
    ecx = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00188B81(); return; /* fallthrough 0x00188B81 */

}

/**
 * sub_00188B44
 * Original: 0x00188B44 - 0x00188B81 (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B44: ;
    ecx = ZX16(MEM16(ebp));
    edx = ZX16(MEM16(ebp + 2));
    eax = ZX16(MEM16(esi + 2));
    ebx = ZX16(MEM16(esi));
    ebp = eax;
    ebp = ebp & 0xFFFF03E0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = ecx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 0xFFFF03E0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx + ebp + 0x40;
    ecx = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00188B81(); return; /* fallthrough 0x00188B81 */

}

/**
 * sub_00188B81
 * Original: 0x00188B81 - 0x00188BAC (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B81: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + edx + 0x802;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) & LO16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ebp = ebp >> 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp & 0xFFFF03E0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);

}

/**
 * sub_00188BA9
 * Original: 0x00188BA9 - 0x00188BD1 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188BA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188BA9: ;
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebp);
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188B44(); return; } /* jb: below (unsigned <) */

loc_00188BC9: ;
    ecx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x18);

    g_seh_ebp = ebp; sub_00188BD1(); return; /* fallthrough 0x00188BD1 */

}

/**
 * sub_00188BD1
 * Original: 0x00188BD1 - 0x00188C08 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188BD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188BD1: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    esi = MEM32(eax + 0x1048);
    ebp = ebp + esi * 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188B1E(); return; } /* jb: below (unsigned <) */

loc_00188BFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188BD9
 * Original: 0x00188BD9 - 0x00188C08 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188BD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188BD9: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    esi = MEM32(eax + 0x1048);
    ebp = ebp + esi * 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188B1E(); return; } /* jb: below (unsigned <) */

loc_00188BFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188C00
 * Original: 0x00188C00 - 0x00188C08 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C00: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188C08
 * Original: 0x00188C08 - 0x00188C26 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C08: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x1054);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x1048));

}

/**
 * sub_00188C21
 * Original: 0x00188C21 - 0x00188C4C (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C21: ;
    SET_LO8(edx, 0x48);
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00188D50(); return; } /* jae: above or equal (unsigned >=) */

loc_00188C40: ;
    eax = 0x83E0;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x1048);

}

/**
 * sub_00188C46
 * Original: 0x00188C46 - 0x00188C4C (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C46(void)
{

loc_00188C46: ;
    edi = MEM32(edx + 0x1048);

}

/**
 * sub_00188C49
 * Original: 0x00188C49 - 0x00188C72 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C49: ;
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x105092)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + 0x105092) = MEM8(ebx + 0x105092) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x105092)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -83668204)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + -83668204) = MEM8(ebp + -83668204) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -83668204)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x28) = edx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00188D2B(); return; } /* jae: above or equal (unsigned >=) */

loc_00188C6F: ;
    ecx = ZX16(MEM16(ebx));

}

/**
 * sub_00188C6F
 * Original: 0x00188C6F - 0x00188C72 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C6F(void)
{

loc_00188C6F: ;
    ecx = ZX16(MEM16(ebx));

}

/**
 * sub_00188C71
 * Original: 0x00188C71 - 0x00188C99 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C71: ;
    ecx = ecx | MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_HI8(ebx, 0x73);
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ebx, 0x57);
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ebx, 0x3F);
    ebp = ecx;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    ecx = ecx & 0x7C1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = esi;

    g_seh_ebp = ebp; sub_00188C99(); return; /* fallthrough 0x00188C99 */

}

/**
 * sub_00188C99
 * Original: 0x00188C99 - 0x00188CC5 (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188C99: ;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx + ebp + 0x10040;
    ebp = edx;
    ebp = ebp & 0x7C1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = ecx & 0x7C1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ecx = ecx & 0x7C1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ebp + 0x802;

}

/**
 * sub_00188CC1
 * Original: 0x00188CC1 - 0x00188CEE (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188CC1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188CC1: ;
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x24);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x18);
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFFFF7C1Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + esi + 0x10040;

}

/**
 * sub_00188CE9
 * Original: 0x00188CE9 - 0x00188D59 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188CE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188CE9: ;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(ebx);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188C6F(); return; } /* jb: below (unsigned <) */

loc_00188D1B: ;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x30);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(edx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 0x1048);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x1048);
    ebx = ebx + edi * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188C46(); return; } /* jb: below (unsigned <) */

loc_00188D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188D2B
 * Original: 0x00188D2B - 0x00188D59 (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188D2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188D2B: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(edx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 0x1048);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x1048);
    ebx = ebx + edi * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188C46(); return; } /* jb: below (unsigned <) */

loc_00188D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188D50
 * Original: 0x00188D50 - 0x00188D59 (9 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188D50: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188D59
 * Original: 0x00188D59 - 0x00188EAE (341 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188D59: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    ebx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1054);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(eax + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_00188EA5; /* jae: above or equal (unsigned >=) */

loc_00188D91: ;
    edx = 0xF0F0;
    PUSH32(esp, edi);

loc_00188D97: ;
    edi = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebx + eax * 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x28) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00188E80; /* jae: above or equal (unsigned >=) */

loc_00188DC0: ;
    ecx = ZX16(MEM16(ebx));
    esi = ZX16(MEM16(ebx + 2));
    eax = ZX16(MEM16(edi + 2));
    edi = ZX16(MEM16(edi));
    ebp = ecx;
    ebx = eax;
    SET_LO16(ebx, LO16(ebx) & LO16(edx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esp + 0x24) = ecx;
    ecx = ecx & 0xFFFF0F0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi;
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi;
    SET_LO16(ebp, LO16(ebp) & LO16(edx));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ebx = ebx + ebp + 0x2020;
    ebp = eax;
    ebp = ebp & 0xFFFF0F0Fu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = ecx & 0xFFFF0F0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ecx = ecx & 0xFFFF0F0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + ebp + 0x202;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x24);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x18);
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFFFF0F0Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 0x2020;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebx);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00188DC0; /* jb: below (unsigned <) */

loc_00188E70: ;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x30);

loc_00188E80: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edi = MEM32(eax + 0x1048);
    ebx = ebx + edi * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00188D97; /* jb: below (unsigned <) */

loc_00188EA4: ;
    POP32(esp, edi);

loc_00188EA5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188EAE
 * Original: 0x00188EAE - 0x00188EB4 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EAE(void)
{

loc_00188EAE: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188EB4
 * Original: 0x00188EB4 - 0x00188EDC (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00188EB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188EB4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1054);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(eax + 0x1048));
    MEM32(ebp + -16) = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00188F42(); return; /* tail jmp 0x00188F42 */

}

/**
 * sub_00188EDC
 * Original: 0x00188EDC - 0x00188F42 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188EDC: ;
    edx = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_00188F2E; /* jae: above or equal (unsigned >=) */

loc_00188EF6: ;
    ecx = ZX8(MEM8(edx + 1));
    ebx = MEM32(ebp + -4);
    ebx = ZX8(MEM8(ebx + 1));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -4);
    ebx = ZX8(MEM8(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ebx + 2;
    ebx = MEM32(ebp + -8);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    MEM8(ebx) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_00188EF6; /* jb: below (unsigned <) */

loc_00188F28: ;
    ebx = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);

loc_00188F2E: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x1048);
    esi = esi + edx * 2;

    g_seh_ebp = ebp; sub_00188F42(); return; /* fallthrough 0x00188F42 */

}

/**
 * sub_00188F42
 * Original: 0x00188F42 - 0x00188F50 (14 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188F42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00188EDC(); return; } /* jb: below (unsigned <) */

loc_00188F49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00188F50
 * Original: 0x00188F50 - 0x00188F56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F50(void)
{

loc_00188F50: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188F56
 * Original: 0x00188F56 - 0x00188F5C (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F56(void)
{

loc_00188F56: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188F5C
 * Original: 0x00188F5C - 0x00188F62 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F5C(void)
{

loc_00188F5C: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188F62
 * Original: 0x00188F62 - 0x00188F68 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F62(void)
{

loc_00188F62: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00188F68
 * Original: 0x00188F68 - 0x001890B5 (333 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188F68: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    ebx = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1054);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(eax + 0x1048));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x2C) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_001890AC; /* jae: above or equal (unsigned >=) */

loc_00188FA0: ;
    PUSH32(esp, esi);
    esi = 0xFF00;

loc_00188FA6: ;
    edx = MEM32(eax + 0x1048);
    eax = MEM32(eax + 0x1050);
    eax = ebx + eax * 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00189087; /* jae: above or equal (unsigned >=) */

loc_00188FCF: ;
    eax = ZX16(MEM16(edx + 2));
    ebp = ZX16(MEM16(edx));
    edx = ZX16(MEM16(ebx));
    edi = ZX16(MEM16(ebx + 2));
    MEM32(esp + 0x14) = edx;
    ebx = eax;
    ecx = 0xFF;
    SET_LO16(edx, LO16(edx) & LO16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ebx, LO16(ebx) & LO16(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp;
    SET_LO16(edx, LO16(edx) & LO16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    SET_LO16(edx, LO16(edx) & LO16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & LO16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebx + edx + 2;
    ebx = MEM32(esp + 0x14);
    SET_LO16(ebx, LO16(ebx) & LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp;
    SET_LO16(ebx, LO16(ebx) & LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ebp = ebp & esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi;
    SET_LO16(ebx, LO16(ebx) & LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ebx + 0x200;
    ebx = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x14);
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edi + 0x200;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFFF00FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edx);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00188FCF; /* jb: below (unsigned <) */

loc_00189077: ;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x30);

loc_00189087: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(eax + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 0x1048);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x1048);
    ebx = ebx + edx * 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00188FA6; /* jb: below (unsigned <) */

loc_001890AB: ;
    POP32(esp, esi);

loc_001890AC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001890B5
 * Original: 0x001890B5 - 0x001890BB (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001890B5(void)
{

loc_001890B5: ;
    eax = 0x80004001u;
    esp += 4; return; /* ret */

}

/**
 * sub_001890DB
 * Original: 0x001890DB - 0x00189107 (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001890DB(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001890DB: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189107
 * Original: 0x00189107 - 0x00189133 (44 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00189107(void)
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

loc_00189107: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001891B8
 * Original: 0x001891B8 - 0x001891D9 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001891B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001891B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001891D9(); return; } /* je: equal / zero */

loc_001891CF: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001892E4(); return; /* tail jmp 0x001892E4 */

}

/**
 * sub_001891D9
 * Original: 0x001891D9 - 0x001891EB (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001891D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001891D9: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001891EB(); return; } /* je: equal / zero */

loc_001891E1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001892E3(); return; /* tail jmp 0x001892E3 */

}

/**
 * sub_001891EB
 * Original: 0x001891EB - 0x00189234 (73 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001891EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001891EB: ;
    edx = MEM32(ebx + 0x1050);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x1050) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001892DD(); return; } /* jne: not equal / not zero */

loc_001891FE: ;
    esi = MEM32(ebx + 0x1054);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x1054) (32-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001892DD(); return; } /* jne: not equal / not zero */

loc_00189213: ;
    edx = MEM32(ebx + 0x1058);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x1058) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001892DD(); return; } /* jne: not equal / not zero */

loc_00189225: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189234(); return; } /* jne: not equal / not zero */

loc_0018922A: ;
    PUSH32(esp, 0x0018922Fu); RECOMP_ABI_CALL(0x00188587u, sub_00188587); /* call 0x00188587 */

loc_0018922F: ;
    g_seh_ebp = ebp; sub_001892E2(); return; /* tail jmp 0x001892E2 */

}

/**
 * sub_00189234
 * Original: 0x00189234 - 0x001892DD (169 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189234(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189234: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189255; /* je: equal / zero */

loc_00189239: ;
    esi = ebx + 0x30;
    edi = eax + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189255; /* je: equal / zero */

loc_00189243: ;
    ecx = 0x100;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001892DD(); return; } /* jne: not equal / not zero */

loc_00189252: ;
    ecx = MEM32(ebp + -12);

loc_00189255: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001892D9; /* jbe: below or equal (unsigned <=) */

loc_0018925D: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x104C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x104C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    esi = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001892C8; /* jbe: below or equal (unsigned <=) */

loc_00189288: ;
    ecx = MEM32(ebx + 0x105C);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    ecx = MEM32(ebp + -12);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ecx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x1048);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx + 0x1048)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x1048);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x1054);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00189288; /* jb: below (unsigned <) */

loc_001892C5: ;
    ecx = MEM32(ebp + -12);

loc_001892C8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ecx + 4);
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018925D; /* jb: below (unsigned <) */

loc_001892D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001892E2(); return; /* tail jmp 0x001892E2 */

}

/**
 * sub_001892DD
 * Original: 0x001892DD - 0x001892E2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001892DD: ;
    eax = 0x80004005u;

    g_seh_ebp = ebp; sub_001892E2(); return; /* fallthrough 0x001892E2 */

}

/**
 * sub_001892E2
 * Original: 0x001892E2 - 0x001892E3 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001892E2: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001892E3(); return; /* fallthrough 0x001892E3 */

}

/**
 * sub_001892E3
 * Original: 0x001892E3 - 0x001892E4 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001892E3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001892E4(); return; /* fallthrough 0x001892E4 */

}

/**
 * sub_001892E4
 * Original: 0x001892E4 - 0x001892E7 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001892E4: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001892E7
 * Original: 0x001892E7 - 0x0018934D (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001892E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001892E7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1050);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x1050) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001893AC(); return; } /* jne: not equal / not zero */

loc_00189303: ;
    edx = MEM32(eax + 0x1054);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1054) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001893AC(); return; } /* jne: not equal / not zero */

loc_00189315: ;
    eax = MEM32(eax + 0x1058);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1058) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001893AC(); return; } /* jne: not equal / not zero */

loc_00189327: ;
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189337u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189337: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018934D(); return; } /* je: equal / zero */

loc_0018933D: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018934Bu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018934B: ;
    g_seh_ebp = ebp; sub_0018934F(); return; /* tail jmp 0x0018934F */

}

/**
 * sub_0018934D
 * Original: 0x0018934D - 0x0018934F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018934D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018934D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0018934F(); return; /* fallthrough 0x0018934F */

}

/**
 * sub_0018934F
 * Original: 0x0018934F - 0x001893AC (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018934F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018934F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001893AC(); return; } /* je: equal / zero */

loc_00189353: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1058), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018939C; /* jbe: below or equal (unsigned <=) */

loc_00189361: ;
    eax = MEM32(eax + 0x1054);

loc_00189367: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189390; /* jbe: below or equal (unsigned <=) */

loc_0018936D: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00189377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189374u); } /* indirect call */
    }

loc_00189377: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189382u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018937Fu); } /* indirect call */
    }

loc_00189382: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x1054);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018936D; /* jb: below (unsigned <) */

loc_00189390: ;
    ecx = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189367; /* jb: below (unsigned <) */

loc_0018939C: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001893A7u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001893A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001893B1(); return; /* tail jmp 0x001893B1 */

}

/**
 * sub_001893AC
 * Original: 0x001893AC - 0x001893B5 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001893AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001893AC: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001893B1
 * Original: 0x001893B1 - 0x001893B5 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001893B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001893B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001893B5
 * Original: 0x001893B5 - 0x001893CE (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001893B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001893B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001893CE(); return; } /* je: equal / zero */

loc_001893C4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0018958C(); return; /* tail jmp 0x0018958C */

}

/**
 * sub_001893CE
 * Original: 0x001893CE - 0x00189448 (122 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001893CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001893CE: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    edx = MEM32(eax + 0x1050);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1050);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001893EA; /* ja: above (unsigned >) */

loc_001893E7: ;
    MEM32(ebp + -8) = edi;

loc_001893EA: ;
    edx = MEM32(eax + 0x1054);
    edi = MEM32(ecx + 0x1054);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00189400; /* jb: below (unsigned <) */

loc_001893FD: ;
    MEM32(ebp + -16) = edi;

loc_00189400: ;
    eax = MEM32(eax + 0x1058);
    ecx = MEM32(ecx + 0x1058);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00189416; /* jb: below (unsigned <) */

loc_00189413: ;
    MEM32(ebp + -12) = ecx;

loc_00189416: ;
    edi = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24810000);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00189428u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    ebx = 0x658F0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189448(); return; } /* je: equal / zero */

loc_00189434: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189440u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189440: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0018944C(); return; /* tail jmp 0x0018944C */

}

/**
 * sub_00189448
 * Original: 0x00189448 - 0x0018944C (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189448(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189448: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018944C(); return; /* fallthrough 0x0018944C */

}

/**
 * sub_0018944C
 * Original: 0x0018944C - 0x0018945C (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018944C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018944C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018945C(); return; } /* jne: not equal / not zero */

loc_00189452: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0018958A(); return; /* tail jmp 0x0018958A */

}

/**
 * sub_00189452
 * Original: 0x00189452 - 0x0018945C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189452: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0018958A(); return; /* tail jmp 0x0018958A */

}

/**
 * sub_0018945C
 * Original: 0x0018945C - 0x00189491 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018945C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018945C: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x1050);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189476u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189476: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189491(); return; } /* je: equal / zero */

loc_0018947D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189489u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189489: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_00189495(); return; /* tail jmp 0x00189495 */

}

/**
 * sub_00189491
 * Original: 0x00189491 - 0x00189495 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189491(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189491: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189495(); return; /* fallthrough 0x00189495 */

}

/**
 * sub_00189495
 * Original: 0x00189495 - 0x001894AB (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189495(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189495: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001894AB(); return; } /* jne: not equal / not zero */

loc_0018949C: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001894A9u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001894A9: ;
    g_seh_ebp = ebp; sub_00189452(); return; /* tail jmp 0x00189452 */

}

/**
 * sub_001894AB
 * Original: 0x001894AB - 0x001894E4 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001894AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001894AB: ;
    ecx = edi;
    edi = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x1050);
    edi = MEM32(ebp + -8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018952E(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001894E4(); return; /* fallthrough 0x001894E4 */

}

/**
 * sub_001894E4
 * Original: 0x001894E4 - 0x0018950F (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001894E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001894E4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018950A; /* jbe: below or equal (unsigned <=) */

loc_001894EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001894F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001894F4u); } /* indirect call */
    }

loc_001894F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189501u); } /* indirect call */
    }

loc_00189504: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001894EB; /* jb: below (unsigned <) */

loc_0018950A: ;
    edi = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0018951D(); return; /* tail jmp 0x0018951D */

}

/**
 * sub_0018950F
 * Original: 0x0018950F - 0x0018951D (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018950F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018950F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018951Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189519u); } /* indirect call */
    }

loc_0018951C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0018951D(); return; /* fallthrough 0x0018951D */

}

/**
 * sub_0018951D
 * Original: 0x0018951D - 0x0018952E (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018951D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018951D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x1054) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018950F(); return; } /* jb: below (unsigned <) */

loc_00189528: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001894E4(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0018952E(); return; /* fallthrough 0x0018952E */

}

/**
 * sub_0018952E
 * Original: 0x0018952E - 0x0018958A (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018952E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018952E: ;
    ebx = MEM32(ebp + -12);
    eax = MEM32(esi + 4);
    ecx = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1058) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00189571; /* jae: above or equal (unsigned >=) */

loc_0018953E: ;
    eax = MEM32(eax + 0x1054);

loc_00189544: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189565; /* jbe: below or equal (unsigned <=) */

loc_0018954A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189554u); } /* indirect call */
    }

loc_00189557: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x1054);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018954A; /* jb: below (unsigned <) */

loc_00189565: ;
    ecx = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189544; /* jb: below (unsigned <) */

loc_00189571: ;
    esi = 0x24810000;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0018957Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018957F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00189588u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189588: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0018958A(); return; /* fallthrough 0x0018958A */

}

/**
 * sub_0018958A
 * Original: 0x0018958A - 0x0018958C (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018958A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018958A: ;
    POP32(esp, ebx);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0018958C(); return; /* fallthrough 0x0018958C */

}

/**
 * sub_0018958C
 * Original: 0x0018958C - 0x0018958F (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018958C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018958C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018958F
 * Original: 0x0018958F - 0x001895A8 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018958F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018958F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001895A8(); return; } /* je: equal / zero */

loc_0018959E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00189779(); return; /* tail jmp 0x00189779 */

}

/**
 * sub_001895A8
 * Original: 0x001895A8 - 0x001895E0 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001895A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001895A8: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1050);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001895C2u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_001895C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    edi = 0x658F0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001895E0(); return; } /* je: equal / zero */

loc_001895CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001895D8u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001895D8: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001895E4(); return; /* tail jmp 0x001895E4 */

}

/**
 * sub_001895E0
 * Original: 0x001895E0 - 0x001895E4 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001895E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001895E0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001895E4(); return; /* fallthrough 0x001895E4 */

}

/**
 * sub_001895E4
 * Original: 0x001895E4 - 0x0018961C (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001895E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001895E4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189633(); return; } /* je: equal / zero */

loc_001895EA: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(eax + 0x1050);
    eax = esi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189603u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018961C(); return; } /* je: equal / zero */

loc_0018960A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189614u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189614: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_00189620(); return; /* tail jmp 0x00189620 */

}

/**
 * sub_0018961C
 * Original: 0x0018961C - 0x00189620 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018961C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018961C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189620(); return; /* fallthrough 0x00189620 */

}

/**
 * sub_00189620
 * Original: 0x00189620 - 0x00189633 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189620: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018963D(); return; } /* jne: not equal / not zero */

loc_00189626: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00189633u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

    g_seh_ebp = ebp; sub_00189633(); return; /* fallthrough 0x00189633 */

}

/**
 * sub_00189633
 * Original: 0x00189633 - 0x0018963D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189633: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00189777(); return; /* tail jmp 0x00189777 */

}

/**
 * sub_0018963D
 * Original: 0x0018963D - 0x00189777 (314 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018963D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018963D: ;
    ecx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x1050);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x1050));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x1050)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ecx + 0x1054);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x1054));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x1054)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -44) = eax;
    eax = MEM32(ecx + 0x1058);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x1058));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x1058)); }
    MEM32(ebp + -48) = eax;
    eax = esi;
    _fa = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1058), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018975E; /* jbe: below or equal (unsigned <=) */

loc_00189694: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), edi (32-bit) */
    MEM32(ebp + -36) = esi;
    MEM32(ebp + -12) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00189743; /* jbe: below or equal (unsigned <=) */

loc_001896AC: ;
    eax = MEM32(ebp + -32);
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001896D8; /* je: equal / zero */

loc_001896BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = esi;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001896D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001896D2u); } /* indirect call */
    }

loc_001896D5: ;
    MEM32(ebp + -32) = esi;

loc_001896D8: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189714; /* jbe: below or equal (unsigned <=) */

loc_001896E3: ;
    eax = MEM32(ebp + -8);

loc_001896E6: ;
    esi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -24);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1050) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001896E6; /* jb: below (unsigned <) */

loc_00189712: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00189714: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebx + 4);
    PUSH32(esp, MEM32(ebp + -16));
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189722u); } /* indirect call */
    }

loc_00189725: ;
    esi = MEM32(ebp + -36);
    _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1054) (32-bit) */
    MEM32(ebp + -36) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001896AC; /* jb: below (unsigned <) */

loc_00189743: ;
    eax = MEM32(ebp + -48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -28) = MEM32(ebp + -28) + eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189694; /* jb: below (unsigned <) */

loc_0018975E: ;
    esi = 0x24810000;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0018976Cu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018976C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x00189775u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189775: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00189777(); return; /* fallthrough 0x00189777 */

}

/**
 * sub_00189777
 * Original: 0x00189777 - 0x00189779 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189777(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189777: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00189779(); return; /* fallthrough 0x00189779 */

}

/**
 * sub_00189779
 * Original: 0x00189779 - 0x0018977C (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189779(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189779: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018977C
 * Original: 0x0018977C - 0x00189795 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018977C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018977C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189795(); return; } /* je: equal / zero */

loc_0018978B: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00189ACE(); return; /* tail jmp 0x00189ACE */

}

/**
 * sub_00189795
 * Original: 0x00189795 - 0x0018985D (200 bytes, 60 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189795(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189795: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897A6: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897B1: ;
    edx = MEM32(eax + 0x1050);
    ecx = MEM32(edi + 0x1050);
    MEM32(ebp + -24) = edx;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001897D7; /* je: equal / zero */

loc_001897C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897CE: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897D7: ;
    edx = MEM32(eax + 0x1054);
    ecx = MEM32(edi + 0x1054);
    MEM32(ebp + -20) = edx;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001897FD; /* je: equal / zero */

loc_001897EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897F4: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_001897FD: ;
    _fa = (uint32_t)(MEM32(edi + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1058), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_00189809: ;
    _fa = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1058), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189AC7(); return; } /* jne: not equal / not zero */

loc_00189815: ;
    _fa = (uint32_t)(MEM8(ebx + 0xA)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jne: not equal / not zero */

loc_0018981F: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jne: not equal / not zero */

loc_0018982B: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jb: below (unsigned <) */

loc_00189835: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jb: below (unsigned <) */

loc_0018983B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018988A(); return; } /* jg: greater (signed >) */

loc_00189840: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189881(); return; } /* je: equal / zero */

loc_00189842: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00189878(); return; } /* je: equal / zero */

loc_00189847: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0018986F(); return; } /* je: equal / zero */

loc_0018984B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00189866(); return; } /* je: equal / zero */

loc_0018984E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0018985D(); return; } /* je: equal / zero */

loc_00189851: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jne: not equal / not zero */

loc_00189854: ;
    ecx = ebx;
    PUSH32(esp, 0x0018985Bu); RECOMP_ABI_CALL(0x0018898Eu, sub_0018898E); /* call 0x0018898E */

loc_0018985B: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_0018985D
 * Original: 0x0018985D - 0x00189866 (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018985D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018985D: ;
    ecx = ebx;
    PUSH32(esp, 0x00189864u); RECOMP_ABI_CALL(0x00188D59u, sub_00188D59); /* call 0x00188D59 */

loc_00189864: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_00189866
 * Original: 0x00189866 - 0x0018986F (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189866(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189866: ;
    ecx = ebx;
    PUSH32(esp, 0x0018986Du); RECOMP_ABI_CALL(0x00188AE0u, sub_00188AE0); /* call 0x00188AE0 */

loc_0018986D: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_0018986F
 * Original: 0x0018986F - 0x00189878 (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018986F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018986F: ;
    ecx = ebx;
    PUSH32(esp, 0x00189876u); RECOMP_ABI_CALL(0x00188C08u, sub_00188C08); /* call 0x00188C08 */

loc_00189876: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_00189878
 * Original: 0x00189878 - 0x00189881 (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189878(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189878: ;
    ecx = ebx;
    PUSH32(esp, 0x0018987Fu); RECOMP_ABI_CALL(0x00188EB4u, sub_00188EB4); /* call 0x00188EB4 */

loc_0018987F: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_00189881
 * Original: 0x00189881 - 0x0018988A (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189881(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189881: ;
    ecx = ebx;
    PUSH32(esp, 0x00189888u); RECOMP_ABI_CALL(0x00188711u, sub_00188711); /* call 0x00188711 */

loc_00189888: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_0018988A
 * Original: 0x0018988A - 0x001898A5 (27 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018988A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018988A: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001898A5(); return; } /* je: equal / zero */

loc_0018988F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* je: equal / zero */

loc_00189894: ;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00189878(); return; } /* je: equal / zero */

loc_00189899: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jne: not equal / not zero */

loc_0018989C: ;
    ecx = ebx;
    PUSH32(esp, 0x001898A3u); RECOMP_ABI_CALL(0x00188F68u, sub_00188F68); /* call 0x00188F68 */

loc_001898A3: ;
    g_seh_ebp = ebp; sub_001898AC(); return; /* tail jmp 0x001898AC */

}

/**
 * sub_001898A5
 * Original: 0x001898A5 - 0x001898AC (7 bytes, 2 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898A5: ;
    ecx = ebx;
    PUSH32(esp, 0x001898ACu); RECOMP_ABI_CALL(0x00188873u, sub_00188873); /* call 0x00188873 */

    g_seh_ebp = ebp; sub_001898AC(); return; /* fallthrough 0x001898AC */

}

/**
 * sub_001898AC
 * Original: 0x001898AC - 0x001898B7 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001898B7(); return; } /* jl: less (signed <) */

loc_001898B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00189ACC(); return; /* tail jmp 0x00189ACC */

}

/**
 * sub_001898B7
 * Original: 0x001898B7 - 0x001898F2 (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898B7: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + 0x1050);
    MEM32(ebp + -32) = eax;
    esi = 0x24810000;
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001898D2u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_001898D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    edi = 0x658F0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001898F2(); return; } /* je: equal / zero */

loc_001898DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001898EAu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001898EA: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_001898F6(); return; /* tail jmp 0x001898F6 */

}

/**
 * sub_001898F2
 * Original: 0x001898F2 - 0x001898F6 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898F2: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001898F6(); return; /* fallthrough 0x001898F6 */

}

/**
 * sub_001898F6
 * Original: 0x001898F6 - 0x00189906 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898F6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189906(); return; } /* jne: not equal / not zero */

loc_001898FC: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00189ACC(); return; /* tail jmp 0x00189ACC */

}

/**
 * sub_00189906
 * Original: 0x00189906 - 0x0018993F (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189906(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189906: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189948(); return; } /* jne: not equal / not zero */

loc_00189911: ;
    eax = MEM32(eax + 0x1050);
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189924u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018993F(); return; } /* je: equal / zero */

loc_0018992B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189937u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189937: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_00189943(); return; /* tail jmp 0x00189943 */

}

/**
 * sub_0018993F
 * Original: 0x0018993F - 0x00189943 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018993F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018993F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189943(); return; /* fallthrough 0x00189943 */

}

/**
 * sub_00189943
 * Original: 0x00189943 - 0x00189948 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189943(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189943: ;
    eax = MEM32(ebp + -4);
    g_seh_ebp = ebp; sub_00189990(); return; /* tail jmp 0x00189990 */

}

/**
 * sub_00189948
 * Original: 0x00189948 - 0x00189979 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189948(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189948: ;
    esi = MEM32(eax + 0x1050);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189960u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189979(); return; } /* je: equal / zero */

loc_00189967: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189971u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189971: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0018997D(); return; /* tail jmp 0x0018997D */

}

/**
 * sub_00189979
 * Original: 0x00189979 - 0x0018997D (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189979(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189979: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018997D(); return; /* fallthrough 0x0018997D */

}

/**
 * sub_0018997D
 * Original: 0x0018997D - 0x00189990 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018997D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018997D: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x1050);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x24810000;

    g_seh_ebp = ebp; sub_00189990(); return; /* fallthrough 0x00189990 */

}

/**
 * sub_00189990
 * Original: 0x00189990 - 0x001899A4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189990: ;
    edi = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001899A4(); return; } /* jne: not equal / not zero */

loc_0018999A: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00189ABA(); return; /* tail jmp 0x00189ABA */

}

/**
 * sub_001899A4
 * Original: 0x001899A4 - 0x001899B7 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001899A4: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001899B7(); return; } /* jne: not equal / not zero */

loc_001899AF: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -32) = edi;
    g_seh_ebp = ebp; sub_001899C3(); return; /* tail jmp 0x001899C3 */

}

/**
 * sub_001899B7
 * Original: 0x001899B7 - 0x001899C3 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001899B7: ;
    eax = edi + 0x10;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001899C3(); return; /* fallthrough 0x001899C3 */

}

/**
 * sub_001899C3
 * Original: 0x001899C3 - 0x00189ABA (247 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899C3(void)
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

loc_001899C3: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189AB1; /* jbe: below or equal (unsigned <=) */

loc_001899DA: ;
    esi = MEM32(ebp + -12);
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001899EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001899E7u); } /* indirect call */
    }

loc_001899EA: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001899FD; /* je: equal / zero */

loc_001899EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001899FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001899FAu); } /* indirect call */
    }

loc_001899FD: ;
    eax = MEM32(ebx + 4);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189A84; /* jbe: below or equal (unsigned <=) */

loc_00189A0D: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;

loc_00189A13: ;
    eax = MEM32(ebp + -20);
    fp_push(MEMF(0x22C26C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp + -48;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -64;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -80;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -96;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189A51u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189A51: ;
    ecx = eax;
    PUSH32(esp, 0x00189A58u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189A58: ;
    ecx = eax;
    PUSH32(esp, 0x00189A5Fu); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189A5F: ;
    ecx = eax;
    PUSH32(esp, 0x00189A66u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_00189A66: ;
    edi = MEM32(ebp + -24);
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1050) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189A13; /* jb: below (unsigned <) */

loc_00189A84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189A91u); } /* indirect call */
    }

loc_00189A94: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1054) (32-bit) */
    edi = MEM32(ebp + -4);
    if (CMP_B(_fa, _fb)) goto loc_001899DA; /* jb: below (unsigned <) */

loc_00189AAC: ;
    esi = 0x24810000;

loc_00189AB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00189AB8u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189AB8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00189ABA(); return; /* fallthrough 0x00189ABA */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189ABA
 * Original: 0x00189ABA - 0x00189AC7 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189ABA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189ABA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00189AC3u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189AC3: ;
    eax = edi;
    g_seh_ebp = ebp; sub_00189ACC(); return; /* tail jmp 0x00189ACC */

}

/**
 * sub_00189AC7
 * Original: 0x00189AC7 - 0x00189ACE (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189AC7: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00189ACE(); return; /* fallthrough 0x00189ACE */

}

/**
 * sub_00189ACC
 * Original: 0x00189ACC - 0x00189ACE (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189ACC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189ACC: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00189ACE(); return; /* fallthrough 0x00189ACE */

}

/**
 * sub_00189ACE
 * Original: 0x00189ACE - 0x00189AD1 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189ACE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00189AD1
 * Original: 0x00189AD1 - 0x00189B95 (196 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00189AD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189AD1: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 5 (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0x44) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189AEE: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189AFB: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B07: ;
    edi = MEM32(eax + 0x1050);
    edx = MEM32(ecx + 0x1050);
    ebx = edi;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00189B2F; /* je: equal / zero */

loc_00189B1E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B27: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B2F: ;
    edi = MEM32(eax + 0x1054);
    edx = MEM32(ecx + 0x1054);
    ebx = edi;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189B54; /* je: equal / zero */

loc_00189B43: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B54: ;
    eax = MEM32(eax + 0x1058);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1058), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189E4E(); return; } /* jne: not equal / not zero */

loc_00189B68: ;
    eax = MEM32(ebp + 0x68);
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189B79u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189B79: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = 0x658F0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189B95(); return; } /* je: equal / zero */

loc_00189B84: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00189B90u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189B90: ;
    MEM32(ebp + 0x64) = ebx;
    g_seh_ebp = ebp; sub_00189B99(); return; /* tail jmp 0x00189B99 */

}

/**
 * sub_00189B95
 * Original: 0x00189B95 - 0x00189B99 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189B95: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189B99(); return; /* fallthrough 0x00189B99 */

}

/**
 * sub_00189B99
 * Original: 0x00189B99 - 0x00189BA9 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189B99: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189BA9(); return; } /* jne: not equal / not zero */

loc_00189B9F: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00189E53(); return; /* tail jmp 0x00189E53 */

}

/**
 * sub_00189BA9
 * Original: 0x00189BA9 - 0x00189BE5 (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189BA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189BA9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), 1 (32-bit) */
    ebx = MEM32(eax + 0x1050);
    PUSH32(esp, 0x24810000);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189C05(); return; } /* jne: not equal / not zero */

loc_00189BBF: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189BCCu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189BCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x6C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189BE5(); return; } /* je: equal / zero */

loc_00189BD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189BDDu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189BDD: ;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + 0x74) = eax;
    g_seh_ebp = ebp; sub_00189BE9(); return; /* tail jmp 0x00189BE9 */

}

/**
 * sub_00189BE5
 * Original: 0x00189BE5 - 0x00189BE9 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189BE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189BE5: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189BE9(); return; /* fallthrough 0x00189BE9 */

}

/**
 * sub_00189BE9
 * Original: 0x00189BE9 - 0x00189C05 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189BE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189BE9: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x1050) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1050;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ecx);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x54) = edx;
    g_seh_ebp = ebp; sub_00189C5E(); return; /* tail jmp 0x00189C5E */

}

/**
 * sub_00189C05
 * Original: 0x00189C05 - 0x00189C2C (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C05: ;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189C13u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189C13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x6C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00189C2C(); return; } /* je: equal / zero */

loc_00189C1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189C24u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_00189C24: ;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + 0x74) = eax;
    g_seh_ebp = ebp; sub_00189C30(); return; /* tail jmp 0x00189C30 */

}

/**
 * sub_00189C2C
 * Original: 0x00189C2C - 0x00189C30 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C2C: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00189C30(); return; /* fallthrough 0x00189C30 */

}

/**
 * sub_00189C30
 * Original: 0x00189C30 - 0x00189C5E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C30: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x1050) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1050;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    ebx = eax;
    edx = eax;
    eax = eax + eax * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x74);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + 0x74);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = edx;
    MEM32(ebp + 0x54) = eax;
    edx = eax;
    eax = MEM32(ebp + 0x60);

    g_seh_ebp = ebp; sub_00189C5E(); return; /* fallthrough 0x00189C5E */

}

/**
 * sub_00189C5E
 * Original: 0x00189C5E - 0x00189C6F (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C5E: ;
    edi = MEM32(ebp + 0x74);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189C6F(); return; } /* jne: not equal / not zero */

loc_00189C65: ;
    esi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00189E3D(); return; /* tail jmp 0x00189E3D */

}

/**
 * sub_00189C6F
 * Original: 0x00189C6F - 0x00189C7C (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C6F: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00189C7C(); return; } /* jne: not equal / not zero */

loc_00189C74: ;
    MEM32(ebp + 0x6C) = edi;
    MEM32(ebp + 0x50) = ebx;
    g_seh_ebp = ebp; sub_00189C8E(); return; /* tail jmp 0x00189C8E */

}

/**
 * sub_00189C7C
 * Original: 0x00189C7C - 0x00189C8E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C7C: ;
    ecx = edi + 0x10;
    MEM32(ebp + 0x6C) = ecx;
    ecx = ebx + 0x10;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x50) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00189C8E(); return; /* fallthrough 0x00189C8E */

}

/**
 * sub_00189C8E
 * Original: 0x00189C8E - 0x00189E3D (431 bytes, 157 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C8E(void)
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

loc_00189C8E: ;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1058), 0 (32-bit) */
    MEM32(ebp + 0x48) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00189E30; /* jbe: below or equal (unsigned <=) */

loc_00189CA8: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189E18; /* jbe: below or equal (unsigned <=) */

loc_00189CB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    edi = MEM32(ebp + 0x5C);
    eax = MEM32(ebp + 0x70);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00189CCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189CCCu); } /* indirect call */
    }

loc_00189CCF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189CE6; /* je: equal / zero */

loc_00189CD4: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00189CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189CE3u); } /* indirect call */
    }

loc_00189CE6: ;
    eax = MEM32(ebp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189CFE; /* je: equal / zero */

loc_00189CEE: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00189CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189CFBu); } /* indirect call */
    }

loc_00189CFE: ;
    eax = MEM32(ebp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D1B; /* je: equal / zero */

loc_00189D05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D1B; /* je: equal / zero */

loc_00189D0A: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00189D1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189D18u); } /* indirect call */
    }

loc_00189D1B: ;
    eax = MEM32(esi + 4);
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00189DF2; /* jbe: below or equal (unsigned <=) */

loc_00189D2F: ;
    eax = MEM32(ebp + 0x64);
    MEM32(ebp + 0x68) = eax;

loc_00189D35: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C2FC)); /* fld float */
    eax = MEM32(ebp + 0x58);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp + -44;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + 4;
    PUSH32(esp, ecx);
    ecx = eax + ebx;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -60;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x74);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189D99u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189D99: ;
    ecx = eax;
    PUSH32(esp, 0x00189DA0u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DA0: ;
    ecx = eax;
    PUSH32(esp, 0x00189DA7u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DA7: ;
    ecx = eax;
    PUSH32(esp, 0x00189DAEu); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DAE: ;
    ecx = eax;
    PUSH32(esp, 0x00189DB5u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DB5: ;
    ecx = eax;
    PUSH32(esp, 0x00189DBCu); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DBC: ;
    ecx = eax;
    PUSH32(esp, 0x00189DC3u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_00189DC3: ;
    ecx = eax;
    PUSH32(esp, 0x00189DCAu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_00189DCA: ;
    edi = MEM32(ebp + 0x68);
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x58);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1050) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189D35; /* jb: below (unsigned <) */

loc_00189DEF: ;
    esi = MEM32(ebp + 0x44);

loc_00189DF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x64));
    ecx = MEM32(esi + 4);
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + 0x70));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189E03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E00u); } /* indirect call */
    }

loc_00189E03: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1054) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189CB9; /* jb: below (unsigned <) */

loc_00189E18: ;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1058) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189CA8; /* jb: below (unsigned <) */

loc_00189E2D: ;
    edi = MEM32(ebp + 0x74);

loc_00189E30: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00189E3Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189E3B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00189E3D(); return; /* fallthrough 0x00189E3D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189E3D
 * Original: 0x00189E3D - 0x00189E4E (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E3D: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x00189E4Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00189E4A: ;
    eax = esi;
    g_seh_ebp = ebp; sub_00189E53(); return; /* tail jmp 0x00189E53 */

}

/**
 * sub_00189E4E
 * Original: 0x00189E4E - 0x00189E5B (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E4E: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00189E53
 * Original: 0x00189E53 - 0x00189E5B (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00189E5B
 * Original: 0x00189E5B - 0x00189F5F (260 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00189E5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00189E5B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x24810000);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189E72u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00189E72: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189F5C; /* je: equal / zero */

loc_00189E7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = edi;
    fp_push((double)SMEM32(ebp + -20)); /* fild */
    MEM32(ebp + -24) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00189E8F; /* jge: greater or equal (signed >=) */

loc_00189E89: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00189E8F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = ebx;
    fp_push((double)SMEM32(ebp + -20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00189E9F; /* jge: greater or equal (signed >=) */

loc_00189E99: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00189E9F: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(ebp + -4) = g_fp_control_word; /* fnstcw word ptr [ebp - 4] */
    eax = MEM32(ebp + -4);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xC00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -12) = eax;
    g_fp_control_word = MEM16(ebp + -12); /* fldcw word ptr [ebp - 0xc] */
    eax = MEM32(ebp + -4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x96FBC4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00189F4E; /* jbe: below or equal (unsigned <=) */

loc_00189EC9: ;
    eax = MEM32(ebp + -4);
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00189ED9; /* jge: greater or equal (signed >=) */

loc_00189ED3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00189ED9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    MEMF(ebp + -8) = (float)fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189EEFu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_00189EEF: ;
    POP32(esp, ecx);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    fp_push(MEMF(ebp + -12)); /* fld float */
    SMEM32(ebp + -20) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = eax + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_00189F10; /* jge: greater or equal (signed >=) */

loc_00189F04: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edi + -1;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00189F10: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00189F22; /* jb: below (unsigned <) */

loc_00189F14: ;
    ecx = MEM32(ebp + 8);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = edi + -1;
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00189F22: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEM32(esi) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    MEM32(esi + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    MEMF(esi + -12) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_B(_fa, _fb)) goto loc_00189EC9; /* jb: below (unsigned <) */

loc_00189F4E: ;
    eax = MEM32(0x96FBC4);
    MEM32(ebp + -20) = eax;
    g_fp_control_word = MEM16(ebp + -20); /* fldcw word ptr [ebp - 0x14] */
    eax = MEM32(ebp + -24);

loc_00189F5C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189F5F
 * Original: 0x00189F5F - 0x0018A02E (207 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00189F5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189F5F: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0x44) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A278(); return; } /* jne: not equal / not zero */

loc_00189F89: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A278(); return; } /* jne: not equal / not zero */

loc_00189F94: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A278(); return; } /* jne: not equal / not zero */

loc_00189F9F: ;
    edi = MEM32(edi + 0x1050);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(edx + 0x1050);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x68) = eax;
    PUSH32(esp, 0x00189FC4u); RECOMP_ABI_CALL(0x00189E5Bu, sub_00189E5B); /* call 0x00189E5B */

loc_00189FC4: ;
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    edi = MEM32(ecx + 0x1054);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(esi + 4);
    ebx = MEM32(eax + 0x1054);
    PUSH32(esp, 0x00189FE0u); RECOMP_ABI_CALL(0x00189E5Bu, sub_00189E5B); /* call 0x00189E5B */

loc_00189FE0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A230(); return; } /* je: equal / zero */

loc_00189FEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A230(); return; } /* je: equal / zero */

loc_00189FF7: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0x1050);
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A010u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018A010: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x74) = eax;
    ebx = 0x658F0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A02E(); return; } /* je: equal / zero */

loc_0018A01C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A026u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018A026: ;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x70) = eax;
    g_seh_ebp = ebp; sub_0018A032(); return; /* tail jmp 0x0018A032 */

}

/**
 * sub_0018A02E
 * Original: 0x0018A02E - 0x0018A032 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A02E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A02E: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018A032(); return; /* fallthrough 0x0018A032 */

}

/**
 * sub_0018A032
 * Original: 0x0018A032 - 0x0018A06F (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A032(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A032: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A230(); return; } /* je: equal / zero */

loc_0018A03C: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 0x1050);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A056u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018A056: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A06F(); return; } /* je: equal / zero */

loc_0018A05D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A067u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018A067: ;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x6C) = eax;
    g_seh_ebp = ebp; sub_0018A073(); return; /* tail jmp 0x0018A073 */

}

/**
 * sub_0018A06F
 * Original: 0x0018A06F - 0x0018A073 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A06F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A06F: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018A073(); return; /* fallthrough 0x0018A073 */

}

/**
 * sub_0018A073
 * Original: 0x0018A073 - 0x0018A0B7 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A073(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A073: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A230(); return; } /* je: equal / zero */

loc_0018A07E: ;
    edx = MEM32(esi);
    eax = MEM32(ebp + 0x6C);
    edi = MEM32(edx + 0x1050);
    MEM32(ebp + 0x48) = MEM32(ebp + 0x48) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), ecx (32-bit) */
    MEM32(ebp + 0x64) = edi;
    MEM32(ebp + 0x54) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A22C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018A0AE: ;
    ebx = MEM32(ebp + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x50) = ebx;

    g_seh_ebp = ebp; sub_0018A0B7(); return; /* fallthrough 0x0018A0B7 */

}

/**
 * sub_0018A0B7
 * Original: 0x0018A0B7 - 0x0018A0DC (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A0B7: ;
    eax = MEM32(ebx + -8);
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A0EE(); return; } /* je: equal / zero */

loc_0018A0C3: ;
    ecx = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A0DC(); return; } /* je: equal / zero */

loc_0018A0CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x60));
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + 0x48) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018A0DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A0D7u); } /* indirect call */
    }

loc_0018A0DA: ;
    g_seh_ebp = ebp; sub_0018A0EE(); return; /* tail jmp 0x0018A0EE */

}

/**
 * sub_0018A0DC
 * Original: 0x0018A0DC - 0x0018A0EE (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A0DC: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x60) = edi;
    MEM32(ebp + 0x48) = ecx;
    MEM32(ebp + 0x64) = eax;
    edi = eax;

    g_seh_ebp = ebp; sub_0018A0EE(); return; /* fallthrough 0x0018A0EE */

}

/**
 * sub_0018A0EE
 * Original: 0x0018A0EE - 0x0018A22C (318 bytes, 114 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0EE(void)
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

loc_0018A0EE: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x58) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A103; /* je: equal / zero */

loc_0018A0F5: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + 0x58) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018A103u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A100u); } /* indirect call */
    }

loc_0018A103: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018A201; /* jbe: below or equal (unsigned <=) */

loc_0018A113: ;
    ebx = MEM32(ebp + 0x5C);
    eax = MEM32(ebp + 0x70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x4C) = eax;

loc_0018A11F: ;
    eax = MEM32(ebp + 0x50);
    fp_push(MEMF(eax + 4)); /* fld float */
    esi = MEM32(ebx);
    edi = MEM32(ebx + -8);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x24;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -28;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x64);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + eax;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0018A14Eu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A14E: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -60;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x64);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A169u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A169: ;
    ecx = eax;
    PUSH32(esp, 0x0018A170u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A170: ;
    ecx = eax;
    PUSH32(esp, 0x0018A177u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A177: ;
    PUSH32(esp, eax);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x50);
    fp_push(MEMF(eax + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x14;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -12;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x60);
    ecx = esi + eax;
    PUSH32(esp, 0x0018A1A0u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A1A0: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -76;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x60);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A1BBu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A1BB: ;
    ecx = eax;
    PUSH32(esp, 0x0018A1C2u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A1C2: ;
    ecx = eax;
    PUSH32(esp, 0x0018A1C9u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A1C9: ;
    ecx = eax;
    PUSH32(esp, 0x0018A1D0u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A1D0: ;
    edi = MEM32(ebp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x74);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1050) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018A11F; /* jb: below (unsigned <) */

loc_0018A1F8: ;
    esi = MEM32(ebp + 0x44);
    ebx = MEM32(ebp + 0x50);
    edi = MEM32(ebp + 0x64);

loc_0018A201: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018A211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A20Eu); } /* indirect call */
    }

loc_0018A211: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1054) (32-bit) */
    MEM32(ebp + 0x50) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A0B7(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0018A22C(); return; /* fallthrough 0x0018A22C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A22C
 * Original: 0x0018A22C - 0x0018A230 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A22C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A22C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0018A235(); return; /* tail jmp 0x0018A235 */

}

/**
 * sub_0018A230
 * Original: 0x0018A230 - 0x0018A278 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A230: ;
    edi = 0x8007000Eu;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), ebx (32-bit) */
    esi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A24A; /* je: equal / zero */

loc_0018A241: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, 0x0018A24Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A24A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A258; /* je: equal / zero */

loc_0018A24F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, 0x0018A258u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A258: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A266; /* je: equal / zero */

loc_0018A25D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, 0x0018A266u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A266: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A274; /* je: equal / zero */

loc_0018A26B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x0018A274u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A274: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0018A27D(); return; /* tail jmp 0x0018A27D */

}

/**
 * sub_0018A235
 * Original: 0x0018A235 - 0x0018A278 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A235: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), ebx (32-bit) */
    esi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A24A; /* je: equal / zero */

loc_0018A241: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, 0x0018A24Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A24A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A258; /* je: equal / zero */

loc_0018A24F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, 0x0018A258u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A258: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A266; /* je: equal / zero */

loc_0018A25D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, 0x0018A266u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A266: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A274; /* je: equal / zero */

loc_0018A26B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x0018A274u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A274: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0018A27D(); return; /* tail jmp 0x0018A27D */

}

/**
 * sub_0018A278
 * Original: 0x0018A278 - 0x0018A285 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A278(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A278: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018A27D
 * Original: 0x0018A27D - 0x0018A285 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A27D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A27D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018A285
 * Original: 0x0018A285 - 0x0018A389 (260 bytes, 77 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018A285(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A285: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x198) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x198;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 1 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0x30) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A763(); return; } /* jne: not equal / not zero */

loc_0018A2AD: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A763(); return; } /* jne: not equal / not zero */

loc_0018A2B9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A763(); return; } /* jne: not equal / not zero */

loc_0018A2C4: ;
    ebx = MEM32(ebx + 0x1050);
    edi = MEM32(edi + 0x1050);
    ecx = eax;
    edx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x11;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    eax = ~eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    MEM32(ebp + 0x58) = edx;
    MEM32(ebp + 0x74) = eax;
    PUSH32(esp, 0x0018A2F8u); RECOMP_ABI_CALL(0x00189E5Bu, sub_00189E5B); /* call 0x00189E5B */

loc_0018A2F8: ;
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0x58));
    edi = MEM32(ecx + 0x1054);
    MEM32(ebp + 0x40) = eax;
    eax = MEM32(esi + 4);
    ebx = MEM32(eax + 0x1054);
    PUSH32(esp, 0x0018A314u); RECOMP_ABI_CALL(0x00189E5Bu, sub_00189E5B); /* call 0x00189E5B */

loc_0018A314: ;
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0x74));
    edi = MEM32(ecx + 0x1058);
    MEM32(ebp + 0x44) = eax;
    eax = MEM32(esi + 4);
    ebx = MEM32(eax + 0x1058);
    PUSH32(esp, 0x0018A330u); RECOMP_ABI_CALL(0x00189E5Bu, sub_00189E5B); /* call 0x00189E5B */

loc_0018A330: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), 0 (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A70D(); return; } /* je: equal / zero */

loc_0018A340: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A70D(); return; } /* je: equal / zero */

loc_0018A34A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A70D(); return; } /* je: equal / zero */

loc_0018A352: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0x1050);
    ebx = 0x24810000;
    eax = edi;
    PUSH32(esp, ebx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A36Cu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018A36C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A389(); return; } /* je: equal / zero */

loc_0018A373: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A381u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018A381: ;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x6C) = eax;
    g_seh_ebp = ebp; sub_0018A38D(); return; /* tail jmp 0x0018A38D */

}

/**
 * sub_0018A389
 * Original: 0x0018A389 - 0x0018A38D (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A389(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A389: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018A38D(); return; /* fallthrough 0x0018A38D */

}

/**
 * sub_0018A38D
 * Original: 0x0018A38D - 0x0018A3CB (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A38D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A38D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A712(); return; } /* je: equal / zero */

loc_0018A397: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 0x1050);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi;
    PUSH32(esp, ebx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A3AEu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018A3AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A3CB(); return; } /* je: equal / zero */

loc_0018A3B5: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A3C3u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018A3C3: ;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x64) = eax;
    g_seh_ebp = ebp; sub_0018A3CF(); return; /* tail jmp 0x0018A3CF */

}

/**
 * sub_0018A3CB
 * Original: 0x0018A3CB - 0x0018A3CF (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3CB: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018A3CF(); return; /* fallthrough 0x0018A3CF */

}

/**
 * sub_0018A3CF
 * Original: 0x0018A3CF - 0x0018A423 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3CF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A712(); return; } /* je: equal / zero */

loc_0018A3D9: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x1050);
    ecx = MEM32(ebp + 0x64);
    MEM32(ebp + 0x48) = MEM32(ebp + 0x48) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x54) = edx;
    edx = eax;
    edi = eax + eax * 2;
    eax = MEM32(esi + 4);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1058), 0 (32-bit) */
    MEM32(ebp + 0x50) = ecx;
    MEM32(ebp + 0x4C) = edx;
    MEM32(ebp + 0x60) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A709(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018A41A: ;
    ebx = MEM32(ebp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x38) = ebx;

    g_seh_ebp = ebp; sub_0018A423(); return; /* fallthrough 0x0018A423 */

}

/**
 * sub_0018A423
 * Original: 0x0018A423 - 0x0018A445 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A423(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A423: ;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A6E9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018A43C: ;
    eax = MEM32(ebp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x70) = eax;

    g_seh_ebp = ebp; sub_0018A445(); return; /* fallthrough 0x0018A445 */

}

/**
 * sub_0018A445
 * Original: 0x0018A445 - 0x0018A47F (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A445(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A445: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax + -8);
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A49D(); return; } /* je: equal / zero */

loc_0018A454: ;
    ecx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A47F(); return; } /* je: equal / zero */

loc_0018A45B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebx + -8));
    MEM32(ebp + 0x5C) = eax;
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018A46Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A46Bu); } /* indirect call */
    }

loc_0018A46E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x4C));
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebx));
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + 0x5C));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018A47Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A47Au); } /* indirect call */
    }

loc_0018A47D: ;
    g_seh_ebp = ebp; sub_0018A49D(); return; /* tail jmp 0x0018A49D */

}

/**
 * sub_0018A47F
 * Original: 0x0018A47F - 0x0018A49D (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A47F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A47F: ;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x5C) = ecx;
    ecx = MEM32(ebp + 0x54);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp + 0x4C);
    MEM32(ebp + 0x4C) = edi;
    MEM32(ebp + 0x50) = ecx;
    MEM32(ebp + 0x60) = eax;
    edi = eax;

    g_seh_ebp = ebp; sub_0018A49D(); return; /* fallthrough 0x0018A49D */

}

/**
 * sub_0018A49D
 * Original: 0x0018A49D - 0x0018A6E9 (588 bytes, 204 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A49D(void)
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

loc_0018A49D: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x68) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4C7; /* je: equal / zero */

loc_0018A4A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ebx + -8));
    MEM32(ebp + 0x68) = eax;
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018A4BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A4B7u); } /* indirect call */
    }

loc_0018A4BA: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + 0x68));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018A4C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A4C4u); } /* indirect call */
    }

loc_0018A4C7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1050), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018A6BF; /* jbe: below or equal (unsigned <=) */

loc_0018A4D7: ;
    ebx = MEM32(ebp + 0x40);
    eax = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x34) = eax;

loc_0018A4E3: ;
    eax = MEM32(ebp + 0x38);
    fp_push(MEMF(eax + 4)); /* fld float */
    esi = MEM32(ebx);
    edi = MEM32(ebx + -8);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -144;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x20;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -16;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x60);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + eax;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0018A523u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A523: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + -272;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -48;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x60);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A541u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A541: ;
    ecx = eax;
    PUSH32(esp, 0x0018A548u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A548: ;
    ecx = eax;
    PUSH32(esp, 0x0018A54Fu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A54F: ;
    PUSH32(esp, eax);
    eax = ebp + -176;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    fp_push(MEMF(eax + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -80;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -240;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x4C);
    ecx = esi + eax;
    PUSH32(esp, 0x0018A57Eu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A57E: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -208;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x4C);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A59Cu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A59C: ;
    ecx = eax;
    PUSH32(esp, 0x0018A5A3u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A5A3: ;
    ecx = eax;
    PUSH32(esp, 0x0018A5AAu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A5AA: ;
    ecx = eax;
    PUSH32(esp, 0x0018A5B1u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A5B1: ;
    ecx = eax;
    PUSH32(esp, 0x0018A5B8u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A5B8: ;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x38);
    fp_push(MEMF(eax + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -32;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -64;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x54);
    ecx = esi + eax;
    PUSH32(esp, 0x0018A5EFu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A5EF: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -128;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x54);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A60Au); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A60A: ;
    ecx = eax;
    PUSH32(esp, 0x0018A611u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A611: ;
    ecx = eax;
    PUSH32(esp, 0x0018A618u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A618: ;
    PUSH32(esp, eax);
    eax = ebp + -160;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    fp_push(MEMF(eax + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -192;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -224;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x50);
    ecx = esi + eax;
    PUSH32(esp, 0x0018A64Au); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A64A: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    PUSH32(esp, eax);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -288;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x50);
    ecx = edi + eax;
    PUSH32(esp, 0x0018A66Bu); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A66B: ;
    ecx = eax;
    PUSH32(esp, 0x0018A672u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A672: ;
    ecx = eax;
    PUSH32(esp, 0x0018A679u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A679: ;
    ecx = eax;
    PUSH32(esp, 0x0018A680u); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A680: ;
    ecx = eax;
    PUSH32(esp, 0x0018A687u); RECOMP_ABI_CALL(0x00189107u, sub_00189107); /* call 0x00189107 */

loc_0018A687: ;
    ecx = eax;
    PUSH32(esp, 0x0018A68Eu); RECOMP_ABI_CALL(0x001890DBu, sub_001890DB); /* call 0x001890DB */

loc_0018A68E: ;
    edi = MEM32(ebp + 0x34);
    esi = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1050) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018A4E3; /* jb: below (unsigned <) */

loc_0018A6B6: ;
    esi = MEM32(ebp + 0x30);
    ebx = MEM32(ebp + 0x38);
    edi = MEM32(ebp + 0x60);

loc_0018A6BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = MEM32(esi + 4);
    PUSH32(esp, MEM32(ebp + 0x48));
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + 0x3C));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018A6D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A6CDu); } /* indirect call */
    }

loc_0018A6D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1054) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A445(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0018A6E9(); return; /* fallthrough 0x0018A6E9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A6E9
 * Original: 0x0018A6E9 - 0x0018A709 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A6E9: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = MEM32(ebp + 0x48) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1058)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1058) (32-bit) */
    MEM32(ebp + 0x38) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A423(); return; } /* jb: below (unsigned <) */

loc_0018A704: ;
    ebx = 0x24810000;

    g_seh_ebp = ebp; sub_0018A709(); return; /* fallthrough 0x0018A709 */

}

/**
 * sub_0018A709
 * Original: 0x0018A709 - 0x0018A70D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A709(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A709: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0018A717(); return; /* tail jmp 0x0018A717 */

}

/**
 * sub_0018A70D
 * Original: 0x0018A70D - 0x0018A712 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A70D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A70D: ;
    ebx = 0x24810000;

    g_seh_ebp = ebp; sub_0018A712(); return; /* fallthrough 0x0018A712 */

}

/**
 * sub_0018A712
 * Original: 0x0018A712 - 0x0018A763 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A712: ;
    esi = 0x8007000Eu;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A727; /* je: equal / zero */

loc_0018A71E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x40));
    PUSH32(esp, 0x0018A727u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A727: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A735; /* je: equal / zero */

loc_0018A72C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, 0x0018A735u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A735: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A743; /* je: equal / zero */

loc_0018A73A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, 0x0018A743u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A743: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A751; /* je: equal / zero */

loc_0018A748: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x0018A751u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A751: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A75F; /* je: equal / zero */

loc_0018A756: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x0018A75Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A75F: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0018A768(); return; /* tail jmp 0x0018A768 */

}

/**
 * sub_0018A717
 * Original: 0x0018A717 - 0x0018A763 (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A717: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A727; /* je: equal / zero */

loc_0018A71E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x40));
    PUSH32(esp, 0x0018A727u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A727: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A735; /* je: equal / zero */

loc_0018A72C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, 0x0018A735u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A735: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A743; /* je: equal / zero */

loc_0018A73A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, 0x0018A743u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A743: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A751; /* je: equal / zero */

loc_0018A748: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x0018A751u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A751: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A75F; /* je: equal / zero */

loc_0018A756: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x0018A75Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A75F: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0018A768(); return; /* tail jmp 0x0018A768 */

}

/**
 * sub_0018A763
 * Original: 0x0018A763 - 0x0018A770 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A763(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A763: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018A768
 * Original: 0x0018A768 - 0x0018A770 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A768(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018A770
 * Original: 0x0018A770 - 0x0018A79E (46 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A770: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A786; /* je: equal / zero */

loc_0018A77F: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A786u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A786: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A79B; /* je: equal / zero */

loc_0018A78D: ;
    ecx = esi;
    PUSH32(esp, 0x0018A794u); RECOMP_ABI_CALL(0x0018A770u, sub_0018A770); /* call 0x0018A770 */

loc_0018A794: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A79Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A79B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A79E
 * Original: 0x0018A79E - 0x0018A7C2 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A79E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A79E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018A7A6u); RECOMP_ABI_CALL(0x0018A770u, sub_0018A770); /* call 0x0018A770 */

loc_0018A7A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018A7BC; /* je: equal / zero */

loc_0018A7AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A7BC; /* je: equal / zero */

loc_0018A7B1: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A7BCu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018A7BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A7C2
 * Original: 0x0018A7C2 - 0x0018A8A5 (227 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018A7C2(void)
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

loc_0018A7C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AA7C(); return; } /* je: equal / zero */

loc_0018A7D8: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AA7C(); return; } /* je: equal / zero */

loc_0018A7E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -60) = eax;
    fp_push((double)SMEM32(ebp + -60)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A7F3; /* jge: greater or equal (signed >=) */

loc_0018A7ED: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A7F3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -60) = ebx;
    fp_push((double)SMEM32(ebp + -60)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A806; /* jge: greater or equal (signed >=) */

loc_0018A800: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A806: ;
    MEMF(ebp + -48) = (float)fp_top(); /* fst */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(ebp + -28)); /* fld float */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x10);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    POP32(esp, esi);
    MEMF(ebp + -40) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_0018A878; /* jbe: below or equal (unsigned <=) */

loc_0018A82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -60) = eax;
    fp_push((double)SMEM32(ebp + -60)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A83D; /* jge: greater or equal (signed >=) */

loc_0018A837: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A83D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -60) = edi;
    fp_push((double)SMEM32(ebp + -60)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A84D; /* jge: greater or equal (signed >=) */

loc_0018A847: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A84D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A868u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0018A868: ;
    fp_pop(); /* fstp st(0) */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = esi + eax + 0xC;
    if (CMP_B(_fa, _fb)) goto loc_0018A83D; /* jb: below (unsigned <) */

loc_0018A876: ;
    fp_pop(); /* fstp st(0) */

loc_0018A878: ;
    PUSH32(esp, 0x24810000);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A885u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018A885: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AA7C(); return; } /* je: equal / zero */

loc_0018A88F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(0.0); /* fldz */
    MEM32(ebp + -24) = MEM32(ebp + -24) & ebx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, 4);
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AA76(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_0018A8A5(); return; /* fallthrough 0x0018A8A5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A8A5
 * Original: 0x0018A8A5 - 0x0018A8C8 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018A8A5(void)
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

loc_0018A8A5: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push((double)SMEM32(ebp + -24)); /* fild */
    eax = esi + edi;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -56) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A8C5; /* jge: greater or equal (signed >=) */

loc_0018A8BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A8C5: ;
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_0018A8C8(); return; /* fallthrough 0x0018A8C8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A8C8
 * Original: 0x0018A8C8 - 0x0018A950 (136 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8C8(void)
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

loc_0018A8C8: ;
    eax = MEM32(ebp + -12);
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A8D8; /* jge: greater or equal (signed >=) */

loc_0018A8D2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0018A8D8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -44)); /* fadd dword ptr [ebp - 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -40)); /* fmul dword ptr [ebp - 0x28] */
    MEMF(ebp + -32) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0018A91F; /* jne: not equal / not zero */

loc_0018A8F8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018A90C; /* jp: parity */

loc_0018A905: ;
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -32) = (float)fp_top(); /* fst */

loc_0018A90C: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A91F; /* jne: not equal / not zero */

loc_0018A919: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -8) = eax;

loc_0018A91F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018A929u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0018A929: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x0018A930u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0018A930: ;
    edx = eax;
    MEM32(ebp + -20) = edx;
    fp_push((double)SMEM32(ebp + -20)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0018AA2B(); return; } /* jp: parity */

loc_0018A946: ;
    ecx = edx;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = ecx;
    g_seh_ebp = ebp; sub_0018A953(); return; /* tail jmp 0x0018A953 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A950
 * Original: 0x0018A950 - 0x0018A953 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A950: ;
    ecx = MEM32(ebp + -36);

    g_seh_ebp = ebp; sub_0018A953(); return; /* fallthrough 0x0018A953 */

}

/**
 * sub_0018A953
 * Original: 0x0018A953 - 0x0018A96A (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A953(void)
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

loc_0018A953: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018A96A(); return; } /* jge: greater or equal (signed >=) */

loc_0018A962: ;
    eax = MEM32(ebp + 0xC);
    ecx = edx + eax;
    g_seh_ebp = ebp; sub_0018A971(); return; /* tail jmp 0x0018A971 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A96A
 * Original: 0x0018A96A - 0x0018A971 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A96A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A96A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0018A971(); return; } /* jge: greater or equal (signed >=) */

loc_0018A96F: ;
    ecx = edx;

    g_seh_ebp = ebp; sub_0018A971(); return; /* fallthrough 0x0018A971 */

}

/**
 * sub_0018A971
 * Original: 0x0018A971 - 0x0018A9D6 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A971(void)
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

loc_0018A971: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A99A; /* je: equal / zero */

loc_0018A975: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A993; /* jne: not equal / not zero */

loc_0018A985: ;
    eax = esi + edi;
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebx;

loc_0018A993: ;
    fp_push(0.0); /* fldz */
    ebx = ecx;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018A99A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -32)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018A9A9; /* jp: parity */

loc_0018A9A4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -32)); /* fld float */

loc_0018A9A9: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A9BC; /* jne: not equal / not zero */

loc_0018A9B6: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -20) = eax;

loc_0018A9BC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A9ED(); return; } /* jne: not equal / not zero */

loc_0018A9C2: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0018A9D6(); return; } /* jp: parity */

loc_0018A9D2: ;
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_0018A9F8(); return; /* tail jmp 0x0018A9F8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A9D6
 * Original: 0x0018A9D6 - 0x0018A9ED (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9D6(void)
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

loc_0018A9D6: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A9ED(); return; } /* jne: not equal / not zero */

loc_0018A9E9: ;
    fp_push(0.0); /* fldz */
    g_seh_ebp = ebp; sub_0018A9F8(); return; /* tail jmp 0x0018A9F8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A9ED
 * Original: 0x0018A9ED - 0x0018A9F8 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9ED(void)
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

loc_0018A9ED: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -52)); /* fmul dword ptr [ebp - 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -16)); /* fsub dword ptr [ebp - 0x10] */

    g_seh_ebp = ebp; sub_0018A9F8(); return; /* fallthrough 0x0018A9F8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A9F8
 * Original: 0x0018A9F8 - 0x0018AA2B (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9F8(void)
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

loc_0018A9F8: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA02; /* je: equal / zero */

loc_0018A9FE: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */

loc_0018AA02: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(ebp + -20)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) { g_seh_ebp = ebp; sub_0018A950(); return; } /* jnp: not parity */

    g_seh_ebp = ebp; sub_0018AA2B(); return; /* fallthrough 0x0018AA2B */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018AA2B
 * Original: 0x0018AA2B - 0x0018AA76 (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA2B(void)
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

loc_0018AA2B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A8C8(); return; } /* jb: below (unsigned <) */

loc_0018AA3A: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018AA58; /* jne: not equal / not zero */

loc_0018AA4A: ;
    ecx = MEM32(ebp + -4);
    eax = esi + edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_0018AA58: ;
    ecx = MEM32(ebp + -60);
    fp_push(0.0); /* fldz */
    eax = esi;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018A8A5(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0018AA76(); return; /* fallthrough 0x0018AA76 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018AA76
 * Original: 0x0018AA76 - 0x0018AA7C (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA76: ;
    MEM32(edi) = esi;
    eax = edi;
    g_seh_ebp = ebp; sub_0018AA7E(); return; /* tail jmp 0x0018AA7E */

}

/**
 * sub_0018AA7C
 * Original: 0x0018AA7C - 0x0018AA83 (7 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA7C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA7E
 * Original: 0x0018AA7E - 0x0018AA83 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA83
 * Original: 0x0018AA83 - 0x0018ABB4 (305 bytes, 98 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018AA83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AA83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    edx = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE91(); return; } /* jne: not equal / not zero */

loc_0018AAAB: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE91(); return; } /* jne: not equal / not zero */

loc_0018AAB6: ;
    _fa = (uint32_t)(MEM32(edx + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1058), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE91(); return; } /* jne: not equal / not zero */

loc_0018AAC2: ;
    _fa = (uint32_t)(MEM32(edi + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1058), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE91(); return; } /* jne: not equal / not zero */

loc_0018AACE: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x1050));
    eax = eax >> 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(edi + 0x1050));
    eax = ~eax;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AAF5u); RECOMP_ABI_CALL(0x0018A7C2u, sub_0018A7C2); /* call 0x0018A7C2 */

loc_0018AAF5: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -36) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE3B(); return; } /* je: equal / zero */

loc_0018AB05: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 0x1054));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0x1054));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AB1Cu); RECOMP_ABI_CALL(0x0018A7C2u, sub_0018A7C2); /* call 0x0018A7C2 */

loc_0018AB1C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE3B(); return; } /* je: equal / zero */

loc_0018AB2A: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -24);
    ebx = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x1054);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x24810000);
    PUSH32(esp, eax);
    MEM32(ebp + -56) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AB52u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AB52: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE34(); return; } /* je: equal / zero */

loc_0018AB5F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x1054);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    edi = MEM32(eax + 0x1050);
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AB97u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AB97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018ABB4(); return; } /* je: equal / zero */

loc_0018AB9E: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018ABACu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018ABAC: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -20) = eax;
    g_seh_ebp = ebp; sub_0018ABB8(); return; /* tail jmp 0x0018ABB8 */

}

/**
 * sub_0018ABB4
 * Original: 0x0018ABB4 - 0x0018ABB8 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABB4: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018ABB8(); return; /* fallthrough 0x0018ABB8 */

}

/**
 * sub_0018ABB8
 * Original: 0x0018ABB8 - 0x0018ABD4 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABB8: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE34(); return; } /* je: equal / zero */

loc_0018ABC2: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE27(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_0018ABD4(); return; /* fallthrough 0x0018ABD4 */

}

/**
 * sub_0018ABD4
 * Original: 0x0018ABD4 - 0x0018ABEC (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABD4: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -44) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018ADCF(); return; } /* jae: above or equal (unsigned >=) */

loc_0018ABE9: ;
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_0018ABEC(); return; /* fallthrough 0x0018ABEC */

}

/**
 * sub_0018ABEC
 * Original: 0x0018ABEC - 0x0018AC0F (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABEC: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018ACA7(); return; } /* jne: not equal / not zero */

loc_0018ABFE: ;
    ebx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AC0F(); return; } /* je: equal / zero */

loc_0018AC05: ;
    eax = ebx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_0018AC6F(); return; /* tail jmp 0x0018AC6F */

}

/**
 * sub_0018AC0F
 * Original: 0x0018AC0F - 0x0018AC63 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC0F: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0018AC1Bu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AC1B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AC28; /* je: equal / zero */

loc_0018AC21: ;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    ebx = eax;

loc_0018AC28: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE34(); return; } /* je: equal / zero */

loc_0018AC30: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0x1050);
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AC49u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AC49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -48) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AC63(); return; } /* je: equal / zero */

loc_0018AC50: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AC5Eu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018AC5E: ;
    eax = MEM32(ebp + -48);
    g_seh_ebp = ebp; sub_0018AC65(); return; /* tail jmp 0x0018AC65 */

}

/**
 * sub_0018AC63
 * Original: 0x0018AC63 - 0x0018AC65 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018AC63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0018AC65(); return; /* fallthrough 0x0018AC65 */

}

/**
 * sub_0018AC65
 * Original: 0x0018AC65 - 0x0018AC6F (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE2B(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0018AC6F(); return; /* fallthrough 0x0018AC6F */

}

/**
 * sub_0018AC6F
 * Original: 0x0018AC6F - 0x0018ACA7 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC6F(void)
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

loc_0018AC6F: ;
    eax = MEM32(esi + 4);
    fp_push(0.0); /* fldz */
    ecx = MEM32(eax + 0x1050);
    edi = MEM32(ebx);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + -28);
    MEM32(ecx + eax * 4) = ebx;

    g_seh_ebp = ebp; sub_0018ACA7(); return; /* fallthrough 0x0018ACA7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018ACA7
 * Original: 0x0018ACA7 - 0x0018ADCF (296 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACA7(void)
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

loc_0018ACA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018ABEC(); return; } /* jb: below (unsigned <) */

loc_0018ACB4: ;
    ebx = MEM32(ebp + -20);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018ACC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018ACC1u); } /* indirect call */
    }

loc_0018ACC4: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018AD73; /* jae: above or equal (unsigned >=) */

loc_0018ACD3: ;
    edx = ebx + 8;

loc_0018ACD6: ;
    ebx = MEM32(eax);
    ecx = MEM32(ebp + -44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -52) = ebx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -48) = eax;

loc_0018ACE9: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018AD5C; /* jae: above or equal (unsigned >=) */

loc_0018ACFB: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    edi = MEM32(ebp + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -8)); /* fmul dword ptr [edx - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    edi = edi + ebx + 4;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    edi = edi + ebx + 8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + ebx + 0xC;
    ebx = MEM32(ebp + -52);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_B(_fa, _fb)) goto loc_0018ACFB; /* jb: below (unsigned <) */

loc_0018AD59: ;
    edi = MEM32(ebp + -28);

loc_0018AD5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018ACE9; /* jb: below (unsigned <) */

loc_0018AD65: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -40) (32-bit) */
    eax = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0018ACD6; /* jb: below (unsigned <) */

loc_0018AD73: ;
    ebx = MEM32(ebp + -44);

loc_0018AD76: ;
    eax = MEM32(ebx);
    fp_push(MEMF(ebx + 4)); /* fld float */
    ecx = MEM32(ebp + -8);
    edi = MEM32(ecx + eax * 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x281BFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018ADC1; /* jne: not equal / not zero */

loc_0018AD9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018ADACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018ADA9u); } /* indirect call */
    }

loc_0018ADAC: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + -8);
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;
    MEM32(ebp + -16) = edi;

loc_0018ADC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018AD76; /* jb: below (unsigned <) */

loc_0018ADC9: ;
    edi = MEM32(ebp + -28);
    ebx = MEM32(ebp + -56);

    g_seh_ebp = ebp; sub_0018ADCF(); return; /* fallthrough 0x0018ADCF */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018ADCF
 * Original: 0x0018ADCF - 0x0018AE27 (88 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ADCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ADCF: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018ABD4(); return; } /* jb: below (unsigned <) */

loc_0018ADDC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE27(); return; } /* je: equal / zero */

loc_0018ADE3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1054), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AE27(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018ADEE: ;
    eax = MEM32(ebp + -8);
    ebx = eax + edi * 4;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE1B; /* je: equal / zero */

loc_0018ADFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018AE07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018AE04u); } /* indirect call */
    }

loc_0018AE07: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE16; /* je: equal / zero */

loc_0018AE0D: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x0018AE16u); RECOMP_ABI_CALL(0x0018A79Eu, sub_0018A79E); /* call 0x0018A79E */

loc_0018AE16: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0018AE27(); return; } /* je: equal / zero */

loc_0018AE1B: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x1054) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018ADEE; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0018AE27(); return; /* fallthrough 0x0018AE27 */

}

/**
 * sub_0018AE27
 * Original: 0x0018AE27 - 0x0018AE2B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE27: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0018AE40(); return; /* tail jmp 0x0018AE40 */

}

/**
 * sub_0018AE2B
 * Original: 0x0018AE2B - 0x0018AE34 (9 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE2B: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x0018AE34u); RECOMP_ABI_CALL(0x0018A79Eu, sub_0018A79E); /* call 0x0018A79E */

    g_seh_ebp = ebp; sub_0018AE34(); return; /* fallthrough 0x0018AE34 */

}

/**
 * sub_0018AE34
 * Original: 0x0018AE34 - 0x0018AE3B (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE34: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0018AE40(); return; /* tail jmp 0x0018AE40 */

}

/**
 * sub_0018AE3B
 * Original: 0x0018AE3B - 0x0018AE91 (86 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE3B: ;
    edi = 0x80004005u;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    esi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE55; /* je: equal / zero */

loc_0018AE4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0018AE55u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE55: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE63; /* je: equal / zero */

loc_0018AE5C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0018AE63u); RECOMP_ABI_CALL(0x0018A79Eu, sub_0018A79E); /* call 0x0018A79E */

loc_0018AE63: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE71; /* je: equal / zero */

loc_0018AE68: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0018AE71u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE71: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE7F; /* je: equal / zero */

loc_0018AE76: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0x0018AE7Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE7F: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE8D; /* je: equal / zero */

loc_0018AE84: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0018AE8Du); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE8D: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0018AE96(); return; /* tail jmp 0x0018AE96 */

}

/**
 * sub_0018AE40
 * Original: 0x0018AE40 - 0x0018AE91 (81 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE40: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    esi = 0x24810000;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE55; /* je: equal / zero */

loc_0018AE4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x0018AE55u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE55: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE63; /* je: equal / zero */

loc_0018AE5C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0018AE63u); RECOMP_ABI_CALL(0x0018A79Eu, sub_0018A79E); /* call 0x0018A79E */

loc_0018AE63: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE71; /* je: equal / zero */

loc_0018AE68: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0018AE71u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE71: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE7F; /* je: equal / zero */

loc_0018AE76: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0x0018AE7Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE7F: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE8D; /* je: equal / zero */

loc_0018AE84: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0018AE8Du); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0018AE8D: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0018AE96(); return; /* tail jmp 0x0018AE96 */

}

/**
 * sub_0018AE91
 * Original: 0x0018AE91 - 0x0018AE9B (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE91: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE96
 * Original: 0x0018AE96 - 0x0018AE9B (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE9B
 * Original: 0x0018AE9B - 0x0018AFF4 (345 bytes, 111 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018AE9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AE9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 1 (32-bit) */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B3E4(); return; } /* jne: not equal / not zero */

loc_0018AEC3: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B3E4(); return; } /* jne: not equal / not zero */

loc_0018AECF: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edi = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x1050));
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(ebx + 0x1050));
    edi = edi >> 0x11;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ~edi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -76) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AF04u); RECOMP_ABI_CALL(0x0018A7C2u, sub_0018A7C2); /* call 0x0018A7C2 */

loc_0018AF04: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -60) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B37C(); return; } /* je: equal / zero */

loc_0018AF14: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x1054));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0x1054));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AF2Bu); RECOMP_ABI_CALL(0x0018A7C2u, sub_0018A7C2); /* call 0x0018A7C2 */

loc_0018AF2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B37C(); return; } /* je: equal / zero */

loc_0018AF39: ;
    PUSH32(esp, MEM32(ebp + -76));
    eax = MEM32(esi + 4);
    PUSH32(esp, MEM32(eax + 0x1058));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0x1058));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AF52u); RECOMP_ABI_CALL(0x0018A7C2u, sub_0018A7C2); /* call 0x0018A7C2 */

loc_0018AF52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B37C(); return; } /* je: equal / zero */

loc_0018AF60: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + -36);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -68) = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -32);
    ebx = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x1058);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x24810000);
    PUSH32(esp, eax);
    MEM32(ebp + -80) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AF92u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AF92: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B375(); return; } /* je: equal / zero */

loc_0018AF9F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x1058);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    edi = MEM32(eax + 0x1050);
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AFD7u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018AFD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -76) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018AFF4(); return; } /* je: equal / zero */

loc_0018AFDE: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018AFECu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018AFEC: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_0018AFF8(); return; /* tail jmp 0x0018AFF8 */

}

/**
 * sub_0018AFF4
 * Original: 0x0018AFF4 - 0x0018AFF8 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AFF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AFF4: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0018AFF8(); return; /* fallthrough 0x0018AFF8 */

}

/**
 * sub_0018AFF8
 * Original: 0x0018AFF8 - 0x0018B017 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AFF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AFF8: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B375(); return; } /* je: equal / zero */

loc_0018B002: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -56) = MEM32(ebp + -56) & 0;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B368(); return; } /* jae: above or equal (unsigned >=) */

loc_0018B014: ;
    ebx = MEM32(ebp + -80);

    g_seh_ebp = ebp; sub_0018B017(); return; /* fallthrough 0x0018B017 */

}

/**
 * sub_0018B017
 * Original: 0x0018B017 - 0x0018B029 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B017: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -76) = eax;
    g_seh_ebp = ebp; sub_0018B0F8(); return; /* tail jmp 0x0018B0F8 */

}

/**
 * sub_0018B029
 * Original: 0x0018B029 - 0x0018B048 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B029(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B029: ;
    eax = MEM32(eax);
    edx = MEM32(ebp + -8);
    ebx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B0F2(); return; } /* jne: not equal / not zero */

loc_0018B039: ;
    ebx = MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B048(); return; } /* je: equal / zero */

loc_0018B040: ;
    eax = MEM32(ebx + 8);
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_0018B0B3(); return; /* tail jmp 0x0018B0B3 */

}

/**
 * sub_0018B048
 * Original: 0x0018B048 - 0x0018B063 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B048: ;
    PUSH32(esp, 0x24810000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0018B054u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018B054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B063(); return; } /* je: equal / zero */

loc_0018B058: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    g_seh_ebp = ebp; sub_0018B065(); return; /* tail jmp 0x0018B065 */

}

/**
 * sub_0018B063
 * Original: 0x0018B063 - 0x0018B065 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B063(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B063: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0018B065(); return; /* fallthrough 0x0018B065 */

}

/**
 * sub_0018B065
 * Original: 0x0018B065 - 0x0018B0A7 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B065(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B065: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B375(); return; } /* je: equal / zero */

loc_0018B06D: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0x1054);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(eax + 0x1050));
    eax = edi;
    PUSH32(esp, 0x24810000);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B08Du); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0018B08D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -64) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B0A7(); return; } /* je: equal / zero */

loc_0018B094: ;
    PUSH32(esp, 0x658F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B0A2u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_0018B0A2: ;
    eax = MEM32(ebp + -64);
    g_seh_ebp = ebp; sub_0018B0A9(); return; /* tail jmp 0x0018B0A9 */

}

/**
 * sub_0018B0A7
 * Original: 0x0018B0A7 - 0x0018B0A9 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018B0A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B0A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0018B0A9(); return; /* fallthrough 0x0018B0A9 */

}

/**
 * sub_0018B0A9
 * Original: 0x0018B0A9 - 0x0018B0B3 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B0A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B0A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B36C(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0018B0B3(); return; /* fallthrough 0x0018B0B3 */

}

/**
 * sub_0018B0B3
 * Original: 0x0018B0B3 - 0x0018B0F2 (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B0B3(void)
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

loc_0018B0B3: ;
    eax = MEM32(esi + 4);
    fp_push(0.0); /* fldz */
    ecx = MEM32(eax + 0x1054);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x1050));
    edi = MEM32(ebx);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = ebx;
    ecx = MEM32(ebp + -24);

    g_seh_ebp = ebp; sub_0018B0F2(); return; /* fallthrough 0x0018B0F2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B0F2
 * Original: 0x0018B0F2 - 0x0018B0F8 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B0F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B0F2: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0018B0F8(); return; /* fallthrough 0x0018B0F8 */

}

/**
 * sub_0018B0F8
 * Original: 0x0018B0F8 - 0x0018B11B (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B0F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B0F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B029(); return; } /* jb: below (unsigned <) */

loc_0018B103: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -72) (32-bit) */
    MEM32(ebp + -52) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018B242(); return; } /* jae: above or equal (unsigned >=) */

loc_0018B119: ;
    g_seh_ebp = ebp; sub_0018B11E(); return; /* tail jmp 0x0018B11E */

}

/**
 * sub_0018B11B
 * Original: 0x0018B11B - 0x0018B11E (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B11B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B11B: ;
    eax = MEM32(ebp + -52);

    g_seh_ebp = ebp; sub_0018B11E(); return; /* fallthrough 0x0018B11E */

}
