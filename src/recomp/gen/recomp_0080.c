/**
 * DOAU1 - Recompiled code chunk 80
 * Functions: 250 (0x00209643 - 0x0020BFF2)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00209643
 * Original: 0x00209643 - 0x00209645 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209643: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00209645
 * Original: 0x00209645 - 0x0020964F (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00209645: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB3C)); return; /* indirect tail jmp */

}

/**
 * sub_0020968F
 * Original: 0x0020968F - 0x002096E0 (81 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020968F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020968F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi + -1;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x002096A7u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_002096A7: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x002096CAu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_002096CA: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x002096DAu); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_002096DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209778
 * Original: 0x00209778 - 0x00209806 (142 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209778: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + eax * 4 + 0x1870;
    ecx = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020979C; /* je: equal / zero */

loc_00209795: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020979Au); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

loc_0020979A: ;
    MEM32(esi) = MEM32(esi) & ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020979C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x56525347 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002097AC; /* je: equal / zero */

loc_002097A7: ;
    edi = 0x236550;

loc_002097AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -120;
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA77C4);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002097C0u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_002097C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x002097D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002097CBu); } /* indirect call */
    }

loc_002097D1: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x22BDB4); PUSH32(esp, 0x002097ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002097E6u); } /* indirect call */
    }

loc_002097EC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209816(); return; } /* jge: greater or equal (signed >=) */

loc_002097F2: ;
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x002097FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002097F9u); } /* indirect call */
    }

loc_002097FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209806(); return; } /* jg: greater (signed >) */

loc_00209800: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209800u); } /* indirect call */
    }

loc_00209802: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_00209816(); return; /* tail jmp 0x00209816 */

}

/**
 * sub_00209806
 * Original: 0x00209806 - 0x00209816 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209806(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209806: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209806u); } /* indirect call */
    }

loc_00209808: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x80070000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00209816(); return; /* fallthrough 0x00209816 */

}

/**
 * sub_00209816
 * Original: 0x00209816 - 0x0020981F (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209816: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020981F
 * Original: 0x0020981F - 0x00209832 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020981F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020981F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00209832(); return; } /* je: equal / zero */

loc_0020982B: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_00209837(); return; /* tail jmp 0x00209837 */

}

/**
 * sub_00209832
 * Original: 0x00209832 - 0x00209837 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209832(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209832: ;
    PUSH32(esp, 0x00209837u); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

    g_seh_ebp = ebp; sub_00209837(); return; /* fallthrough 0x00209837 */

}

/**
 * sub_00209837
 * Original: 0x00209837 - 0x0020983D (6 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209837(void)
{

loc_00209837: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020983D
 * Original: 0x0020983D - 0x0020986C (47 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020983D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020983D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x0020984Cu); RECOMP_ABI_CALL(0x00208E81u, sub_00208E81); /* call 0x00208E81 */

loc_0020984C: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020985C; /* je: equal / zero */

loc_00209854: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020985Au); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020985A: ;
    goto loc_00209867;

loc_0020985C: ;
    PUSH32(esp, 0x8011);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209867u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00209867: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020986C
 * Original: 0x0020986C - 0x002098DF (115 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020986C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020986C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x84C;
    MEM32(ebx + 0x18) = eax;
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209897u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_00209897: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002098B9u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_002098B9: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002098CBu); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_002098CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_002098DF(); return; } /* jge: greater or equal (signed >=) */

loc_002098CF: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = 1;
    MEM32(ebx + 0x2C) = eax;
    g_seh_ebp = ebp; sub_002098E6(); return; /* tail jmp 0x002098E6 */

}

/**
 * sub_002098DF
 * Original: 0x002098DF - 0x002098E6 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002098DF: ;
    MEM32(ebx + 0x14) = 3;

    g_seh_ebp = ebp; sub_002098E6(); return; /* fallthrough 0x002098E6 */

}

/**
 * sub_002098E6
 * Original: 0x002098E6 - 0x002098EB (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002098E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002098EB
 * Original: 0x002098EB - 0x00209939 (78 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002098EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209934; /* je: equal / zero */

loc_002098F4: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x002098FFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_002098FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00209927; /* je: equal / zero */

loc_00209906: ;
    MEM32(esi + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00209927; /* jl: less (signed <) */

loc_0020990F: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00209920u); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_00209920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209927; /* jge: greater or equal (signed >=) */

loc_00209924: ;
    MEM32(esi + 0x2C) = eax;

loc_00209927: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209934; /* jne: not equal / not zero */

loc_0020992D: ;
    ecx = esi;
    PUSH32(esp, 0x00209934u); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

loc_00209934: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209939
 * Original: 0x00209939 - 0x00209987 (78 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209939(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209939: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209982; /* je: equal / zero */

loc_00209942: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x0020994Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020994D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00209975; /* je: equal / zero */

loc_00209954: ;
    MEM32(esi + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00209975; /* jl: less (signed <) */

loc_0020995D: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020996Eu); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_0020996E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209975; /* jge: greater or equal (signed >=) */

loc_00209972: ;
    MEM32(esi + 0x2C) = eax;

loc_00209975: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209982; /* jne: not equal / not zero */

loc_0020997B: ;
    ecx = esi;
    PUSH32(esp, 0x00209982u); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

loc_00209982: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209987
 * Original: 0x00209987 - 0x00209A07 (128 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209987(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209987: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x84C;
    MEM32(ebx + 0x18) = eax;
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002099B2u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_002099B2: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002099D4u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_002099D4: ;
    esi = MEM32(esi + 0x8BC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002099E7u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_002099E7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209A07(); return; } /* jge: greater or equal (signed >=) */

loc_002099ED: ;
    ecx = MEM32(ebx + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002099F5u); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

loc_002099F5: ;
    MEM32(ebx + 0x10) = edi;
    MEM32(ebx + 0x14) = 1;
    MEM32(ebx + 0x2C) = esi;
    MEM32(ebx + 0x18) = edi;
    g_seh_ebp = ebp; sub_00209A0E(); return; /* tail jmp 0x00209A0E */

}

/**
 * sub_00209A07
 * Original: 0x00209A07 - 0x00209A0E (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209A07: ;
    MEM32(ebx + 0x14) = 3;

    g_seh_ebp = ebp; sub_00209A0E(); return; /* fallthrough 0x00209A0E */

}

/**
 * sub_00209A0E
 * Original: 0x00209A0E - 0x00209A15 (7 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209A0E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00209A15
 * Original: 0x00209A15 - 0x00209A6F (90 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A15(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209A15: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209A6A; /* je: equal / zero */

loc_00209A1E: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x00209A29u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00209A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00209A51; /* je: equal / zero */

loc_00209A30: ;
    MEM32(esi + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00209A51; /* jl: less (signed <) */

loc_00209A39: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00209A4Au); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_00209A4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209A51; /* jge: greater or equal (signed >=) */

loc_00209A4E: ;
    MEM32(esi + 0x2C) = eax;

loc_00209A51: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209A6A; /* jne: not equal / not zero */

loc_00209A57: ;
    ecx = esi;
    PUSH32(esp, 0x00209A5Eu); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

loc_00209A5E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x00209A66u); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

loc_00209A66: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00209A6A: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209A6F
 * Original: 0x00209A6F - 0x00209ABF (80 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209A6F: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209ABA; /* je: equal / zero */

loc_00209A78: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x00209A83u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00209A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00209AB0; /* je: equal / zero */

loc_00209A8A: ;
    MEM32(esi + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00209AB0; /* jl: less (signed <) */

loc_00209A93: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x00209A9Eu); RECOMP_ABI_CALL(0x0020917Cu, sub_0020917C); /* call 0x0020917C */

loc_00209A9E: ;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00209AA9u); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_00209AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209AB0; /* jge: greater or equal (signed >=) */

loc_00209AAD: ;
    MEM32(esi + 0x2C) = eax;

loc_00209AB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209ABA; /* jne: not equal / not zero */

loc_00209AB6: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00209ABA: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209ABF
 * Original: 0x00209ABF - 0x00209B05 (70 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209ABF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209ABF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209B00; /* je: equal / zero */

loc_00209AC8: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x00209AD3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00209AD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00209AF6; /* je: equal / zero */

loc_00209ADA: ;
    MEM32(esi + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00209AF6; /* jl: less (signed <) */

loc_00209AE3: ;
    PUSH32(esp, 0x200);
    ecx = esi;
    PUSH32(esp, 0x00209AEFu); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_00209AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209AF6; /* jge: greater or equal (signed >=) */

loc_00209AF3: ;
    MEM32(esi + 0x2C) = eax;

loc_00209AF6: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209B00; /* jne: not equal / not zero */

loc_00209AFC: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00209B00: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209B05
 * Original: 0x00209B05 - 0x00209B36 (49 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B05(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B05: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x00209B17u); RECOMP_ABI_CALL(0x00209340u, sub_00209340); /* call 0x00209340 */

loc_00209B17: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00209B1Fu); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_00209B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209B32; /* jl: less (signed <) */

loc_00209B23: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00209B32u); RECOMP_ABI_CALL(0x002094DCu, sub_002094DC); /* call 0x002094DC */

loc_00209B32: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209B36
 * Original: 0x00209B36 - 0x00209C1E (232 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7740));
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7742));
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    MEM32(ecx + 8) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7746));
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = 1;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00209BEC; /* jbe: below or equal (unsigned <=) */

loc_00209BC5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00209BCDu); RECOMP_ABI_CALL(0x00208F3Au, sub_00208F3A); /* call 0x00208F3A */

loc_00209BCD: ;
    eax = MEM32(esi + 0x82C);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + ecx) = 0x2A;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00209BC5; /* jb: below (unsigned <) */

loc_00209BEC: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00209C1B; /* jbe: below or equal (unsigned <=) */

loc_00209BF5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00209BFDu); RECOMP_ABI_CALL(0x00208FB7u, sub_00208FB7); /* call 0x00208FB7 */

loc_00209BFD: ;
    eax = MEM32(esi + 0x82C);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + ecx) = 0x2A;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00209BF5; /* jb: below (unsigned <) */

loc_00209C1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209C1E
 * Original: 0x00209C1E - 0x00209D45 (295 bytes, 95 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209C1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209C1E: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x8BC);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x56525347 (32-bit) */
    MEM32(ebp + 0x6C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00209C46; /* je: equal / zero */

loc_00209C41: ;
    eax = 0x236550;

loc_00209C46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA77C4);
    eax = ebp + -24;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209C5Cu); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_00209C5C: ;
    esi = MEM32(0x22BB40);
    edi = MEM32(0x22BB3C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x80;

loc_00209C70: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209C7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209C78u); } /* indirect call */
    }

loc_00209C7A: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    eax = ebp + 0x58;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x6C);
    PUSH32(esp, 0xC0100080u);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + 0x68) = 0x40;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00209CAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209CA8u); } /* indirect call */
    }

loc_00209CAA: ;
    MEM32(ebp + 0x74) = eax;
    eax = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00209D6F(); return; } /* jne: not equal / not zero */

loc_00209CBC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0xC000003Au (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00209D5C(); return; } /* jne: not equal / not zero */

loc_00209CC9: ;
    eax = MEM32(ebp + 0x6C);
    eax = MEM32(eax + 0x8BC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x56525347 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209CE2; /* je: equal / zero */

loc_00209CDD: ;
    eax = 0x236550;

loc_00209CE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA7800);
    eax = ebp + -124;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209CF3u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_00209CF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -124;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209CFEu); } /* indirect call */
    }

loc_00209D00: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    eax = ebp + 0x58;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    MEM32(ebp + 0x68) = 0x40;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00209D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D2Eu); } /* indirect call */
    }

loc_00209D30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x74) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209D45(); return; } /* jl: less (signed <) */

loc_00209D37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x00209D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D3Au); } /* indirect call */
    }

loc_00209D40: ;
    goto loc_00209C70;

}

/**
 * sub_00209D45
 * Original: 0x00209D45 - 0x00209D5C (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D4Cu); } /* indirect call */
    }

loc_00209D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x74));
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209D61(); return; } /* jg: greater (signed >) */

loc_00209D55: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D55u); } /* indirect call */
    }

loc_00209D57: ;
    MEM32(ebp + 0x70) = eax;
    g_seh_ebp = ebp; sub_00209D7F(); return; /* tail jmp 0x00209D7F */

}

/**
 * sub_00209D46
 * Original: 0x00209D46 - 0x00209D5C (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D46: ;
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D4Cu); } /* indirect call */
    }

loc_00209D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x74));
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00209D61(); return; } /* jg: greater (signed >) */

loc_00209D55: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D55u); } /* indirect call */
    }

loc_00209D57: ;
    MEM32(ebp + 0x70) = eax;
    g_seh_ebp = ebp; sub_00209D7F(); return; /* tail jmp 0x00209D7F */

}

/**
 * sub_00209D57
 * Original: 0x00209D57 - 0x00209D5C (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D57: ;
    MEM32(ebp + 0x70) = eax;
    g_seh_ebp = ebp; sub_00209D7F(); return; /* tail jmp 0x00209D7F */

}

/**
 * sub_00209D5C
 * Original: 0x00209D5C - 0x00209D61 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D5C: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    g_seh_ebp = ebp; sub_00209D46(); return; /* tail jmp 0x00209D46 */

}

/**
 * sub_00209D61
 * Original: 0x00209D61 - 0x00209D6F (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D61: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00209D63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209D61u); } /* indirect call */
    }

loc_00209D63: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00209D57(); return; /* tail jmp 0x00209D57 */

}

/**
 * sub_00209D6F
 * Original: 0x00209D6F - 0x00209D8A (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209D7F; /* jne: not equal / not zero */

loc_00209D75: ;
    PUSH32(esp, 0xB7);
    PUSH32(esp, 0x00209D7Fu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_00209D7F: ;
    eax = MEM32(ebp + 0x70);
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
 * sub_00209D7F
 * Original: 0x00209D7F - 0x00209D8A (11 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D7F: ;
    eax = MEM32(ebp + 0x70);
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
 * sub_00209D8A
 * Original: 0x00209D8A - 0x00209DD8 (78 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209D8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209D8A: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, MEM16(esi + 0xAA7748));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209DCF; /* je: equal / zero */

loc_00209DA2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    ebp = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209DC1; /* je: equal / zero */

loc_00209DB8: ;
    edi = eax + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1F4);

loc_00209DC1: ;
    eax = ZX16(MEM16(esi + 0xAA7740));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_00209DCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00209DD5u); RECOMP_ABI_CALL(0x0020917Cu, sub_0020917C); /* call 0x0020917C */

loc_00209DD5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00209DD8
 * Original: 0x00209DD8 - 0x00209E1B (67 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209DD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209DD8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(eax) = 1;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209DF7u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_00209DF7: ;
    ecx = ebx;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209E00u); RECOMP_ABI_CALL(0x00209D8Au, sub_00209D8A); /* call 0x00209D8A */

loc_00209E00: ;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00209E1B(); return; } /* je: equal / zero */

loc_00209E07: ;
    ecx = MEM32(ebx + 0x8BC);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00209E16u); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_00209E16: ;
    g_seh_ebp = ebp; sub_00209EBE(); return; /* tail jmp 0x00209EBE */

}

/**
 * sub_00209E1B
 * Original: 0x00209E1B - 0x00209EBE (163 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00209E1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209E1B: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 0x14);
    eax = eax + eax * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX16(MEM16(eax + 0xAA7740));
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209E34: ;
    edx = ZX16(MEM16(eax + 0xAA7742));
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209E40: ;
    edx = ZX16(MEM16(eax + 0xAA7744));
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209E4C: ;
    edx = ZX16(MEM16(eax + 0xAA7746));
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209E58: ;
    eax = ZX16(MEM16(eax + 0xAA7748));
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209E64: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), edi (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00209EB7; /* jbe: below or equal (unsigned <=) */

loc_00209E6C: ;
    MEM32(ebp + -4) = edi;

loc_00209E6F: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebp + -4);
    esi = ecx + eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    PUSH32(esp, 0x00209E91u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_00209E91: ;
    PUSH32(esp, 3);
    edi = esi + 0x1F4;
    POP32(esp, ecx);
    esi = ebp + -28;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_00209EBC; /* jne: not equal / not zero */

loc_00209EA3: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x200;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00209E6F; /* jb: below (unsigned <) */

loc_00209EB7: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = edi;

loc_00209EBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00209EBE(); return; /* fallthrough 0x00209EBE */

}

/**
 * sub_00209EBE
 * Original: 0x00209EBE - 0x00209EC5 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209EBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209EC5
 * Original: 0x00209EC5 - 0x00209EF5 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209EC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209EC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = eax;
    MEM32(edi) = ecx;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    _fa = (uint32_t)(MEM16(eax * 2 + 0xAA7742)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0xAA7742), LO16(ecx) (16-bit) */
    esi = ebx + 0x24;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00209EF5(); return; } /* jne: not equal / not zero */

loc_00209EEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020A052(); return; /* tail jmp 0x0020A052 */

}

/**
 * sub_00209EF5
 * Original: 0x00209EF5 - 0x0020A052 (349 bytes, 110 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209EF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209EF5: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00209EFDu); RECOMP_ABI_CALL(0x00208F3Au, sub_00208F3A); /* call 0x00208F3A */

loc_00209EFD: ;
    eax = MEM32(ebx + 0x82C);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x830);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A048; /* je: equal / zero */

loc_00209F1B: ;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    PUSH32(esp, esi);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + 0x824;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00209F3Cu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209F3C: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, 0x00209F4Au); RECOMP_ABI_CALL(0x0020960Cu, sub_0020960C); /* call 0x0020960C */

loc_00209F4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020A048; /* je: equal / zero */

loc_00209F54: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209F7B; /* je: equal / zero */

loc_00209F5A: ;
    eax = MEM32(ebx);
    edi = MEM32(edi + 8);
    eax = eax + eax * 4;
    ecx = ZX16(MEM16(eax * 2 + 0xAA7744));
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
    edi = MEM32(ebp + 0xC);

loc_00209F7B: ;
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    esi = ebx + 0x824;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = ebx;
    PUSH32(esp, 0x00209F92u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209F92: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00209F9Bu); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_00209F9B: ;
    eax = ebx + 0x844;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = ebx;
    PUSH32(esp, 0x00209FAFu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209FAF: ;
    MEM32(edi + 4) = 1;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00209FCEu); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_00209FCE: ;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    _fa = (uint32_t)(MEM16(eax * 2 + 0xAA7748)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0xAA7748), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00209FF4; /* jbe: below or equal (unsigned <=) */

loc_00209FDE: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209FF8; /* je: equal / zero */

loc_00209FE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, 0x00209FF4u); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_00209FF4: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00209FF8: ;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A00Du); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_0020A00D: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = ebx;
    PUSH32(esp, 0x0020A01Eu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_0020A01E: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp + -1) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A048; /* je: equal / zero */

loc_0020A026: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0020A032u); RECOMP_ABI_CALL(0x00208F3Au, sub_00208F3A); /* call 0x00208F3A */

loc_0020A032: ;
    eax = MEM32(ebx + 0x82C);
    ecx = MEM32(ebx + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + ecx) = 0x2A;

loc_0020A048: ;
    eax = MEM32(edi);
    MEM32(ebx + 0x848) = eax;
    eax = MEM32(edi);

    g_seh_ebp = ebp; sub_0020A052(); return; /* fallthrough 0x0020A052 */

}

/**
 * sub_0020A052
 * Original: 0x0020A052 - 0x0020A059 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A052(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A052: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A059
 * Original: 0x0020A059 - 0x0020A098 (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A059(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A059: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    ebx = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + -36) = esi;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -12) = eax;
    MEM32(edi) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A098(); return; } /* jne: not equal / not zero */

loc_0020A090: ;
    MEM32(ebx + 0x844) = esi;
    g_seh_ebp = ebp; sub_0020A09E(); return; /* tail jmp 0x0020A09E */

}

/**
 * sub_0020A098
 * Original: 0x0020A098 - 0x0020A09E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A098: ;
    MEM32(ebx + 0x844) = MEM32(ebx + 0x844) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x844)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020A09E(); return; /* fallthrough 0x0020A09E */

}

/**
 * sub_0020A09E
 * Original: 0x0020A09E - 0x0020A0BC (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A09E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A09E: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 0x844);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7740));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A1EC(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_0020A0BC(); return; /* fallthrough 0x0020A0BC */

}

/**
 * sub_0020A0BC
 * Original: 0x0020A0BC - 0x0020A10A (78 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A0BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A0BC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A209(); return; } /* jne: not equal / not zero */

loc_0020A0C4: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x0020A0CEu); RECOMP_ABI_CALL(0x00208FB7u, sub_00208FB7); /* call 0x00208FB7 */

loc_0020A0CE: ;
    eax = MEM32(ebx + 0x82C);
    edx = MEM32(ebx + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + edx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx), 0x2A (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A10A(); return; } /* jne: not equal / not zero */

loc_0020A0E6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A1D3(); return; } /* jne: not equal / not zero */

loc_0020A0EF: ;
    eax = ebx + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -40;
    PUSH32(esp, 0x0020A0FEu); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_0020A0FE: ;
    MEM32(ebp + -4) = 1;
    g_seh_ebp = ebp; sub_0020A1D3(); return; /* tail jmp 0x0020A1D3 */

}

/**
 * sub_0020A10A
 * Original: 0x0020A10A - 0x0020A194 (138 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A10A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A10A: ;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    esi = ebx + 0x24;
    PUSH32(esp, esi);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + 0x824;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0020A12Eu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_0020A12E: ;
    eax = esi + 5;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x0020A13Fu); RECOMP_ABI_CALL(0x0020960Cu, sub_0020960C); /* call 0x0020960C */

loc_0020A13F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A194(); return; } /* je: equal / zero */

loc_0020A145: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebx + 0x824);
    MEM32(ebx + 0x844) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020A17B; /* je: equal / zero */

loc_0020A157: ;
    eax = MEM32(ebx);
    edi = MEM32(edi + 8);
    esi = MEM32(ebp + -16);
    eax = eax + eax * 4;
    ecx = ZX16(MEM16(eax * 2 + 0xAA7744));
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
    edi = MEM32(ebp + 0xC);

loc_0020A17B: ;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    _cf = 0; /* xor clears CF */
    SET_LO16(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax * 2 + 0xAA7748)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax * 2 + 0xAA7748) (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi + 4) = eax;
    g_seh_ebp = ebp; sub_0020A1D1(); return; /* tail jmp 0x0020A1D1 */

}

/**
 * sub_0020A194
 * Original: 0x0020A194 - 0x0020A1B6 (34 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A194: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A1D1(); return; } /* jne: not equal / not zero */

loc_0020A19A: ;
    esi = MEM32(esi + 1);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A1B6(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020A1A2: ;
    eax = ebx + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -40;
    PUSH32(esp, 0x0020A1B1u); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_0020A1B1: ;
    MEM32(ebp + -8) = esi;
    g_seh_ebp = ebp; sub_0020A1D1(); return; /* tail jmp 0x0020A1D1 */

}

/**
 * sub_0020A1B6
 * Original: 0x0020A1B6 - 0x0020A1D1 (27 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1B6: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A1D1(); return; } /* jb: below (unsigned <) */

loc_0020A1BE: ;
    eax = ebx + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -40;
    PUSH32(esp, 0x0020A1CDu); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_0020A1CD: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0020A1D1(); return; /* fallthrough 0x0020A1D1 */

}

/**
 * sub_0020A1D1
 * Original: 0x0020A1D1 - 0x0020A1D3 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1D1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020A1D3(); return; /* fallthrough 0x0020A1D3 */

}

/**
 * sub_0020A1D3
 * Original: 0x0020A1D3 - 0x0020A1EC (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1D3: ;
    eax = MEM32(ebx);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7740));
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A0BC(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_0020A1EC(); return; /* fallthrough 0x0020A1EC */

}

/**
 * sub_0020A1EC
 * Original: 0x0020A1EC - 0x0020A209 (29 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1EC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A209(); return; } /* jne: not equal / not zero */

loc_0020A1F0: ;
    eax = ebp + -40;
    esi = ebx + 0x824;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A201u); RECOMP_ABI_CALL(0x00208D31u, sub_00208D31); /* call 0x00208D31 */

loc_0020A201: ;
    eax = MEM32(esi);
    MEM32(ebx + 0x844) = eax;

    g_seh_ebp = ebp; sub_0020A209(); return; /* fallthrough 0x0020A209 */

}

/**
 * sub_0020A209
 * Original: 0x0020A209 - 0x0020A212 (9 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A209: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A212
 * Original: 0x0020A212 - 0x0020A262 (80 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A212(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A212: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 0x8B8));
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x8BC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0020A24Cu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A24C: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0020A25Du); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020A25D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A262
 * Original: 0x0020A262 - 0x0020A2DB (121 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A262(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A262: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x840;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A290; /* je: equal / zero */

loc_0020A27D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A286u); RECOMP_ABI_CALL(0x0020959Eu, sub_0020959E); /* call 0x0020959E */

loc_0020A286: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = 1;

loc_0020A290: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A2FE(); return; } /* je: equal / zero */

loc_0020A296: ;
    eax = MEM32(esi + 0x834);
    _fb = (uint32_t)(MEM32(esi + 0x82C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A2FE(); return; } /* jae: above or equal (unsigned >=) */

loc_0020A2A7: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A2B3u); RECOMP_ABI_CALL(0x002095E4u, sub_002095E4); /* call 0x002095E4 */

loc_0020A2B3: ;
    ecx = MEM32(ebx + 4);
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A2DB(); return; } /* je: equal / zero */

loc_0020A2C2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    g_seh_ebp = ebp; sub_0020A2F2(); return; /* tail jmp 0x0020A2F2 */

}

/**
 * sub_0020A2DB
 * Original: 0x0020A2DB - 0x0020A2F2 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A2DB: ;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020A2F2(); return; /* fallthrough 0x0020A2F2 */

}

/**
 * sub_0020A2F2
 * Original: 0x0020A2F2 - 0x0020A2FE (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A2F2: ;
    ecx = 0x7D0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebx + 4) = edx;

    g_seh_ebp = ebp; sub_0020A2FE(); return; /* fallthrough 0x0020A2FE */

}

/**
 * sub_0020A2FE
 * Original: 0x0020A2FE - 0x0020A313 (21 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A2FE: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020A30Cu); RECOMP_ABI_CALL(0x002092CAu, sub_002092CA); /* call 0x002092CA */

loc_0020A30C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020A313
 * Original: 0x0020A313 - 0x0020A374 (97 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A313(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A313: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, MEM32(ebx + 0x844));
    PUSH32(esp, 0x0020A323u); RECOMP_ABI_CALL(0x00208FB7u, sub_00208FB7); /* call 0x00208FB7 */

loc_0020A323: ;
    eax = MEM32(ebx + 0x82C);
    SET_LO8(ecx, MEM8(ebx + 0x83C));
    esi = MEM32(esp + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 4;
    ecx = ZX16(MEM16(ecx * 2 + 0xAA7744));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 5;
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
    ebx = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x14);
    POP32(esp, edi);
    edx = ecx + 1;
    MEM32(ebx + 0x14) = edx;
    POP32(esp, esi);
    MEM32(eax + 1) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A374
 * Original: 0x0020A374 - 0x0020A3DB (103 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A374(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A374: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0020A381u); RECOMP_ABI_CALL(0x0020A313u, sub_0020A313); /* call 0x0020A313 */

loc_0020A381: ;
    PUSH32(esp, MEM32(esi + 0x834));
    edi = esi + 0x82C;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0020A399u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_0020A399: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(esi + 0x8B8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 0x0020A3C5u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A3C5: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0020A3D6u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020A3D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A3DB
 * Original: 0x0020A3DB - 0x0020A42C (81 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A3DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A3DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x844));
    edi = esi + 0x24;
    PUSH32(esp, 0x0020A3EEu); RECOMP_ABI_CALL(0x00208FB7u, sub_00208FB7); /* call 0x00208FB7 */

loc_0020A3EE: ;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    PUSH32(esp, edi);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0020A40Fu); RECOMP_ABI_CALL(0x00209271u, sub_00209271); /* call 0x00209271 */

loc_0020A40F: ;
    ebx = MEM32(esp + 0x10);
    eax = edi + 5;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, 0x0020A421u); RECOMP_ABI_CALL(0x0020960Cu, sub_0020960C); /* call 0x0020960C */

loc_0020A421: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A42C(); return; } /* jne: not equal / not zero */

loc_0020A425: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0020A491(); return; /* tail jmp 0x0020A491 */

}

/**
 * sub_0020A42C
 * Original: 0x0020A42C - 0x0020A45E (50 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A42C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A42C: ;
    SET_LO8(eax, MEM8(edi));
    ecx = esi;
    MEM8(esi + 0x83C) = LO8(eax);
    PUSH32(esp, 0x0020A43Bu); RECOMP_ABI_CALL(0x00209071u, sub_00209071); /* call 0x00209071 */

loc_0020A43B: ;
    edx = MEM32(esi + 0x82C);
    eax = MEM32(esi + 0x834);
    ecx = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A45E(); return; } /* jb: below (unsigned <) */

loc_0020A453: ;
    eax = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 0x10);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0020A45F(); return; /* tail jmp 0x0020A45F */

}

/**
 * sub_0020A45E
 * Original: 0x0020A45E - 0x0020A45F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A45E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A45E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020A45F(); return; /* fallthrough 0x0020A45F */

}

/**
 * sub_0020A45F
 * Original: 0x0020A45F - 0x0020A491 (50 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A45F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A45F: ;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0020A480u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A480: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0020A491u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

    g_seh_ebp = ebp; sub_0020A491(); return; /* fallthrough 0x0020A491 */

}

/**
 * sub_0020A491
 * Original: 0x0020A491 - 0x0020A497 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A491(void)
{

loc_0020A491: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A497
 * Original: 0x0020A497 - 0x0020A4F6 (95 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A497(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A497: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    edx = MEM32(esi + 0x82C);
    ecx = ecx >> 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + ecx;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x834);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x8BC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0020A4E0u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A4E0: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0020A4F1u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020A4F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A4F6
 * Original: 0x0020A4F6 - 0x0020A5B1 (187 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A4F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A4F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    _fa = (uint32_t)(MEM16(eax * 2 + 0xAA7742)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0xAA7742), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A5CC(); return; } /* je: equal / zero */

loc_0020A50D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020A516u); RECOMP_ABI_CALL(0x00208F3Au, sub_00208F3A); /* call 0x00208F3A */

loc_0020A516: ;
    eax = MEM32(esi + 0xC);
    ebx = esi + 0x824;
    edi = MEM32(ebx + 8);
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0020A531u); RECOMP_ABI_CALL(0x0020959Eu, sub_0020959E); /* call 0x0020959E */

loc_0020A531: ;
    eax = MEM32(esi + 0x844);
    PUSH32(esp, 4);
    ecx = ebx;
    MEM32(edi + 1) = eax;
    PUSH32(esp, 0x0020A543u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_0020A543: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = esi;
    MEM32(esi + 0x828) = eax;
    PUSH32(esp, 0x0020A565u); RECOMP_ABI_CALL(0x002092CAu, sub_002092CA); /* call 0x002092CA */

loc_0020A565: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    eax = MEM32(esi);
    ecx = ebx;
    eax = eax + eax * 4;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A5B1(); return; } /* je: equal / zero */

loc_0020A573: ;
    eax = ZX16(MEM16(eax * 2 + 0xAA7744));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A581u); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_0020A581: ;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x828) = eax;
    PUSH32(esp, 0x0020A5A0u); RECOMP_ABI_CALL(0x002095E4u, sub_002095E4); /* call 0x002095E4 */

loc_0020A5A0: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x0020A5AFu); RECOMP_ABI_CALL(0x002092CAu, sub_002092CA); /* call 0x002092CA */

loc_0020A5AF: ;
    g_seh_ebp = ebp; sub_0020A5CA(); return; /* tail jmp 0x0020A5CA */

}

/**
 * sub_0020A5B1
 * Original: 0x0020A5B1 - 0x0020A5CA (25 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A5B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A5B1: ;
    eax = ZX16(MEM16(eax * 2 + 0xAA7748));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A5BFu); RECOMP_ABI_CALL(0x00208D60u, sub_00208D60); /* call 0x00208D60 */

loc_0020A5BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0x0020A5CAu); RECOMP_ABI_CALL(0x002095E4u, sub_002095E4); /* call 0x002095E4 */

    g_seh_ebp = ebp; sub_0020A5CA(); return; /* fallthrough 0x0020A5CA */

}

/**
 * sub_0020A5CA
 * Original: 0x0020A5CA - 0x0020A5CC (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A5CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A5CA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020A5CC(); return; /* fallthrough 0x0020A5CC */

}

/**
 * sub_0020A5CC
 * Original: 0x0020A5CC - 0x0020A5D0 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A5CC(void)
{

loc_0020A5CC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A5D0
 * Original: 0x0020A5D0 - 0x0020A63A (106 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A5D0: ;
    PUSH32(esp, MEM32(ecx + 0x844));
    PUSH32(esp, 0x0020A5DBu); RECOMP_ABI_CALL(0x00208FB7u, sub_00208FB7); /* call 0x00208FB7 */

loc_0020A5DB: ;
    eax = MEM32(ecx + 0x82C);
    edx = MEM32(ecx + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx) = 0x2A;
    eax = MEM32(ecx);
    edx = eax + eax * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx * 2 + 0xAA7742)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 2 + 0xAA7742), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A626; /* je: equal / zero */

loc_0020A602: ;
    _fa = (uint32_t)(MEM32(ecx + 0x848)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x848), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A626; /* je: equal / zero */

loc_0020A60A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A610u); RECOMP_ABI_CALL(0x00208F3Au, sub_00208F3A); /* call 0x00208F3A */

loc_0020A610: ;
    eax = MEM32(ecx + 0x82C);
    edx = MEM32(ecx + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + 0x830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx) = 0x2A;

loc_0020A626: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0xAA7740));
    MEM32(ecx + 0x844) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020A63A
 * Original: 0x0020A63A - 0x0020A64C (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A63A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A63A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A64C(); return; } /* je: equal / zero */

loc_0020A645: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0020A66F(); return; /* tail jmp 0x0020A66F */

}

/**
 * sub_0020A64C
 * Original: 0x0020A64C - 0x0020A66F (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A64C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A64C: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0020A65Fu); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020A65F: ;
    PUSH32(esp, 0x0020A664u); RECOMP_ABI_CALL(0x0020986Cu, sub_0020986C); /* call 0x0020986C */

loc_0020A664: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A66F(); return; } /* jl: less (signed <) */

loc_0020A668: ;
    MEM32(ebx + 8) = 1;

    g_seh_ebp = ebp; sub_0020A66F(); return; /* fallthrough 0x0020A66F */

}

/**
 * sub_0020A66F
 * Original: 0x0020A66F - 0x0020A673 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A66F(void)
{

loc_0020A66F: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A673
 * Original: 0x0020A673 - 0x0020A68E (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A673(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A673: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A68E(); return; } /* je: equal / zero */

loc_0020A685: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_0020A6CD(); return; /* tail jmp 0x0020A6CD */

}

/**
 * sub_0020A68E
 * Original: 0x0020A68E - 0x0020A6CD (63 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A68E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A68E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0x0020A6A2u); RECOMP_ABI_CALL(0x00209EC5u, sub_00209EC5); /* call 0x00209EC5 */

loc_0020A6A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A6B0; /* jne: not equal / not zero */

loc_0020A6A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0020A6B0u); RECOMP_ABI_CALL(0x0020A059u, sub_0020A059); /* call 0x0020A059 */

loc_0020A6B0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A6C8; /* je: equal / zero */

loc_0020A6B6: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A6C8; /* jne: not equal / not zero */

loc_0020A6BB: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = edi;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0020A6C8u); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

loc_0020A6C8: ;
    POP32(esp, esi);
    MEM32(edi + 8) = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020A6CD(); return; /* fallthrough 0x0020A6CD */

}

/**
 * sub_0020A6CD
 * Original: 0x0020A6CD - 0x0020A6D5 (8 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A6CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A6CD: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A6D5
 * Original: 0x0020A6D5 - 0x0020A728 (83 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A6D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A6D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020A6F1; /* je: equal / zero */

loc_0020A6E8: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_0020A71F;

loc_0020A6F1: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A705u); RECOMP_ABI_CALL(0x0020A059u, sub_0020A059); /* call 0x0020A059 */

loc_0020A705: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A71B; /* je: equal / zero */

loc_0020A709: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A71B; /* jne: not equal / not zero */

loc_0020A70E: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = edi;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A71Bu); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

loc_0020A71B: ;
    MEM32(edi + 8) = ebx;
    POP32(esp, esi);

loc_0020A71F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A728
 * Original: 0x0020A728 - 0x0020A744 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A728(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A728: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A744(); return; } /* je: equal / zero */

loc_0020A73B: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_0020A775(); return; /* tail jmp 0x0020A775 */

}

/**
 * sub_0020A744
 * Original: 0x0020A744 - 0x0020A775 (49 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A744(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A744: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x0020A756u); RECOMP_ABI_CALL(0x00209EC5u, sub_00209EC5); /* call 0x00209EC5 */

loc_0020A756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A76B; /* jne: not equal / not zero */

loc_0020A75A: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020A767u); RECOMP_ABI_CALL(0x0020A059u, sub_0020A059); /* call 0x0020A059 */

loc_0020A767: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A772; /* je: equal / zero */

loc_0020A76B: ;
    ecx = esi;
    PUSH32(esp, 0x0020A772u); RECOMP_ABI_CALL(0x0020A5D0u, sub_0020A5D0); /* call 0x0020A5D0 */

loc_0020A772: ;
    MEM32(esi + 8) = ebx;

    g_seh_ebp = ebp; sub_0020A775(); return; /* fallthrough 0x0020A775 */

}

/**
 * sub_0020A775
 * Original: 0x0020A775 - 0x0020A77E (9 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A775(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A775: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A77E
 * Original: 0x0020A77E - 0x0020A7C1 (67 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A77E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A77E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020A79B; /* je: equal / zero */

loc_0020A78C: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x0020A797u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020A797: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A78C; /* je: equal / zero */

loc_0020A79B: ;
    ecx = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0020A7B0u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020A7B0: ;
    PUSH32(esp, 0x0020A7B5u); RECOMP_ABI_CALL(0x00209987u, sub_00209987); /* call 0x00209987 */

loc_0020A7B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A7BC; /* jl: less (signed <) */

loc_0020A7B9: ;
    MEM32(edi + 8) = ebx;

loc_0020A7BC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A7C1
 * Original: 0x0020A7C1 - 0x0020A7ED (44 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A7C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A7C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0020A7D9u); RECOMP_ABI_CALL(0x0020A3DBu, sub_0020A3DB); /* call 0x0020A3DB */

loc_0020A7D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A7ED(); return; } /* jge: greater or equal (signed >=) */

loc_0020A7DD: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A7ED
 * Original: 0x0020A7ED - 0x0020A7F6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A7ED(void)
{

loc_0020A7ED: ;
    MEM32(esi + 0x14) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A7F6
 * Original: 0x0020A7F6 - 0x0020A87F (137 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A7F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A7F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A8D7(); return; } /* je: equal / zero */

loc_0020A809: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x0020A814u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020A814: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A8CB(); return; } /* je: equal / zero */

loc_0020A81F: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8C8(); return; } /* jl: less (signed <) */

loc_0020A825: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A82E; /* jne: not equal / not zero */

loc_0020A82B: ;
    MEM32(esi + 0x14) = ebx;

loc_0020A82E: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A882(); return; } /* jne: not equal / not zero */

loc_0020A834: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x834);
    _fb = (uint32_t)(MEM32(eax + 0x82C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x82C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A87F(); return; } /* jb: below (unsigned <) */

loc_0020A848: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020A851u); RECOMP_ABI_CALL(0x00209B05u, sub_00209B05); /* call 0x00209B05 */

loc_0020A851: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8A6(); return; } /* jl: less (signed <) */

loc_0020A857: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0020A86Cu); RECOMP_ABI_CALL(0x0020A497u, sub_0020A497); /* call 0x0020A497 */

loc_0020A86C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8A6(); return; } /* jl: less (signed <) */

loc_0020A872: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = 4;
    g_seh_ebp = ebp; sub_0020A882(); return; /* tail jmp 0x0020A882 */

}

/**
 * sub_0020A87F
 * Original: 0x0020A87F - 0x0020A882 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A87F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A87F: ;
    MEM32(esi + 0x14) = ebx;

    g_seh_ebp = ebp; sub_0020A882(); return; /* fallthrough 0x0020A882 */

}

/**
 * sub_0020A882
 * Original: 0x0020A882 - 0x0020A8A6 (36 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A882(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A882: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A8C1(); return; } /* jne: not equal / not zero */

loc_0020A887: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A88Fu); RECOMP_ABI_CALL(0x00209B05u, sub_00209B05); /* call 0x00209B05 */

loc_0020A88F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8A6(); return; } /* jl: less (signed <) */

loc_0020A895: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0020A8A0u); RECOMP_ABI_CALL(0x00209382u, sub_00209382); /* call 0x00209382 */

loc_0020A8A0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8B0(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020A8A6(); return; /* fallthrough 0x0020A8A6 */

}

/**
 * sub_0020A8A6
 * Original: 0x0020A8A6 - 0x0020A8B0 (10 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8A6: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0020A8AEu); RECOMP_ABI_CALL(0x0020A5D0u, sub_0020A5D0); /* call 0x0020A5D0 */

loc_0020A8AE: ;
    g_seh_ebp = ebp; sub_0020A8C1(); return; /* tail jmp 0x0020A8C1 */

}

/**
 * sub_0020A8B0
 * Original: 0x0020A8B0 - 0x0020A8C1 (17 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8B0: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(eax + 0x10));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0020A8C1u); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

    g_seh_ebp = ebp; sub_0020A8C1(); return; /* fallthrough 0x0020A8C1 */

}

/**
 * sub_0020A8C1
 * Original: 0x0020A8C1 - 0x0020A8C8 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A8CB(); return; } /* jge: greater or equal (signed >=) */

loc_0020A8C5: ;
    MEM32(esi + 0x2C) = edi;

    g_seh_ebp = ebp; sub_0020A8C8(); return; /* fallthrough 0x0020A8C8 */

}

/**
 * sub_0020A8C8
 * Original: 0x0020A8C8 - 0x0020A8CB (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8C8: ;
    MEM32(esi + 0x14) = ebx;

    g_seh_ebp = ebp; sub_0020A8CB(); return; /* fallthrough 0x0020A8CB */

}

/**
 * sub_0020A8CB
 * Original: 0x0020A8CB - 0x0020A8D7 (12 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8CB: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020A8D7(); return; } /* jne: not equal / not zero */

loc_0020A8D0: ;
    ecx = esi;
    PUSH32(esp, 0x0020A8D7u); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

    g_seh_ebp = ebp; sub_0020A8D7(); return; /* fallthrough 0x0020A8D7 */

}

/**
 * sub_0020A8D7
 * Original: 0x0020A8D7 - 0x0020A8DE (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8D7(void)
{

loc_0020A8D7: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A8DE
 * Original: 0x0020A8DE - 0x0020A959 (123 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A8DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A8DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A8EFu); RECOMP_ABI_CALL(0x00209B36u, sub_00209B36); /* call 0x00209B36 */

loc_0020A8EF: ;
    esi = MEM32(edi + 0x10);
    eax = esi + 0x84C;
    MEM32(edi + 0x18) = eax;
    ebx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A911u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_0020A911: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A933u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A933: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A945u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020A945: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A959(); return; } /* jge: greater or equal (signed >=) */

loc_0020A949: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x14) = 1;
    MEM32(edi + 0x2C) = eax;
    g_seh_ebp = ebp; sub_0020A960(); return; /* tail jmp 0x0020A960 */

}

/**
 * sub_0020A959
 * Original: 0x0020A959 - 0x0020A960 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A959(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A959: ;
    MEM32(edi + 0x14) = 3;

    g_seh_ebp = ebp; sub_0020A960(); return; /* fallthrough 0x0020A960 */

}

/**
 * sub_0020A960
 * Original: 0x0020A960 - 0x0020A965 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A960: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020A965
 * Original: 0x0020A965 - 0x0020A9EF (138 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020A965(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A965: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, MEM32(edi + 0x24));
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, MEM32(edi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A97Cu); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

loc_0020A97C: ;
    esi = MEM32(edi + 0x10);
    eax = esi + 0x84C;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A995u); RECOMP_ABI_CALL(0x0020917Cu, sub_0020917C); /* call 0x0020917C */

loc_0020A995: ;
    ebx = eax;
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A9A7u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_0020A9A7: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A9C9u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020A9C9: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020A9DBu); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020A9DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020A9EF(); return; } /* jge: greater or equal (signed >=) */

loc_0020A9DF: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x2C) = eax;
    MEM32(edi + 0x14) = 1;
    g_seh_ebp = ebp; sub_0020A9F6(); return; /* tail jmp 0x0020A9F6 */

}

/**
 * sub_0020A9EF
 * Original: 0x0020A9EF - 0x0020A9F6 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A9EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A9EF: ;
    MEM32(edi + 0x14) = 3;

    g_seh_ebp = ebp; sub_0020A9F6(); return; /* fallthrough 0x0020A9F6 */

}

/**
 * sub_0020A9F6
 * Original: 0x0020A9F6 - 0x0020A9FB (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A9F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A9F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020A9FB
 * Original: 0x0020A9FB - 0x0020AA27 (44 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A9FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A9FB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0020AA13u); RECOMP_ABI_CALL(0x0020A374u, sub_0020A374); /* call 0x0020A374 */

loc_0020AA13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AA27(); return; } /* jge: greater or equal (signed >=) */

loc_0020AA17: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020AA27
 * Original: 0x0020AA27 - 0x0020AA30 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AA27(void)
{

loc_0020AA27: ;
    MEM32(esi + 0x14) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020AA30
 * Original: 0x0020AA30 - 0x0020AA4C (28 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020AA38u); RECOMP_ABI_CALL(0x00209D8Au, sub_00209D8A); /* call 0x00209D8A */

loc_0020AA38: ;
    ecx = MEM32(esi + 0x8BC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0020AA4Au); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_0020AA4A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020AA4C
 * Original: 0x0020AA4C - 0x0020AB1E (210 bytes, 82 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020AA4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AA4C: ;
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
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ecx = MEM32(edi + 8);
    eax = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebp + -32;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AA77u); RECOMP_ABI_CALL(0x00208D06u, sub_00208D06); /* call 0x00208D06 */

loc_0020AA77: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) - eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AA99u); RECOMP_ABI_CALL(0x0020A262u, sub_0020A262); /* call 0x0020A262 */

loc_0020AA99: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(edi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AAD2; /* jne: not equal / not zero */

loc_0020AAA9: ;
    edx = MEM32(edi + 0xC);
    edi = eax;
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1F4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + ebx + 0x24;
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
    esi = MEM32(ebp + 8);

loc_0020AAD2: ;
    eax = esi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = ebx + 0x24;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AAE3u); RECOMP_ABI_CALL(0x00209122u, sub_00209122); /* call 0x00209122 */

loc_0020AAE3: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebx + 0x8BC);
    PUSH32(esp, MEM32(ebx + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    esi = esi << 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AB05u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020AB05: ;
    ebx = MEM32(ebx + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AB17u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020AB17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020AB1E
 * Original: 0x0020AB1E - 0x0020AB30 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AB1E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AB30(); return; } /* je: equal / zero */

loc_0020AB29: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0020AB55(); return; /* tail jmp 0x0020AB55 */

}

/**
 * sub_0020AB30
 * Original: 0x0020AB30 - 0x0020AB55 (37 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AB30: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0020AB45u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020AB45: ;
    PUSH32(esp, 0x0020AB4Au); RECOMP_ABI_CALL(0x0020A7C1u, sub_0020A7C1); /* call 0x0020A7C1 */

loc_0020AB4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AB55(); return; } /* jl: less (signed <) */

loc_0020AB4E: ;
    MEM32(ebx + 8) = 1;

    g_seh_ebp = ebp; sub_0020AB55(); return; /* fallthrough 0x0020AB55 */

}

/**
 * sub_0020AB55
 * Original: 0x0020AB55 - 0x0020AB59 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB55(void)
{

loc_0020AB55: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020AB59
 * Original: 0x0020AB59 - 0x0020AB6F (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AB59: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AB6F(); return; } /* je: equal / zero */

loc_0020AB68: ;
    ebx = 0x80004005u;
    g_seh_ebp = ebp; sub_0020AB8B(); return; /* tail jmp 0x0020AB8B */

}

/**
 * sub_0020AB6F
 * Original: 0x0020AB6F - 0x0020AB8B (28 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AB6F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020AB7Fu); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020AB7F: ;
    PUSH32(esp, 0x0020AB84u); RECOMP_ABI_CALL(0x0020A8DEu, sub_0020A8DE); /* call 0x0020A8DE */

loc_0020AB84: ;
    MEM32(esi + 8) = 1;

    g_seh_ebp = ebp; sub_0020AB8B(); return; /* fallthrough 0x0020AB8B */

}

/**
 * sub_0020AB8B
 * Original: 0x0020AB8B - 0x0020AB92 (7 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB8B(void)
{

loc_0020AB8B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AB92
 * Original: 0x0020AB92 - 0x0020ABB1 (31 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB92(void)
{

loc_0020AB92: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 8);
    PUSH32(esp, 0x0020ABA9u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020ABA9: ;
    PUSH32(esp, 0x0020ABAEu); RECOMP_ABI_CALL(0x0020A965u, sub_0020A965); /* call 0x0020A965 */

loc_0020ABAE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020ABB1
 * Original: 0x0020ABB1 - 0x0020ABCE (29 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ABB1(void)
{

loc_0020ABB1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 7);
    PUSH32(esp, 0x0020ABC6u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020ABC6: ;
    PUSH32(esp, 0x0020ABCBu); RECOMP_ABI_CALL(0x0020A9FBu, sub_0020A9FB); /* call 0x0020A9FB */

loc_0020ABCB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020ABCE
 * Original: 0x0020ABCE - 0x0020AC40 (114 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020ABCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020ABCE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0x0020ABDAu); RECOMP_ABI_CALL(0x00209C1Eu, sub_00209C1E); /* call 0x00209C1E */

loc_0020ABDA: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AC65(); return; } /* jl: less (signed <) */

loc_0020ABE5: ;
    PUSH32(esp, 0x0020ABEAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ABEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AC40(); return; } /* jne: not equal / not zero */

loc_0020ABF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    ebx = esi + 0x84C;
    PUSH32(esp, ebx);
    MEM32(edi + 0x18) = ebx;
    PUSH32(esp, MEM32(esi + 0x8B8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8BC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0020AC24u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020AC24: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020AC31u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020AC31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AC40(); return; } /* jl: less (signed <) */

loc_0020AC37: ;
    MEM32(edi + 0x14) = 2;
    g_seh_ebp = ebp; sub_0020AC61(); return; /* tail jmp 0x0020AC61 */

}

/**
 * sub_0020AC40
 * Original: 0x0020AC40 - 0x0020AC61 (33 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AC40: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0x0020AC48u); RECOMP_ABI_CALL(0x0020AA30u, sub_0020AA30); /* call 0x0020AA30 */

loc_0020AC48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AC65(); return; } /* jl: less (signed <) */

loc_0020AC4C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0020AC5Cu); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020AC5C: ;
    PUSH32(esp, 0x0020AC61u); RECOMP_ABI_CALL(0x0020A8DEu, sub_0020A8DE); /* call 0x0020A8DE */

    g_seh_ebp = ebp; sub_0020AC61(); return; /* fallthrough 0x0020AC61 */

}

/**
 * sub_0020AC61
 * Original: 0x0020AC61 - 0x0020AC65 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AC61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AC61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AC6B(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020AC65(); return; /* fallthrough 0x0020AC65 */

}

/**
 * sub_0020AC65
 * Original: 0x0020AC65 - 0x0020AC6B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AC65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AC65: ;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x2C) = eax;

    g_seh_ebp = ebp; sub_0020AC6B(); return; /* fallthrough 0x0020AC6B */

}

/**
 * sub_0020AC6B
 * Original: 0x0020AC6B - 0x0020AC77 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AC6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AC6B: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AC74; /* jne: not equal / not zero */

loc_0020AC70: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020AC74: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0020AC77
 * Original: 0x0020AC77 - 0x0020AC90 (25 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020AC77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AC77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AC90(); return; } /* jne: not equal / not zero */

loc_0020AC87: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0020AD0D(); return; /* tail jmp 0x0020AD0D */

}

/**
 * sub_0020AC90
 * Original: 0x0020AC90 - 0x0020AD0D (125 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AC90: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x0020AC9Cu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020AC9C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020ACEC; /* je: equal / zero */

loc_0020ACA5: ;
    MEM32(esi + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0020ACEC; /* jl: less (signed <) */

loc_0020ACAA: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0x0020ACBEu); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_0020ACBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020ACD7; /* jl: less (signed <) */

loc_0020ACC2: ;
    ecx = MEM32(esi + 0x10);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020ACCEu); RECOMP_ABI_CALL(0x00209DD8u, sub_00209DD8); /* call 0x00209DD8 */

loc_0020ACCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020ACD7; /* jl: less (signed <) */

loc_0020ACD2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020ACEC; /* je: equal / zero */

loc_0020ACD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x0020ACE7u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020ACE7: ;
    PUSH32(esp, 0x0020ACECu); RECOMP_ABI_CALL(0x0020A8DEu, sub_0020A8DE); /* call 0x0020A8DE */

loc_0020ACEC: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AD0C; /* jne: not equal / not zero */

loc_0020ACF1: ;
    ecx = esi;
    PUSH32(esp, 0x0020ACF8u); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

loc_0020ACF8: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020AD0C; /* jge: greater or equal (signed >=) */

loc_0020ACFD: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AD0C; /* je: equal / zero */

loc_0020AD04: ;
    PUSH32(esp, 0x0020AD09u); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

loc_0020AD09: ;
    MEM32(esi + 0x10) = edi;

loc_0020AD0C: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0020AD0D(); return; /* fallthrough 0x0020AD0D */

}

/**
 * sub_0020AD0D
 * Original: 0x0020AD0D - 0x0020AD14 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AD0D: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020AD14
 * Original: 0x0020AD14 - 0x0020AD31 (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AD14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AD31(); return; } /* jne: not equal / not zero */

loc_0020AD26: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = ebp;
    g_seh_ebp = ebp; sub_0020ADB9(); return; /* tail jmp 0x0020ADB9 */

}

/**
 * sub_0020AD31
 * Original: 0x0020AD31 - 0x0020AD80 (79 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AD31: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x0020AD3Cu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020AD3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020ADAD(); return; } /* je: equal / zero */

loc_0020AD43: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020ADAD(); return; } /* jl: less (signed <) */

loc_0020AD45: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esi + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020ADC1(); return; } /* jne: not equal / not zero */

loc_0020AD50: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AD80(); return; } /* jne: not equal / not zero */

loc_0020AD55: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = eax + 0x880;
    PUSH32(esp, ecx);
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AD6Eu); RECOMP_ABI_CALL(0x0020ABB1u, sub_0020ABB1); /* call 0x0020ABB1 */

loc_0020AD6E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020ADA7(); return; } /* jl: less (signed <) */

loc_0020AD74: ;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x14) = 6;
    g_seh_ebp = ebp; sub_0020ADA3(); return; /* tail jmp 0x0020ADA3 */

}

/**
 * sub_0020AD80
 * Original: 0x0020AD80 - 0x0020ADA0 (32 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AD80: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0020AD8Bu); RECOMP_ABI_CALL(0x0020A313u, sub_0020A313); /* call 0x0020A313 */

loc_0020AD8B: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0020AD99u); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

loc_0020AD99: ;
    MEM32(esi + 0x2C) = 0x1500F0;

    g_seh_ebp = ebp; sub_0020ADA0(); return; /* fallthrough 0x0020ADA0 */

}

/**
 * sub_0020ADA0
 * Original: 0x0020ADA0 - 0x0020ADA3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADA0: ;
    MEM32(esi + 0x14) = ebx;

    g_seh_ebp = ebp; sub_0020ADA3(); return; /* fallthrough 0x0020ADA3 */

}

/**
 * sub_0020ADA3
 * Original: 0x0020ADA3 - 0x0020ADA7 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020ADAD(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020ADA7(); return; /* fallthrough 0x0020ADA7 */

}

/**
 * sub_0020ADA7
 * Original: 0x0020ADA7 - 0x0020ADAD (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADA7: ;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x14) = ebx;

    g_seh_ebp = ebp; sub_0020ADAD(); return; /* fallthrough 0x0020ADAD */

}

/**
 * sub_0020ADAD
 * Original: 0x0020ADAD - 0x0020ADB9 (12 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADAD: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020ADB9(); return; } /* jne: not equal / not zero */

loc_0020ADB2: ;
    ecx = esi;
    PUSH32(esp, 0x0020ADB9u); RECOMP_ABI_CALL(0x00208E71u, sub_00208E71); /* call 0x00208E71 */

    g_seh_ebp = ebp; sub_0020ADB9(); return; /* fallthrough 0x0020ADB9 */

}

/**
 * sub_0020ADB9
 * Original: 0x0020ADB9 - 0x0020ADC1 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADB9: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020ADC1
 * Original: 0x0020ADC1 - 0x0020AE03 (66 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ADC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020ADA0(); return; } /* jne: not equal / not zero */

loc_0020ADC6: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    _fa = (uint32_t)(MEM16(ecx * 2 + 0xAA7742)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0xAA7742), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020ADA0(); return; } /* je: equal / zero */

loc_0020ADD8: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = eax + 0x880;
    PUSH32(esp, MEM32(esi + 0x20));
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020ADF1u); RECOMP_ABI_CALL(0x0020AB92u, sub_0020AB92); /* call 0x0020AB92 */

loc_0020ADF1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020ADA7(); return; } /* jl: less (signed <) */

loc_0020ADF7: ;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x14) = 5;
    g_seh_ebp = ebp; sub_0020ADA3(); return; /* tail jmp 0x0020ADA3 */

}

/**
 * sub_0020AE03
 * Original: 0x0020AE03 - 0x0020AE32 (47 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AE03: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AE32(); return; } /* jne: not equal / not zero */

loc_0020AE10: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x1F3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AE32(); return; } /* jne: not equal / not zero */

loc_0020AE19: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AE29u); RECOMP_ABI_CALL(0x0020AA4Cu, sub_0020AA4C); /* call 0x0020AA4C */

loc_0020AE29: ;
    MEM32(esi + 0x14) = 3;
    g_seh_ebp = ebp; sub_0020AE45(); return; /* tail jmp 0x0020AE45 */

}

/**
 * sub_0020AE32
 * Original: 0x0020AE32 - 0x0020AE45 (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AE32: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AE3Eu); RECOMP_ABI_CALL(0x0020A212u, sub_0020A212); /* call 0x0020A212 */

loc_0020AE3E: ;
    MEM32(esi + 0x14) = 2;

    g_seh_ebp = ebp; sub_0020AE45(); return; /* fallthrough 0x0020AE45 */

}

/**
 * sub_0020AE45
 * Original: 0x0020AE45 - 0x0020AE49 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE45(void)
{

loc_0020AE45: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AE49
 * Original: 0x0020AE49 - 0x0020AEAC (99 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020AE49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AE49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AE76u); RECOMP_ABI_CALL(0x00209228u, sub_00209228); /* call 0x00209228 */

loc_0020AE76: ;
    MEM32(edi + 0x840) = 1;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x84C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x84C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AE96u); RECOMP_ABI_CALL(0x0020AE03u, sub_0020AE03); /* call 0x0020AE03 */

loc_0020AE96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020AEA7; /* jge: greater or equal (signed >=) */

loc_0020AE9A: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    MEM32(esi + 0x18) = ebx;

loc_0020AEA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020AEAC
 * Original: 0x0020AEAC - 0x0020AF03 (87 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020AEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AEAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AFB1(); return; } /* je: equal / zero */

loc_0020AED7: ;
    ecx = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AEE3u); RECOMP_ABI_CALL(0x00209228u, sub_00209228); /* call 0x00209228 */

loc_0020AEE3: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020AEEEu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020AEEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AFA8(); return; } /* je: equal / zero */

loc_0020AEF9: ;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AF03(); return; } /* jge: greater or equal (signed >=) */

loc_0020AEFB: ;
    MEM32(esi + 0x14) = edi;
    g_seh_ebp = ebp; sub_0020AFA8(); return; /* tail jmp 0x0020AFA8 */

}

/**
 * sub_0020AF03
 * Original: 0x0020AF03 - 0x0020AF50 (77 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AF03: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AF15u); RECOMP_ABI_CALL(0x00208E43u, sub_00208E43); /* call 0x00208E43 */

loc_0020AF15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AF9E(); return; } /* jl: less (signed <) */

loc_0020AF1D: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 2 (32-bit) */
    MEM32(esi + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AF50(); return; } /* jne: not equal / not zero */

loc_0020AF26: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AF40u); RECOMP_ABI_CALL(0x0020AA4Cu, sub_0020AA4C); /* call 0x0020AA4C */

loc_0020AF40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AF9E(); return; } /* jl: less (signed <) */

loc_0020AF44: ;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x14) = 3;
    g_seh_ebp = ebp; sub_0020AFA8(); return; /* tail jmp 0x0020AFA8 */

}

/**
 * sub_0020AF50
 * Original: 0x0020AF50 - 0x0020AF9E (78 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AF50: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + 0x834);
    ecx = eax + 0x82C;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AFA1(); return; } /* jb: below (unsigned <) */

loc_0020AF68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(eax + 0x830) = ebx;
    edi = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020AF81u); RECOMP_ABI_CALL(0x00209228u, sub_00209228); /* call 0x00209228 */

loc_0020AF81: ;
    eax = ebp + -24;
    _fb = (uint32_t)(0x84C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x84C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x0020AF95u); RECOMP_ABI_CALL(0x0020AE03u, sub_0020AE03); /* call 0x0020AE03 */

loc_0020AF95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020AF9E(); return; } /* jl: less (signed <) */

loc_0020AF99: ;
    MEM32(esi + 0x2C) = ebx;
    g_seh_ebp = ebp; sub_0020AFA8(); return; /* tail jmp 0x0020AFA8 */

}

/**
 * sub_0020AF9E
 * Original: 0x0020AF9E - 0x0020AFA1 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AF9E: ;
    MEM32(esi + 0x2C) = eax;

    g_seh_ebp = ebp; sub_0020AFA1(); return; /* fallthrough 0x0020AFA1 */

}

/**
 * sub_0020AFA1
 * Original: 0x0020AFA1 - 0x0020AFA8 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AFA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AFA1: ;
    MEM32(esi + 0x14) = 1;

    g_seh_ebp = ebp; sub_0020AFA8(); return; /* fallthrough 0x0020AFA8 */

}

/**
 * sub_0020AFA8
 * Original: 0x0020AFA8 - 0x0020AFB1 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AFA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AFA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020AFB1(); return; } /* jne: not equal / not zero */

loc_0020AFAE: ;
    MEM32(esi + 0x18) = ebx;

    g_seh_ebp = ebp; sub_0020AFB1(); return; /* fallthrough 0x0020AFB1 */

}

/**
 * sub_0020AFB1
 * Original: 0x0020AFB1 - 0x0020AFB9 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AFB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AFB1: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020AFB9
 * Original: 0x0020AFB9 - 0x0020B032 (121 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AFB9(void)
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

loc_0020AFB9: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020B00B; /* ja: above (unsigned >) */

loc_0020AFC7: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x20B00E); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0020AFCEu) goto loc_0020AFCE;
    if (_jt == 0x0020AFD5u) goto loc_0020AFD5;
    if (_jt == 0x0020AFDCu) goto loc_0020AFDC;
    if (_jt == 0x0020AFE3u) goto loc_0020AFE3;
    if (_jt == 0x0020AFEAu) goto loc_0020AFEA;
    if (_jt == 0x0020AFF1u) goto loc_0020AFF1;
    if (_jt == 0x0020AFF8u) goto loc_0020AFF8;
    if (_jt == 0x0020AFFFu) goto loc_0020AFFF;
    if (_jt == 0x0020B006u) goto loc_0020B006;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020AFCE: ;
    PUSH32(esp, 0x0020AFD3u); RECOMP_ABI_CALL(0x0020AC77u, sub_0020AC77); /* call 0x0020AC77 */

loc_0020AFD3: ;
    goto loc_0020B00B;

loc_0020AFD5: ;
    PUSH32(esp, 0x0020AFDAu); RECOMP_ABI_CALL(0x0020AD14u, sub_0020AD14); /* call 0x0020AD14 */

loc_0020AFDA: ;
    goto loc_0020B00B;

loc_0020AFDC: ;
    PUSH32(esp, 0x0020AFE1u); RECOMP_ABI_CALL(0x002098EBu, sub_002098EB); /* call 0x002098EB */

loc_0020AFE1: ;
    goto loc_0020B00B;

loc_0020AFE3: ;
    PUSH32(esp, 0x0020AFE8u); RECOMP_ABI_CALL(0x0020A7F6u, sub_0020A7F6); /* call 0x0020A7F6 */

loc_0020AFE8: ;
    goto loc_0020B00B;

loc_0020AFEA: ;
    PUSH32(esp, 0x0020AFEFu); RECOMP_ABI_CALL(0x00209939u, sub_00209939); /* call 0x00209939 */

loc_0020AFEF: ;
    goto loc_0020B00B;

loc_0020AFF1: ;
    PUSH32(esp, 0x0020AFF6u); RECOMP_ABI_CALL(0x00209A15u, sub_00209A15); /* call 0x00209A15 */

loc_0020AFF6: ;
    goto loc_0020B00B;

loc_0020AFF8: ;
    PUSH32(esp, 0x0020AFFDu); RECOMP_ABI_CALL(0x0020AEACu, sub_0020AEAC); /* call 0x0020AEAC */

loc_0020AFFD: ;
    goto loc_0020B00B;

loc_0020AFFF: ;
    PUSH32(esp, 0x0020B004u); RECOMP_ABI_CALL(0x00209ABFu, sub_00209ABF); /* call 0x00209ABF */

loc_0020B004: ;
    goto loc_0020B00B;

loc_0020B006: ;
    PUSH32(esp, 0x0020B00Bu); RECOMP_ABI_CALL(0x00209A6Fu, sub_00209A6F); /* call 0x00209A6F */

loc_0020B00B: ;
    esp += 8; return; /* ret 4 */

    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0020B032(); return; /* fallthrough 0x0020B032 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020B032
 * Original: 0x0020B032 - 0x0020B05C (42 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B032(void)
{

loc_0020B032: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020B047u); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020B047: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0020B050u); RECOMP_ABI_CALL(0x00209071u, sub_00209071); /* call 0x00209071 */

loc_0020B050: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0020B059u); RECOMP_ABI_CALL(0x0020AE49u, sub_0020AE49); /* call 0x0020AE49 */

loc_0020B059: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B05C
 * Original: 0x0020B05C - 0x0020B096 (58 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B05C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B05C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, 0x0020B07Du); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020B07D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi) = 0x20AFB9;
    MEM32(esi + 4) = 0x20983D;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B096
 * Original: 0x0020B096 - 0x0020B11D (135 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B096(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B096: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -24;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    esi = ecx;
    eax = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, 6);
    MEM32(ebp + -16) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x824) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x824;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B0D2u); RECOMP_ABI_CALL(0x00209EC5u, sub_00209EC5); /* call 0x00209EC5 */

loc_0020B0D2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B0E8; /* jne: not equal / not zero */

loc_0020B0D9: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B0E8u); RECOMP_ABI_CALL(0x0020A059u, sub_0020A059); /* call 0x0020A059 */

loc_0020B0E8: ;
    ecx = MEM32(esi + 0x10);
    edx = ecx + 0x880;
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    _fa = (uint32_t)(MEM16(eax * 2 + 0xAA7748)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0xAA7748), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B11D(); return; } /* je: equal / zero */

loc_0020B104: ;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B111u); RECOMP_ABI_CALL(0x0020B032u, sub_0020B032); /* call 0x0020B032 */

loc_0020B111: ;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x14) = 7;
    g_seh_ebp = ebp; sub_0020B16B(); return; /* tail jmp 0x0020B16B */

}

/**
 * sub_0020B11D
 * Original: 0x0020B11D - 0x0020B13B (30 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B11D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B11D: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), edi (32-bit) */
    PUSH32(esp, MEM32(esi + 0x20));
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B13B(); return; } /* jne: not equal / not zero */

loc_0020B125: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x0020B12Fu); RECOMP_ABI_CALL(0x0020ABB1u, sub_0020ABB1); /* call 0x0020ABB1 */

loc_0020B12F: ;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x14) = 6;
    g_seh_ebp = ebp; sub_0020B16B(); return; /* tail jmp 0x0020B16B */

}

/**
 * sub_0020B13B
 * Original: 0x0020B13B - 0x0020B16B (48 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B13B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B13B: ;
    PUSH32(esp, 0x0020B140u); RECOMP_ABI_CALL(0x0020A313u, sub_0020A313); /* call 0x0020A313 */

loc_0020B140: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0020B14Eu); RECOMP_ABI_CALL(0x0020A4F6u, sub_0020A4F6); /* call 0x0020A4F6 */

loc_0020B14E: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x2C) = 0x1500F0;
    MEM32(esi + 0x14) = edi;
    eax = MEM32(eax + 0x8B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B178(); return; } /* je: equal / zero */

loc_0020B165: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B16Bu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_0020B16B(); return; /* fallthrough 0x0020B16B */

}

/**
 * sub_0020B16B
 * Original: 0x0020B16B - 0x0020B178 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B16B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B16B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B178(); return; } /* jge: greater or equal (signed >=) */

loc_0020B172: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = edi;

    g_seh_ebp = ebp; sub_0020B178(); return; /* fallthrough 0x0020B178 */

}

/**
 * sub_0020B178
 * Original: 0x0020B178 - 0x0020B188 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B178: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B181; /* jne: not equal / not zero */

loc_0020B17D: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020B181: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0020B188
 * Original: 0x0020B188 - 0x0020B1F4 (108 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B188(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B188: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi + 0x880;
    MEM32(esi + 0x8B8) = eax;
    MEM32(esi + 0x8BC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B1C4u); RECOMP_ABI_CALL(0x0020B05Cu, sub_0020B05C); /* call 0x0020B05C */

loc_0020B1C4: ;
    MEM32(esi + 0x844) = MEM32(esi + 0x844) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x844)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B1D2u); RECOMP_ABI_CALL(0x00209192u, sub_00209192); /* call 0x00209192 */

loc_0020B1D2: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B1DAu); RECOMP_ABI_CALL(0x0020917Cu, sub_0020917C); /* call 0x0020917C */

loc_0020B1DA: ;
    ebx = eax;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x8C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C0), 0 (32-bit) */
    PUSH32(esp, 0x13);
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B1F4(); return; } /* je: equal / zero */

loc_0020B1ED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B1F2u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_0020B1F2: ;
    g_seh_ebp = ebp; sub_0020B1F9(); return; /* tail jmp 0x0020B1F9 */

}

/**
 * sub_0020B1F4
 * Original: 0x0020B1F4 - 0x0020B1F9 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B1F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B1F4: ;
    PUSH32(esp, 0x0020B1F9u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

    g_seh_ebp = ebp; sub_0020B1F9(); return; /* fallthrough 0x0020B1F9 */

}

/**
 * sub_0020B1F9
 * Original: 0x0020B1F9 - 0x0020B209 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B1F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B1F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B209(); return; } /* jne: not equal / not zero */

loc_0020B200: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020B20F(); return; /* tail jmp 0x0020B20F */

}

/**
 * sub_0020B209
 * Original: 0x0020B209 - 0x0020B20F (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B209: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = eax;

    g_seh_ebp = ebp; sub_0020B20F(); return; /* fallthrough 0x0020B20F */

}

/**
 * sub_0020B20F
 * Original: 0x0020B20F - 0x0020B219 (10 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B20F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B20F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B219
 * Original: 0x0020B219 - 0x0020B243 (42 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B219(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B219: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x8012);
    ebx = ecx;
    MEM32(eax) = edi;
    PUSH32(esp, 0x8C8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B243(); return; } /* je: equal / zero */

loc_0020B23C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B241u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_0020B241: ;
    g_seh_ebp = ebp; sub_0020B248(); return; /* tail jmp 0x0020B248 */

}

/**
 * sub_0020B243
 * Original: 0x0020B243 - 0x0020B248 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B243: ;
    PUSH32(esp, 0x0020B248u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

    g_seh_ebp = ebp; sub_0020B248(); return; /* fallthrough 0x0020B248 */

}

/**
 * sub_0020B248
 * Original: 0x0020B248 - 0x0020B264 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B248(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B248: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    MEM32(ebx + eax * 4 + 0x1870) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B264(); return; } /* jne: not equal / not zero */

loc_0020B258: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020B30C(); return; /* tail jmp 0x0020B30C */

}

/**
 * sub_0020B264
 * Original: 0x0020B264 - 0x0020B299 (53 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B264(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B264: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 0x8C0) = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B27Cu); RECOMP_ABI_CALL(0x0020B188u, sub_0020B188); /* call 0x0020B188 */

loc_0020B27C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B2D3(); return; } /* jl: less (signed <) */

loc_0020B283: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    PUSH32(esp, 0x8011);
    ecx = ebx;
    PUSH32(esp, 0x38);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B299(); return; } /* je: equal / zero */

loc_0020B292: ;
    PUSH32(esp, 0x0020B297u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_0020B297: ;
    g_seh_ebp = ebp; sub_0020B29E(); return; /* tail jmp 0x0020B29E */

}

/**
 * sub_0020B299
 * Original: 0x0020B299 - 0x0020B29E (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B299(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B299: ;
    PUSH32(esp, 0x0020B29Eu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

    g_seh_ebp = ebp; sub_0020B29E(); return; /* fallthrough 0x0020B29E */

}

/**
 * sub_0020B29E
 * Original: 0x0020B29E - 0x0020B2AD (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B29E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B2AD(); return; } /* jne: not equal / not zero */

loc_0020B2A4: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020B2D3(); return; /* tail jmp 0x0020B2D3 */

}

/**
 * sub_0020B2AD
 * Original: 0x0020B2AD - 0x0020B2D3 (38 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B2AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B2AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B2B9u); RECOMP_ABI_CALL(0x0020B05Cu, sub_0020B05C); /* call 0x0020B05C */

loc_0020B2B9: ;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x34) = eax;
    ecx = edi;
    MEM32(esi + 0x8C4) = edi;
    PUSH32(esp, 0x0020B2CCu); RECOMP_ABI_CALL(0x0020ABCEu, sub_0020ABCE); /* call 0x0020ABCE */

loc_0020B2CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B2FB(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020B2D3(); return; /* fallthrough 0x0020B2D3 */

}

/**
 * sub_0020B2D3
 * Original: 0x0020B2D3 - 0x0020B2EE (27 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B2D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B2D3: ;
    ecx = esi;
    PUSH32(esp, 0x0020B2DAu); RECOMP_ABI_CALL(0x00208ECFu, sub_00208ECF); /* call 0x00208ECF */

loc_0020B2DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B30C(); return; } /* je: equal / zero */

loc_0020B2DE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B2EE(); return; } /* je: equal / zero */

loc_0020B2E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B2ECu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020B2EC: ;
    g_seh_ebp = ebp; sub_0020B30C(); return; /* tail jmp 0x0020B30C */

}

/**
 * sub_0020B2EE
 * Original: 0x0020B2EE - 0x0020B2FB (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B2EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B2EE: ;
    PUSH32(esp, 0x8011);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B2F9u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020B2F9: ;
    g_seh_ebp = ebp; sub_0020B30C(); return; /* tail jmp 0x0020B30C */

}

/**
 * sub_0020B2FB
 * Original: 0x0020B2FB - 0x0020B30C (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B2FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B2FB: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 8) = 1;
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_0020B30C(); return; /* fallthrough 0x0020B30C */

}

/**
 * sub_0020B30C
 * Original: 0x0020B30C - 0x0020B316 (10 bytes, 6 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B30C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B30C: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020B316
 * Original: 0x0020B316 - 0x0020B32A (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B316(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B316: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B32A(); return; } /* je: equal / zero */

loc_0020B323: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0020B34F(); return; /* tail jmp 0x0020B34F */

}

/**
 * sub_0020B32A
 * Original: 0x0020B32A - 0x0020B34F (37 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B32A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B32A: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020B33Fu); RECOMP_ABI_CALL(0x00208E13u, sub_00208E13); /* call 0x00208E13 */

loc_0020B33F: ;
    PUSH32(esp, 0x0020B344u); RECOMP_ABI_CALL(0x0020B096u, sub_0020B096); /* call 0x0020B096 */

loc_0020B344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B34F(); return; } /* jl: less (signed <) */

loc_0020B348: ;
    MEM32(edi + 8) = 1;

    g_seh_ebp = ebp; sub_0020B34F(); return; /* fallthrough 0x0020B34F */

}

/**
 * sub_0020B34F
 * Original: 0x0020B34F - 0x0020B354 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B34F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B34F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020B354
 * Original: 0x0020B354 - 0x0020B37C (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B354(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B354: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020B377; /* jbe: below or equal (unsigned <=) */

loc_0020B35D: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B36Fu); RECOMP_ABI_CALL(0x0015173Eu, sub_0015173E); /* call 0x0015173E */

loc_0020B36F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B37A; /* jne: not equal / not zero */

loc_0020B377: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020B37A: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B37C
 * Original: 0x0020B37C - 0x0020B384 (8 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B37C(void)
{

loc_0020B37C: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B384
 * Original: 0x0020B384 - 0x0020B38C (8 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B384(void)
{

loc_0020B384: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B38C
 * Original: 0x0020B38C - 0x0020B3FA (110 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B38C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B38C: ;
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
    PUSH32(esp, 0x28);
    POP32(esp, edi);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020B3F1; /* jb: below (unsigned <) */

loc_0020B39E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B3AAu); RECOMP_ABI_CALL(0x000A969Cu, sub_000A969C); /* call 0x000A969C */

loc_0020B3AA: ;
    eax = ZX16(MEM16(ebp + -4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -6));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -8));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -16));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -14));
    eax = eax * 4 + 0xAA7828;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -10));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -12));
    eax = eax * 4 + 0xAA785C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA7A7C);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B3EAu); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B3EA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B3FA(); return; } /* jge: greater or equal (signed >=) */

loc_0020B3F1: ;
    MEM32(esi) = edi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B3FE(); return; /* tail jmp 0x0020B3FE */

}

/**
 * sub_0020B3FA
 * Original: 0x0020B3FA - 0x0020B3FE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020B3FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B3FA: ;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020B3FE(); return; /* fallthrough 0x0020B3FE */

}

/**
 * sub_0020B3FE
 * Original: 0x0020B3FE - 0x0020B404 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B3FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B3FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B404
 * Original: 0x0020B404 - 0x0020B564 (352 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B404(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020B404: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 1;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B415: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0020B415; /* jne: not equal / not zero */

loc_0020B41C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B427: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B435u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_0020B435: ;
    _fa = (uint32_t)(MEM8(ebp + -45)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -45), 0x2C (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B43F: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MEM8(ebp + -44)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -44), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B44A: ;
    _fa = (uint32_t)(MEM8(ebp + -37)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -37), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B453: ;
    _fa = (uint32_t)(MEM8(ebp + -32)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -32), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B45C: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0x3A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B466: ;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0x3A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B470: ;
    _fa = (uint32_t)(MEM8(ebp + -23)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -23), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B479: ;
    _fa = (uint32_t)(MEM8(ebp + -22)) & 0xFFu; _fb = (uint32_t)(0x47) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -22), 0x47 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B483: ;
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0x4D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0x4D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B48D: ;
    _fa = (uint32_t)(MEM8(ebp + -20)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -20), 0x54 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* jne: not equal / not zero */

loc_0020B497: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -16;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(ebp + -41) = LO8(ebx);
    MEM8(ebp + -32) = LO8(ebx);
    MEM8(ebp + -29) = LO8(ebx);
    MEM8(ebp + -26) = LO8(ebx);
    MEM8(ebp + -23) = LO8(ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B4B1: ;
    esi = ZX16(LO16(eax));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebp + -48;
    esi = esi * 4 + 0xAA785C;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0020B4CE; /* je: equal / zero */

loc_0020B4C7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 7 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020B4B1; /* jb: below (unsigned <) */

loc_0020B4CE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 7 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* je: equal / zero */

loc_0020B4D8: ;
    MEM16(ebp + -12) = LO16(eax);
    eax = ebp + -43;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B4E5u); RECOMP_ABI_CALL(0x001521B4u, sub_001521B4); /* call 0x001521B4 */

loc_0020B4E5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    MEM16(ebp + -10) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* je: equal / zero */

loc_0020B4EF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020B4F2: ;
    esi = ZX16(LO16(eax));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebp + -40;
    esi = esi * 4 + 0xAA7828;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0020B50F; /* je: equal / zero */

loc_0020B508: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xD (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020B4F2; /* jb: below (unsigned <) */

loc_0020B50F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xD (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B564(); return; } /* je: equal / zero */

loc_0020B515: ;
    MEM16(ebp + -14) = LO16(eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B522u); RECOMP_ABI_CALL(0x001521B4u, sub_001521B4); /* call 0x001521B4 */

loc_0020B522: ;
    MEM16(ebp + -16) = LO16(eax);
    eax = ebp + -31;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B52Fu); RECOMP_ABI_CALL(0x001521B4u, sub_001521B4); /* call 0x001521B4 */

loc_0020B52F: ;
    MEM16(ebp + -8) = LO16(eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B53Cu); RECOMP_ABI_CALL(0x001521B4u, sub_001521B4); /* call 0x001521B4 */

loc_0020B53C: ;
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -25;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B549u); RECOMP_ABI_CALL(0x001521B4u, sub_001521B4); /* call 0x001521B4 */

loc_0020B549: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + -4) = LO16(eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B55Cu); RECOMP_ABI_CALL(0x000A9707u, sub_000A9707); /* call 0x000A9707 */

loc_0020B55C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0020B566(); return; /* tail jmp 0x0020B566 */

}

/**
 * sub_0020B564
 * Original: 0x0020B564 - 0x0020B566 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020B564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B564: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020B566(); return; /* fallthrough 0x0020B566 */

}

/**
 * sub_0020B566
 * Original: 0x0020B566 - 0x0020B56D (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B566(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B56D
 * Original: 0x0020B56D - 0x0020B613 (166 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B56D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B56D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B593; /* je: equal / zero */

loc_0020B57C: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B593u); RECOMP_ABI_CALL(0x0020B38Cu, sub_0020B38C); /* call 0x0020B38C */

loc_0020B593: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_0020B599: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B599; /* jne: not equal / not zero */

loc_0020B5A0: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 0x34;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0x2000000;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_0020B5B7; /* jne: not equal / not zero */

loc_0020B5B4: ;
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1D;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B5B7: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0x1000000;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_0020B5C6; /* jne: not equal / not zero */

loc_0020B5C3: ;
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x17;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B5C6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B5CE; /* je: equal / zero */

loc_0020B5CB: ;
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B5CE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B5F8; /* je: equal / zero */

loc_0020B5D3: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax = ebp + -24;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0xAA7AA0);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B5E9u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B5E9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + eax + 0x20;
    MEM32(ebp + 0x2C) = eax;
    esi = eax;

loc_0020B5F8: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0x2C) = esi;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B613(); return; } /* jae: above or equal (unsigned >=) */

loc_0020B607: ;
    MEM32(eax) = esi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B740(); return; /* tail jmp 0x0020B740 */

}

/**
 * sub_0020B613
 * Original: 0x0020B613 - 0x0020B658 (69 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B613: ;
    _fa = (uint32_t)(MEM8(ebp + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x33), 4 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx * 4 + 0xAA7A28;
    SET_LO16(ecx, MEM16(eax + 2));
    SET_LO16(eax, MEM16(eax));
    edx = 0xAA79C8;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B635; /* jne: not equal / not zero */

loc_0020B630: ;
    edx = 0xAA79F8;

loc_0020B635: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0x16D9);
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    eax = ZX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B651u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B651: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B66D(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020B658(); return; /* fallthrough 0x0020B658 */

}

/**
 * sub_0020B658
 * Original: 0x0020B658 - 0x0020B66D (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B658: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B73F(); return; /* tail jmp 0x0020B73F */

}

/**
 * sub_0020B66D
 * Original: 0x0020B66D - 0x0020B73F (210 bytes, 77 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020B66D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B66D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B68F; /* jne: not equal / not zero */

loc_0020B677: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7950);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B684u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B684: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B658(); return; } /* jl: less (signed <) */

loc_0020B68B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B68F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B6C0; /* jne: not equal / not zero */

loc_0020B695: ;
    eax = ZX8(MEM8(ebp + 0x13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x12));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x11));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA793C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B6B5u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B6B5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B658(); return; } /* jl: less (signed <) */

loc_0020B6BC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B6C0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B704; /* je: equal / zero */

loc_0020B6C6: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA7914);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B6D6u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B6D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B658(); return; } /* jl: less (signed <) */

loc_0020B6E1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA7900);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B6F5u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B6F5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B658(); return; } /* jl: less (signed <) */

loc_0020B700: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B704: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B71C; /* je: equal / zero */

loc_0020B70A: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B716u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020B716: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B71C: ;
    PUSH32(esp, 0xAA78CC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B728u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B728: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B658(); return; } /* jl: less (signed <) */

loc_0020B733: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020B73F(); return; /* fallthrough 0x0020B73F */

}

/**
 * sub_0020B73F
 * Original: 0x0020B73F - 0x0020B740 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B73F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B73F: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020B740(); return; /* fallthrough 0x0020B740 */

}

/**
 * sub_0020B740
 * Original: 0x0020B740 - 0x0020B746 (6 bytes, 4 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_0020B746
 * Original: 0x0020B746 - 0x0020B793 (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B746(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B746: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_0020B751: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B751; /* jne: not equal / not zero */

loc_0020B758: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax + 0x35;
    eax = MEM32(ebp + 0x2C);
    eax = eax & 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if ((_fa != 0)) goto loc_0020B76F; /* jne: not equal / not zero */

loc_0020B76C: ;
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1D;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B76F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B778; /* je: equal / zero */

loc_0020B775: ;
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B778: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x27;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B793(); return; } /* jae: above or equal (unsigned >=) */

loc_0020B787: ;
    MEM32(eax) = esi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B876(); return; /* tail jmp 0x0020B876 */

}

/**
 * sub_0020B793
 * Original: 0x0020B793 - 0x0020B7E9 (86 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B793(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B793: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2F)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x2F), 8 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx * 4 + 0xAA7A28;
    SET_LO16(ecx, MEM16(eax + 2));
    SET_LO16(eax, MEM16(eax));
    edx = 0xAA7968;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B7B5; /* jne: not equal / not zero */

loc_0020B7B0: ;
    edx = 0xAA7998;

loc_0020B7B5: ;
    PUSH32(esp, 0x16D9);
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    eax = ZX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0020B7D0u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B7D0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B7E9(); return; } /* jge: greater or equal (signed >=) */

loc_0020B7D7: ;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B875(); return; /* tail jmp 0x0020B875 */

}

/**
 * sub_0020B7DF
 * Original: 0x0020B7DF - 0x0020B7E9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B7DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B7DF: ;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020B875(); return; /* tail jmp 0x0020B875 */

}

/**
 * sub_0020B7E9
 * Original: 0x0020B7E9 - 0x0020B82D (68 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B7E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B7E9: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    esi = eax + ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020B80F; /* jne: not equal / not zero */

loc_0020B7F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7950);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B804u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B804: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B828; /* jl: less (signed <) */

loc_0020B80B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B80F: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, 0xAA7924);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B821u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B821: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B82D(); return; } /* jge: greater or equal (signed >=) */

loc_0020B828: ;
    ecx = MEM32(ebp + 0x18);
    g_seh_ebp = ebp; sub_0020B85F(); return; /* tail jmp 0x0020B85F */

}

/**
 * sub_0020B82D
 * Original: 0x0020B82D - 0x0020B85F (50 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B82D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B82D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B849; /* je: equal / zero */

loc_0020B837: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B843u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020B843: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B849: ;
    PUSH32(esp, 0xAA78CC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B855u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_0020B855: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B86C(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020B85F(); return; /* fallthrough 0x0020B85F */

}

/**
 * sub_0020B85F
 * Original: 0x0020B85F - 0x0020B86C (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B85F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B85F: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_0020B7DF(); return; /* tail jmp 0x0020B7DF */

}

/**
 * sub_0020B86C
 * Original: 0x0020B86C - 0x0020B875 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020B86C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B86C: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020B875(); return; /* fallthrough 0x0020B875 */

}

/**
 * sub_0020B875
 * Original: 0x0020B875 - 0x0020B876 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B875(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B875: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020B876(); return; /* fallthrough 0x0020B876 */

}

/**
 * sub_0020B876
 * Original: 0x0020B876 - 0x0020B87C (6 bytes, 4 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B876(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B876: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0020B87C
 * Original: 0x0020B87C - 0x0020B915 (153 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B87C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B87C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B973(); return; } /* je: equal / zero */

loc_0020B89A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B973(); return; } /* je: equal / zero */

loc_0020B8A3: ;
    eax = MEM32(eax * 4 + 0x2F927C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B972(); return; } /* jae: above or equal (unsigned >=) */

loc_0020B8B6: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B8C8u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0020B8C8: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B947(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020B8D1: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B94B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020B8D8: ;
    eax = edi + -1;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    eax = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0020B8F7; /* je: equal / zero */

loc_0020B8F4: ;
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B8F7: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020B94B(); return; } /* jle: less or equal (signed <=) */

loc_0020B8FE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B915(); return; } /* je: equal / zero */

loc_0020B903: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebp + -8) = 0x80150011u;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B96E(); return; } /* je: equal / zero */

loc_0020B910: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0020B94B(); return; /* tail jmp 0x0020B94B */

}

/**
 * sub_0020B910
 * Original: 0x0020B910 - 0x0020B915 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B910: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0020B94B(); return; /* tail jmp 0x0020B94B */

}

/**
 * sub_0020B915
 * Original: 0x0020B915 - 0x0020B93F (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B915(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B915: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B93F(); return; } /* je: equal / zero */

loc_0020B91A: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B94B(); return; } /* je: equal / zero */

loc_0020B924: ;
    eax = MEM32(ecx + 0x18);
    edx = 0x20000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B94B(); return; } /* jne: not equal / not zero */

loc_0020B930: ;
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x18) = eax;
    PUSH32(esp, 0x0020B93Du); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_0020B93D: ;
    g_seh_ebp = ebp; sub_0020B94B(); return; /* tail jmp 0x0020B94B */

}

/**
 * sub_0020B93F
 * Original: 0x0020B93F - 0x0020B947 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B93F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B93F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020B94B(); return; } /* je: equal / zero */

loc_0020B945: ;
    g_seh_ebp = ebp; sub_0020B910(); return; /* tail jmp 0x0020B910 */

}

/**
 * sub_0020B947
 * Original: 0x0020B947 - 0x0020B94B (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B947: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0020B94B(); return; /* fallthrough 0x0020B94B */

}

/**
 * sub_0020B94B
 * Original: 0x0020B94B - 0x0020B96E (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B94B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B94B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + 0xC);
    eax = ecx + 1;
    MEM32(esi + 8) = eax;
    eax = edi + edi * 2 + 3;
    eax = esi + eax * 4;
    MEM32(eax) = edx;
    edx = MEM32(ebp + -4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 8) = edx;
    g_seh_ebp = ebp; sub_0020B971(); return; /* tail jmp 0x0020B971 */

}

/**
 * sub_0020B96E
 * Original: 0x0020B96E - 0x0020B972 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B96E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B96E: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0020B972(); return; /* fallthrough 0x0020B972 */

}

/**
 * sub_0020B971
 * Original: 0x0020B971 - 0x0020B972 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B971(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B971: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0020B972(); return; /* fallthrough 0x0020B972 */

}

/**
 * sub_0020B972
 * Original: 0x0020B972 - 0x0020B973 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B972(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B972: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020B973(); return; /* fallthrough 0x0020B973 */

}

/**
 * sub_0020B973
 * Original: 0x0020B973 - 0x0020B987 (20 bytes, 8 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B973(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B973: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0020B987
 * Original: 0x0020B987 - 0x0020B9D9 (82 bytes, 30 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B987(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B987: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B9D6; /* je: equal / zero */

loc_0020B98F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B9D6; /* je: equal / zero */

loc_0020B994: ;
    ecx = MEM32(eax * 4 + 0x2F927C);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020B9D6; /* jae: above or equal (unsigned >=) */

loc_0020B9A3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020B9D4; /* je: equal / zero */

loc_0020B9B5: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020B9C4; /* jbe: below or equal (unsigned <=) */

loc_0020B9BD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020B9D4; /* ja: above (unsigned >) */

loc_0020B9C4: ;
    PUSH32(esp, 0x0020B9C9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0020B9C9: ;
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + esi * 2;
    MEM32(edi + eax * 4 + 0x14) = MEM32(edi + eax * 4 + 0x14) & 0;
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020B9D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0020B9D6: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020B9D9
 * Original: 0x0020B9D9 - 0x0020BA08 (47 bytes, 18 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B9D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B9D9: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B9FF; /* je: equal / zero */

loc_0020B9F0: ;
    eax = MEM32(esp + 8);

loc_0020B9F4: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BA08(); return; } /* je: equal / zero */

loc_0020B9FA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B9F4; /* jne: not equal / not zero */

loc_0020B9FF: ;
    eax = 0x8007000Du;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020BA04
 * Original: 0x0020BA04 - 0x0020BA08 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA04(void)
{

loc_0020BA04: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020BA08
 * Original: 0x0020BA08 - 0x0020BA11 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA08: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;
    MEM32(esi) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020BA04(); return; /* tail jmp 0x0020BA04 */

}

/**
 * sub_0020BA11
 * Original: 0x0020BA11 - 0x0020BA42 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020BA11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BA11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 1;
    MEM32(ebp + -12) = eax;
    MEM16(edx) = 0xC02;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BA91(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0020BA42(); return; /* fallthrough 0x0020BA42 */

}

/**
 * sub_0020BA42
 * Original: 0x0020BA42 - 0x0020BA76 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA42: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BA4E: ;
    SET_LO8(edx, MEM8(edi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BA76(); return; } /* jb: below (unsigned <) */

loc_0020BA55: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BA76(); return; } /* ja: above (unsigned >) */

loc_0020BA5A: ;
    edx = ZX8(LO8(edx));
    esi = esi + esi * 4;
    esi = edx + esi * 2 + -48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BA70: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0020BA8A(); return; /* tail jmp 0x0020BA8A */

}

/**
 * sub_0020BA76
 * Original: 0x0020BA76 - 0x0020BA8A (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA76: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAEB(); return; } /* jne: not equal / not zero */

loc_0020BA7B: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ROR32(eax, 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = 1;

    g_seh_ebp = ebp; sub_0020BA8A(); return; /* fallthrough 0x0020BA8A */

}

/**
 * sub_0020BA8A
 * Original: 0x0020BA8A - 0x0020BA91 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA8A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BA42(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020BA91(); return; /* fallthrough 0x0020BA91 */

}

/**
 * sub_0020BA91
 * Original: 0x0020BA91 - 0x0020BAEB (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA91: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jne: not equal / not zero */

loc_0020BA99: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jne: not equal / not zero */

loc_0020BAA0: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ROR32(eax, 8);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edx (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020BAE7; /* je: equal / zero */

loc_0020BAAC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BAE7; /* je: equal / zero */

loc_0020BAB1: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BAE7; /* jne: not equal / not zero */

loc_0020BAB6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020BAB7: ;
    SET_LO8(eax, MEM8(edi));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jb: below (unsigned <) */

loc_0020BAC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BAC4: ;
    ecx = MEM32(ebp + -4);
    eax = ZX8(LO8(eax));
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 2 + -48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BADB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BAB7; /* jne: not equal / not zero */

loc_0020BAE1: ;
    ecx = MEM32(ebp + 0x14);
    MEM16(ecx) = LO16(eax);

loc_0020BAE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020BAFE(); return; /* tail jmp 0x0020BAFE */

}

/**
 * sub_0020BA94
 * Original: 0x0020BA94 - 0x0020BAEB (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BA94: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jne: not equal / not zero */

loc_0020BA99: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jne: not equal / not zero */

loc_0020BAA0: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ROR32(eax, 8);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edx (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020BAE7; /* je: equal / zero */

loc_0020BAAC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BAE7; /* je: equal / zero */

loc_0020BAB1: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BAE7; /* jne: not equal / not zero */

loc_0020BAB6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020BAB7: ;
    SET_LO8(eax, MEM8(edi));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jb: below (unsigned <) */

loc_0020BAC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BAC4: ;
    ecx = MEM32(ebp + -4);
    eax = ZX8(LO8(eax));
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 2 + -48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* ja: above (unsigned >) */

loc_0020BADB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BAB7; /* jne: not equal / not zero */

loc_0020BAE1: ;
    ecx = MEM32(ebp + 0x14);
    MEM16(ecx) = LO16(eax);

loc_0020BAE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020BAFE(); return; /* tail jmp 0x0020BAFE */

}

/**
 * sub_0020BAEB
 * Original: 0x0020BAEB - 0x0020BAF9 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BAEB: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BAF9(); return; } /* jne: not equal / not zero */

loc_0020BAF0: ;
    MEM32(ebp + -12) = 1;
    g_seh_ebp = ebp; sub_0020BA94(); return; /* tail jmp 0x0020BA94 */

}

/**
 * sub_0020BAF9
 * Original: 0x0020BAF9 - 0x0020BB05 (12 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BAF9: ;
    eax = 0x80070035u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020BAFE
 * Original: 0x0020BAFE - 0x0020BB05 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BAFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020BB05
 * Original: 0x0020BB05 - 0x0020BB21 (28 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020BB05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BB05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ebx, 0x20);

loc_0020BB14: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BB1E; /* je: equal / zero */

loc_0020BB1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BB21(); return; } /* jne: not equal / not zero */

loc_0020BB1E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BB14;

}

/**
 * sub_0020BB21
 * Original: 0x0020BB21 - 0x0020BB5D (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BB21: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8F(); return; } /* je: equal / zero */

loc_0020BB2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BB39; /* jne: not equal / not zero */

loc_0020BB2F: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8F(); return; } /* je: equal / zero */

loc_0020BB39: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xAA78BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BB46u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BB46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BB7C(); return; } /* jne: not equal / not zero */

loc_0020BB4D: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BB50: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BB5A; /* je: equal / zero */

loc_0020BB56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BB5D(); return; } /* jne: not equal / not zero */

loc_0020BB5A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BB50;

}

/**
 * sub_0020BB5D
 * Original: 0x0020BB5D - 0x0020BB7C (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BB5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BB63u); RECOMP_ABI_CALL(0x00152211u, sub_00152211); /* call 0x00152211 */

loc_0020BB63: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    MEM8(ecx + 0x1A) = MEM8(ecx + 0x1A) & 0x7F;
    _fa = (uint32_t)(MEM8(ecx + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD4) = edx;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BB7C
 * Original: 0x0020BB7C - 0x0020BBA0 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BB7C: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xAA78A4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BB89u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BB89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BBB6(); return; } /* jne: not equal / not zero */

loc_0020BB90: ;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BB93: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BB9D; /* je: equal / zero */

loc_0020BB99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BBA0(); return; } /* jne: not equal / not zero */

loc_0020BB9D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BB93;

}

/**
 * sub_0020BBA0
 * Original: 0x0020BBA0 - 0x0020BBB6 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BBA0: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xBC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020BBB1u); RECOMP_ABI_CALL(0x0020B404u, sub_0020B404); /* call 0x0020B404 */

loc_0020BBB1: ;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BBA8
 * Original: 0x0020BBA8 - 0x0020BBB6 (14 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BBA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020BBB1u); RECOMP_ABI_CALL(0x0020B404u, sub_0020B404); /* call 0x0020B404 */

loc_0020BBB1: ;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BBB6
 * Original: 0x0020BBB6 - 0x0020BBDA (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BBB6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xAA78B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BBC3u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BBC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BBE4(); return; } /* jne: not equal / not zero */

loc_0020BBCA: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BBCD: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BBD7; /* je: equal / zero */

loc_0020BBD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BBDA(); return; } /* jne: not equal / not zero */

loc_0020BBD7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BBCD;

}

/**
 * sub_0020BBDA
 * Original: 0x0020BBDA - 0x0020BBE4 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BBDA: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0020BBA8(); return; /* tail jmp 0x0020BBA8 */

}

/**
 * sub_0020BBE4
 * Original: 0x0020BBE4 - 0x0020BC20 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BBE4: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xAA7894);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BBF1u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BBF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BC25(); return; } /* je: equal / zero */

loc_0020BBF8: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xAA7888);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BC05u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BC05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BCB3(); return; } /* jne: not equal / not zero */

loc_0020BC10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BC13: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BC1D; /* je: equal / zero */

loc_0020BC19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BC61(); return; } /* jne: not equal / not zero */

loc_0020BC1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BC13;

}

/**
 * sub_0020BC20
 * Original: 0x0020BC20 - 0x0020BC25 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BC20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BC2B(); return; } /* je: equal / zero */

loc_0020BC24: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020BC25(); return; /* fallthrough 0x0020BC25 */

}

/**
 * sub_0020BC25
 * Original: 0x0020BC25 - 0x0020BC2B (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BC25: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BC20(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020BC2B(); return; /* fallthrough 0x0020BC2B */

}

/**
 * sub_0020BC2B
 * Original: 0x0020BC2B - 0x0020BC38 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BC2B: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BC35; /* je: equal / zero */

loc_0020BC31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BC38(); return; } /* jne: not equal / not zero */

loc_0020BC35: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BC2B;

}

/**
 * sub_0020BC38
 * Original: 0x0020BC38 - 0x0020BC61 (41 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BC38: ;
    eax = esi;
    edx = eax + 1;

loc_0020BC3D: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BC3D; /* jne: not equal / not zero */

loc_0020BC44: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020BC53u); RECOMP_ABI_CALL(0x002161ECu, sub_002161EC); /* call 0x002161EC */

loc_0020BC53: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BC61
 * Original: 0x0020BC61 - 0x0020BCB3 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BC61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BC67u); RECOMP_ABI_CALL(0x0015220Cu, sub_0015220C); /* call 0x0015220C */

loc_0020BC67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jl: less (signed <) */

loc_0020BC70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36EE80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36EE80 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jg: greater (signed >) */

loc_0020BC7B: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jae: above or equal (unsigned >=) */

loc_0020BC8A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* je: equal / zero */

loc_0020BC92: ;
    edx = MEM32(ecx * 4 + 0x2F927C);
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jae: above or equal (unsigned >=) */

loc_0020BCA4: ;
    edx = MEM32(edx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    MEM32(ecx + edx + 4) = eax;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BCB3
 * Original: 0x0020BCB3 - 0x0020BCD7 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BCB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BCB3: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xAA7878);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BCC0u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BCC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD29(); return; } /* jne: not equal / not zero */

loc_0020BCC7: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BCCA: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BCD4; /* je: equal / zero */

loc_0020BCD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BCD7(); return; } /* jne: not equal / not zero */

loc_0020BCD4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BCCA;

}

/**
 * sub_0020BCD7
 * Original: 0x0020BCD7 - 0x0020BD29 (82 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BCD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BCD7: ;
    eax = esi;
    edx = eax + 1;

loc_0020BCDC: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BCDC; /* jne: not equal / not zero */

loc_0020BCE3: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020BCF2u); RECOMP_ABI_CALL(0x002161ECu, sub_002161EC); /* call 0x002161EC */

loc_0020BCF2: ;
    esi = MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFFFE0u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* je: equal / zero */

loc_0020BD01: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jae: above or equal (unsigned >=) */

loc_0020BD0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* je: equal / zero */

loc_0020BD10: ;
    ecx = MEM32(eax * 4 + 0x2F927C);
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jae: above or equal (unsigned >=) */

loc_0020BD1E: ;
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    MEM32(eax + ecx) = esi;
    g_seh_ebp = ebp; sub_0020BD8B(); return; /* tail jmp 0x0020BD8B */

}

/**
 * sub_0020BD29
 * Original: 0x0020BD29 - 0x0020BD3F (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD29: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xAA789C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BD36u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_0020BD36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jne: not equal / not zero */

loc_0020BD3D: ;
    g_seh_ebp = ebp; sub_0020BD44(); return; /* tail jmp 0x0020BD44 */

}

/**
 * sub_0020BD3F
 * Original: 0x0020BD3F - 0x0020BD44 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD4A(); return; } /* je: equal / zero */

loc_0020BD43: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020BD44(); return; /* fallthrough 0x0020BD44 */

}

/**
 * sub_0020BD44
 * Original: 0x0020BD44 - 0x0020BD4A (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD44: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD3F(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020BD4A(); return; /* fallthrough 0x0020BD4A */

}

/**
 * sub_0020BD4A
 * Original: 0x0020BD4A - 0x0020BD57 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD4A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BD54; /* je: equal / zero */

loc_0020BD50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD57(); return; } /* jne: not equal / not zero */

loc_0020BD54: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020BD4A;

}

/**
 * sub_0020BD57
 * Original: 0x0020BD57 - 0x0020BD8B (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BD69; /* je: equal / zero */

loc_0020BD5D: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BD69; /* je: equal / zero */

loc_0020BD63: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BD5D; /* jne: not equal / not zero */

loc_0020BD69: ;
    PUSH32(esp, esi);
    MEM8(eax + esi) = 0;
    PUSH32(esp, 0x0020BD73u); RECOMP_ABI_CALL(0x0015220Cu, sub_0015220C); /* call 0x0015220C */

loc_0020BD73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x190) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x190 (32-bit) */
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0xB8) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BD8B(); return; } /* jb: below (unsigned <) */

loc_0020BD84: ;
    MEM32(ecx + 0x10) = 0x8007042Au;

    g_seh_ebp = ebp; sub_0020BD8B(); return; /* fallthrough 0x0020BD8B */

}

/**
 * sub_0020BD8B
 * Original: 0x0020BD8B - 0x0020BD8F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020BD92(); return; /* tail jmp 0x0020BD92 */

}

/**
 * sub_0020BD8F
 * Original: 0x0020BD8F - 0x0020BD99 (10 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020BD92
 * Original: 0x0020BD92 - 0x0020BD99 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BD92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020BD99
 * Original: 0x0020BD99 - 0x0020BE6A (209 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020BD99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020BD99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebx + 0xF4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFA7(); return; } /* je: equal / zero */

loc_0020BDBE: ;
    eax = MEM32(ebx + 0xF0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xB0);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + -4) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BEAE(); return; } /* je: equal / zero */

loc_0020BDDD: ;
    edx = MEM32(ebx + 0xFC);
    ecx = MEM32(ebx + 0x100);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0020BDF5; /* jbe: below or equal (unsigned <=) */

loc_0020BDF2: ;
    MEM32(ebp + 0xC) = ecx;

loc_0020BDF5: ;
    edi = MEM32(ebx + 0xF8);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
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
    ecx = edx;
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0xFC)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebx + 0xFC) = MEM32(ebx + 0xFC) + edx;
    _fa = (uint32_t)(MEM32(ebx + 0xFC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebx + 0xB0);
    ecx = ebx + 0xD0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ecx)) < (uint32_t)(edx));
    MEM32(ecx) = MEM32(ecx) - edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
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
    ecx = edx;
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
    MEM32(ebx + 0xF0) = eax;
    eax = MEM32(ebx + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xFC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFA6(); return; } /* jne: not equal / not zero */

loc_0020BE55: ;
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebx + 0xF4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 1;
    g_seh_ebp = ebp; sub_0020BFA6(); return; /* tail jmp 0x0020BFA6 */

}

/**
 * sub_0020BE6A
 * Original: 0x0020BE6A - 0x0020BEAC (66 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BE6A: ;
    _fa = (uint32_t)(MEM8(ebx + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xF4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFA6(); return; } /* je: equal / zero */

loc_0020BE77: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BEAC(); return; } /* jne: not equal / not zero */

loc_0020BE7C: ;
    ecx = esi + 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BEAC(); return; } /* jne: not equal / not zero */

loc_0020BE84: ;
    MEM8(esi) = 0;
    esi = ecx;
    MEM8(esi) = 0;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0x0020BEA0u); RECOMP_ABI_CALL(0x0020BB05u, sub_0020BB05); /* call 0x0020BB05 */

loc_0020BEA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BEB8(); return; } /* jne: not equal / not zero */

loc_0020BEA4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = esi;
    g_seh_ebp = ebp; sub_0020BEAE(); return; /* tail jmp 0x0020BEAE */

}

/**
 * sub_0020BEAC
 * Original: 0x0020BEAC - 0x0020BEAE (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BEAC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0020BEAE(); return; /* fallthrough 0x0020BEAE */

}

/**
 * sub_0020BEAE
 * Original: 0x0020BEAE - 0x0020BEB8 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BEAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BEAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BE6A(); return; } /* ja: above (unsigned >) */

loc_0020BEB3: ;
    g_seh_ebp = ebp; sub_0020BF80(); return; /* tail jmp 0x0020BF80 */

}

/**
 * sub_0020BEB8
 * Original: 0x0020BEB8 - 0x0020BF03 (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BEB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BEB8: ;
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebx + 0xF4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0x1A)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x1A), 8 (8-bit) */
    eax = MEM32(ebx + 0xF4);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BF59(); return; } /* je: equal / zero */

loc_0020BECF: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x100);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BF1B(); return; } /* jae: above or equal (unsigned >=) */

loc_0020BEDC: ;
    edi = MEM32(ebx + 0xD4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BF03(); return; } /* jb: below (unsigned <) */

loc_0020BEE8: ;
    if (CMP_A(_fa, _fb)) goto loc_0020BEF8; /* ja: above (unsigned >) */

loc_0020BEEA: ;
    ecx = MEM32(ebx + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x100) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BF03(); return; } /* jb: below (unsigned <) */

loc_0020BEF8: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xF4) = eax;
    g_seh_ebp = ebp; sub_0020BF26(); return; /* tail jmp 0x0020BF26 */

}

/**
 * sub_0020BF03
 * Original: 0x0020BF03 - 0x0020BF1B (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF03: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020BF10; /* jl: less (signed <) */

loc_0020BF09: ;
    MEM32(ebx + 0x10) = 0x8007000Du;

loc_0020BF10: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_0020BFA6(); return; /* tail jmp 0x0020BFA6 */

}

/**
 * sub_0020BF1B
 * Original: 0x0020BF1B - 0x0020BF26 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF1B: ;
    eax = MEM32(ebp + 0x10);
    edx = ecx;
    MEM32(eax) = 1;

    g_seh_ebp = ebp; sub_0020BF26(); return; /* fallthrough 0x0020BF26 */

}

/**
 * sub_0020BF26
 * Original: 0x0020BF26 - 0x0020BF59 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF26: ;
    edi = MEM32(ebx + 0xF8);
    ecx = edx;
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
    eax = ebx + 0xD0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(eax)) < (uint32_t)(edx));
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 0xFC) = edx;
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 0xC)) < (uint32_t)(edx));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + edx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0020BF62(); return; /* tail jmp 0x0020BF62 */

}

/**
 * sub_0020BF59
 * Original: 0x0020BF59 - 0x0020BF80 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF59: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0x0020BF71u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020BF71: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xF0) = eax;

    g_seh_ebp = ebp; sub_0020BF80(); return; /* fallthrough 0x0020BF80 */

}

/**
 * sub_0020BF62
 * Original: 0x0020BF62 - 0x0020BF80 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF62: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0x0020BF71u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020BF71: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xF0) = eax;

    g_seh_ebp = ebp; sub_0020BF80(); return; /* fallthrough 0x0020BF80 */

}

/**
 * sub_0020BF80
 * Original: 0x0020BF80 - 0x0020BFA6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BF80: ;
    _fa = (uint32_t)(MEM8(ebx + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xF4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFA6(); return; } /* je: equal / zero */

loc_0020BF89: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebx + 0xF0) = eax;
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0x0020BFA3u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020BFA3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0020BFA6(); return; /* fallthrough 0x0020BFA6 */

}

/**
 * sub_0020BFA6
 * Original: 0x0020BFA6 - 0x0020BFA7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFA6: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020BFA7(); return; /* fallthrough 0x0020BFA7 */

}

/**
 * sub_0020BFA7
 * Original: 0x0020BFA7 - 0x0020BFB0 (9 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFA7: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020BFB0
 * Original: 0x0020BFB0 - 0x0020BFDD (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFF2(); return; } /* jne: not equal / not zero */

loc_0020BFBD: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020BFC6u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_0020BFC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020BFEE(); return; } /* jne: not equal / not zero */

loc_0020BFCD: ;
    PUSH32(esp, 0x0020BFD2u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020BFD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020BFDD(); return; } /* jg: greater (signed >) */

loc_0020BFD6: ;
    PUSH32(esp, 0x0020BFDBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020BFDB: ;
    g_seh_ebp = ebp; sub_0020C001(); return; /* tail jmp 0x0020C001 */

}

/**
 * sub_0020BFDD
 * Original: 0x0020BFDD - 0x0020BFEE (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFDD: ;
    PUSH32(esp, 0x0020BFE2u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020BFE2: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0020C001(); return; /* tail jmp 0x0020C001 */

}

/**
 * sub_0020BFEE
 * Original: 0x0020BFEE - 0x0020BFF2 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFEE: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0020BFF2(); return; /* fallthrough 0x0020BFF2 */

}

/**
 * sub_0020BFF2
 * Original: 0x0020BFF2 - 0x0020C001 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020BFF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BFF2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BFFF; /* je: equal / zero */

loc_0020BFFA: ;
    ecx = MEM32(esi + 8);
    MEM32(eax) = ecx;

loc_0020BFFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020C001(); return; /* fallthrough 0x0020C001 */

}
