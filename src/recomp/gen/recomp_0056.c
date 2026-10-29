/**
 * DOAU1 - Recompiled code chunk 56
 * Functions: 250 (0x001A78FC - 0x001AA24A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001A78FC
 * Original: 0x001A78FC - 0x001A7929 (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A78FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A78FC: ;
    eax = edi;
    eax = eax & MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A793B(); return; } /* je: equal / zero */

loc_001A7903: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp) = MEM32(ebp) - eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp);
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x20) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7929(); return; } /* jne: not equal / not zero */

loc_001A7922: ;
    PUSH32(esp, 0x001A7927u); RECOMP_ABI_CALL(0x001A73FAu, sub_001A73FA); /* call 0x001A73FA */

loc_001A7927: ;
    g_seh_ebp = ebp; sub_001A793B(); return; /* tail jmp 0x001A793B */

}

/**
 * sub_001A7929
 * Original: 0x001A7929 - 0x001A7936 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7929(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7929: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7936(); return; } /* jne: not equal / not zero */

loc_001A792F: ;
    PUSH32(esp, 0x001A7934u); RECOMP_ABI_CALL(0x001A6EBEu, sub_001A6EBE); /* call 0x001A6EBE */

loc_001A7934: ;
    g_seh_ebp = ebp; sub_001A793B(); return; /* tail jmp 0x001A793B */

}

/**
 * sub_001A7936
 * Original: 0x001A7936 - 0x001A793B (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7936(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7936: ;
    PUSH32(esp, 0x001A793Bu); RECOMP_ABI_CALL(0x001A716Cu, sub_001A716C); /* call 0x001A716C */

    g_seh_ebp = ebp; sub_001A793B(); return; /* fallthrough 0x001A793B */

}

/**
 * sub_001A793B
 * Original: 0x001A793B - 0x001A7968 (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A793B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A793B: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x74), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A798A(); return; } /* je: equal / zero */

loc_001A7943: ;
    eax = MEM32(ebp);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi & MEM32(ebp + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7968(); return; } /* jne: not equal / not zero */

loc_001A7961: ;
    PUSH32(esp, 0x001A7966u); RECOMP_ABI_CALL(0x001A73FAu, sub_001A73FA); /* call 0x001A73FA */

loc_001A7966: ;
    g_seh_ebp = ebp; sub_001A797A(); return; /* tail jmp 0x001A797A */

}

/**
 * sub_001A7968
 * Original: 0x001A7968 - 0x001A7975 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7968(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7968: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7975(); return; } /* jne: not equal / not zero */

loc_001A796E: ;
    PUSH32(esp, 0x001A7973u); RECOMP_ABI_CALL(0x001A6EBEu, sub_001A6EBE); /* call 0x001A6EBE */

loc_001A7973: ;
    g_seh_ebp = ebp; sub_001A797A(); return; /* tail jmp 0x001A797A */

}

/**
 * sub_001A7975
 * Original: 0x001A7975 - 0x001A797A (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7975(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7975: ;
    PUSH32(esp, 0x001A797Au); RECOMP_ABI_CALL(0x001A716Cu, sub_001A716C); /* call 0x001A716C */

    g_seh_ebp = ebp; sub_001A797A(); return; /* fallthrough 0x001A797A */

}

/**
 * sub_001A797A
 * Original: 0x001A797A - 0x001A798A (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A797A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A797A: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = edi;
    g_seh_ebp = ebp; sub_001A798D(); return; /* tail jmp 0x001A798D */

}

/**
 * sub_001A798A
 * Original: 0x001A798A - 0x001A79BB (49 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A798A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A798A: ;
    edi = MEM32(ebp + -12);
    eax = MEM32(ebp + 0x74);
    eax = eax & MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A79D0(); return; } /* je: equal / zero */

loc_001A7995: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A79BB(); return; } /* jne: not equal / not zero */

loc_001A79B4: ;
    PUSH32(esp, 0x001A79B9u); RECOMP_ABI_CALL(0x001A73FAu, sub_001A73FA); /* call 0x001A73FA */

loc_001A79B9: ;
    g_seh_ebp = ebp; sub_001A79CD(); return; /* tail jmp 0x001A79CD */

}

/**
 * sub_001A798D
 * Original: 0x001A798D - 0x001A79BB (46 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A798D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A798D: ;
    eax = MEM32(ebp + 0x74);
    eax = eax & MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A79D0(); return; } /* je: equal / zero */

loc_001A7995: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A79BB(); return; } /* jne: not equal / not zero */

loc_001A79B4: ;
    PUSH32(esp, 0x001A79B9u); RECOMP_ABI_CALL(0x001A73FAu, sub_001A73FA); /* call 0x001A73FA */

loc_001A79B9: ;
    g_seh_ebp = ebp; sub_001A79CD(); return; /* tail jmp 0x001A79CD */

}

/**
 * sub_001A79BB
 * Original: 0x001A79BB - 0x001A79C8 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A79BB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A79C8(); return; } /* jne: not equal / not zero */

loc_001A79C1: ;
    PUSH32(esp, 0x001A79C6u); RECOMP_ABI_CALL(0x001A6EBEu, sub_001A6EBE); /* call 0x001A6EBE */

loc_001A79C6: ;
    g_seh_ebp = ebp; sub_001A79CD(); return; /* tail jmp 0x001A79CD */

}

/**
 * sub_001A79C8
 * Original: 0x001A79C8 - 0x001A79CD (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A79C8: ;
    PUSH32(esp, 0x001A79CDu); RECOMP_ABI_CALL(0x001A716Cu, sub_001A716C); /* call 0x001A716C */

    g_seh_ebp = ebp; sub_001A79CD(); return; /* fallthrough 0x001A79CD */

}

/**
 * sub_001A79CD
 * Original: 0x001A79CD - 0x001A79D0 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A79CD: ;
    edi = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_001A79D0(); return; /* fallthrough 0x001A79D0 */

}

/**
 * sub_001A79D0
 * Original: 0x001A79D0 - 0x001A7B0F (319 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A79D0: ;
    eax = MEM32(ebp + 0x38);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x6C) = eax;
    eax = MEM32(ebp + 0x3C);
    ecx = ebp + 0x2C;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7B0F(); return; } /* jne: not equal / not zero */

loc_001A79EC: ;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x74) = eax;
    PUSH32(esp, 0x001A79F7u); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A79F7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0x001A7A05u); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A7A05: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = MEM32(ebp) >> 2;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edi * 4;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    /* nop */

loc_001A7A42: ;
    eax = ebx;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm4 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MEM(esi + edx); /* movups */
    xmm6 = XMM_MEM(esi + edx + 0x10); /* movups */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    esi = esi + edx * 2;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + 0x10); /* movups */
    xmm3 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx + 0x10); /* movups */
    XMM_STORE(edi + eax * 4, xmm0); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x10, xmm2); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x40, xmm4); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x50, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + eax * 4 + 0x20, xmm1); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x30, xmm3); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x60, xmm5); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x70, xmm7); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    _fb = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7A42; /* jne: not equal / not zero */

loc_001A7AE6: ;
    esi = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7A42; /* jne: not equal / not zero */

loc_001A7B0A: ;
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7B0F
 * Original: 0x001A7B0F - 0x001A7B69 (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7B0F: ;
    eax = eax & 0xFFFFFF80u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x74) = eax;
    PUSH32(esp, 0x001A7B1Au); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A7B1A: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0x001A7B28u); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A7B28: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7C44(); return; } /* jne: not equal / not zero */

loc_001A7B40: ;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = MEM32(ebp) >> 3;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edi * 2;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    g_seh_ebp = ebp; sub_001A7B72(); return; /* tail jmp 0x001A7B72 */

}

/**
 * sub_001A7B72
 * Original: 0x001A7B72 - 0x001A7C44 (210 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7B72: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(esi + edx); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    xmm4 = XMM_MEM(esi + edx); /* movups */
    xmm5 = XMM_MEM(esi + edx * 2); /* movups */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm5); /* unpckhps */
    esi = esi + edx * 4;
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm1); /* unpckhps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    xmm3 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx * 2); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    xmm1 = XMM_MEM(esi); /* movups */
    XMM_STORE(edi + eax * 2, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x10, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x20, xmm2); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x30, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm1 = XMM_UNPACK_HIGH(xmm1, xmm3); /* unpckhps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm7); /* unpckhps */
    XMM_STORE(edi + eax * 2 + 0x40, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x50, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x60, xmm1); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x70, xmm5); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7B72; /* jne: not equal / not zero */

loc_001A7C1B: ;
    esi = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7B72; /* jne: not equal / not zero */

loc_001A7C3F: ;
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7C44
 * Original: 0x001A7C44 - 0x001A7D43 (255 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7C44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7C44: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x28));
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(ebp) = MEM32(ebp) >> 3;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    /* nop */

loc_001A7C72: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + edx); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    mm4 = MMX_MEM(esi + edx); /* movq */
    mm5 = MMX_MEM(esi + edx * 2); /* movq */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    mm2 = mm0; /* movq */
    mm6 = mm4; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm5); /* punpckhwd */
    esi = esi + edx * 4;
    mm2 = MMX_PUNPCKHWD(mm2, mm1); /* punpckhwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm5); /* punpcklwd */
    mm3 = MMX_MEM(esi); /* movq */
    mm5 = MMX_MEM(esi + edx); /* movq */
    mm7 = MMX_MEM(esi + edx * 2); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    mm0 = MMX_PUNPCKLWD(mm0, mm1); /* punpcklwd */
    mm1 = MMX_MEM(esi); /* movq */
    MMX_STORE(edi + eax, mm0); /* movq */
    MMX_STORE(edi + eax + 8, mm4); /* movq */
    MMX_STORE(edi + eax + 0x10, mm2); /* movq */
    MMX_STORE(edi + eax + 0x18, mm6); /* movq */
    mm0 = mm1; /* movq */
    mm4 = mm5; /* movq */
    mm0 = MMX_PUNPCKLWD(mm0, mm3); /* punpcklwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm7); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm3); /* punpckhwd */
    mm5 = MMX_PUNPCKHWD(mm5, mm7); /* punpckhwd */
    MMX_STORE(edi + eax + 0x20, mm0); /* movq */
    MMX_STORE(edi + eax + 0x28, mm4); /* movq */
    MMX_STORE(edi + eax + 0x30, mm1); /* movq */
    MMX_STORE(edi + eax + 0x38, mm5); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7C72; /* jne: not equal / not zero */

loc_001A7D1B: ;
    eax = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = eax;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7C72; /* jne: not equal / not zero */

loc_001A7D3F: ;
    (void)0; /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7D43
 * Original: 0x001A7D43 - 0x001A7D68 (37 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7D43: ;
    eax = MEM32(ebp);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7D68(); return; } /* jne: not equal / not zero */

loc_001A7D61: ;
    PUSH32(esp, 0x001A7D66u); RECOMP_ABI_CALL(0x001A73FAu, sub_001A73FA); /* call 0x001A73FA */

loc_001A7D66: ;
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7D68
 * Original: 0x001A7D68 - 0x001A7D75 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7D68: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7D75(); return; } /* jne: not equal / not zero */

loc_001A7D6E: ;
    PUSH32(esp, 0x001A7D73u); RECOMP_ABI_CALL(0x001A6EBEu, sub_001A6EBE); /* call 0x001A6EBE */

loc_001A7D73: ;
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7D75
 * Original: 0x001A7D75 - 0x001A7D7C (7 bytes, 2 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7D75: ;
    PUSH32(esp, 0x001A7D7Au); RECOMP_ABI_CALL(0x001A716Cu, sub_001A716C); /* call 0x001A716C */

loc_001A7D7A: ;
    g_seh_ebp = ebp; sub_001A7D99(); return; /* tail jmp 0x001A7D99 */

}

/**
 * sub_001A7D7C
 * Original: 0x001A7D7C - 0x001A7D99 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7D7C: ;
    esi = MEM32(ebp + 0x60);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x74));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x7C));
    edi = MEM32(ebp + 0x6C);
    edx = ecx;
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
    ecx = edx;
    ecx = ecx & eax;
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

    g_seh_ebp = ebp; sub_001A7D99(); return; /* fallthrough 0x001A7D99 */

}

/**
 * sub_001A7D99
 * Original: 0x001A7D99 - 0x001A7DA3 (10 bytes, 6 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7D99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x58;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001A7DA3
 * Original: 0x001A7DA3 - 0x001A7E30 (141 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A7DA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7DA3: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    PUSH32(esp, 8);
    POP32(esp, edi);
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 3);
    POP32(esp, edx);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = 7;
    MEM32(ebp + -68) = edx;
    MEM32(ebp + -64) = edx;
    MEM32(ebp + -60) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8493(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A7DF1: ;
    ecx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8493(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A7DFD: ;
    esi = MEM32(ebp + 0x7C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jne: not equal / not zero */

loc_001A7E07: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jne: not equal / not zero */

loc_001A7E0C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jne: not equal / not zero */

loc_001A7E11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E30(); return; } /* jne: not equal / not zero */

loc_001A7E16: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E1A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E1E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001A7E2Bu); RECOMP_ABI_CALL(0x001A6BF7u, sub_001A6BF7); /* call 0x001A6BF7 */

loc_001A7E2B: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A7E30
 * Original: 0x001A7E30 - 0x001A7E4F (31 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7E30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E4F(); return; } /* jne: not equal / not zero */

loc_001A7E35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E3D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001A7E4Au); RECOMP_ABI_CALL(0x001A6AE5u, sub_001A6AE5); /* call 0x001A6AE5 */

loc_001A7E4A: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A7E4F
 * Original: 0x001A7E4F - 0x001A7E69 (26 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7E4F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E69(); return; } /* jb: below (unsigned <) */

loc_001A7E57: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001A7E64u); RECOMP_ABI_CALL(0x001A6A02u, sub_001A6A02); /* call 0x001A6A02 */

loc_001A7E64: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A7E69
 * Original: 0x001A7E69 - 0x001A7E8E (37 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7E69: ;
    ecx = ebp + 0x2C;
    PUSH32(esp, 0x001A7E71u); RECOMP_ABI_CALL(0x001A65EBu, sub_001A65EB); /* call 0x001A65EB */

loc_001A7E71: ;
    eax = MEM32(ebp + 0x78);
    edi = MEM32(ebp + 0x68);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7E8E(); return; } /* jne: not equal / not zero */

loc_001A7E86: ;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_001A7E99(); return; /* tail jmp 0x001A7E99 */

}

/**
 * sub_001A7E8E
 * Original: 0x001A7E8E - 0x001A7E99 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7E8E: ;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + 0x10) = eax;

    g_seh_ebp = ebp; sub_001A7E99(); return; /* fallthrough 0x001A7E99 */

}

/**
 * sub_001A7E99
 * Original: 0x001A7E99 - 0x001A7EBA (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7E99: ;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7EBA(); return; } /* jne: not equal / not zero */

loc_001A7EAC: ;
    MEM32(ebp) = edi;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = ecx;
    g_seh_ebp = ebp; sub_001A7ED7(); return; /* tail jmp 0x001A7ED7 */

}

/**
 * sub_001A7EBA
 * Original: 0x001A7EBA - 0x001A7ED7 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7EBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7EBA: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001A7ED7(); return; /* fallthrough 0x001A7ED7 */

}

/**
 * sub_001A7ED7
 * Original: 0x001A7ED7 - 0x001A7F4A (115 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7ED7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7ED7: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7EE3; /* jne: not equal / not zero */

loc_001A7EDE: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);

loc_001A7EE3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp + 0x2C;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x001A7EF1u); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_001A7EF1: ;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84B0(); return; } /* je: equal / zero */

loc_001A7F0A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84B0(); return; } /* je: equal / zero */

loc_001A7F13: ;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -12), 1 (8-bit) */
    ebx = MEM32(ebp + esi + -56);
    edi = MEM32(ebp + esi + -68);
    MEM32(ebp + 0x60) = ebx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7F6E(); return; } /* je: equal / zero */

loc_001A7F29: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7F4A(); return; } /* jne: not equal / not zero */

loc_001A7F43: ;
    PUSH32(esp, 0x001A7F48u); RECOMP_ABI_CALL(0x001A6E3Du, sub_001A6E3D); /* call 0x001A6E3D */

loc_001A7F48: ;
    g_seh_ebp = ebp; sub_001A7F5C(); return; /* tail jmp 0x001A7F5C */

}

/**
 * sub_001A7F4A
 * Original: 0x001A7F4A - 0x001A7F57 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F4A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7F57(); return; } /* jne: not equal / not zero */

loc_001A7F50: ;
    PUSH32(esp, 0x001A7F55u); RECOMP_ABI_CALL(0x001A70E9u, sub_001A70E9); /* call 0x001A70E9 */

loc_001A7F55: ;
    g_seh_ebp = ebp; sub_001A7F5C(); return; /* tail jmp 0x001A7F5C */

}

/**
 * sub_001A7F57
 * Original: 0x001A7F57 - 0x001A7F5C (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F57: ;
    PUSH32(esp, 0x001A7F5Cu); RECOMP_ABI_CALL(0x001A737Fu, sub_001A737F); /* call 0x001A737F */

    g_seh_ebp = ebp; sub_001A7F5C(); return; /* fallthrough 0x001A7F5C */

}

/**
 * sub_001A7F5C
 * Original: 0x001A7F5C - 0x001A7F6E (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F5C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A84B0(); return; } /* je: equal / zero */

loc_001A7F6B: ;
    eax = MEM32(ebp);

    g_seh_ebp = ebp; sub_001A7F6E(); return; /* fallthrough 0x001A7F6E */

}

/**
 * sub_001A7F6E
 * Original: 0x001A7F6E - 0x001A7F9C (46 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F6E: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7FB8(); return; } /* je: equal / zero */

loc_001A7F74: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7F9C(); return; } /* jne: not equal / not zero */

loc_001A7F95: ;
    PUSH32(esp, 0x001A7F9Au); RECOMP_ABI_CALL(0x001A6E3Du, sub_001A6E3D); /* call 0x001A6E3D */

loc_001A7F9A: ;
    g_seh_ebp = ebp; sub_001A7FAE(); return; /* tail jmp 0x001A7FAE */

}

/**
 * sub_001A7F9C
 * Original: 0x001A7F9C - 0x001A7FA9 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F9C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A7FA9(); return; } /* jne: not equal / not zero */

loc_001A7FA2: ;
    PUSH32(esp, 0x001A7FA7u); RECOMP_ABI_CALL(0x001A70E9u, sub_001A70E9); /* call 0x001A70E9 */

loc_001A7FA7: ;
    g_seh_ebp = ebp; sub_001A7FAE(); return; /* tail jmp 0x001A7FAE */

}

/**
 * sub_001A7FA9
 * Original: 0x001A7FA9 - 0x001A7FAE (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7FA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7FA9: ;
    PUSH32(esp, 0x001A7FAEu); RECOMP_ABI_CALL(0x001A737Fu, sub_001A737F); /* call 0x001A737F */

    g_seh_ebp = ebp; sub_001A7FAE(); return; /* fallthrough 0x001A7FAE */

}

/**
 * sub_001A7FAE
 * Original: 0x001A7FAE - 0x001A7FB8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7FAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7FAE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84B0(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001A7FB8(); return; /* fallthrough 0x001A7FB8 */

}

/**
 * sub_001A7FB8
 * Original: 0x001A7FB8 - 0x001A8034 (124 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7FB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7FB8: ;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -4);
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ~eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A845A(); return; } /* jae: above or equal (unsigned >=) */

loc_001A7FD2: ;
    ecx = MEM32(ebp + -8);
    ebx = MEM32(ebp);
    edx = edi + ecx;
    eax = edi;
    eax = ~eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A845A(); return; } /* jae: above or equal (unsigned >=) */

loc_001A7FED: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A845A(); return; } /* jb: below (unsigned <) */

loc_001A7FFA: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A845A(); return; } /* jb: below (unsigned <) */

loc_001A8007: ;
    esi = MEM32(ebp + -8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A804F(); return; } /* je: equal / zero */

loc_001A8010: ;
    eax = MEM32(ebp + -4);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x24) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8034(); return; } /* jne: not equal / not zero */

loc_001A802D: ;
    PUSH32(esp, 0x001A8032u); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A8032: ;
    g_seh_ebp = ebp; sub_001A8046(); return; /* tail jmp 0x001A8046 */

}

/**
 * sub_001A8034
 * Original: 0x001A8034 - 0x001A8041 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8034(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8034: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8041(); return; } /* jne: not equal / not zero */

loc_001A803A: ;
    PUSH32(esp, 0x001A803Fu); RECOMP_ABI_CALL(0x001A6F92u, sub_001A6F92); /* call 0x001A6F92 */

loc_001A803F: ;
    g_seh_ebp = ebp; sub_001A8046(); return; /* tail jmp 0x001A8046 */

}

/**
 * sub_001A8041
 * Original: 0x001A8041 - 0x001A8046 (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8041(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8041: ;
    PUSH32(esp, 0x001A8046u); RECOMP_ABI_CALL(0x001A7238u, sub_001A7238); /* call 0x001A7238 */

    g_seh_ebp = ebp; sub_001A8046(); return; /* fallthrough 0x001A8046 */

}

/**
 * sub_001A8046
 * Original: 0x001A8046 - 0x001A804F (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8046: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp) = MEM32(ebp) - esi;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001A804F(); return; /* fallthrough 0x001A804F */

}

/**
 * sub_001A804F
 * Original: 0x001A804F - 0x001A807C (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A804F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A804F: ;
    eax = edi;
    eax = eax & MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A808E(); return; } /* je: equal / zero */

loc_001A8056: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp) = MEM32(ebp) - eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp);
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x20) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A807C(); return; } /* jne: not equal / not zero */

loc_001A8075: ;
    PUSH32(esp, 0x001A807Au); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A807A: ;
    g_seh_ebp = ebp; sub_001A808E(); return; /* tail jmp 0x001A808E */

}

/**
 * sub_001A807C
 * Original: 0x001A807C - 0x001A8089 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A807C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A807C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8089(); return; } /* jne: not equal / not zero */

loc_001A8082: ;
    PUSH32(esp, 0x001A8087u); RECOMP_ABI_CALL(0x001A6F92u, sub_001A6F92); /* call 0x001A6F92 */

loc_001A8087: ;
    g_seh_ebp = ebp; sub_001A808E(); return; /* tail jmp 0x001A808E */

}

/**
 * sub_001A8089
 * Original: 0x001A8089 - 0x001A808E (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8089(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8089: ;
    PUSH32(esp, 0x001A808Eu); RECOMP_ABI_CALL(0x001A7238u, sub_001A7238); /* call 0x001A7238 */

    g_seh_ebp = ebp; sub_001A808E(); return; /* fallthrough 0x001A808E */

}

/**
 * sub_001A808E
 * Original: 0x001A808E - 0x001A80BB (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A808E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A808E: ;
    esi = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x60), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A80DD(); return; } /* je: equal / zero */

loc_001A8096: ;
    eax = MEM32(ebp);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi & MEM32(ebp + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A80BB(); return; } /* jne: not equal / not zero */

loc_001A80B4: ;
    PUSH32(esp, 0x001A80B9u); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A80B9: ;
    g_seh_ebp = ebp; sub_001A80CD(); return; /* tail jmp 0x001A80CD */

}

/**
 * sub_001A80BB
 * Original: 0x001A80BB - 0x001A80C8 (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80BB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A80C8(); return; } /* jne: not equal / not zero */

loc_001A80C1: ;
    PUSH32(esp, 0x001A80C6u); RECOMP_ABI_CALL(0x001A6F92u, sub_001A6F92); /* call 0x001A6F92 */

loc_001A80C6: ;
    g_seh_ebp = ebp; sub_001A80CD(); return; /* tail jmp 0x001A80CD */

}

/**
 * sub_001A80C8
 * Original: 0x001A80C8 - 0x001A80CD (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80C8: ;
    PUSH32(esp, 0x001A80CDu); RECOMP_ABI_CALL(0x001A7238u, sub_001A7238); /* call 0x001A7238 */

    g_seh_ebp = ebp; sub_001A80CD(); return; /* fallthrough 0x001A80CD */

}

/**
 * sub_001A80CD
 * Original: 0x001A80CD - 0x001A80DD (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80CD: ;
    edi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + esi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = edi;
    g_seh_ebp = ebp; sub_001A80E0(); return; /* tail jmp 0x001A80E0 */

}

/**
 * sub_001A80DD
 * Original: 0x001A80DD - 0x001A810E (49 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80DD: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x60);
    eax = eax & MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A8123(); return; } /* je: equal / zero */

loc_001A80E8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A810E(); return; } /* jne: not equal / not zero */

loc_001A8107: ;
    PUSH32(esp, 0x001A810Cu); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A810C: ;
    g_seh_ebp = ebp; sub_001A8120(); return; /* tail jmp 0x001A8120 */

}

/**
 * sub_001A80E0
 * Original: 0x001A80E0 - 0x001A810E (46 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80E0: ;
    eax = MEM32(ebp + 0x60);
    eax = eax & MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A8123(); return; } /* je: equal / zero */

loc_001A80E8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A810E(); return; } /* jne: not equal / not zero */

loc_001A8107: ;
    PUSH32(esp, 0x001A810Cu); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A810C: ;
    g_seh_ebp = ebp; sub_001A8120(); return; /* tail jmp 0x001A8120 */

}

/**
 * sub_001A810E
 * Original: 0x001A810E - 0x001A811B (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A810E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A810E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A811B(); return; } /* jne: not equal / not zero */

loc_001A8114: ;
    PUSH32(esp, 0x001A8119u); RECOMP_ABI_CALL(0x001A6F92u, sub_001A6F92); /* call 0x001A6F92 */

loc_001A8119: ;
    g_seh_ebp = ebp; sub_001A8120(); return; /* tail jmp 0x001A8120 */

}

/**
 * sub_001A811B
 * Original: 0x001A811B - 0x001A8120 (5 bytes, 1 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A811B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A811B: ;
    PUSH32(esp, 0x001A8120u); RECOMP_ABI_CALL(0x001A7238u, sub_001A7238); /* call 0x001A7238 */

    g_seh_ebp = ebp; sub_001A8120(); return; /* fallthrough 0x001A8120 */

}

/**
 * sub_001A8120
 * Original: 0x001A8120 - 0x001A8123 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8120: ;
    edi = MEM32(ebp + 0x14);

    g_seh_ebp = ebp; sub_001A8123(); return; /* fallthrough 0x001A8123 */

}

/**
 * sub_001A8123
 * Original: 0x001A8123 - 0x001A8190 (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8123(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8123: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    PUSH32(esp, MEM32(ebp + -12));
    eax = MEM32(ebp + 0x38);
    ecx = ebp + 0x2C;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8243(); return; } /* jne: not equal / not zero */

loc_001A8136: ;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x3C);
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0x001A814Au); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A814A: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x001A8158u); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A8158: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = MEM32(ebp) >> 2;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edi * 4;
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    g_seh_ebp = ebp; sub_001A8193(); return; /* tail jmp 0x001A8193 */

}

/**
 * sub_001A8193
 * Original: 0x001A8193 - 0x001A8243 (176 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8193(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8193: ;
    eax = ebx;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x68);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_MEM(esi + eax * 4); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 4 + 0x10); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 4 + 0x40); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 4 + 0x50); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi + eax * 4 + 0x20); /* movaps */
    xmm3 = XMM_MEM(esi + eax * 4 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 4 + 0x60); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 4 + 0x70); /* movaps */
    XMM_STORE(edi, xmm0); /* movups */
    XMM_STORE(edi + 0x10, xmm4); /* movups */
    XMM_STORE(edi + edx, xmm2); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm6); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + edx, xmm1); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm5); /* movups */
    XMM_STORE(edi + edx * 2, xmm3); /* movups */
    XMM_STORE(edi + edx * 2 + 0x10, xmm7); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8193; /* jne: not equal / not zero */

loc_001A821A: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8193; /* jne: not equal / not zero */

loc_001A823E: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A8243
 * Original: 0x001A8243 - 0x001A82A8 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8243: ;
    eax = eax & 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x3C);
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0x001A8259u); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A8259: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x001A8267u); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A8267: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8377(); return; } /* jne: not equal / not zero */

loc_001A827F: ;
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = MEM32(ebp) >> 2;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edi * 2;
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    g_seh_ebp = ebp; sub_001A82B3(); return; /* tail jmp 0x001A82B3 */

}

/**
 * sub_001A82B3
 * Original: 0x001A82B3 - 0x001A8377 (196 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A82B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A82B3: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x68);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_MEM(esi + eax * 2); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x20); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 2 + 0x80); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0xA0); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0xDD); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm6, 0x88); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm6, 0xDD); /* shufps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x10); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 2 + 0x90); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 2 + 0xB0); /* movaps */
    XMM_STORE(edi, xmm0); /* movups */
    XMM_STORE(edi + 0x10, xmm2); /* movups */
    XMM_STORE(edi + edx, xmm1); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm3); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm5; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm6, 0x88); /* shufps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm6, 0xDD); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm7, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm7, 0xDD); /* shufps */
    XMM_STORE(edi + edx, xmm0); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm1); /* movups */
    XMM_STORE(edi + edx * 2, xmm4); /* movups */
    XMM_STORE(edi + edx * 2 + 0x10, xmm5); /* movups */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A82B3; /* jne: not equal / not zero */

loc_001A834E: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A82B3; /* jne: not equal / not zero */

loc_001A8372: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A8377
 * Original: 0x001A8377 - 0x001A845A (227 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8377(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8377: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x28));
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(ebp) = MEM32(ebp) >> 2;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    /* nop */

loc_001A83A3: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x68);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    mm0 = MMX_PSHUFW(MMX_MEM(esi + eax), 216u); /* pshufw */
    mm2 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x40), 216u); /* pshufw */
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x10), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x50), 216u); /* pshufw */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm4); /* punpckldq */
    mm1 = MMX_PUNPCKHDQ(mm1, mm4); /* punpckhdq */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm6); /* punpckhdq */
    MMX_STORE(edi, mm0); /* movq */
    MMX_STORE(edi + 8, mm2); /* movq */
    MMX_STORE(edi + edx, mm1); /* movq */
    MMX_STORE(edi + edx + 8, mm3); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 8), 216u); /* pshufw */
    mm5 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x48), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x18), 216u); /* pshufw */
    mm7 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x58), 216u); /* pshufw */
    mm0 = mm4; /* movq */
    mm1 = mm5; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm6); /* punpckldq */
    mm4 = MMX_PUNPCKHDQ(mm4, mm6); /* punpckhdq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm7); /* punpckldq */
    mm5 = MMX_PUNPCKHDQ(mm5, mm7); /* punpckhdq */
    MMX_STORE(edi + edx, mm0); /* movq */
    MMX_STORE(edi + edx + 8, mm1); /* movq */
    MMX_STORE(edi + edx * 2, mm4); /* movq */
    MMX_STORE(edi + edx * 2 + 8, mm5); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A83A3; /* jne: not equal / not zero */

loc_001A8432: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A83A3; /* jne: not equal / not zero */

loc_001A8456: ;
    (void)0; /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A845A
 * Original: 0x001A845A - 0x001A847F (37 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A845A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A845A: ;
    eax = MEM32(ebp);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A847F(); return; } /* jne: not equal / not zero */

loc_001A8478: ;
    PUSH32(esp, 0x001A847Du); RECOMP_ABI_CALL(0x001A74D6u, sub_001A74D6); /* call 0x001A74D6 */

loc_001A847D: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A847F
 * Original: 0x001A847F - 0x001A848C (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A847F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A847F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A848C(); return; } /* jne: not equal / not zero */

loc_001A8485: ;
    PUSH32(esp, 0x001A848Au); RECOMP_ABI_CALL(0x001A6F92u, sub_001A6F92); /* call 0x001A6F92 */

loc_001A848A: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A848C
 * Original: 0x001A848C - 0x001A8493 (7 bytes, 2 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A848C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A848C: ;
    PUSH32(esp, 0x001A8491u); RECOMP_ABI_CALL(0x001A7238u, sub_001A7238); /* call 0x001A7238 */

loc_001A8491: ;
    g_seh_ebp = ebp; sub_001A84B0(); return; /* tail jmp 0x001A84B0 */

}

/**
 * sub_001A8493
 * Original: 0x001A8493 - 0x001A84B0 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8493(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8493: ;
    esi = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x70);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x68));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x7C));
    eax = ecx;
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
    ecx = eax;
    ecx = ecx & edx;
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

    g_seh_ebp = ebp; sub_001A84B0(); return; /* fallthrough 0x001A84B0 */

}

/**
 * sub_001A84B0
 * Original: 0x001A84B0 - 0x001A84BA (10 bytes, 6 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A84B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A84B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x58;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001A84BA
 * Original: 0x001A84BA - 0x001A84FF (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A84BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A84BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84FF(); return; } /* jne: not equal / not zero */

loc_001A84D5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84FF(); return; } /* jne: not equal / not zero */

loc_001A84DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84FF(); return; } /* jne: not equal / not zero */

loc_001A84DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A84FF(); return; } /* jne: not equal / not zero */

loc_001A84E2: ;
    edi = MEM32(ebp + 0x1C);
    ebx = MEM32(ebp + 0x24);
    MEM32(ebp + 0x10) = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x2C));
    esi = edi;
    MEM32(ebp + 0x14) = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    MEM32(ebp + 0x28) = ecx;
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_001A853F(); return; /* tail jmp 0x001A853F */

}

/**
 * sub_001A84FF
 * Original: 0x001A84FF - 0x001A853F (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A84FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A84FF: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    ebx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    MEM32(ebp + 0xC) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax + 0x14);
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x28);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_001A853F(); return; /* fallthrough 0x001A853F */

}

/**
 * sub_001A853F
 * Original: 0x001A853F - 0x001A8611 (210 bytes, 69 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A853F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A853F: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    MEM32(ebp + 0xC) = ecx;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0x001A8553u); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_001A8553: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebp + -40;
    PUSH32(esp, 0x001A855Eu); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A855E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -40;
    MEM32(ebp + 0x24) = eax;
    PUSH32(esp, 0x001A856Cu); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A856C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebp + -40;
    MEM32(ebp + 0x28) = eax;
    PUSH32(esp, 0x001A857Au); RECOMP_ABI_CALL(0x001A660Au, sub_001A660A); /* call 0x001A660A */

loc_001A857A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 4 (32-bit) */
    edx = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8611(); return; } /* jne: not equal / not zero */

loc_001A858F: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A870E(); return; } /* je: equal / zero */

loc_001A85A7: ;
    MEM32(ebp + 0x20) = ebx;

loc_001A85AA: ;
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A85F8; /* je: equal / zero */

loc_001A85B7: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A85BA: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_001A85E5; /* je: equal / zero */

loc_001A85C4: ;
    MEM32(ebp + 8) = esi;

loc_001A85C7: ;
    edi = MEM32(edx);
    ebx = MEM32(ebp + 0x18);
    esi = eax;
    esi = esi | MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + esi * 4) = edi;
    if ((_fa != 0)) goto loc_001A85C7; /* jne: not equal / not zero */

loc_001A85E5: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    if ((_fa != 0)) goto loc_001A85BA; /* jne: not equal / not zero */

loc_001A85F8: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A85AA; /* jne: not equal / not zero */

loc_001A860C: ;
    g_seh_ebp = ebp; sub_001A870E(); return; /* tail jmp 0x001A870E */

}

/**
 * sub_001A8611
 * Original: 0x001A8611 - 0x001A8696 (133 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8611: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8696(); return; } /* jne: not equal / not zero */

loc_001A8617: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A870E(); return; } /* je: equal / zero */

loc_001A862E: ;
    MEM32(ebp + 0x20) = ebx;

loc_001A8631: ;
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8680; /* je: equal / zero */

loc_001A863E: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A8641: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_001A866D; /* je: equal / zero */

loc_001A864B: ;
    MEM32(ebp + 8) = esi;

loc_001A864E: ;
    SET_LO16(edi, MEM16(edx));
    ebx = MEM32(ebp + 0x18);
    esi = eax;
    esi = esi | MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebx + esi * 2) = LO16(edi);
    if ((_fa != 0)) goto loc_001A864E; /* jne: not equal / not zero */

loc_001A866D: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    if ((_fa != 0)) goto loc_001A8641; /* jne: not equal / not zero */

loc_001A8680: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A8631; /* jne: not equal / not zero */

loc_001A8694: ;
    g_seh_ebp = ebp; sub_001A870E(); return; /* tail jmp 0x001A870E */

}

/**
 * sub_001A8696
 * Original: 0x001A8696 - 0x001A870E (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8696(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8696: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x2C));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A870E(); return; } /* je: equal / zero */

loc_001A86AB: ;
    MEM32(ebp + 0x20) = ebx;

loc_001A86AE: ;
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A86FA; /* je: equal / zero */

loc_001A86BB: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A86BE: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_001A86E7; /* je: equal / zero */

loc_001A86C8: ;
    MEM32(ebp + 8) = eax;

loc_001A86CB: ;
    SET_LO8(ebx, MEM8(edx));
    esi = MEM32(ebp + 0x18);
    eax = edi;
    eax = eax | MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + esi) = LO8(ebx);
    if ((_fa != 0)) goto loc_001A86CB; /* jne: not equal / not zero */

loc_001A86E7: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    if ((_fa != 0)) goto loc_001A86BE; /* jne: not equal / not zero */

loc_001A86FA: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A86AE; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001A870E(); return; /* fallthrough 0x001A870E */

}

/**
 * sub_001A870E
 * Original: 0x001A870E - 0x001A8715 (7 bytes, 5 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A870E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A870E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001A8715
 * Original: 0x001A8715 - 0x001A875A (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8715(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8715: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A875A(); return; } /* jne: not equal / not zero */

loc_001A8730: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A875A(); return; } /* jne: not equal / not zero */

loc_001A8734: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A875A(); return; } /* jne: not equal / not zero */

loc_001A8738: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A875A(); return; } /* jne: not equal / not zero */

loc_001A873C: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x28) = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x2C));
    MEM32(ebp + 0x18) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    MEM32(ebp + 0x20) = edx;
    MEM32(ebp + -4) = edx;
    g_seh_ebp = ebp; sub_001A8796(); return; /* tail jmp 0x001A8796 */

}

/**
 * sub_001A875A
 * Original: 0x001A875A - 0x001A8796 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A875A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A875A: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x20) = ebx;
    ebx = MEM32(eax + 0x14);
    MEM32(ebp + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x20) = eax;
    MEM32(ebp + -4) = ecx;

    g_seh_ebp = ebp; sub_001A8796(); return; /* fallthrough 0x001A8796 */

}

/**
 * sub_001A8796
 * Original: 0x001A8796 - 0x001A885A (196 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8796(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8796: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0x24) = edx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001A87AAu); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_001A87AA: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = ebp + -40;
    PUSH32(esp, 0x001A87B5u); RECOMP_ABI_CALL(0x00065980u, sub_00065980); /* call 0x00065980 */

loc_001A87B5: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebp + -40;
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x001A87C3u); RECOMP_ABI_CALL(0x000659B0u, sub_000659B0); /* call 0x000659B0 */

loc_001A87C3: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebp + -40;
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x001A87D1u); RECOMP_ABI_CALL(0x001A660Au, sub_001A660A); /* call 0x001A660A */

loc_001A87D1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 4 (32-bit) */
    edx = MEM32(ebp + 0x1C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x28);
    ecx = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A885A(); return; } /* jne: not equal / not zero */

loc_001A87E2: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8943(); return; } /* je: equal / zero */

loc_001A87FA: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A87FD: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8841; /* je: equal / zero */

loc_001A8807: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A880A: ;
    esi = MEM32(ebp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8834; /* je: equal / zero */

loc_001A8814: ;
    MEM32(ebp + 0x1C) = esi;

loc_001A8817: ;
    ebx = MEM32(ebp + 8);
    esi = eax;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + esi * 4);
    MEM32(edx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8817; /* jne: not equal / not zero */

loc_001A8834: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A880A; /* jne: not equal / not zero */

loc_001A8841: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A87FD; /* jne: not equal / not zero */

loc_001A8855: ;
    g_seh_ebp = ebp; sub_001A8943(); return; /* tail jmp 0x001A8943 */

}

/**
 * sub_001A885A
 * Original: 0x001A885A - 0x001A88D5 (123 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A885A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A885A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A88D5(); return; } /* jne: not equal / not zero */

loc_001A8860: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8943(); return; } /* je: equal / zero */

loc_001A8877: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A887A: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001A88BF; /* je: equal / zero */

loc_001A8884: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A8887: ;
    esi = MEM32(ebp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001A88B2; /* je: equal / zero */

loc_001A8891: ;
    MEM32(ebp + 0x1C) = esi;

loc_001A8894: ;
    ebx = MEM32(ebp + 8);
    esi = eax;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(esi, MEM16(ebx + esi * 2));
    MEM16(edx) = LO16(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8894; /* jne: not equal / not zero */

loc_001A88B2: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8887; /* jne: not equal / not zero */

loc_001A88BF: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A887A; /* jne: not equal / not zero */

loc_001A88D3: ;
    g_seh_ebp = ebp; sub_001A8943(); return; /* tail jmp 0x001A8943 */

}

/**
 * sub_001A88D5
 * Original: 0x001A88D5 - 0x001A8943 (110 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A88D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A88D5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x2C));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8943(); return; } /* je: equal / zero */

loc_001A88EA: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A88ED: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001A892F; /* je: equal / zero */

loc_001A88F7: ;
    MEM32(ebp + 0x2C) = eax;

loc_001A88FA: ;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8922; /* je: equal / zero */

loc_001A8904: ;
    MEM32(ebp + 0x1C) = eax;

loc_001A8907: ;
    ebx = MEM32(ebp + 8);
    eax = edi;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(eax + ebx));
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8907; /* jne: not equal / not zero */

loc_001A8922: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A88FA; /* jne: not equal / not zero */

loc_001A892F: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_001A88ED; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001A8943(); return; /* fallthrough 0x001A8943 */

}

/**
 * sub_001A8943
 * Original: 0x001A8943 - 0x001A894A (7 bytes, 5 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8943(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8943: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001A89D7
 * Original: 0x001A89D7 - 0x001A89F6 (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A89D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A89D7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A89F3; /* je: equal / zero */

loc_001A89E1: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_001A89F3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A89F6
 * Original: 0x001A89F6 - 0x001A8A07 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A89F6(void)
{

loc_001A89F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x001A8A06u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001A8A06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8A29
 * Original: 0x001A8A29 - 0x001A8A4B (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A29(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A8A29: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    SET_LO8(ecx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 4) = eax;
    if ((_fa == 0)) goto loc_001A8A49; /* je: equal / zero */

loc_001A8A41: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCE4); PUSH32(esp, 0x001A8A47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8A41u); } /* indirect call */
    }

loc_001A8A47: ;
    MEM8(esi) = LO8(eax);

loc_001A8A49: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8A4B
 * Original: 0x001A8A4B - 0x001A8A62 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8A4B: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8A60; /* je: equal / zero */

loc_001A8A54: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001A8A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8A56u); } /* indirect call */
    }

loc_001A8A5C: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A8A60: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8A62
 * Original: 0x001A8A62 - 0x001A8A72 (16 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A62(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8A62: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001A8A6Eu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001A8A6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8A77
 * Original: 0x001A8A77 - 0x001A8A9C (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8A77: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8A9B; /* je: equal / zero */

loc_001A8A81: ;
    eax = MEM32(0x1CE468);
    MEM32(0x1CE468) = MEM32(0x1CE468) + 1;
    _fa = (uint32_t)(MEM32(0x1CE468)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8A9B; /* jne: not equal / not zero */

loc_001A8A90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CEB30);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x001A8A9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8A95u); } /* indirect call */
    }

loc_001A8A9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8A9C
 * Original: 0x001A8A9C - 0x001A8ABA (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8A9C: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8AB9; /* je: equal / zero */

loc_001A8AA6: ;
    MEM32(0x1CE468) = MEM32(0x1CE468) - 1;
    _fa = (uint32_t)(MEM32(0x1CE468)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8AB9; /* jne: not equal / not zero */

loc_001A8AAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CEB30);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x001A8AB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8AB3u); } /* indirect call */
    }

loc_001A8AB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8ABA
 * Original: 0x001A8ABA - 0x001A8AC6 (12 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8ABA(void)
{

loc_001A8ABA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001A8AC2u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001A8AC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8AE4
 * Original: 0x001A8AE4 - 0x001A8AF1 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8AE4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8AE4: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8AF1
 * Original: 0x001A8AF1 - 0x001A8B02 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8AF1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8AF1: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001A8AFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8AFDu); } /* indirect call */
    }

loc_001A8AFF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8B02
 * Original: 0x001A8B02 - 0x001A8B1D (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8B02: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8B1D(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A8B0D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001A8B1D(); return; } /* jne: not equal / not zero */

loc_001A8B13: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001A8B19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8B16u); } /* indirect call */
    }

loc_001A8B19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001A8B20(); return; /* tail jmp 0x001A8B20 */

}

/**
 * sub_001A8B1D
 * Original: 0x001A8B1D - 0x001A8B20 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8B1D: ;
    eax = MEM32(ecx + 4);

    g_seh_ebp = ebp; sub_001A8B20(); return; /* fallthrough 0x001A8B20 */

}

/**
 * sub_001A8B20
 * Original: 0x001A8B20 - 0x001A8B23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B20(void)
{

loc_001A8B20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8B23
 * Original: 0x001A8B23 - 0x001A8B2C (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B23(void)
{

loc_001A8B23: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8B2C
 * Original: 0x001A8B2C - 0x001A8B44 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B2C(void)
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

loc_001A8B2C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_001A8B44(); return; } /* jp: parity */

loc_001A8B3D: ;
    eax = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_001A8B72(); return; /* tail jmp 0x001A8B72 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8B44
 * Original: 0x001A8B44 - 0x001A8B59 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B44(void)
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

loc_001A8B44: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8B59(); return; } /* jne: not equal / not zero */

loc_001A8B55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001A8B72(); return; /* tail jmp 0x001A8B72 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8B59
 * Original: 0x001A8B59 - 0x001A8B75 (28 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8B59(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8B59: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281E0C)); /* fmul dword ptr [0x281e0c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001A8B72u); RECOMP_ABI_CALL(0x001A8B23u, sub_001A8B23); /* call 0x001A8B23 */

loc_001A8B72: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8B72
 * Original: 0x001A8B72 - 0x001A8B75 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B72(void)
{

loc_001A8B72: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8B75
 * Original: 0x001A8B75 - 0x001A8B79 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B75(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8B75: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_001A8B79
 * Original: 0x001A8B79 - 0x001A8B83 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8B79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001A8B79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x1CEB58)); return; /* indirect tail jmp */

}

/**
 * sub_001A8B83
 * Original: 0x001A8B83 - 0x001A8BAC (41 bytes, 15 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8B83(void)
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

loc_001A8B83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x1CEB5C); PUSH32(esp, 0x001A8BA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8BA2u); } /* indirect call */
    }

loc_001A8BA8: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8BB2
 * Original: 0x001A8BB2 - 0x001A8BBC (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8BB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001A8BB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x1CEB64)); return; /* indirect tail jmp */

}

/**
 * sub_001A8BBC
 * Original: 0x001A8BBC - 0x001A8BBD (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8BBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_001A8BBC: ;
    PUSH32(esp, ebp);

    g_seh_ebp = ebp; sub_001A8BBD(); return; /* fallthrough 0x001A8BBD */

}

/**
 * sub_001A8BBD
 * Original: 0x001A8BBD - 0x001A8BF3 (54 bytes, 18 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8BBD(void)
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

loc_001A8BBD: ;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x1CEB68); PUSH32(esp, 0x001A8BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8BE9u); } /* indirect call */
    }

loc_001A8BEF: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8BF3
 * Original: 0x001A8BF3 - 0x001A8C13 (32 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8BF3(void)
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

loc_001A8BF3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x1CEB6C); PUSH32(esp, 0x001A8C0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8C09u); } /* indirect call */
    }

loc_001A8C0F: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8C13
 * Original: 0x001A8C13 - 0x001A8C47 (52 bytes, 17 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001A8C13(void)
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

loc_001A8C13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x1CEB70); PUSH32(esp, 0x001A8C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8C3Du); } /* indirect call */
    }

loc_001A8C43: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8C47
 * Original: 0x001A8C47 - 0x001A8C69 (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8C47(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8C47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x1CEB74); PUSH32(esp, 0x001A8C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8C60u); } /* indirect call */
    }

loc_001A8C66: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8C69
 * Original: 0x001A8C69 - 0x001A8C90 (39 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8C69(void)
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

loc_001A8C69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x1CEB78); PUSH32(esp, 0x001A8C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8C87u); } /* indirect call */
    }

loc_001A8C8D: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8C90
 * Original: 0x001A8C90 - 0x001A8C9F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8C90: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8C9F(); return; } /* je: equal / zero */

loc_001A8C9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001A8C9F
 * Original: 0x001A8C9F - 0x001A8CAE (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8C9F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8C9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x001A8CAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8CA4u); } /* indirect call */
    }

loc_001A8CAA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001A8CBA
 * Original: 0x001A8CBA - 0x001A8CCB (17 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8CBA(void)
{

loc_001A8CBA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001A8CC2u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8CC2: ;
    eax = ZX8(LO8(eax));
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8CDE
 * Original: 0x001A8CDE - 0x001A8D02 (36 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8CDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8CDE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001A8CF5u); RECOMP_ABI_CALL(0x001B158Au, sub_001B158A); /* call 0x001B158A */

loc_001A8CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001A8D02(); return; } /* jl: less (signed <) */

loc_001A8CF9: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001A8D09(); return; /* tail jmp 0x001A8D09 */

}

/**
 * sub_001A8D02
 * Original: 0x001A8D02 - 0x001A8D09 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8D02: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001A8D09(); return; /* fallthrough 0x001A8D09 */

}

/**
 * sub_001A8D09
 * Original: 0x001A8D09 - 0x001A8D0D (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D09(void)
{

loc_001A8D09: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A8D0D
 * Original: 0x001A8D0D - 0x001A8D19 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8D0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001A8D0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001B1623(); return; /* tail jmp 0x001B1623 */

}

/**
 * sub_001A8D35
 * Original: 0x001A8D35 - 0x001A8D68 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8D35: ;
    eax = MEM32(ecx + 0x80);
    edx = ZX8(MEM8(eax + 0xF));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8D68(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A8D53: ;
    ecx = eax;
    eax = ZX8(MEM8(ecx + 0xF));
    ecx = ZX8(MEM8(ecx + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_001A8D71(); return; /* tail jmp 0x001A8D71 */

}

/**
 * sub_001A8D68
 * Original: 0x001A8D68 - 0x001A8D71 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8D68: ;
    eax = MEM32(ecx + 0x80);
    eax = MEM32(eax + 0x14);

    g_seh_ebp = ebp; sub_001A8D71(); return; /* fallthrough 0x001A8D71 */

}

/**
 * sub_001A8D71
 * Original: 0x001A8D71 - 0x001A8D74 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D71(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8D71: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001A8D7E
 * Original: 0x001A8D7E - 0x001A8D93 (21 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D7E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8D7E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001A8D90u); RECOMP_ABI_CALL(0x001B00AEu, sub_001B00AE); /* call 0x001B00AE */

loc_001A8D90: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8D93
 * Original: 0x001A8D93 - 0x001A8DA8 (21 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D93(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8D93: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001A8DA5u); RECOMP_ABI_CALL(0x001B00AEu, sub_001B00AE); /* call 0x001B00AE */

loc_001A8DA5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8DA8
 * Original: 0x001A8DA8 - 0x001A8DC9 (33 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8DA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8DA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A8DC5u); RECOMP_ABI_CALL(0x001AEEA8u, sub_001AEEA8); /* call 0x001AEEA8 */

loc_001A8DC5: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A8DC9
 * Original: 0x001A8DC9 - 0x001A8DDE (21 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8DC9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8DC9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001A8DD9u); RECOMP_ABI_CALL(0x001AEF01u, sub_001AEF01); /* call 0x001AEF01 */

loc_001A8DD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8DDE
 * Original: 0x001A8DDE - 0x001A8DE3 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8DDE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8DDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A8DE3
 * Original: 0x001A8DE3 - 0x001A8DE8 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8DE3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8DE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8DE8
 * Original: 0x001A8DE8 - 0x001A8DFE (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A8DE8: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x001A8DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8DF8u); } /* indirect call */
    }

loc_001A8DFB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8DFE
 * Original: 0x001A8DFE - 0x001A8E14 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DFE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A8DFE: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A8E11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E0Eu); } /* indirect call */
    }

loc_001A8E11: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8E14
 * Original: 0x001A8E14 - 0x001A8E19 (5 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8E14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A8E19
 * Original: 0x001A8E19 - 0x001A8E1E (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8E19(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8E1E
 * Original: 0x001A8E1E - 0x001A8E34 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E1E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A8E1E: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x001A8E31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E2Eu); } /* indirect call */
    }

loc_001A8E31: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8E34
 * Original: 0x001A8E34 - 0x001A8E4A (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E34_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A8E34: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A8E47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E44u); } /* indirect call */
    }

loc_001A8E47: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8E4A
 * Original: 0x001A8E4A - 0x001A8E60 (22 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E4A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001A8E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E52u); } /* indirect call */
    }

loc_001A8E54: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A8E60
 * Original: 0x001A8E60 - 0x001A8E76 (22 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001A8E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E68u); } /* indirect call */
    }

loc_001A8E6A: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A8E76
 * Original: 0x001A8E76 - 0x001A8E86 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x1CEB28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CEB28), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8E85; /* je: equal / zero */

loc_001A8E80: ;
    eax = MEM32(0xFE80200Cu);

loc_001A8E85: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8E86
 * Original: 0x001A8E86 - 0x001A8EA5 (31 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8E8Cu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8E8C: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x001A8E94u); RECOMP_ABI_CALL(0x001B1027u, sub_001B1027); /* call 0x001B1027 */

loc_001A8E94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8EA4; /* je: equal / zero */

loc_001A8E99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A8EA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8E9Eu); } /* indirect call */
    }

loc_001A8EA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8EA5
 * Original: 0x001A8EA5 - 0x001A8EC4 (31 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8EA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8EABu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8EAB: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x001A8EB3u); RECOMP_ABI_CALL(0x001B1096u, sub_001B1096); /* call 0x001B1096 */

loc_001A8EB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8EC3; /* je: equal / zero */

loc_001A8EB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A8EC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8EBDu); } /* indirect call */
    }

loc_001A8EC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8EC4
 * Original: 0x001A8EC4 - 0x001A8EE3 (31 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8EC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8ECAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8ECA: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x001A8ED2u); RECOMP_ABI_CALL(0x001B1119u, sub_001B1119); /* call 0x001B1119 */

loc_001A8ED2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8EE2; /* je: equal / zero */

loc_001A8ED7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A8EE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8EDCu); } /* indirect call */
    }

loc_001A8EE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8EE3
 * Original: 0x001A8EE3 - 0x001A8F02 (31 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8EE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8EE9u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8EE9: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x001A8EF1u); RECOMP_ABI_CALL(0x001B1188u, sub_001B1188); /* call 0x001B1188 */

loc_001A8EF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8F01; /* je: equal / zero */

loc_001A8EF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A8F01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8EFBu); } /* indirect call */
    }

loc_001A8F01: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8F02
 * Original: 0x001A8F02 - 0x001A8F37 (53 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8F02: ;
    PUSH32(esp, 0x001A8F07u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A8F07: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8F1B; /* jne: not equal / not zero */

loc_001A8F13: ;
    MEM32(0x1CE4A4) = MEM32(0x1CE4A4) | eax;
    _fa = (uint32_t)(MEM32(0x1CE4A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001A8F25;

loc_001A8F1B: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x1CE4A4) = eax;

loc_001A8F25: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8F34; /* je: equal / zero */

loc_001A8F29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A8F34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A8F2Eu); } /* indirect call */
    }

loc_001A8F34: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8F37
 * Original: 0x001A8F37 - 0x001A8F51 (26 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8F37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8F37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A8F43u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001A8F43: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8F51(); return; } /* jne: not equal / not zero */

loc_001A8F4D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001A8F72(); return; /* tail jmp 0x001A8F72 */

}

/**
 * sub_001A8F51
 * Original: 0x001A8F51 - 0x001A8F72 (33 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8F51(void)
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

loc_001A8F51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001A8F61; /* jge: greater or equal (signed >=) */

loc_001A8F5B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001A8F61: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281E10)); /* fmul dword ptr [0x281e10] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001A8F70u); RECOMP_ABI_CALL(0x001B373Au, sub_001B373A); /* call 0x001B373A */

loc_001A8F70: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001A8F72(); return; /* fallthrough 0x001A8F72 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8F72
 * Original: 0x001A8F72 - 0x001A8F81 (15 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8F72: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x001A8F7Au); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001A8F7A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8F81
 * Original: 0x001A8F81 - 0x001A8F86 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8F81: ;
    g_seh_ebp = ebp; sub_001AEBB2(); return; /* tail jmp 0x001AEBB2 */

}

/**
 * sub_001A8F86
 * Original: 0x001A8F86 - 0x001A8F8B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8F86: ;
    g_seh_ebp = ebp; sub_001AEBFC(); return; /* tail jmp 0x001AEBFC */

}

/**
 * sub_001A8F8B
 * Original: 0x001A8F8B - 0x001A8FF9 (110 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8F8B(void)
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

loc_001A8F8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8FA5; /* jne: not equal / not zero */

loc_001A8F9E: ;
    eax = 0x7FFFFF;
    goto loc_001A8FF5;

loc_001A8FA5: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x281E28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x281e28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8FBC; /* jp: parity */

loc_001A8FB5: ;
    eax = 0x800000;
    goto loc_001A8FF5;

loc_001A8FBC: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    fp_push(MEMD(ebp + 8)); /* fld double */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8FE1; /* jne: not equal / not zero */

loc_001A8FCF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281E20)); /* fmul qword ptr [0x281e20] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A8FDAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001A8FDA: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001A8FF5;

loc_001A8FE1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281E18)); /* fmul qword ptr [0x281e18] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A8FECu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001A8FEC: ;
    ecx = 0xFFFFFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_001A8FF5: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8FF9
 * Original: 0x001A8FF9 - 0x001A90D7 (222 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8FF9(void)
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

loc_001A8FF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMD(0x232000)); /* fld double */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281E40)); /* fmul qword ptr [0x281e40] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9013u); RECOMP_ABI_CALL(0x00151318u, sub_00151318); /* call 0x00151318 */

loc_001A9013: ;
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281E38)); /* fmul qword ptr [0x281e38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x1BA408)); /* fmul qword ptr [0x1ba408] */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) / fp_top()); /* fdivr qword ptr [0x22c178] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9038u); RECOMP_ABI_CALL(0x0015350Cu, sub_0015350C); /* call 0x0015350C */

loc_001A9038: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMD(ebp + -8)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281E30)); /* fmul qword ptr [0x281e30] */
    MEMD(ebp + -24) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + -16)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMD(ebp + -32) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x22C178)); /* fadd qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(MEMD(0x281BD0) / fp_top()); /* fdivr qword ptr [0x281bd0] */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -16)); /* fmul qword ptr [ebp - 0x10] */
    MEMD(ebp + -16) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x22C178)); /* fadd qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -8)); /* fmul qword ptr [ebp - 8] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A907Du); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001A907D: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -24)); /* fmul qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    MEMD(ebp + -24) = fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9092u); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001A9092: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(ebp + -16)); /* fsub qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -8)); /* fmul qword ptr [ebp - 8] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A90A7u); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001A90A7: ;
    fp_push(MEMD(ebp + -24)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A90B9u); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001A90B9: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(ebp + -32)); /* fsub qword ptr [ebp - 0x20] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -8)); /* fmul qword ptr [ebp - 8] */
    fp_top() = -fp_top(); /* fchs */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A90D0u); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001A90D0: ;
    MEM32(esi + 0x10) = eax;
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
 * sub_001A90D7
 * Original: 0x001A90D7 - 0x001A90FC (37 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A90D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A90D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A90DDu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A90DD: ;
    PUSH32(esp, MEM32(esp + 8));
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x001A90E9u); RECOMP_ABI_CALL(0x001AEBAFu, sub_001AEBAF); /* call 0x001AEBAF */

loc_001A90E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A90F9; /* je: equal / zero */

loc_001A90EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A90F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A90F3u); } /* indirect call */
    }

loc_001A90F9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A9106
 * Original: 0x001A9106 - 0x001A911B (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9106(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9106: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A911B(); return; } /* je: equal / zero */

loc_001A910E: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    g_seh_ebp = ebp; sub_001A9125(); return; /* tail jmp 0x001A9125 */

}

/**
 * sub_001A911B
 * Original: 0x001A911B - 0x001A9125 (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A911B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A911B: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9125(); return; /* fallthrough 0x001A9125 */

}

/**
 * sub_001A9125
 * Original: 0x001A9125 - 0x001A9128 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9125(void)
{

loc_001A9125: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A9128
 * Original: 0x001A9128 - 0x001A9145 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9128(void)
{

loc_001A9128: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x281E48;
    MEM32(0x1CEB28) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9145
 * Original: 0x001A9145 - 0x001A916C (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9145: ;
    PUSH32(esp, 0x001A914Au); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A914A: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A916C(); return; } /* je: equal / zero */

loc_001A9156: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9165; /* je: equal / zero */

loc_001A915A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A915Fu); } /* indirect call */
    }

loc_001A9165: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9189(); return; /* tail jmp 0x001A9189 */

}

/**
 * sub_001A916C
 * Original: 0x001A916C - 0x001A9189 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A916C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A916C: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001A9186; /* je: equal / zero */

loc_001A917B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9180u); } /* indirect call */
    }

loc_001A9186: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001A9189(); return; /* fallthrough 0x001A9189 */

}

/**
 * sub_001A9189
 * Original: 0x001A9189 - 0x001A918C (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9189(void)
{

loc_001A9189: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A918C
 * Original: 0x001A918C - 0x001A91C6 (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A918C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A918C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x281E48;
    MEM32(0x1CEB28) = MEM32(0x1CEB28) & 0;
    _fa = (uint32_t)(MEM32(0x1CEB28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A91AD; /* je: equal / zero */

loc_001A91A3: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A91A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A91A6u); } /* indirect call */
    }

loc_001A91A9: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A91AD: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A91BE; /* je: equal / zero */

loc_001A91B4: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A91BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A91B7u); } /* indirect call */
    }

loc_001A91BA: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A91BE: ;
    MEM32(esi) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A91C6
 * Original: 0x001A91C6 - 0x001A9232 (108 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A91C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A91C6: ;
    PUSH32(esp, 0x001A91CBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A91CB: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A91ED; /* je: equal / zero */

loc_001A91D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A91E6; /* je: equal / zero */

loc_001A91DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A91E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A91E0u); } /* indirect call */
    }

loc_001A91E6: ;
    eax = 0x80004005u;
    goto loc_001A922F;

loc_001A91ED: ;
    edx = MEM32(0x1CE48C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(0x1CE490);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x1CE494);
    PUSH32(esp, esi);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x1CE47C);
    esi = MEM32(0x1CE480);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0xC) = esi;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A922D; /* je: equal / zero */

loc_001A9222: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A922Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9227u); } /* indirect call */
    }

loc_001A922D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A922F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9232
 * Original: 0x001A9232 - 0x001A9259 (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9232: ;
    PUSH32(esp, 0x001A9237u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9237: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9259(); return; } /* je: equal / zero */

loc_001A9243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9252; /* je: equal / zero */

loc_001A9247: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9252u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A924Cu); } /* indirect call */
    }

loc_001A9252: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A927C(); return; /* tail jmp 0x001A927C */

}

/**
 * sub_001A9259
 * Original: 0x001A9259 - 0x001A927C (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A9259(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9259: ;
    ecx = MEM32(0x1CE4A0);
    edx = MEM32(esp + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A927A; /* je: equal / zero */

loc_001A926F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A927Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9274u); } /* indirect call */
    }

loc_001A927A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001A927C(); return; /* fallthrough 0x001A927C */

}

/**
 * sub_001A927C
 * Original: 0x001A927C - 0x001A927F (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A927C(void)
{

loc_001A927C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A927F
 * Original: 0x001A927F - 0x001A92AA (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A927F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A927F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9288u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9288: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A92AA(); return; } /* je: equal / zero */

loc_001A9294: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A92A3; /* je: equal / zero */

loc_001A9298: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A92A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A929Du); } /* indirect call */
    }

loc_001A92A3: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A92DE(); return; /* tail jmp 0x001A92DE */

}

/**
 * sub_001A92AA
 * Original: 0x001A92AA - 0x001A92DE (52 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A92AA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x001A92B9u); RECOMP_ABI_CALL(0x001A9106u, sub_001A9106); /* call 0x001A9106 */

loc_001A92B9: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001A92CAu); RECOMP_ABI_CALL(0x001A8CDEu, sub_001A8CDE); /* call 0x001A8CDE */

loc_001A92CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A92DB; /* je: equal / zero */

loc_001A92D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A92DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A92D5u); } /* indirect call */
    }

loc_001A92DB: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001A92DE(); return; /* fallthrough 0x001A92DE */

}

/**
 * sub_001A92DE
 * Original: 0x001A92DE - 0x001A92E3 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A92DE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A92E3
 * Original: 0x001A92E3 - 0x001A930E (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A92E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A92E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A92ECu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A92EC: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A930E(); return; } /* je: equal / zero */

loc_001A92F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9307; /* je: equal / zero */

loc_001A92FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9301u); } /* indirect call */
    }

loc_001A9307: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9340(); return; /* tail jmp 0x001A9340 */

}

/**
 * sub_001A930E
 * Original: 0x001A930E - 0x001A9340 (50 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A930E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A930E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001A932Cu); RECOMP_ABI_CALL(0x001B1623u, sub_001B1623); /* call 0x001B1623 */

loc_001A932C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A933D; /* je: equal / zero */

loc_001A9332: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A933Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9337u); } /* indirect call */
    }

loc_001A933D: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9340(); return; /* fallthrough 0x001A9340 */

}

/**
 * sub_001A9340
 * Original: 0x001A9340 - 0x001A9345 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9340: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A9345
 * Original: 0x001A9345 - 0x001A93A4 (95 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A9345(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9345: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A934Eu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A934E: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A9370; /* je: equal / zero */

loc_001A935A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9369; /* je: equal / zero */

loc_001A935E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9363u); } /* indirect call */
    }

loc_001A9369: ;
    eax = 0x80004005u;
    goto loc_001A939F;

loc_001A9370: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A938Bu); RECOMP_ABI_CALL(0x001B16CCu, sub_001B16CC); /* call 0x001B16CC */

loc_001A938B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A939C; /* je: equal / zero */

loc_001A9391: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A939Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9396u); } /* indirect call */
    }

loc_001A939C: ;
    eax = edi;
    POP32(esp, edi);

loc_001A939F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A93A4
 * Original: 0x001A93A4 - 0x001A93F4 (80 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A93A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A93A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A93AAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A93AA: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A93CC; /* je: equal / zero */

loc_001A93B6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A93C5; /* je: equal / zero */

loc_001A93BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A93C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A93BFu); } /* indirect call */
    }

loc_001A93C5: ;
    eax = 0x80004005u;
    goto loc_001A93F0;

loc_001A93CC: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A93DFu); RECOMP_ABI_CALL(0x001B14B9u, sub_001B14B9); /* call 0x001B14B9 */

loc_001A93DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A93EE; /* je: equal / zero */

loc_001A93E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A93EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A93E8u); } /* indirect call */
    }

loc_001A93EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A93F0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A93F4
 * Original: 0x001A93F4 - 0x001A941C (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A93F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A93F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A93FAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A93FA: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A941C(); return; } /* je: equal / zero */

loc_001A9406: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9415; /* je: equal / zero */

loc_001A940A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A940Fu); } /* indirect call */
    }

loc_001A9415: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A944F(); return; /* tail jmp 0x001A944F */

}

/**
 * sub_001A941C
 * Original: 0x001A941C - 0x001A944F (51 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A941C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A941C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    PUSH32(esp, edi);
    MEM8(edx + ecx + 0x10) = LO8(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A943Au); RECOMP_ABI_CALL(0x001B1D2Cu, sub_001B1D2C); /* call 0x001B1D2C */

loc_001A943A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A944B; /* je: equal / zero */

loc_001A9440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A944Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9445u); } /* indirect call */
    }

loc_001A944B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001A944F(); return; /* fallthrough 0x001A944F */

}

/**
 * sub_001A944F
 * Original: 0x001A944F - 0x001A9453 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A944F(void)
{

loc_001A944F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A9453
 * Original: 0x001A9453 - 0x001A9462 (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A9453(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9453: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001A945Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9457u); } /* indirect call */
    }

loc_001A945D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9462
 * Original: 0x001A9462 - 0x001A94A8 (70 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A9462(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9462: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x10);
    edx = 0xFE85A6ACu;
    POP32(esp, ecx);
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A94A3; /* je: equal / zero */

loc_001A947E: ;
    MEM32(edx) = eax;
    MEM32(0xFE85A6B0u) = eax;
    MEM32(0xFE85A6BCu) = eax;
    MEM32(0xFE85A6C0u) = eax;
    MEM32(0xFE85A6C4u) = eax;
    MEM32(0xFE85A6C8u) = eax;
    MEM32(0xFE85A6CCu) = eax;
    MEM32(0xFE85A6D0u) = eax;

loc_001A94A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A94A8
 * Original: 0x001A94A8 - 0x001A94F5 (77 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A94A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A94A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A94AEu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A94AE: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A94D0; /* je: equal / zero */

loc_001A94BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A94C9; /* je: equal / zero */

loc_001A94BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A94C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A94C3u); } /* indirect call */
    }

loc_001A94C9: ;
    eax = 0x80004005u;
    goto loc_001A94F1;

loc_001A94D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A94DDu); RECOMP_ABI_CALL(0x001B1E02u, sub_001B1E02); /* call 0x001B1E02 */

loc_001A94DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A94EE; /* je: equal / zero */

loc_001A94E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A94EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A94E8u); } /* indirect call */
    }

loc_001A94EE: ;
    eax = edi;
    POP32(esp, edi);

loc_001A94F1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A94F5
 * Original: 0x001A94F5 - 0x001A955E (105 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A94F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A94F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A94FBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A94FB: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A951D; /* je: equal / zero */

loc_001A9507: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9516; /* je: equal / zero */

loc_001A950B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9510u); } /* indirect call */
    }

loc_001A9516: ;
    eax = 0x80004005u;
    goto loc_001A955A;

loc_001A951D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001A9535u); RECOMP_ABI_CALL(0x001B3DBFu, sub_001B3DBF); /* call 0x001B3DBF */

loc_001A9535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9543; /* je: equal / zero */

loc_001A9539: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A9548;

loc_001A9543: ;
    edi = 0x8007000Eu;

loc_001A9548: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9557; /* je: equal / zero */

loc_001A954C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9551u); } /* indirect call */
    }

loc_001A9557: ;
    eax = edi;
    POP32(esp, edi);

loc_001A955A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A955E
 * Original: 0x001A955E - 0x001A95AE (80 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A955E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A955E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9564u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9564: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A9586; /* je: equal / zero */

loc_001A9570: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A957F; /* je: equal / zero */

loc_001A9574: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A957Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9579u); } /* indirect call */
    }

loc_001A957F: ;
    eax = 0x80004005u;
    goto loc_001A95AA;

loc_001A9586: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001A9599u); RECOMP_ABI_CALL(0x001B3F5Eu, sub_001B3F5E); /* call 0x001B3F5E */

loc_001A9599: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A95A8; /* je: equal / zero */

loc_001A959D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A95A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A95A2u); } /* indirect call */
    }

loc_001A95A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A95AA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A95AE
 * Original: 0x001A95AE - 0x001A95DF (49 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A95AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A95AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A95B4u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A95B4: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001A95CC; /* jne: not equal / not zero */

loc_001A95C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A95CCu); RECOMP_ABI_CALL(0x001B1C63u, sub_001B1C63); /* call 0x001B1C63 */

loc_001A95CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A95DB; /* je: equal / zero */

loc_001A95D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A95DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A95D5u); } /* indirect call */
    }

loc_001A95DB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A95DF
 * Original: 0x001A95DF - 0x001A96FA (283 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A95DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A95DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A95EFu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A95EF: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), ebx (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9616; /* je: equal / zero */

loc_001A95FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A960C; /* je: equal / zero */

loc_001A9601: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A960Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9606u); } /* indirect call */
    }

loc_001A960C: ;
    eax = 0x80004005u;
    goto loc_001A96F5;

loc_001A9616: ;
    eax = MEM32(0x1CE4A0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96E1; /* je: equal / zero */

loc_001A962E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = 0x80000000u;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9641; /* je: equal / zero */

loc_001A9639: ;
    MEM32(0x1CE4A0) = MEM32(0x1CE4A0) | edi;
    _fa = (uint32_t)(MEM32(0x1CE4A0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001A9648;

loc_001A9641: ;
    MEM8(0x1CE4A3) = MEM8(0x1CE4A3) & 0x7F;
    _fa = (uint32_t)(MEM8(0x1CE4A3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001A9648: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9654u); RECOMP_ABI_CALL(0x001B1D71u, sub_001B1D71); /* call 0x001B1D71 */

loc_001A9654: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A96DF; /* jl: less (signed <) */

loc_001A965F: ;
    eax = MEM32(0x1CE4A0);
    ecx = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A967B; /* je: equal / zero */

loc_001A9674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A9684; /* je: equal / zero */

loc_001A967B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9684; /* jne: not equal / not zero */

loc_001A967F: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_001A9688;

loc_001A9684: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A9688: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96DF; /* je: equal / zero */

loc_001A9691: ;
    edx = 0x4000000;

loc_001A9696: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96D9; /* je: equal / zero */

loc_001A96A3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96BC; /* je: equal / zero */

loc_001A96A9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x58), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A96D9; /* jne: not equal / not zero */

loc_001A96AE: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) | ebx;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001A96CE;

loc_001A96BC: ;
    _fa = (uint32_t)(MEM8(ecx + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x58), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A96D9; /* je: equal / zero */

loc_001A96C1: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A96CE: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001A96D9: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9696; /* jne: not equal / not zero */

loc_001A96DF: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_001A96E1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96F2; /* je: equal / zero */

loc_001A96E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A96F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A96ECu); } /* indirect call */
    }

loc_001A96F2: ;
    eax = MEM32(ebp + -4);

loc_001A96F5: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9717
 * Original: 0x001A9717 - 0x001A973C (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9717(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9717: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A9738; /* jbe: below or equal (unsigned <=) */

loc_001A9722: ;
    PUSH32(esp, edi);

loc_001A9723: ;
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi * 4 + 0x30) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A9723; /* jb: below (unsigned <) */

loc_001A9737: ;
    POP32(esp, edi);

loc_001A9738: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A974E
 * Original: 0x001A974E - 0x001A97BC (110 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A974E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A974E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9764u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001A9764: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A9781; /* jbe: below or equal (unsigned <=) */

loc_001A976D: ;
    edx = ecx;
    PUSH32(esp, ebx);

loc_001A9770: ;
    ebx = ZX8(MEM8(esi + eax + 0x28));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A977B; /* jne: not equal / not zero */

loc_001A977A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A977B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A9770; /* jb: below (unsigned <) */

loc_001A9780: ;
    POP32(esp, ebx);

loc_001A9781: ;
    eax = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A97AE; /* jae: above or equal (unsigned >=) */

loc_001A9789: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A979A; /* jbe: below or equal (unsigned <=) */

loc_001A9792: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x24) = ecx;

loc_001A979A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A97AE; /* je: equal / zero */

loc_001A979E: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A979E; /* jne: not equal / not zero */

loc_001A97AE: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A97B6u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001A97B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A97BC
 * Original: 0x001A97BC - 0x001A9809 (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A97BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A97BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x281E68;
    PUSH32(esp, 0x001A97CEu); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001A97CE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A97DF; /* je: equal / zero */

loc_001A97D5: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A97DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A97D8u); } /* indirect call */
    }

loc_001A97DB: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A97DF: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A97F0; /* je: equal / zero */

loc_001A97E6: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A97ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A97E9u); } /* indirect call */
    }

loc_001A97EC: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A97F0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9801; /* je: equal / zero */

loc_001A97F7: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A97FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A97FAu); } /* indirect call */
    }

loc_001A97FD: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A9801: ;
    MEM32(esi) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9809
 * Original: 0x001A9809 - 0x001A9822 (25 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9809(void)
{

loc_001A9809: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A981Fu); RECOMP_ABI_CALL(0x001B5502u, sub_001B5502); /* call 0x001B5502 */

loc_001A981F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9822
 * Original: 0x001A9822 - 0x001A983E (28 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9822(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9822: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x001A983Bu); RECOMP_ABI_CALL(0x001B546Au, sub_001B546A); /* call 0x001B546A */

loc_001A983B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A983E
 * Original: 0x001A983E - 0x001A9851 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A983E(void)
{

loc_001A983E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A984Eu); RECOMP_ABI_CALL(0x001B4BACu, sub_001B4BAC); /* call 0x001B4BAC */

loc_001A984E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9851
 * Original: 0x001A9851 - 0x001A9864 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9851(void)
{

loc_001A9851: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A9861u); RECOMP_ABI_CALL(0x001B4CDBu, sub_001B4CDB); /* call 0x001B4CDB */

loc_001A9861: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9864
 * Original: 0x001A9864 - 0x001A9877 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9864(void)
{

loc_001A9864: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A9874u); RECOMP_ABI_CALL(0x001B4E6Du, sub_001B4E6D); /* call 0x001B4E6D */

loc_001A9874: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9877
 * Original: 0x001A9877 - 0x001A989A (35 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9877(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9877: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0x001A9896u); RECOMP_ABI_CALL(0x001B546Au, sub_001B546A); /* call 0x001B546A */

loc_001A9896: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A989A
 * Original: 0x001A989A - 0x001A98B7 (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A989A(void)
{

loc_001A989A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x001A98ABu); RECOMP_ABI_CALL(0x001A9717u, sub_001A9717); /* call 0x001A9717 */

loc_001A98AB: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001A98B3u); RECOMP_ABI_CALL(0x001B546Au, sub_001B546A); /* call 0x001B546A */

loc_001A98B3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A98B7
 * Original: 0x001A98B7 - 0x001A98C8 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A98B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A98B7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A98C3u); RECOMP_ABI_CALL(0x001B57B8u, sub_001B57B8); /* call 0x001B57B8 */

loc_001A98C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A98C8
 * Original: 0x001A98C8 - 0x001A98DB (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A98C8(void)
{

loc_001A98C8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001A98D8u); RECOMP_ABI_CALL(0x001B5042u, sub_001B5042); /* call 0x001B5042 */

loc_001A98D8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A98DB
 * Original: 0x001A98DB - 0x001A9A0C (305 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A98DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A98DB: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xB8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001A99F6; /* je: equal / zero */

loc_001A98F5: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A99F6; /* je: equal / zero */

loc_001A98FF: ;
    MEM32(esi) = edx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A9915; /* je: equal / zero */

loc_001A9906: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_001A9915: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A9929; /* je: equal / zero */

loc_001A991A: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;

loc_001A9929: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A994C; /* je: equal / zero */

loc_001A992E: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = esi;

loc_001A994C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A996F; /* je: equal / zero */

loc_001A9951: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x18);
    MEM32(edx + 0x18) = esi;

loc_001A996F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A9992; /* je: equal / zero */

loc_001A9974: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x20);
    MEM32(edx + 0x20) = esi;

loc_001A9992: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A99A6; /* je: equal / zero */

loc_001A9997: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x24);
    MEM32(edx + 0x24) = esi;

loc_001A99A6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A99C9; /* je: equal / zero */

loc_001A99AB: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = esi;

loc_001A99C9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A99EC; /* je: equal / zero */

loc_001A99CE: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x30);
    MEM32(edx + 0x30) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    eax = MEM32(eax + 0x34);
    MEM32(edx + 0x34) = eax;

loc_001A99EC: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x001A99F4u); RECOMP_ABI_CALL(0x001B55B0u, sub_001B55B0); /* call 0x001B55B0 */

loc_001A99F4: ;
    goto loc_001A9A06;

loc_001A99F6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A9A06; /* je: equal / zero */

loc_001A99FB: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9A06u); RECOMP_ABI_CALL(0x001B4A3Du, sub_001B4A3D); /* call 0x001B4A3D */

loc_001A9A06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9A0C
 * Original: 0x001A9A0C - 0x001A9A29 (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A9A0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9A0C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001A9A20; /* je: equal / zero */

loc_001A9A1A: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) | 1;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001A9A24;

loc_001A9A20: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001A9A24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9A40
 * Original: 0x001A9A40 - 0x001A9AC5 (133 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A9A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A9A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9A67; /* je: equal / zero */

loc_001A9A5B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9A61u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001A9A61: ;
    MEM32(ebx + 0xD8) = edi;

loc_001A9A67: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9B0C(); return; } /* je: equal / zero */

loc_001A9A78: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9A8Au); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001A9A8A: ;
    ecx = eax;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF8FFF2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ecx = ecx + 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xD8) = eax;
    MEM32(ebp + -8) = ecx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001A9B0B(); return; } /* js: sign (negative) */

loc_001A9AA7: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    ecx = eax;
    _cf = 0; /* logical op clears CF */
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
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001A9B0B(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001A9AC5(); return; /* fallthrough 0x001A9AC5 */

}

/**
 * sub_001A9AC5
 * Original: 0x001A9AC5 - 0x001A9AFC (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9AC5: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD8);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9AFC(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A9ADA: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD8);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    g_seh_ebp = ebp; sub_001A9AFF(); return; /* tail jmp 0x001A9AFF */

}

/**
 * sub_001A9AFC
 * Original: 0x001A9AFC - 0x001A9AFF (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9AFC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001A9AFF(); return; /* fallthrough 0x001A9AFF */

}

/**
 * sub_001A9AFF
 * Original: 0x001A9AFF - 0x001A9B0B (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9AFF: ;
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9AC5(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001A9B0B(); return; /* fallthrough 0x001A9B0B */

}

/**
 * sub_001A9B0B
 * Original: 0x001A9B0B - 0x001A9B0C (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B0B: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001A9B0C(); return; /* fallthrough 0x001A9B0C */

}

/**
 * sub_001A9B0C
 * Original: 0x001A9B0C - 0x001A9B15 (9 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B0C: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9B15
 * Original: 0x001A9B15 - 0x001A9B48 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B15: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x281E78;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B2F; /* je: equal / zero */

loc_001A9B25: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A9B2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9B28u); } /* indirect call */
    }

loc_001A9B2B: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A9B2F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B40; /* je: equal / zero */

loc_001A9B36: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001A9B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9B39u); } /* indirect call */
    }

loc_001A9B3C: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001A9B40: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001A97BC(); return; /* tail jmp 0x001A97BC */

}

/**
 * sub_001A9B48
 * Original: 0x001A9B48 - 0x001A9B6F (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B48: ;
    PUSH32(esp, 0x001A9B4Du); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9B4D: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9B6F(); return; } /* je: equal / zero */

loc_001A9B59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B68; /* je: equal / zero */

loc_001A9B5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9B62u); } /* indirect call */
    }

loc_001A9B68: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9B8C(); return; /* tail jmp 0x001A9B8C */

}

/**
 * sub_001A9B6F
 * Original: 0x001A9B6F - 0x001A9B8C (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B6F: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B89; /* je: equal / zero */

loc_001A9B7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9B89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9B83u); } /* indirect call */
    }

loc_001A9B89: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001A9B8C(); return; /* fallthrough 0x001A9B8C */

}

/**
 * sub_001A9B8C
 * Original: 0x001A9B8C - 0x001A9B8F (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B8C(void)
{

loc_001A9B8C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A9B8F
 * Original: 0x001A9B8F - 0x001A9BB7 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9B8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9B95u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9B95: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9BB7(); return; } /* je: equal / zero */

loc_001A9BA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9BB0; /* je: equal / zero */

loc_001A9BA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9BAAu); } /* indirect call */
    }

loc_001A9BB0: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9BD5(); return; /* tail jmp 0x001A9BD5 */

}

/**
 * sub_001A9BB7
 * Original: 0x001A9BB7 - 0x001A9BD5 (30 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9BB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9BB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001A9BC1u); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001A9BC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9BD2; /* je: equal / zero */

loc_001A9BC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9BD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9BCCu); } /* indirect call */
    }

loc_001A9BD2: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9BD5(); return; /* fallthrough 0x001A9BD5 */

}

/**
 * sub_001A9BD5
 * Original: 0x001A9BD5 - 0x001A9BD9 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9BD5(void)
{

loc_001A9BD5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A9BD9
 * Original: 0x001A9BD9 - 0x001A9C01 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9BD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9BD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9BDFu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9BDF: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9C01(); return; } /* je: equal / zero */

loc_001A9BEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9BFA; /* je: equal / zero */

loc_001A9BEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9BFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9BF4u); } /* indirect call */
    }

loc_001A9BFA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9C26(); return; /* tail jmp 0x001A9C26 */

}

/**
 * sub_001A9C01
 * Original: 0x001A9C01 - 0x001A9C26 (37 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9C01: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001A9C12u); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001A9C12: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C23; /* je: equal / zero */

loc_001A9C18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9C1Du); } /* indirect call */
    }

loc_001A9C23: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9C26(); return; /* fallthrough 0x001A9C26 */

}

/**
 * sub_001A9C26
 * Original: 0x001A9C26 - 0x001A9C2A (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C26(void)
{

loc_001A9C26: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A9C2A
 * Original: 0x001A9C2A - 0x001A9C83 (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9C2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9C30u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9C30: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C52; /* je: equal / zero */

loc_001A9C3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C4B; /* je: equal / zero */

loc_001A9C40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9C45u); } /* indirect call */
    }

loc_001A9C4B: ;
    eax = 0x80004005u;
    goto loc_001A9C7F;

loc_001A9C52: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001A9C6Bu); RECOMP_ABI_CALL(0x001B68EBu, sub_001B68EB); /* call 0x001B68EB */

loc_001A9C6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C7C; /* je: equal / zero */

loc_001A9C71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9C7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9C76u); } /* indirect call */
    }

loc_001A9C7C: ;
    eax = edi;
    POP32(esp, edi);

loc_001A9C7F: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A9C83
 * Original: 0x001A9C83 - 0x001A9CAB (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9C83: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9C89u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9C89: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9CAB(); return; } /* je: equal / zero */

loc_001A9C95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9CA4; /* je: equal / zero */

loc_001A9C99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9CA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9C9Eu); } /* indirect call */
    }

loc_001A9CA4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9CCE(); return; /* tail jmp 0x001A9CCE */

}

/**
 * sub_001A9CAB
 * Original: 0x001A9CAB - 0x001A9CCE (35 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9CAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9CAB: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9CBAu); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001A9CBA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9CCB; /* je: equal / zero */

loc_001A9CC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9CCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9CC5u); } /* indirect call */
    }

loc_001A9CCB: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9CCE(); return; /* fallthrough 0x001A9CCE */

}

/**
 * sub_001A9CCE
 * Original: 0x001A9CCE - 0x001A9CD2 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9CCE(void)
{

loc_001A9CCE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A9CD2
 * Original: 0x001A9CD2 - 0x001A9CFA (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9CD2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9CD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9CD8u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9CD8: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9CFA(); return; } /* je: equal / zero */

loc_001A9CE4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9CF3; /* je: equal / zero */

loc_001A9CE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9CF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9CEDu); } /* indirect call */
    }

loc_001A9CF3: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9D27(); return; /* tail jmp 0x001A9D27 */

}

/**
 * sub_001A9CFA
 * Original: 0x001A9CFA - 0x001A9D27 (45 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9CFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9CFA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001A9D13u); RECOMP_ABI_CALL(0x001B6924u, sub_001B6924); /* call 0x001B6924 */

loc_001A9D13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D24; /* je: equal / zero */

loc_001A9D19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9D1Eu); } /* indirect call */
    }

loc_001A9D24: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9D27(); return; /* fallthrough 0x001A9D27 */

}

/**
 * sub_001A9D27
 * Original: 0x001A9D27 - 0x001A9D2B (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9D27(void)
{

loc_001A9D27: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A9D2B
 * Original: 0x001A9D2B - 0x001A9D7C (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9D2B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9D2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9D31u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9D31: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D53; /* je: equal / zero */

loc_001A9D3D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D4C; /* je: equal / zero */

loc_001A9D41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9D4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9D46u); } /* indirect call */
    }

loc_001A9D4C: ;
    eax = 0x80004005u;
    goto loc_001A9D78;

loc_001A9D53: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001A9D64u); RECOMP_ABI_CALL(0x001B5FF6u, sub_001B5FF6); /* call 0x001B5FF6 */

loc_001A9D64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D75; /* je: equal / zero */

loc_001A9D6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9D75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9D6Fu); } /* indirect call */
    }

loc_001A9D75: ;
    eax = edi;
    POP32(esp, edi);

loc_001A9D78: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9D7C
 * Original: 0x001A9D7C - 0x001A9DD5 (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9D7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9D7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9D82u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9D82: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001A9DA4; /* je: equal / zero */

loc_001A9D8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D9D; /* je: equal / zero */

loc_001A9D92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9D9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9D97u); } /* indirect call */
    }

loc_001A9D9D: ;
    eax = 0x80004005u;
    goto loc_001A9DD1;

loc_001A9DA4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001A9DBDu); RECOMP_ABI_CALL(0x001B6069u, sub_001B6069); /* call 0x001B6069 */

loc_001A9DBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9DCE; /* je: equal / zero */

loc_001A9DC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9DCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9DC8u); } /* indirect call */
    }

loc_001A9DCE: ;
    eax = edi;
    POP32(esp, edi);

loc_001A9DD1: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A9DD5
 * Original: 0x001A9DD5 - 0x001A9DFD (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9DD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9DD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9DDBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9DDB: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9DFD(); return; } /* je: equal / zero */

loc_001A9DE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9DF6; /* je: equal / zero */

loc_001A9DEB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9DF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9DF0u); } /* indirect call */
    }

loc_001A9DF6: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9E22(); return; /* tail jmp 0x001A9E22 */

}

/**
 * sub_001A9DFD
 * Original: 0x001A9DFD - 0x001A9E22 (37 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9DFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9DFD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001A9E0Eu); RECOMP_ABI_CALL(0x001B60A2u, sub_001B60A2); /* call 0x001B60A2 */

loc_001A9E0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E1F; /* je: equal / zero */

loc_001A9E14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9E1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9E19u); } /* indirect call */
    }

loc_001A9E1F: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9E22(); return; /* fallthrough 0x001A9E22 */

}

/**
 * sub_001A9E22
 * Original: 0x001A9E22 - 0x001A9E26 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E22(void)
{

loc_001A9E22: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A9E26
 * Original: 0x001A9E26 - 0x001A9E51 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A9E26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9E26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9E2Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9E2F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9E51(); return; } /* je: equal / zero */

loc_001A9E3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E4A; /* je: equal / zero */

loc_001A9E3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9E44u); } /* indirect call */
    }

loc_001A9E4A: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9EA6(); return; /* tail jmp 0x001A9EA6 */

}

/**
 * sub_001A9E51
 * Original: 0x001A9E51 - 0x001A9E76 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9E51: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9E76(); return; } /* je: equal / zero */

loc_001A9E62: ;
    PUSH32(esp, ebx);
    ebx = esi + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC8) (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9E7E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A9E6F: ;
    esi = 0x88780032u;
    g_seh_ebp = ebp; sub_001A9E94(); return; /* tail jmp 0x001A9E94 */

}

/**
 * sub_001A9E76
 * Original: 0x001A9E76 - 0x001A9E7E (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9E76: ;
    ecx = MEM32(eax + 0xC8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001A9E7E(); return; /* fallthrough 0x001A9E7E */

}

/**
 * sub_001A9E7E
 * Original: 0x001A9E7E - 0x001A9E94 (22 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9E7E: ;
    MEM32(eax + 0xCC) = esi;
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x001A9E92u); RECOMP_ABI_CALL(0x001B6664u, sub_001B6664); /* call 0x001B6664 */

loc_001A9E92: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001A9E94(); return; /* fallthrough 0x001A9E94 */

}

/**
 * sub_001A9E94
 * Original: 0x001A9E94 - 0x001A9EA6 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9E94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EA3; /* je: equal / zero */

loc_001A9E98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9E9Du); } /* indirect call */
    }

loc_001A9EA3: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001A9EA6(); return; /* fallthrough 0x001A9EA6 */

}

/**
 * sub_001A9EA6
 * Original: 0x001A9EA6 - 0x001A9EAB (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9EA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9EA6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A9EAB
 * Original: 0x001A9EAB - 0x001A9ED3 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9EAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9EAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9EB1u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9EB1: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9ED3(); return; } /* je: equal / zero */

loc_001A9EBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9ECC; /* je: equal / zero */

loc_001A9EC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9ECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9EC6u); } /* indirect call */
    }

loc_001A9ECC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9EFC(); return; /* tail jmp 0x001A9EFC */

}

/**
 * sub_001A9ED3
 * Original: 0x001A9ED3 - 0x001A9EFC (41 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9ED3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9ED3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001A9EE8u); RECOMP_ABI_CALL(0x001B60E4u, sub_001B60E4); /* call 0x001B60E4 */

loc_001A9EE8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EF9; /* je: equal / zero */

loc_001A9EEE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9EF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9EF3u); } /* indirect call */
    }

loc_001A9EF9: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001A9EFC(); return; /* fallthrough 0x001A9EFC */

}

/**
 * sub_001A9EFC
 * Original: 0x001A9EFC - 0x001A9F00 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9EFC(void)
{

loc_001A9EFC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A9F00
 * Original: 0x001A9F00 - 0x001A9F37 (55 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A9F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A9F10u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9F10: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9F37(); return; } /* je: equal / zero */

loc_001A9F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9F2D; /* je: equal / zero */

loc_001A9F22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9F2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9F27u); } /* indirect call */
    }

loc_001A9F2D: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001A9FDD(); return; /* tail jmp 0x001A9FDD */

}

/**
 * sub_001A9F37
 * Original: 0x001A9F37 - 0x001A9F64 (45 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F37: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_001A9F53; /* je: equal / zero */

loc_001A9F41: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9F4Cu); RECOMP_ABI_CALL(0x001A9EABu, sub_001A9EAB); /* call 0x001A9EAB */

loc_001A9F4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001A9FC8(); return; } /* jl: less (signed <) */

loc_001A9F53: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9F64(); return; } /* je: equal / zero */

loc_001A9F59: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC0);
    g_seh_ebp = ebp; sub_001A9F67(); return; /* tail jmp 0x001A9F67 */

}

/**
 * sub_001A9F64
 * Original: 0x001A9F64 - 0x001A9F67 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F64: ;
    eax = MEM32(ebp + 0x10);

    g_seh_ebp = ebp; sub_001A9F67(); return; /* fallthrough 0x001A9F67 */

}

/**
 * sub_001A9F67
 * Original: 0x001A9F67 - 0x001A9F8C (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F67: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9F8C(); return; } /* jae: above or equal (unsigned >=) */

loc_001A9F88: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001A9F98(); return; /* tail jmp 0x001A9F98 */

}

/**
 * sub_001A9F8C
 * Original: 0x001A9F8C - 0x001A9F98 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F8C: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001A9F98(); return; /* fallthrough 0x001A9F98 */

}

/**
 * sub_001A9F98
 * Original: 0x001A9F98 - 0x001A9FC1 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F98: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    MEM32(ebx) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9FC7(); return; } /* je: equal / zero */

loc_001A9FA5: ;
    edx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9FC7(); return; } /* je: equal / zero */

loc_001A9FAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001A9FC1(); return; } /* jae: above or equal (unsigned >=) */

loc_001A9FB0: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    g_seh_ebp = ebp; sub_001A9FC7(); return; /* tail jmp 0x001A9FC7 */

}

/**
 * sub_001A9FC1
 * Original: 0x001A9FC1 - 0x001A9FC7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9FC1: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001A9FC7(); return; /* fallthrough 0x001A9FC7 */

}

/**
 * sub_001A9FC7
 * Original: 0x001A9FC7 - 0x001A9FC8 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9FC7: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001A9FC8(); return; /* fallthrough 0x001A9FC8 */

}

/**
 * sub_001A9FC8
 * Original: 0x001A9FC8 - 0x001A9FDD (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9FC8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A9FDA; /* je: equal / zero */

loc_001A9FCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001A9FDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9FD4u); } /* indirect call */
    }

loc_001A9FDA: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001A9FDD(); return; /* fallthrough 0x001A9FDD */

}

/**
 * sub_001A9FDD
 * Original: 0x001A9FDD - 0x001A9FE2 (5 bytes, 3 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9FDD: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001A9FE2
 * Original: 0x001A9FE2 - 0x001AA00A (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9FE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9FE8u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001A9FE8: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA00A(); return; } /* je: equal / zero */

loc_001A9FF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA003; /* je: equal / zero */

loc_001A9FF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9FFDu); } /* indirect call */
    }

loc_001AA003: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA02F(); return; /* tail jmp 0x001AA02F */

}

/**
 * sub_001AA00A
 * Original: 0x001AA00A - 0x001AA02F (37 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA00A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA00A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AA01Bu); RECOMP_ABI_CALL(0x001B6712u, sub_001B6712); /* call 0x001B6712 */

loc_001AA01B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA02C; /* je: equal / zero */

loc_001AA021: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA02Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA026u); } /* indirect call */
    }

loc_001AA02C: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AA02F(); return; /* fallthrough 0x001AA02F */

}

/**
 * sub_001AA02F
 * Original: 0x001AA02F - 0x001AA033 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA02F(void)
{

loc_001AA02F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AA033
 * Original: 0x001AA033 - 0x001AA098 (101 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA033(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA033: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AA039u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA039: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AA05B; /* je: equal / zero */

loc_001AA045: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA054; /* je: equal / zero */

loc_001AA049: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA04Eu); } /* indirect call */
    }

loc_001AA054: ;
    eax = 0x80004005u;
    goto loc_001AA094;

loc_001AA05B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001AA071u); RECOMP_ABI_CALL(0x001A9A40u, sub_001A9A40); /* call 0x001A9A40 */

loc_001AA071: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA081; /* jl: less (signed <) */

loc_001AA077: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001AA07Fu); RECOMP_ABI_CALL(0x001B620Au, sub_001B620A); /* call 0x001B620A */

loc_001AA07F: ;
    edi = eax;

loc_001AA081: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA090; /* je: equal / zero */

loc_001AA085: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA08Au); } /* indirect call */
    }

loc_001AA090: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AA094: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AA09B
 * Original: 0x001AA09B - 0x001AA0D9 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA09B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA09B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x281E98;
    MEM32(edi) = 0x281E88;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA0BF; /* je: equal / zero */

loc_001AA0B5: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001AA0BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA0B8u); } /* indirect call */
    }

loc_001AA0BB: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AA0BF: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA0D0; /* je: equal / zero */

loc_001AA0C6: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001AA0CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA0C9u); } /* indirect call */
    }

loc_001AA0CC: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AA0D0: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001A97BC(); return; /* tail jmp 0x001A97BC */

}

/**
 * sub_001AA0D9
 * Original: 0x001AA0D9 - 0x001AA100 (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA0D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA0D9: ;
    PUSH32(esp, 0x001AA0DEu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA0DE: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA100(); return; } /* je: equal / zero */

loc_001AA0EA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA0F9; /* je: equal / zero */

loc_001AA0EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA0F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA0F3u); } /* indirect call */
    }

loc_001AA0F9: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA11D(); return; /* tail jmp 0x001AA11D */

}

/**
 * sub_001AA100
 * Original: 0x001AA100 - 0x001AA11D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA100: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001AA11A; /* je: equal / zero */

loc_001AA10F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA11Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA114u); } /* indirect call */
    }

loc_001AA11A: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AA11D(); return; /* fallthrough 0x001AA11D */

}

/**
 * sub_001AA11D
 * Original: 0x001AA11D - 0x001AA120 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA11D(void)
{

loc_001AA11D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA120
 * Original: 0x001AA120 - 0x001AA148 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA126u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA126: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA148(); return; } /* je: equal / zero */

loc_001AA132: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA141; /* je: equal / zero */

loc_001AA136: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA141u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA13Bu); } /* indirect call */
    }

loc_001AA141: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA16A(); return; /* tail jmp 0x001AA16A */

}

/**
 * sub_001AA148
 * Original: 0x001AA148 - 0x001AA16A (34 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA148(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA148: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA156u); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001AA156: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA167; /* je: equal / zero */

loc_001AA15C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA167u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA161u); } /* indirect call */
    }

loc_001AA167: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AA16A(); return; /* fallthrough 0x001AA16A */

}

/**
 * sub_001AA16A
 * Original: 0x001AA16A - 0x001AA16E (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA16A(void)
{

loc_001AA16A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA16E
 * Original: 0x001AA16E - 0x001AA196 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA16E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA16E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AA174u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA174: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA196(); return; } /* je: equal / zero */

loc_001AA180: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA18F; /* je: equal / zero */

loc_001AA184: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA18Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA189u); } /* indirect call */
    }

loc_001AA18F: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA1D1(); return; /* tail jmp 0x001AA1D1 */

}

/**
 * sub_001AA196
 * Original: 0x001AA196 - 0x001AA1D1 (59 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AA196(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA196: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi) = 5;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0x001AA1AEu); RECOMP_ABI_CALL(0x001A8D35u, sub_001A8D35); /* call 0x001A8D35 */

loc_001AA1AE: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x20);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AA1CF; /* je: equal / zero */

loc_001AA1C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA1C9u); } /* indirect call */
    }

loc_001AA1CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA1D1(); return; /* fallthrough 0x001AA1D1 */

}

/**
 * sub_001AA1D1
 * Original: 0x001AA1D1 - 0x001AA1D5 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1D1(void)
{

loc_001AA1D1: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AA1D5
 * Original: 0x001AA1D5 - 0x001AA1FD (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA1D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA1DBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA1DB: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA1FD(); return; } /* je: equal / zero */

loc_001AA1E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA1F6; /* je: equal / zero */

loc_001AA1EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA1F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA1F0u); } /* indirect call */
    }

loc_001AA1F6: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA21E(); return; /* tail jmp 0x001AA21E */

}

/**
 * sub_001AA1FD
 * Original: 0x001AA1FD - 0x001AA21E (33 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA1FD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AA20Au); RECOMP_ABI_CALL(0x001B2C56u, sub_001B2C56); /* call 0x001B2C56 */

loc_001AA20A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA21B; /* je: equal / zero */

loc_001AA210: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA21Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA215u); } /* indirect call */
    }

loc_001AA21B: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AA21E(); return; /* fallthrough 0x001AA21E */

}

/**
 * sub_001AA21E
 * Original: 0x001AA21E - 0x001AA222 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA21E(void)
{

loc_001AA21E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA222
 * Original: 0x001AA222 - 0x001AA24A (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA222: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA228u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA228: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA24A(); return; } /* je: equal / zero */

loc_001AA234: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA243; /* je: equal / zero */

loc_001AA238: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA23Du); } /* indirect call */
    }

loc_001AA243: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA269(); return; /* tail jmp 0x001AA269 */

}

/**
 * sub_001AA24A
 * Original: 0x001AA24A - 0x001AA269 (31 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AA24A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA24A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001AA258u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001AA258: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA267; /* je: equal / zero */

loc_001AA25C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA267u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA261u); } /* indirect call */
    }

loc_001AA267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA269(); return; /* fallthrough 0x001AA269 */

}
