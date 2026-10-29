/**
 * DOAU1 - Recompiled code chunk 45
 * Functions: 250 (0x00166E9F - 0x0016B7E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00166E9F
 * Original: 0x00166E9F - 0x00166EA9 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166E9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166E9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166EA9(); return; } /* jne: not equal / not zero */

loc_00166EA4: ;
    edx = 3;

    g_seh_ebp = ebp; sub_00166EA9(); return; /* fallthrough 0x00166EA9 */

}

/**
 * sub_00166EA9
 * Original: 0x00166EA9 - 0x00166EB5 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EA9: ;
    ecx = eax * 8 + -72;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | edx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00166EB5(); return; /* fallthrough 0x00166EB5 */

}

/**
 * sub_00166EB5
 * Original: 0x00166EB5 - 0x00166EC4 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166EC4(); return; } /* jne: not equal / not zero */

loc_00166EBA: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00166EEF(); return; /* tail jmp 0x00166EEF */

}

/**
 * sub_00166EC4
 * Original: 0x00166EC4 - 0x00166ED3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166ED3(); return; } /* jne: not equal / not zero */

loc_00166EC9: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00166EEF(); return; /* tail jmp 0x00166EEF */

}

/**
 * sub_00166ED3
 * Original: 0x00166ED3 - 0x00166EE2 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166ED3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166ED3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166EE2(); return; } /* jne: not equal / not zero */

loc_00166ED8: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00166EEF(); return; /* tail jmp 0x00166EEF */

}

/**
 * sub_00166EE2
 * Original: 0x00166EE2 - 0x00166EEF (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166EF2(); return; } /* jne: not equal / not zero */

loc_00166EE7: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00166EEF(); return; /* fallthrough 0x00166EEF */

}

/**
 * sub_00166EEF
 * Original: 0x00166EEF - 0x00166EF2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EEF: ;
    MEM32(edi + 4) = eax;

    g_seh_ebp = ebp; sub_00166EF2(); return; /* fallthrough 0x00166EF2 */

}

/**
 * sub_00166EF2
 * Original: 0x00166EF2 - 0x00166F15 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166EF2: ;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(edx + 0x175E74));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(esi + 0x175E6C));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00166E03(); return; /* tail jmp 0x00166E03 */

}

/**
 * sub_00166F15
 * Original: 0x00166F15 - 0x00166F23 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F15: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00166E03(); return; /* tail jmp 0x00166E03 */

}

/**
 * sub_00166F23
 * Original: 0x00166F23 - 0x00166F60 (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F23: ;
    esi = eax;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = eax;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    MEM32(ecx + 0x1C) = 2;
    MEM8(ecx + 0x21) = LO8(edx);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00166F60(); return; } /* je: equal / zero */

loc_00166F57: ;
    MEM8(esi + edi) = 2;
    g_seh_ebp = ebp; sub_00166E03(); return; /* tail jmp 0x00166E03 */

}

/**
 * sub_00166F60
 * Original: 0x00166F60 - 0x00166F69 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F60: ;
    MEM8(esi + edi) = 1;
    g_seh_ebp = ebp; sub_00166E03(); return; /* tail jmp 0x00166E03 */

}

/**
 * sub_00166F69
 * Original: 0x00166F69 - 0x00166F81 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00166F81(); return; } /* jne: not equal / not zero */

loc_00166F71: ;
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00166E03(); return; /* tail jmp 0x00166E03 */

}

/**
 * sub_00166F81
 * Original: 0x00166F81 - 0x00166F89 (8 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00166F90
 * Original: 0x00166F90 - 0x00167087 (247 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166F90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = 0xDEADBEEFu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0016707E; /* je: equal / zero */

loc_00166FBB: ;
    PUSH32(esp, ebx);
    /* nop */

loc_00166FC0: ;
    edx = ecx;
    edx = edx & 0xE0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016706B; /* jne: not equal / not zero */

loc_00166FD4: ;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00167003; /* je: equal / zero */

loc_00166FEB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166FFC; /* je: equal / zero */

loc_00166FEF: ;
    MEM32(ebp) = 0x41EA4;
    MEM32(ebp + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00166FFC: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;

loc_00167003: ;
    MEM32(esp + 0x14) = ecx;

loc_00167007: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    ebx = edx;
    if (CMP_B(_fa, _fb)) goto loc_00167013; /* jb: below (unsigned <) */

loc_0016700E: ;
    ebx = 8;

loc_00167013: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016704C; /* je: equal / zero */

loc_00167017: ;
    eax = ebx;
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    edx = ebx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = eax;
    eax = MEM32(esp + 0x20);
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
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);

loc_0016704C: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ebx * 4 + 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_00167007; /* jne: not equal / not zero */

loc_00167067: ;
    edi = MEM32(esp + 0x14);

loc_0016706B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00166FC0; /* jne: not equal / not zero */

loc_0016707D: ;
    POP32(esp, ebx);

loc_0016707E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167090
 * Original: 0x00167090 - 0x001670FC (108 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001670AC; /* je: equal / zero */

loc_0016709C: ;
    eax = ZX16(MEM16(ebp));
    ecx = ZX16(MEM16(ebp + 2));
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;

loc_001670AC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001670C2; /* je: equal / zero */

loc_001670B2: ;
    eax = MEM32(esp + 0x18);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 0x7F;
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edx * 4;

loc_001670C2: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001670D6; /* je: equal / zero */

loc_001670CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001670D3u); RECOMP_ABI_CALL(0x00166F90u, sub_00166F90); /* call 0x00166F90 */

loc_001670D3: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001670D6: ;
    ebx = eax + esi;
    PUSH32(esp, 0x24800000);
    eax = ebx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001670EAu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_001670EA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001670FC(); return; } /* jne: not equal / not zero */

loc_001670F0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001670FC
 * Original: 0x001670FC - 0x001671CE (210 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001670FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001670FC: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 4) = ecx;
    MEM32(esi) = 1;
    eax = esi + 0x1C;
    ecx = 0x10;
    /* nop */

loc_00167120: ;
    MEM32(eax) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00167120; /* jne: not equal / not zero */

loc_0016712C: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167143; /* je: equal / zero */

loc_00167134: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00167143u); RECOMP_ABI_CALL(0x00166DF0u, sub_00166DF0); /* call 0x00166DF0 */

loc_00167143: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167196; /* je: equal / zero */

loc_00167149: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    edi = edi | 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2078) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2078 (32-bit) */
    MEM32(esi + 4) = edi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00167166; /* je: equal / zero */

loc_00167160: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;

loc_00167166: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7378) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7378 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167172; /* jne: not equal / not zero */

loc_0016716E: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167172: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 8) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    edi = esi + 0x114;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016718Du); RECOMP_ABI_CALL(0x00166D20u, sub_00166D20); /* call 0x00166D20 */

loc_0016718D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00167196: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001671A8; /* je: equal / zero */

loc_0016719A: ;
    ecx = esi + eax * 4 + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001671A8u); RECOMP_ABI_CALL(0x00166F90u, sub_00166F90); /* call 0x00166F90 */

loc_001671A8: ;
    edx = MEM32(esp + 0x20);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + eax * 4 + 0x114) = 0;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001671D0
 * Original: 0x001671D0 - 0x001671E4 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001671D0(void)
{

loc_001671D0: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x798);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001671F0
 * Original: 0x001671F0 - 0x0016724F (95 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001671F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001671F0: ;
    PUSH32(esp, ebx);

loc_001671F1: ;
    eax = MEM32(0x180E50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x180E54) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00167244; /* jae: above or equal (unsigned >=) */

loc_00167201: ;
    MEM32(0x180E50) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x17FD90;
    ebx = MEM32(edx);
    MEM32(eax + -16) = ebx;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + -12) = ebx;
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + -8) = ebx;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00167244: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016724Bu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016724B: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_001671F1;

}

/**
 * sub_00167250
 * Original: 0x00167250 - 0x00167299 (73 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167250: ;
    eax = MEM32(0x180E50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x180E54) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016728E; /* jae: above or equal (unsigned >=) */

loc_00167260: ;
    MEM32(0x180E50) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = MEM32(edx);
    MEM32(eax + -16) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + -8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ecx;
    esp += 4; return; /* ret */

loc_0016728E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00167295u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00167295: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_00167250;

}

/**
 * sub_001672A0
 * Original: 0x001672A0 - 0x00167342 (162 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001672A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001672A0: ;
    eax = MEM32(0x180E50);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x180E54) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00167334; /* jae: above or equal (unsigned >=) */

loc_001672B4: ;
    MEM32(0x180E50) = eax;
    mm0 = MMX_MEM(edx); /* movq */
    mm1 = MMX_MEM(edx + 8); /* movq */
    mm2 = MMX_MEM(edx + 0x10); /* movq */
    mm3 = MMX_MEM(edx + 0x18); /* movq */
    mm4 = MMX_MEM(edx + 0x20); /* movq */
    mm5 = MMX_MEM(edx + 0x28); /* movq */
    mm6 = MMX_MEM(edx + 0x30); /* movq */
    mm7 = MMX_MEM(edx + 0x38); /* movq */
    MEM32(eax + -76) = 0x41EA4;
    MEM32(eax + -72) = ecx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x17FD90;
    MEM32(eax + -68) = 0x400B80;
    MMX_STORE(eax + -64, mm0); /* movq */
    MMX_STORE(ecx, mm0); /* movq */
    MMX_STORE(eax + -56, mm1); /* movq */
    MMX_STORE(ecx + 8, mm1); /* movq */
    MMX_STORE(eax + -48, mm2); /* movq */
    MMX_STORE(ecx + 0x10, mm2); /* movq */
    MMX_STORE(eax + -40, mm3); /* movq */
    MMX_STORE(ecx + 0x18, mm3); /* movq */
    MMX_STORE(eax + -32, mm4); /* movq */
    MMX_STORE(ecx + 0x20, mm4); /* movq */
    MMX_STORE(eax + -24, mm5); /* movq */
    MMX_STORE(ecx + 0x28, mm5); /* movq */
    MMX_STORE(eax + -16, mm6); /* movq */
    MMX_STORE(ecx + 0x30, mm6); /* movq */
    MMX_STORE(eax + -8, mm7); /* movq */
    MMX_STORE(ecx + 0x38, mm7); /* movq */
    (void)0; /* emms - empty MMX state */
    esp += 4; return; /* ret */

loc_00167334: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016733Bu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016733B: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_001672A0;

}

/**
 * sub_00167350
 * Original: 0x00167350 - 0x00167420 (208 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167350: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x180E50);
    esi = edx;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x180E54) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00167410; /* jae: above or equal (unsigned >=) */

loc_0016736A: ;
    MEM32(edi) = 0x41EA4;
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016739A; /* jae: above or equal (unsigned >=) */

loc_0016737B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + -4) = eax;
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

loc_0016738D: ;
    MEM32(0x180E50) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016739A: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    MEM32(edi) = 0x400B80;
    MMX_STORE(edi + 4, mm0); /* movq */
    MMX_STORE(edi + 0xC, mm1); /* movq */
    MMX_STORE(edi + 0x14, mm2); /* movq */
    MMX_STORE(edi + 0x1C, mm3); /* movq */
    MMX_STORE(edi + 0x24, mm4); /* movq */
    MMX_STORE(edi + 0x2C, mm5); /* movq */
    MMX_STORE(edi + 0x34, mm6); /* movq */
    MMX_STORE(edi + 0x3C, mm7); /* movq */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0016738D; /* je: equal / zero */

loc_001673EF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016737B; /* jb: below (unsigned <) */

loc_001673F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x180E54) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016739A; /* jb: below (unsigned <) */

loc_001673FF: ;
    PUSH32(esp, eax);
    MEM32(0x180E50) = edi;
    PUSH32(esp, 0x0016740Bu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016740B: ;
    edi = eax;
    POP32(esp, eax);
    goto loc_0016739A;

loc_00167410: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00167417u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00167417: ;
    edi = eax;
    POP32(esp, ecx);
    POP32(esp, eax);
    goto loc_0016736A;

}

/**
 * sub_00167470
 * Original: 0x00167470 - 0x0016749D (45 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167470: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x180390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x180390;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001674A0
 * Original: 0x001674A0 - 0x001674D7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001674A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001674A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001674C9; /* je: equal / zero */

loc_001674A9: ;
    PUSH32(esp, edi);
    ecx = 0x40;
    edi = 0x1833EC;
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
    edx = 0x1833D8;
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00168110(); return; /* tail jmp 0x00168110 */

loc_001674C9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00168110(); return; /* tail jmp 0x00168110 */

}

/**
 * sub_001674E0
 * Original: 0x001674E0 - 0x00167541 (97 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001674E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001674E0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x180E48);
    if (CMP_EQ(_fa, _fb)) goto loc_001674F5; /* je: equal / zero */

loc_001674ED: ;
    edx = MEM32(eax + 0xB04);
    MEM32(ecx) = edx;

loc_001674F5: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167505; /* je: equal / zero */

loc_001674FD: ;
    edx = MEM32(eax + 0xB00);
    MEM32(ecx) = edx;

loc_00167505: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167530; /* je: equal / zero */

loc_0016750E: ;
    ecx = MEM32(eax + 0xB04);
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + 0xB08;
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
    POP32(esp, esi);

loc_00167530: ;
    eax = MEM32(0x1809A8);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00167550
 * Original: 0x00167550 - 0x0016755C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167550: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00167560
 * Original: 0x00167560 - 0x00167575 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167560: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167580
 * Original: 0x00167580 - 0x001675A7 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167580: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001675B0
 * Original: 0x001675B0 - 0x001675BE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001675B0: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001675C0
 * Original: 0x001675C0 - 0x001675C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675C0(void)
{

loc_001675C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001675D0
 * Original: 0x001675D0 - 0x001675D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675D0(void)
{

loc_001675D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001675E0
 * Original: 0x001675E0 - 0x001675EF (15 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001675E0: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001675EEu); RECOMP_ABI_CALL(0x0016AD00u, sub_0016AD00); /* call 0x0016AD00 */

loc_001675EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001675F0
 * Original: 0x001675F0 - 0x001675FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001675F0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00167600
 * Original: 0x00167600 - 0x00167615 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167600: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167620
 * Original: 0x00167620 - 0x00167647 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167620: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00167650
 * Original: 0x00167650 - 0x0016765E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167650: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167660
 * Original: 0x00167660 - 0x00167664 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167660: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00167670
 * Original: 0x00167670 - 0x001676EE (126 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167670: ;
    ecx = MEM32(0x180E48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167686; /* je: equal / zero */

loc_00167680: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x80000;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167686: ;
    eax = MEM32(esp + 0xC);
    esi = eax + eax * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x183320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001676C0; /* je: equal / zero */

loc_0016769A: ;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x183320);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001676C0; /* jne: not equal / not zero */

loc_001676BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001676C0u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_001676C0: ;
    ecx = MEM32(esi + 0x183318);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(0x1809A8);
    MEM32(esi + 0x183318) = eax;
    MEM32(esi + 0x183320) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001676EE(); return; } /* jne: not equal / not zero */

loc_001676E0: ;
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x1809A8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001676EE
 * Original: 0x001676EE - 0x001676FC (14 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001676EE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001676EE: ;
    ecx = ecx | 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x1809A8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00167700
 * Original: 0x00167700 - 0x0016773C (60 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x183320);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016772F; /* je: equal / zero */

loc_00167716: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016771Cu); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0016771C: ;
    eax = MEM32(esi + 0x183318);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0016772F: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167740
 * Original: 0x00167740 - 0x00167792 (82 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167740(void)
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

loc_00167740: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00167753; /* jb: below (unsigned <) */

loc_0016774E: ;
    PUSH32(esp, 0x00167753u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00167753: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016777C; /* je: equal / zero */

loc_0016775B: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(eax + -20) = 0x101E80;
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0016777C: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E90;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001677A0
 * Original: 0x001677A0 - 0x001677F4 (84 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001677A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001677A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x180E48);
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001677C1; /* jne: not equal / not zero */

loc_001677B6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001677C1u); RECOMP_ABI_CALL(0x00166C70u, sub_00166C70); /* call 0x00166C70 */

loc_001677C1: ;
    esi = MEM32(edi + 0xC);
    ebx = esi + 2;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001677CDu); RECOMP_ABI_CALL(0x0016B770u, sub_0016B770); /* call 0x0016B770 */

loc_001677CD: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x41E9C;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    esi = edi + 0x114;
    edi = eax + 8;
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
    edx = eax + ebx * 4;
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167800
 * Original: 0x00167800 - 0x00167864 (100 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax + 2));
    PUSH32(esp, ebp);
    ebp = MEM32(0x180E48);
    SET_LO8(ecx, MEM8(ebp + 8));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167834; /* jne: not equal / not zero */

loc_0016781B: ;
    PUSH32(esp, esi);
    esi = eax + 4;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    edi = eax + ebp + 0x10A8;
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

loc_00167834: ;
    ecx = ebx + 0x13;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016783Du); RECOMP_ABI_CALL(0x0016B770u, sub_0016B770); /* call 0x0016B770 */

loc_0016783D: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x41E9C;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016785Cu); RECOMP_ABI_CALL(0x00166D20u, sub_00166D20); /* call 0x00166D20 */

loc_0016785C: ;
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167870
 * Original: 0x00167870 - 0x0016790C (156 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    if (CMP_EQ(_fa, _fb)) goto loc_001678E4; /* je: equal / zero */

loc_0016787F: ;
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = eax + -1;
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = eax;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x70;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(edi + 4);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x13 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001678E3; /* je: equal / zero */

loc_001678A9: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x1000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001678BF; /* jb: below (unsigned <) */

loc_001678BA: ;
    PUSH32(esp, 0x001678BFu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001678BF: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x001678C8u); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_001678C8: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_001678E3: ;
    POP32(esp, edi);

loc_001678E4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001678F0; /* jb: below (unsigned <) */

loc_001678EB: ;
    PUSH32(esp, 0x001678F0u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001678F0: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0x79C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167910
 * Original: 0x00167910 - 0x00167924 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167910: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167921; /* je: equal / zero */

loc_00167918: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 7);
    MEM32(eax) = edx;

loc_00167921: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167930
 * Original: 0x00167930 - 0x0016795A (42 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167930: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167942; /* je: equal / zero */

loc_0016793B: ;
    eax = 3;
    goto loc_0016794D;

loc_00167942: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    eax = 0;
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016794D: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167957; /* je: equal / zero */

loc_00167955: ;
    MEM32(ecx) = eax;

loc_00167957: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167960
 * Original: 0x00167960 - 0x0016797A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167960: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x180E48);
    ecx = MEM32(ebx + 8);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016797A(); return; } /* je: equal / zero */

loc_00167972: ;
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00167980(); return; /* tail jmp 0x00167980 */

}

/**
 * sub_0016797A
 * Original: 0x0016797A - 0x00167980 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016797A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016797A: ;
    ecx = ecx & 0xFFFFFDFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00167980(); return; /* fallthrough 0x00167980 */

}

/**
 * sub_00167980
 * Original: 0x00167980 - 0x00167A78 (248 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167980: ;
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0x1928) = eax;
    if ((_fa != 0)) goto loc_00167A74; /* jne: not equal / not zero */

loc_00167992: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001679A8; /* jb: below (unsigned <) */

loc_001679A3: ;
    PUSH32(esp, 0x001679A8u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001679A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = 0x3C;
    MEM32(eax + 8) = 0x300B80;
    edi = eax + 0xC;
    PUSH32(esp, 0x175E80);
    ecx = 0xC;
    esi = 0x175EC0;
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
    esi = eax + 0x3C;
    PUSH32(esp, 0x400840);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001679E0u); RECOMP_ABI_CALL(0x0016AD00u, sub_0016AD00); /* call 0x0016AD00 */

loc_001679E0: ;
    PUSH32(esp, 0x175E80);
    PUSH32(esp, 0x400880);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001679F3u); RECOMP_ABI_CALL(0x0016AD00u, sub_0016AD00); /* call 0x0016AD00 */

loc_001679F3: ;
    PUSH32(esp, 0x175E80);
    PUSH32(esp, 0x4008C0);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00167A09u); RECOMP_ABI_CALL(0x0016AD00u, sub_0016AD00); /* call 0x0016AD00 */

loc_00167A09: ;
    PUSH32(esp, 0x175E80);
    PUSH32(esp, 0x400900);
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00167A1Fu); RECOMP_ABI_CALL(0x0016AD00u, sub_0016AD00); /* call 0x0016AD00 */

loc_00167A1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x110) = 0x1009D0;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x120) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x11C) = ecx;
    MEM32(esi + 0x124) = 0x100A50;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = ecx;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x138;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);

loc_00167A74: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167A80
 * Original: 0x00167A80 - 0x00167AB9 (57 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167A80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00167A93; /* jb: below (unsigned <) */

loc_00167A8E: ;
    PUSH32(esp, 0x00167A93u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00167A93: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x41E9C;
    PUSH32(esp, ecx);
    MEM32(eax + 4) = 0;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167AB3u); RECOMP_ABI_CALL(0x00166D20u, sub_00166D20); /* call 0x00166D20 */

loc_00167AB3: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167AC0
 * Original: 0x00167AC0 - 0x00167ADB (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167AC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -1);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_00167AD8; /* jne: not equal / not zero */

loc_00167ACD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167AD8u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00167AD8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167AE0
 * Original: 0x00167AE0 - 0x00167B08 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00167BCD(); return; } /* je: equal / zero */

loc_00167AF3: ;
    eax = MEM32(0x180D24);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00167B08(); return; } /* jne: not equal / not zero */

loc_00167B01: ;
    ebp = 0x176060;
    g_seh_ebp = ebp; sub_00167B1F(); return; /* tail jmp 0x00167B1F */

}

/**
 * sub_00167B08
 * Original: 0x00167B08 - 0x00167B1A (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167B08: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00167B1A(); return; } /* je: equal / zero */

loc_00167B0E: ;
    edi = 0x2C;
    ebp = 0x175FB0;
    g_seh_ebp = ebp; sub_00167B24(); return; /* tail jmp 0x00167B24 */

}

/**
 * sub_00167B1A
 * Original: 0x00167B1A - 0x00167B1F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167B1A: ;
    ebp = 0x175EF0;

    g_seh_ebp = ebp; sub_00167B1F(); return; /* fallthrough 0x00167B1F */

}

/**
 * sub_00167B1F
 * Original: 0x00167B1F - 0x00167B54 (53 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B1F(void)
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

loc_00167B1F: ;
    edi = 0x30;
    ecx = edi + 0x1E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00167B2Du); RECOMP_ABI_CALL(0x0016B770u, sub_0016B770); /* call 0x0016B770 */

loc_00167B2D: ;
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x200B80;
    _fa = (uint32_t)(MEM32(0x180DEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DEC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00167B54(); return; } /* jne: not equal / not zero */

loc_00167B46: ;
    fp_push(MEMF(esi + 0x948)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x944)); /* fmul dword ptr [esi + 0x944] */
    g_seh_ebp = ebp; sub_00167B5A(); return; /* tail jmp 0x00167B5A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00167B24
 * Original: 0x00167B24 - 0x00167B54 (48 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B24(void)
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

loc_00167B24: ;
    ecx = edi + 0x1E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00167B2Du); RECOMP_ABI_CALL(0x0016B770u, sub_0016B770); /* call 0x0016B770 */

loc_00167B2D: ;
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x200B80;
    _fa = (uint32_t)(MEM32(0x180DEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DEC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00167B54(); return; } /* jne: not equal / not zero */

loc_00167B46: ;
    fp_push(MEMF(esi + 0x948)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x944)); /* fmul dword ptr [esi + 0x944] */
    g_seh_ebp = ebp; sub_00167B5A(); return; /* tail jmp 0x00167B5A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00167B54
 * Original: 0x00167B54 - 0x00167B5A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B54(void)
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

loc_00167B54: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */

    g_seh_ebp = ebp; sub_00167B5A(); return; /* fallthrough 0x00167B5A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00167B5A
 * Original: 0x00167B5A - 0x00167BCD (115 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B5A(void)
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

loc_00167B5A: ;
    edx = MEM32(esi + 0x95C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x960);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x948);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00167B95; /* jns: not sign (positive) */

loc_00167B85: ;
    _fa = (uint32_t)(MEM32(0x180E10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180E10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167B95; /* je: equal / zero */

loc_00167B8D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D8)); /* fld float */

loc_00167B95: ;
    fp_push(MEMF(esi + 0xEF8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xEFC)); /* fld float */
    MEM32(eax + -16) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(eax + -12) = ebx;
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + -8) = 0x41E9C;
    MEM32(eax + -4) = ebx;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00167BC8u); RECOMP_ABI_CALL(0x00166D20u, sub_00166D20); /* call 0x00166D20 */

loc_00167BC8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00167BCD(); return; /* fallthrough 0x00167BCD */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00167BCD
 * Original: 0x00167BCD - 0x00167BCF (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167BCD(void)
{

loc_00167BCD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00167BD0
 * Original: 0x00167BD0 - 0x00167C16 (70 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167BD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi + 0x794);
    ecx = MEM32(eax + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00167C16(); return; } /* je: equal / zero */

loc_00167BF4: ;
    SET_LO8(eax, MEM8(ebx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    edi = ebx + -1;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00167C22(); return; } /* je: equal / zero */

loc_00167BFE: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00167C07u); RECOMP_ABI_CALL(0x001677A0u, sub_001677A0); /* call 0x001677A0 */

loc_00167C07: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00167C0Eu); RECOMP_ABI_CALL(0x00167870u, sub_00167870); /* call 0x00167870 */

loc_00167C0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167C16
 * Original: 0x00167C16 - 0x00167C22 (12 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167C16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167C16: ;
    PUSH32(esp, ebx);
    edi = 0x1834F0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00167C22u); RECOMP_ABI_CALL(0x00166B20u, sub_00166B20); /* call 0x00166B20 */

    g_seh_ebp = ebp; sub_00167C22(); return; /* fallthrough 0x00167C22 */

}

/**
 * sub_00167C22
 * Original: 0x00167C22 - 0x00167D09 (231 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167C22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167C22: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167C42; /* je: equal / zero */

loc_00167C36: ;
    eax = ecx;
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;

loc_00167C42: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167C55; /* je: equal / zero */

loc_00167C4B: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167C55: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = ebx;
    MEM32(esi + 0x79C) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00167C77; /* jb: below (unsigned <) */

loc_00167C72: ;
    PUSH32(esp, 0x00167C77u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00167C77: ;
    edx = MEM32(edi + 4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167C8E; /* jne: not equal / not zero */

loc_00167C82: ;
    MEM32(eax) = 0x4194C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167C8E: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167CA2; /* jne: not equal / not zero */

loc_00167C96: ;
    MEM32(eax) = 0x41950;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167CA2: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167CB6; /* jne: not equal / not zero */

loc_00167CAA: ;
    MEM32(eax) = 0x4195C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167CB6: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167CCA; /* jne: not equal / not zero */

loc_00167CBE: ;
    MEM32(eax) = 0x41960;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167CCA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00167D09(); return; } /* je: equal / zero */

loc_00167CD2: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x00167CDBu); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_00167CDB: ;
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = 0x81E94;
    MEM32(eax + 0xC) = 6;
    MEM32(eax + 0x10) = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00167D01u); RECOMP_ABI_CALL(0x00167AE0u, sub_00167AE0); /* call 0x00167AE0 */

loc_00167D01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167D09
 * Original: 0x00167D09 - 0x00167D33 (42 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167D09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167D09: ;
    ecx = ecx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167D29; /* je: equal / zero */

loc_00167D12: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x00167D29u); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_00167D29: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167D40
 * Original: 0x00167D40 - 0x00168041 (769 bytes, 259 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167D40: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 3));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00167D61; /* je: equal / zero */

loc_00167D4F: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00167D61: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_00167D70;

    /* nop */

loc_00167D70: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    edi = edi;

loc_00167D80: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00167D82: ;
    ecx = MEM32(esp + 0x28);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = edi;
    esi = 0xF;
    _fb = (uint32_t)(0x107) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x107)) >> 32) & 1);
    ecx = ecx + 0x107;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00167DA0;

    /* nop */

loc_00167DA0: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167DD1; /* jne: not equal / not zero */

loc_00167DA9: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00167DCD; /* jae: above or equal (unsigned >=) */

loc_00167DB1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00167DCD; /* jb: below (unsigned <) */

loc_00167DB5: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00167DCD; /* jne: not equal / not zero */

loc_00167DBB: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00167DCD; /* je: equal / zero */

loc_00167DC1: ;
    edi = edx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = esi;
    goto loc_00167DD1;

loc_00167DCD: ;
    edi = MEM32(esp + 0x14);

loc_00167DD1: ;
    edx = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x10));
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00167DA0; /* jne: not equal / not zero */

loc_00167DDB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00167E75; /* je: equal / zero */

loc_00167DE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00167E01; /* je: equal / zero */

loc_00167DEE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00167E00; /* je: equal / zero */

loc_00167DF6: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + eax * 4) = ecx;

loc_00167E00: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00167E01: ;
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebx));
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00167E2B; /* je: equal / zero */

loc_00167E07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_B(_fa, _fb)) goto loc_00167E13; /* jb: below (unsigned <) */

loc_00167E0E: ;
    ecx = 0xF;

loc_00167E13: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167E26; /* je: equal / zero */

loc_00167E17: ;
    esi = ecx;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x5800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x10) _cf = (int)(((esi) >> (32 - (0x10))) & 1);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + eax * 4) = esi;

loc_00167E26: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00167E07; /* jne: not equal / not zero */

loc_00167E2B: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x28);
    ecx = edx;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(ecx + esi + 0x1B);
    if (CMP_EQ(_fa, _fb)) goto loc_00167E51; /* je: equal / zero */

loc_00167E40: ;
    esi = ecx;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x10) _cf = (int)(((esi) >> (32 - (0x10))) & 1);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + eax * 4) = esi;

loc_00167E51: ;
    edx = ecx;
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ZX8(MEM8(edx + 0x175E74));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(ecx + 0x175E6C));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00167D82;

loc_00167E75: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00167D80; /* jb: below (unsigned <) */

loc_00167E83: ;
    ecx = MEM32(esp + 0x28);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 2;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1F)) >> 32) & 1);
    ecx = ecx + 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167E91: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167EA6; /* jne: not equal / not zero */

loc_00167E98: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167EC2; /* je: equal / zero */

loc_00167E9C: ;
    edx = edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x70000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00167EBE;

loc_00167EA6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167EC3; /* jne: not equal / not zero */

loc_00167EAB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167EC2; /* je: equal / zero */

loc_00167EAF: ;
    edx = ZX8(MEM8(ecx + 1));
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((edx) >> (32 - (0x14))) & 1);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167EBE: ;
    MEM32(ebp + eax * 4) = edx;

loc_00167EC2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00167EC3: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167EDA; /* jne: not equal / not zero */

loc_00167ECB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167EF9; /* je: equal / zero */

loc_00167ECF: ;
    edx = esi + -1;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x70000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00167EF5;

loc_00167EDA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167EFA; /* jne: not equal / not zero */

loc_00167EDF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167EF9; /* je: equal / zero */

loc_00167EE3: ;
    edx = ZX8(MEM8(ecx + 0x11));
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((edx) >> (32 - (0x14))) & 1);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = esi + -1;
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167EF5: ;
    MEM32(ebp + eax * 4) = edx;

loc_00167EF9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00167EFA: ;
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167F10; /* jne: not equal / not zero */

loc_00167F02: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F2C; /* je: equal / zero */

loc_00167F06: ;
    edx = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x70000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00167F28;

loc_00167F10: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167F2D; /* jne: not equal / not zero */

loc_00167F15: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F2C; /* je: equal / zero */

loc_00167F19: ;
    edx = ZX8(MEM8(ecx + 0x21));
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((edx) >> (32 - (0x14))) & 1);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167F28: ;
    MEM32(ebp + eax * 4) = edx;

loc_00167F2C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00167F2D: ;
    SET_LO8(edx, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167F44; /* jne: not equal / not zero */

loc_00167F35: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F63; /* je: equal / zero */

loc_00167F39: ;
    edx = esi + 1;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x70000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00167F5F;

loc_00167F44: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167F64; /* jne: not equal / not zero */

loc_00167F49: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F63; /* je: equal / zero */

loc_00167F4D: ;
    edx = ZX8(MEM8(ecx + 0x31));
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((edx) >> (32 - (0x14))) & 1);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = esi + 1;
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00167F5F: ;
    MEM32(ebp + eax * 4) = edx;

loc_00167F63: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00167F64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00167E91; /* jb: below (unsigned <) */

loc_00167F76: ;
    ebx = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x113);
    _fb = (uint32_t)(0x113) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x113)) >> 32) & 1);
    ebx = ebx + 0x113;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00167FE7; /* je: equal / zero */

loc_00167F8E: ;
    edi = edi;

loc_00167F90: ;
    edx = ecx;
    if (0x12) _cf = (int)(((edx) >> ((0x12) - 1)) & 1);
    edx = edx >> 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167FA5; /* jne: not equal / not zero */

loc_00167F9D: ;
    ecx = MEM32(ebx);
    MEM32(esp + 0x20) = ecx;
    goto loc_00167FDD;

loc_00167FA5: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00167FDD; /* jne: not equal / not zero */

loc_00167FB3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167FD9; /* je: equal / zero */

loc_00167FB7: ;
    esi = MEM32(esp + 0x20);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x17) _cf = (int)(((ecx) >> (32 - (0x17))) & 1);
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + eax * 4) = ecx;
    ecx = edx;
    esi = ebx;
    edi = ebp + eax * 4 + 4;
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

loc_00167FD9: ;
    eax = eax + edx + 1;

loc_00167FDD: ;
    ecx = MEM32(ebx + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = ebx + edx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_00167F90; /* jne: not equal / not zero */

loc_00167FE7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00168016; /* jne: not equal / not zero */

loc_00167FEB: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = eax * 4 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0016802A; /* ja: above (unsigned >) */

loc_00167FFE: ;
    ebp = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00167D70; /* jne: not equal / not zero */

loc_0016800A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00168016: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + eax * 4) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0016802A: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x88760867u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00168050
 * Original: 0x00168050 - 0x0016810C (188 bytes, 70 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0016806B; /* jne: not equal / not zero */

loc_0016805B: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0016806B: ;
    edx = MEM32(esi + 7);
    ecx = MEM32(esp + 0x10);
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00168093; /* jbe: below or equal (unsigned <=) */

loc_00168081: ;
    eax = MEM32(esp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x88760867u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00168093: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00168105; /* je: equal / zero */

loc_0016809B: ;
    eax = MEM32(esi + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esi + 0x117;
    edi = 0x2078;
    if (TEST_Z(_fa, _fb)) goto loc_001680B6; /* je: equal / zero */

loc_001680AF: ;
    edi = 0x7378;
    goto loc_001680BF;

loc_001680B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001680BF; /* je: equal / zero */

loc_001680BA: ;
    edi = 0x7778;

loc_001680BF: ;
    eax = MEM32(esi + 7);
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx + 4;
    MEM32(ecx) = eax;
    MEM32(esp + 0x1C) = edi;

loc_001680D0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx;
    if (CMP_B(_fa, _fb)) goto loc_001680DF; /* jb: below (unsigned <) */

loc_001680DA: ;
    eax = 0x80;

loc_001680DF: ;
    ecx = eax;
    ebp = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
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
    ecx = ebp;
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
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edi;
    ebx = ebx + eax + 4;
    if ((_fa != 0)) goto loc_001680D0; /* jne: not equal / not zero */

loc_00168103: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00168105: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00168110
 * Original: 0x00168110 - 0x001682BE (430 bytes, 137 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168110: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x180E48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0016818B; /* jne: not equal / not zero */

loc_00168124: ;
    eax = MEM32(0x1809A8);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;
    eax = MEM32(ebx + 0xB04);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00168178; /* jbe: below or equal (unsigned <=) */

loc_00168142: ;
    esi = ebx + 0xB08;

loc_00168148: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx + 0x2C);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016816A; /* jne: not equal / not zero */

loc_00168164: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016816Au); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_0016816A: ;
    eax = MEM32(ebx + 0xB04);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168148; /* jb: below (unsigned <) */

loc_00168178: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xB04) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0016818B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001681B2; /* jbe: below or equal (unsigned <=) */

loc_00168194: ;
    ecx = MEM32(esp + 0x5C);
    edx = ebp;
    /* nop */

loc_001681A0: ;
    eax = MEM32(ecx);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    if ((_fa != 0)) goto loc_001681A0; /* jne: not equal / not zero */

loc_001681B2: ;
    eax = MEM32(ebx + 0xB04);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001681F4; /* jbe: below or equal (unsigned <=) */

loc_001681BE: ;
    esi = ebx + 0xB08;

loc_001681C4: ;
    eax = MEM32(esi);
    edx = MEM32(ebx + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001681E6; /* jne: not equal / not zero */

loc_001681E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001681E6u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_001681E6: ;
    eax = MEM32(ebx + 0xB04);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001681C4; /* jb: below (unsigned <) */

loc_001681F4: ;
    eax = MEM32(0x1809A8);
    ecx = MEM32(esp + 0x54);
    esi = MEM32(esp + 0x5C);
    eax = eax & 0xFFFFFF8Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;
    MEM32(ebx + 0xB00) = ecx;
    ecx = ebp + ebp * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0xB04) = ebp;
    edi = ebx + 0xB08;
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
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    MEM32(esp + 0x58) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00168249; /* jb: below (unsigned <) */

loc_00168240: ;
    PUSH32(esp, 0x00168245u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168245: ;
    MEM32(esp + 0x58) = eax;

loc_00168249: ;
    ecx = MEM32(esp + 0x54);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x401720;
    edi = eax + 4;
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168260;

    /* nop */

loc_00168260: ;
    edx = MEM32(ecx + -8);
    ebp = MEM32(ecx + -4);
    eax = edx + edx * 2;
    edx = MEM32(esp + 0x5C);
    edx = edx + eax * 4;
    eax = MEM32(edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(ecx);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + esi * 4 + 0x10) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168260; /* jb: below (unsigned <) */

loc_00168294: ;
    eax = MEM32(esp + 0x58);
    MEM32(eax + 0x44) = 0x401760;
    edi = eax + 0x48;
    POP32(esp, ebp);
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
    POP32(esp, edi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001682C0
 * Original: 0x001682C0 - 0x001682F3 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001682C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001682C0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001682CC; /* je: equal / zero */

loc_001682C5: ;
    eax = 3;
    goto loc_001682D8;

loc_001682CC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001682D8: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001682F0u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_001682F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168300
 * Original: 0x00168300 - 0x0016830E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168300: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168310
 * Original: 0x00168310 - 0x00168396 (134 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00168352u); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_00168352: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168363; /* je: equal / zero */

loc_0016835E: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00168363: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0016836Fu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016836F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016838F; /* je: equal / zero */

loc_00168375: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00168380u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00168380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00168396(); return; } /* jne: not equal / not zero */

loc_00168384: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016838Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016838F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00168396
 * Original: 0x00168396 - 0x001683C0 (42 bytes, 12 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168396(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168396: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1040001;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001683C0
 * Original: 0x001683C0 - 0x001683CE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001683C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001683C0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001683D0
 * Original: 0x001683D0 - 0x001683D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001683D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001683D0: ;
    g_seh_ebp = ebp; sub_0016DA60(); return; /* tail jmp 0x0016DA60 */

}

/**
 * sub_001683E0
 * Original: 0x001683E0 - 0x0016842A (74 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001683E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001683E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016840Eu); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_0016840E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00168423u); RECOMP_ABI_CALL(0x00168580u, sub_00168580); /* call 0x00168580 */

loc_00168423: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168430
 * Original: 0x00168430 - 0x00168453 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168430(void)
{

loc_00168430: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00168450u); RECOMP_ABI_CALL(0x0016DE10u, sub_0016DE10); /* call 0x0016DE10 */

loc_00168450: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00168460
 * Original: 0x00168460 - 0x00168465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168460: ;
    g_seh_ebp = ebp; sub_0016DA60(); return; /* tail jmp 0x0016DA60 */

}

/**
 * sub_00168470
 * Original: 0x00168470 - 0x001684BD (77 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001684A1u); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_001684A1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001684B6u); RECOMP_ABI_CALL(0x00168580u, sub_00168580); /* call 0x00168580 */

loc_001684B6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001684C0
 * Original: 0x001684C0 - 0x001684C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001684C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001684C0: ;
    g_seh_ebp = ebp; sub_0016DE10(); return; /* tail jmp 0x0016DE10 */

}

/**
 * sub_001684D0
 * Original: 0x001684D0 - 0x001684D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001684D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001684D0: ;
    g_seh_ebp = ebp; sub_0016DB20(); return; /* tail jmp 0x0016DB20 */

}

/**
 * sub_001684E0
 * Original: 0x001684E0 - 0x00168525 (69 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001684E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001684E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016850Eu); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_0016850E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016851Eu); RECOMP_ABI_CALL(0x00168770u, sub_00168770); /* call 0x00168770 */

loc_0016851E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168530
 * Original: 0x00168530 - 0x00168535 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168530: ;
    g_seh_ebp = ebp; sub_0016DEB0(); return; /* tail jmp 0x0016DEB0 */

}

/**
 * sub_00168540
 * Original: 0x00168540 - 0x00168573 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00168540: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0016854C; /* je: equal / zero */

loc_00168545: ;
    eax = 3;
    goto loc_00168558;

loc_0016854C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00168558: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00168570u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00168570: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168580
 * Original: 0x00168580 - 0x00168597 (23 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168580: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0016858Du); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016858D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00168597(); return; } /* jne: not equal / not zero */

loc_00168593: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168597
 * Original: 0x00168597 - 0x001685D1 (58 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168597(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168597: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x001685CBu); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_001685CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001685E0
 * Original: 0x001685E0 - 0x00168610 (48 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001685E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001685E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1050001;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168610
 * Original: 0x00168610 - 0x0016866F (95 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168610: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016863Au); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_0016863A: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    edi = eax;
    PUSH32(esp, 0x00168648u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00168648: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168668; /* je: equal / zero */

loc_0016864E: ;
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00168659u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00168659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016866F(); return; } /* jne: not equal / not zero */

loc_0016865D: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00168668u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00168668: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016866F
 * Original: 0x0016866F - 0x001686A0 (49 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016866F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016866F: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x81050001u;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168710
 * Original: 0x00168710 - 0x00168728 (24 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168722; /* je: equal / zero */

loc_0016871C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00168722u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_00168722: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168730
 * Original: 0x00168730 - 0x00168744 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168730(void)
{

loc_00168730: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00168741u); RECOMP_ABI_CALL(0x0016DA60u, sub_0016DA60); /* call 0x0016DA60 */

loc_00168741: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168750
 * Original: 0x00168750 - 0x00168770 (32 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168750(void)
{

loc_00168750: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016876Du); RECOMP_ABI_CALL(0x0016DE10u, sub_0016DE10); /* call 0x0016DE10 */

loc_0016876D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168770
 * Original: 0x00168770 - 0x001687BD (77 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0016877Du); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016877D: ;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016878B; /* jne: not equal / not zero */

loc_00168785: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0016878B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x001687B7u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_001687B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001687C0
 * Original: 0x001687C0 - 0x001687D4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001687C0(void)
{

loc_001687C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001687D1u); RECOMP_ABI_CALL(0x0016DB20u, sub_0016DB20); /* call 0x0016DB20 */

loc_001687D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001687E0
 * Original: 0x001687E0 - 0x001687FE (30 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001687E0(void)
{

loc_001687E0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001687FBu); RECOMP_ABI_CALL(0x0016DEB0u, sub_0016DEB0); /* call 0x0016DEB0 */

loc_001687FB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168800
 * Original: 0x00168800 - 0x00168818 (24 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168812; /* je: equal / zero */

loc_0016880C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00168812u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_00168812: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168820
 * Original: 0x00168820 - 0x00168836 (22 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00168820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00168820: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168833u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168833: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00168840
 * Original: 0x00168840 - 0x0016884C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168840: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00168850
 * Original: 0x00168850 - 0x0016885E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168850: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168860
 * Original: 0x00168860 - 0x00168861 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168860(void)
{

loc_00168860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00168870
 * Original: 0x00168870 - 0x0016887C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168870: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00168880
 * Original: 0x00168880 - 0x0016888E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168880: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168890
 * Original: 0x00168890 - 0x00168965 (213 bytes, 62 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168890: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x180E48);
    ebx = MEM32(ebp + 0x1A08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1A04);
    eax = ZX8(MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(eax + 0x175CB0));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001688FB; /* je: equal / zero */

loc_001688C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001688C9u); RECOMP_ABI_CALL(0x0016D780u, sub_0016D780); /* call 0x0016D780 */

loc_001688C9: ;
    ecx = MEM32(ebp + 4);
    esi = eax;
    esi = esi & 0xFFFFFDFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp);
    esi = esi | 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001688EA; /* jb: below (unsigned <) */

loc_001688E5: ;
    PUSH32(esp, 0x001688EAu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001688EA: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001688FB: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00168965(); return; } /* je: equal / zero */

loc_00168904: ;
    eax = ZX8(MEM8(edi + 0xD));
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00168965(); return; } /* ja: above (unsigned >) */

loc_00168910: ;
    ecx = ZX8(MEM8(eax + 0x168C3C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x168C30); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0016891Eu) goto loc_0016891E;
    if (_jt == 0x0016893Bu) goto loc_0016893B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016891E: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFC00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00168956;

loc_0016893B: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xF800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00168956: ;
    ecx = ecx & 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x58) = eax;

    g_seh_ebp = ebp; sub_00168965(); return; /* fallthrough 0x00168965 */

}

/**
 * sub_0016891E
 * Original: 0x0016891E - 0x00168C2F (785 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016891E(void)
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

loc_0016891E: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFC00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00168956;

loc_00168956: ;
    ecx = ecx & 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x58) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168976; /* jne: not equal / not zero */

loc_00168969: ;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x54) = edx;
    if ((_fa == 0)) goto loc_00168C25; /* je: equal / zero */

loc_00168976: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168A63; /* je: equal / zero */

loc_0016897F: ;
    edx = ZX8(MEM8(ebx + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x168C58)); return; /* indirect tail jmp */

loc_00168A63: ;
    ebx = MEM32(ebp + 0xEE0);
    edi = MEM32(ebp + 0xEE4);
    edx = MEM32(ebp + 0xEE8);
    esi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00168AB9; /* jne: not equal / not zero */

loc_00168A97: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_00168AC3;

loc_00168AB9: ;
    ecx = MEM32(esp + 0x50);
    goto loc_00168AC3;

loc_00168ABF: ;
    edi = MEM32(esp + 0x24);

loc_00168AC3: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AD1; /* jg: greater (signed >) */

loc_00168ACD: ;
    MEM32(esp + 0x14) = ebx;

loc_00168AD1: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AE0; /* jg: greater (signed >) */

loc_00168ADC: ;
    MEM32(esp + 0x5C) = edi;

loc_00168AE0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00168AEB; /* jl: less (signed <) */

loc_00168AE9: ;
    edi = edx;

loc_00168AEB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00168AF8; /* jl: less (signed <) */

loc_00168AF6: ;
    eax = esi;

loc_00168AF8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B06: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B10: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B29u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B29: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B44u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B44: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B5Fu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B5F: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B7Cu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B7C: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168B8D; /* jb: below (unsigned <) */

loc_00168B88: ;
    PUSH32(esp, 0x00168B8Du); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168B8D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168BEB: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_00168ABF; /* jne: not equal / not zero */

loc_00168C01: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C25; /* je: equal / zero */

loc_00168C09: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168C16; /* jb: below (unsigned <) */

loc_00168C11: ;
    PUSH32(esp, 0x00168C16u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168C16: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168C25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016893B
 * Original: 0x0016893B - 0x00168C2F (756 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016893B(void)
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

loc_0016893B: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xF800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x58) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168976; /* jne: not equal / not zero */

loc_00168969: ;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x54) = edx;
    if ((_fa == 0)) goto loc_00168C25; /* je: equal / zero */

loc_00168976: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168A63; /* je: equal / zero */

loc_0016897F: ;
    edx = ZX8(MEM8(ebx + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x168C58)); return; /* indirect tail jmp */

loc_00168A63: ;
    ebx = MEM32(ebp + 0xEE0);
    edi = MEM32(ebp + 0xEE4);
    edx = MEM32(ebp + 0xEE8);
    esi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00168AB9; /* jne: not equal / not zero */

loc_00168A97: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_00168AC3;

loc_00168AB9: ;
    ecx = MEM32(esp + 0x50);
    goto loc_00168AC3;

loc_00168ABF: ;
    edi = MEM32(esp + 0x24);

loc_00168AC3: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AD1; /* jg: greater (signed >) */

loc_00168ACD: ;
    MEM32(esp + 0x14) = ebx;

loc_00168AD1: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AE0; /* jg: greater (signed >) */

loc_00168ADC: ;
    MEM32(esp + 0x5C) = edi;

loc_00168AE0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00168AEB; /* jl: less (signed <) */

loc_00168AE9: ;
    edi = edx;

loc_00168AEB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00168AF8; /* jl: less (signed <) */

loc_00168AF6: ;
    eax = esi;

loc_00168AF8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B06: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B10: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B29u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B29: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B44u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B44: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B5Fu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B5F: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B7Cu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B7C: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168B8D; /* jb: below (unsigned <) */

loc_00168B88: ;
    PUSH32(esp, 0x00168B8Du); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168B8D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168BEB: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_00168ABF; /* jne: not equal / not zero */

loc_00168C01: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C25; /* je: equal / zero */

loc_00168C09: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168C16; /* jb: below (unsigned <) */

loc_00168C11: ;
    PUSH32(esp, 0x00168C16u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168C16: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168C25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00168965
 * Original: 0x00168965 - 0x00168C2F (714 bytes, 202 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168965(void)
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

loc_00168965: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168976; /* jne: not equal / not zero */

loc_00168969: ;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x54) = edx;
    if ((_fa == 0)) goto loc_00168C25; /* je: equal / zero */

loc_00168976: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168A63; /* je: equal / zero */

loc_0016897F: ;
    edx = ZX8(MEM8(ebx + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(edx * 4 + 0x168C58); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0016898Du) goto loc_0016898D;
    if (_jt == 0x001689BFu) goto loc_001689BF;
    if (_jt == 0x001689F1u) goto loc_001689F1;
    if (_jt == 0x00168A29u) goto loc_00168A29;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016898D: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1F4)); /* fmul dword ptr [0x22c1f4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001689A0u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001689A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001689AC; /* jle: less or equal (signed <=) */

loc_001689A7: ;
    eax = 0xFFFF;

loc_001689AC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    goto loc_00168A63;

loc_001689BF: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281BE8)); /* fmul dword ptr [0x281be8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001689D2u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001689D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001689DE; /* jle: less or equal (signed <=) */

loc_001689D9: ;
    eax = 0xFFFFFF;

loc_001689DE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;
    goto loc_00168A63;

loc_001689F1: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00168A5F; /* jnp: not parity */

loc_00168A04: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281BE0)); /* fmul qword ptr [0x281be0] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    goto loc_00168A63;

loc_00168A29: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00168A5F; /* jnp: not parity */

loc_00168A3C: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281BD8)); /* fmul qword ptr [0x281bd8] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xF8000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF8000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    goto loc_00168A63;

loc_00168A5F: ;
    MEM32(esp + 0x10) = esi;

loc_00168A63: ;
    ebx = MEM32(ebp + 0xEE0);
    edi = MEM32(ebp + 0xEE4);
    edx = MEM32(ebp + 0xEE8);
    esi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00168AB9; /* jne: not equal / not zero */

loc_00168A97: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_00168AC3;

loc_00168AB9: ;
    ecx = MEM32(esp + 0x50);
    goto loc_00168AC3;

loc_00168ABF: ;
    edi = MEM32(esp + 0x24);

loc_00168AC3: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AD1; /* jg: greater (signed >) */

loc_00168ACD: ;
    MEM32(esp + 0x14) = ebx;

loc_00168AD1: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00168AE0; /* jg: greater (signed >) */

loc_00168ADC: ;
    MEM32(esp + 0x5C) = edi;

loc_00168AE0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00168AEB; /* jl: less (signed <) */

loc_00168AE9: ;
    edi = edx;

loc_00168AEB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00168AF8; /* jl: less (signed <) */

loc_00168AF6: ;
    eax = esi;

loc_00168AF8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B06: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168BEB; /* jge: greater or equal (signed >=) */

loc_00168B10: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B29u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B29: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B44u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B44: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B5Fu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B5F: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00168B7Cu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00168B7C: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168B8D; /* jb: below (unsigned <) */

loc_00168B88: ;
    PUSH32(esp, 0x00168B8Du); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168B8D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168BEB: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_00168ABF; /* jne: not equal / not zero */

loc_00168C01: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C25; /* je: equal / zero */

loc_00168C09: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168C16; /* jb: below (unsigned <) */

loc_00168C11: ;
    PUSH32(esp, 0x00168C16u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00168C16: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00168C25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00168C80
 * Original: 0x00168C80 - 0x00168C96 (22 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168C80(void)
{

loc_00168C80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x183614) = eax;
    MEM32(0x183610) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168CA0
 * Original: 0x00168CA0 - 0x00168D33 (147 bytes, 39 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168CA0: ;
    eax = MEM32(0x183614);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168CB3; /* jne: not equal / not zero */

loc_00168CA9: ;
    MEM32(0x183614) = 0x80000;

loc_00168CB3: ;
    eax = MEM32(0x183610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168CC6; /* jne: not equal / not zero */

loc_00168CBC: ;
    MEM32(0x183610) = 0x8000;

loc_00168CC6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x180E58);
    PUSH32(esp, edi);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0x180E50;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(0x180E48) = edi;
    MEM32(0x181788) = 1;
    MEM32(0x180E58) = esi;
    PUSH32(esp, 0x00168CFEu); RECOMP_ABI_CALL(0x0016CF30u, sub_0016CF30); /* call 0x0016CF30 */

loc_00168CFE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00168D33(); return; } /* jge: greater or equal (signed >=) */

loc_00168D04: ;
    ecx = edi;
    PUSH32(esp, 0x00168D0Bu); RECOMP_ABI_CALL(0x0016D400u, sub_0016D400); /* call 0x0016D400 */

loc_00168D0B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D19; /* je: equal / zero */

loc_00168D13: ;
    MEM32(eax) = 0;

loc_00168D19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x928;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x180E48) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00168D33
 * Original: 0x00168D33 - 0x00168D44 (17 bytes, 8 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168D33: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D3D; /* je: equal / zero */

loc_00168D3B: ;
    MEM32(eax) = edi;

loc_00168D3D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00168D50
 * Original: 0x00168D50 - 0x00168D77 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168D50: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x784);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x798);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x180A60);
    MEM32(edx + 8) = ecx;
    ecx = edx + 0x14;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00168D80(); return; /* tail jmp 0x00168D80 */

}

/**
 * sub_00168D80
 * Original: 0x00168D80 - 0x00168E0A (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168D80: ;
    esi = MEM32(eax + 0x176188);
    esi = MEM32(esi * 4 + 0x180BB0);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0x176190);
    esi = MEM32(esi * 4 + 0x180BB0);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x176198);
    esi = MEM32(esi * 4 + 0x180BB0);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x1761A0);
    esi = MEM32(esi * 4 + 0x180BB0);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0x1761A8);
    esi = MEM32(esi * 4 + 0x180BB0);
    MEM32(ecx + 0xC) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168D80; /* jb: below (unsigned <) */

loc_00168DDC: ;
    ecx = edx + 0x60;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00168DE1: ;
    esi = MEM32(eax + 0x176130);
    esi = MEM32(esi * 4 + 0x1809B0);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168DE1; /* jb: below (unsigned <) */

loc_00168DFB: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00168E2D(); return; } /* je: equal / zero */

loc_00168E00: ;
    ecx = edx + 0x8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00168E10(); return; /* tail jmp 0x00168E10 */

}

/**
 * sub_00168E10
 * Original: 0x00168E10 - 0x00168E2D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168E10: ;
    esi = MEM32(eax + 0x180BB0);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00168E10; /* jb: below (unsigned <) */

loc_00168E25: ;
    eax = MEM32(0x180DD0);
    MEM32(edx + 0xC) = eax;

    g_seh_ebp = ebp; sub_00168E2D(); return; /* fallthrough 0x00168E2D */

}

/**
 * sub_00168E2D
 * Original: 0x00168E2D - 0x00168E2F (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168E2D(void)
{

loc_00168E2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00168E30
 * Original: 0x00168E30 - 0x00168E68 (56 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168E30(void)
{

loc_00168E30: ;
    eax = MEM32(esi + 0x1A18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00168E3Eu); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_00168E3E: ;
    ecx = MEM32(esi + 0x1A14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00168E4Cu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00168E4C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00168E55u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00168E55: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00168E5Eu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00168E5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00168E67u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00168E67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00168E70
 * Original: 0x00168E70 - 0x00168EA5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168E70: ;
    ecx = MEM32(0x180DAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E7F; /* jne: not equal / not zero */

loc_00168E7A: ;
    ecx = 1;

loc_00168E7F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168E87; /* je: equal / zero */

loc_00168E84: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00168E87: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168E8F; /* je: equal / zero */

loc_00168E8C: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00168E8F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168E97; /* je: equal / zero */

loc_00168E94: ;
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00168E97: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00168E9E; /* jns: not sign (positive) */

loc_00168E9B: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00168E9E: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00168EB0
 * Original: 0x00168EB0 - 0x00168EB8 (8 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168EB0(void)
{

loc_00168EB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00168EB7u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_00168EB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00168EC0
 * Original: 0x00168EC0 - 0x00168F4E (142 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168EC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x1C34);
    ecx = MEM32(edi + 0x1C28);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1C30);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x00168EEBu); RECOMP_ABI_CALL(0x0016B7C0u, sub_0016B7C0); /* call 0x0016B7C0 */

loc_00168EEB: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168EF9; /* je: equal / zero */

loc_00168EF7: ;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00168EF9: ;
    edx = MEM32(edi + 0x1A18);
    eax = MEM32(edx + 4);
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00168F08: ;
    PUSH32(esp, 0x00168F0Du); RECOMP_ABI_CALL(0x001630D0u, sub_001630D0); /* call 0x001630D0 */

loc_00168F0D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD34); PUSH32(esp, 0x00168F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F1Fu); } /* indirect call */
    }

loc_00168F25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F08; /* jne: not equal / not zero */

loc_00168F2B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    ebx = MEM32(0x22BD30);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00168F4E(); return; } /* je: equal / zero */

loc_00168F3D: ;
    ecx = MEM32(edi + 0x1C28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00168F4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F4Au); } /* indirect call */
    }

loc_00168F4C: ;
    g_seh_ebp = ebp; sub_00168F50(); return; /* tail jmp 0x00168F50 */

}

/**
 * sub_00168F4E
 * Original: 0x00168F4E - 0x00168F50 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168F4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168F4E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00168F50(); return; /* fallthrough 0x00168F50 */

}

/**
 * sub_00168F50
 * Original: 0x00168F50 - 0x00168FD6 (134 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168F50: ;
    eax = MEM32(edi + 0x1C28);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    esi = edi + 0x1C28;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00168F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F65u); } /* indirect call */
    }

loc_00168F67: ;
    eax = MEM32(edi + 0x1DE8);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168F81; /* jne: not equal / not zero */

loc_00168F7A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1DE8) = eax;

loc_00168F81: ;
    ecx = esi;
    MEM32(0x183300) = ebp;
    MEM32(0x1832FC) = ebp;
    PUSH32(esp, 0x00168F94u); RECOMP_ABI_CALL(0x0016F681u, sub_0016F681); /* call 0x0016F681 */

loc_00168F94: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD2C); PUSH32(esp, 0x00168F9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F94u); } /* indirect call */
    }

loc_00168F9A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FBE; /* je: equal / zero */

loc_00168FA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BAFC); PUSH32(esp, 0x00168FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168FA1u); } /* indirect call */
    }

loc_00168FA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BB20); PUSH32(esp, 0x00168FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168FAAu); } /* indirect call */
    }

loc_00168FB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BB04); PUSH32(esp, 0x00168FB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168FB1u); } /* indirect call */
    }

loc_00168FB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x22BD38); PUSH32(esp, 0x00168FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168FB8u); } /* indirect call */
    }

loc_00168FBE: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00168FC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168FC7u); } /* indirect call */
    }

loc_00168FC9: ;
    POP32(esp, esi);
    MEM32(edi + 0x1DE0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00168FE0
 * Original: 0x00168FE0 - 0x00168FE9 (9 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168FE0(void)
{

loc_00168FE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00168FE8u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_00168FE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00168FF0
 * Original: 0x00168FF0 - 0x0016901B (43 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168FF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00168FF7u); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_00168FF7: ;
    eax = MEM32(esi + 0x2478);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + eax * 4 + 0x1974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169014; /* je: equal / zero */

loc_0016900C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169014u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_00169014: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00169020
 * Original: 0x00169020 - 0x00169040 (32 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169020(void)
{

loc_00169020: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x96C);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x970);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00169050
 * Original: 0x00169050 - 0x00169066 (22 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00169050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00169050: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00169063u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00169063: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00169070
 * Original: 0x00169070 - 0x0016907C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169070: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00169080
 * Original: 0x00169080 - 0x00169095 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169080: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001690A0
 * Original: 0x001690A0 - 0x001690B9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001690A0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001690C0
 * Original: 0x001690C0 - 0x001690C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690C0(void)
{

loc_001690C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001690D0
 * Original: 0x001690D0 - 0x001690DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001690D0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001690E0
 * Original: 0x001690E0 - 0x001690F5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001690E0: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169100
 * Original: 0x00169100 - 0x00169119 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169100: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00169120
 * Original: 0x00169120 - 0x00169160 (64 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169120: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5C (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00169135; /* jge: greater or equal (signed >=) */

loc_00169126: ;
    eax = MEM32(0x180E48);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169135; /* je: equal / zero */

loc_00169131: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016913A;

loc_00169135: ;
    eax = 1;

loc_0016913A: ;
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00169149; /* je: equal / zero */

loc_00169143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016915D; /* je: equal / zero */

loc_00169147: ;
    goto loc_0016914D;

loc_00169149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169156; /* je: equal / zero */

loc_0016914D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x180BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x180BB0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016915D; /* je: equal / zero */

loc_00169156: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016915Du); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_0016915D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169160
 * Original: 0x00169160 - 0x0016917B (27 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169160: ;
    PUSH32(esp, esi);
    esi = edx;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi * 4 + 0x1809B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi * 4 + 0x1809B0) (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016917A; /* je: equal / zero */

loc_00169172: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016917Au); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016917A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00169180
 * Original: 0x00169180 - 0x00169297 (279 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x180E48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00169190: ;
    eax = MEM32(esi + 0x176188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(esi + 0x17618C);
    if (CMP_GE(_fas, _fbs)) goto loc_001691AD; /* jge: greater or equal (signed >=) */

loc_001691A1: ;
    edx = MEM32(0x180E48);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001691B6; /* jne: not equal / not zero */

loc_001691AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x180BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x180BB0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001691BD; /* je: equal / zero */

loc_001691B6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001691BDu); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001691BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169190; /* jb: below (unsigned <) */

loc_001691C8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001691D0: ;
    ecx = MEM32(esi + 0x176130);
    eax = MEM32(esi + 0x176134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x1809B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x1809B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001691EE; /* je: equal / zero */

loc_001691E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001691EEu); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_001691EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001691D0; /* jb: below (unsigned <) */

loc_001691F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001691FDu); RECOMP_ABI_CALL(0x0016A660u, sub_0016A660); /* call 0x0016A660 */

loc_001691FD: ;
    esi = MEM32(0x180DA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1809C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x1809C0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169215; /* je: equal / zero */

loc_0016920B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169215u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_00169215: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1809BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x1809BC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169227; /* je: equal / zero */

loc_0016921D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169227u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_00169227: ;
    _fa = (uint32_t)(MEM32(0x180A60)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180A60), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016923B; /* je: equal / zero */

loc_00169230: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016923Bu); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016923B: ;
    PUSH32(esp, 0x00169240u); RECOMP_ABI_CALL(0x00171800u, sub_00171800); /* call 0x00171800 */

loc_00169240: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x176228);
    PUSH32(esp, 0x0016924Cu); RECOMP_ABI_CALL(0x00167A80u, sub_00167A80); /* call 0x00167A80 */

loc_0016924C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169258; /* jb: below (unsigned <) */

loc_00169253: ;
    PUSH32(esp, 0x00169258u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00169258: ;
    MEM32(eax) = 0x81E94;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x80394;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0x4B7FFFFF;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001692A0
 * Original: 0x001692A0 - 0x001693A9 (265 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001692A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001692A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x001692BBu); RECOMP_ABI_CALL(0x0016A660u, sub_0016A660); /* call 0x0016A660 */

loc_001692BB: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x180A60);
    ebx = ebx & 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001692D8; /* je: equal / zero */

loc_001692CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001692D8u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_001692D8: ;
    edi = ebp + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001692E0: ;
    eax = MEM32(esi + 0x176188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001692F9; /* jge: greater or equal (signed >=) */

loc_001692ED: ;
    edx = MEM32(0x180E48);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169309; /* jne: not equal / not zero */

loc_001692F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x180BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x180BB0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169309; /* je: equal / zero */

loc_00169302: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169309u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_00169309: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001692E0; /* jb: below (unsigned <) */

loc_00169317: ;
    edi = ebp + 0x60;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00169320: ;
    ecx = MEM32(esi + 0x176130);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x1809B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x1809B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016933A; /* je: equal / zero */

loc_00169331: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016933Au); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016933A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169320; /* jb: below (unsigned <) */

loc_00169345: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001693A9(); return; } /* jne: not equal / not zero */

loc_00169349: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169395; /* je: equal / zero */

loc_0016934F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x8C;

loc_00169357: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169375; /* jne: not equal / not zero */

loc_00169364: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169375; /* jne: not equal / not zero */

loc_0016936B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169375; /* jb: below (unsigned <) */

loc_00169370: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016937E; /* jbe: below or equal (unsigned <=) */

loc_00169375: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016937Eu); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_0016937E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x39 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169357; /* jb: below (unsigned <) */

loc_00169387: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x00169395u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_00169395: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    eax = esi + 0x10A8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001693A7u); RECOMP_ABI_CALL(0x00167A80u, sub_00167A80); /* call 0x00167A80 */

loc_001693A7: ;
    g_seh_ebp = ebp; sub_001693AD(); return; /* tail jmp 0x001693AD */

}

/**
 * sub_001693A9
 * Original: 0x001693A9 - 0x001693AD (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001693A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001693A9: ;
    esi = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_001693AD(); return; /* fallthrough 0x001693AD */

}

/**
 * sub_001693AD
 * Original: 0x001693AD - 0x001693E7 (58 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001693AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001693AD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001693B9; /* jb: below (unsigned <) */

loc_001693B4: ;
    PUSH32(esp, 0x001693B9u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001693B9: ;
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001693E7(); return; } /* jne: not equal / not zero */

loc_001693C7: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x001693DEu); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_001693DE: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001693E7
 * Original: 0x001693E7 - 0x0016941D (54 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001693E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001693E7: ;
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x79C);
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = ecx;
    edx = eax + 0x14;
    ecx = esi;
    PUSH32(esp, 0x00169414u); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_00169414: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169420
 * Original: 0x00169420 - 0x0016945A (58 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A04);
    PUSH32(esp, eax);
    MEM32(edi + 0x1A90) = eax;
    PUSH32(esp, 0x00169437u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_00169437: ;
    eax = MEM32(edi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1A94) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016944D; /* je: equal / zero */

loc_00169447: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016944Du); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0016944D: ;
    esi = edi + 0x1A98;
    ebx = 4;
    g_seh_ebp = ebp; sub_00169460(); return; /* tail jmp 0x00169460 */

}

/**
 * sub_00169460
 * Original: 0x00169460 - 0x001694AA (74 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169460: ;
    eax = MEM32(esi + -2832);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00169472; /* je: equal / zero */

loc_0016946C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169472u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_00169472: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00169460; /* jne: not equal / not zero */

loc_00169478: ;
    eax = edi + 0xEE0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0x1AA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1AA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001694B0
 * Original: 0x001694B0 - 0x00169518 (104 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001694B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001694B0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1A94);
    ecx = MEM32(esi + 0x1A90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001694C7u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_001694C7: ;
    edx = esi + 0x1AA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001694D3u); RECOMP_ABI_CALL(0x001645C0u, sub_001645C0); /* call 0x001645C0 */

loc_001694D3: ;
    eax = MEM32(esi + 0x1A90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001694DFu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001694DF: ;
    eax = MEM32(esi + 0x1A94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001694EF; /* je: equal / zero */

loc_001694E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001694EFu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001694EF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1A98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1A98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001694F7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00169500u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00169500: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016950C; /* je: equal / zero */

loc_00169506: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016950Cu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0016950C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001694F7; /* jb: below (unsigned <) */

loc_00169515: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00169520
 * Original: 0x00169520 - 0x0016955A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169520: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0x970);
    ecx = MEM32(eax + 0x96C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x1A04);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016955A(); return; } /* jne: not equal / not zero */

loc_00169548: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00169562(); return; /* tail jmp 0x00169562 */

}

/**
 * sub_0016955A
 * Original: 0x0016955A - 0x00169562 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016955A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016955A: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;

    g_seh_ebp = ebp; sub_00169562(); return; /* fallthrough 0x00169562 */

}

/**
 * sub_00169562
 * Original: 0x00169562 - 0x0016957A (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169562(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169562: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016957A(); return; } /* jne: not equal / not zero */

loc_00169569: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    esi = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00169585(); return; /* tail jmp 0x00169585 */

}

/**
 * sub_0016957A
 * Original: 0x0016957A - 0x00169585 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016957A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016957A: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

    g_seh_ebp = ebp; sub_00169585(); return; /* fallthrough 0x00169585 */

}

/**
 * sub_00169585
 * Original: 0x00169585 - 0x0016969B (278 bytes, 82 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169585(void)
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

loc_00169585: ;
    eax = MEM32(0x1809C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001695A4; /* je: equal / zero */

loc_0016959F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001695DA; /* jne: not equal / not zero */

loc_001695A4: ;
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001695BF; /* jp: parity */

loc_001695B7: ;
    MEM32(esp + 0x10) = 0x3F000000;

loc_001695BF: ;
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001695DA; /* jp: parity */

loc_001695D2: ;
    MEM32(esp + 0x14) = 0x3F000000;

loc_001695DA: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x001695E1u); RECOMP_ABI_CALL(0x00166A90u, sub_00166A90); /* call 0x00166A90 */

loc_001695E1: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x001695F2u); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_001695F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001695FDu); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_001695FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016960F; /* jge: greater or equal (signed >=) */

loc_00169609: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016960F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    PUSH32(esp, 0x00169631u); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_00169631: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169648u); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_00169648: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016965A; /* jge: greater or equal (signed >=) */

loc_00169654: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016965A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00169678u); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_00169678: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016968Fu); RECOMP_ABI_CALL(0x001668C0u, sub_001668C0); /* call 0x001668C0 */

loc_0016968F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00166AD0(); return; /* tail jmp 0x00166AD0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001696A0
 * Original: 0x001696A0 - 0x001697D3 (307 bytes, 88 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001696A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001696A0: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x178));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x40100;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001697F1(); return; } /* je: equal / zero */

loc_001696C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001696F9; /* jne: not equal / not zero */

loc_001696C9: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(esi + 0x1A1C);
    ebx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x180));
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edx;
    edi = 0x40100;

loc_001696F9: ;
    eax = esi;
    PUSH32(esp, 0x00169700u); RECOMP_ABI_CALL(0x00169420u, sub_00169420); /* call 0x00169420 */

loc_00169700: ;
    eax = MEM32(esi + 0x1A18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016970Du); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0016970D: ;
    ecx = MEM32(esi + 0x1A14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016971Au); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0016971A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00169722u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00169722: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0016972Au); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0016972A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00169732u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00169732: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169745; /* je: equal / zero */

loc_00169737: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x00169740u); RECOMP_ABI_CALL(0x00168D50u, sub_00168D50); /* call 0x00168D50 */

loc_00169740: ;
    PUSH32(esp, 0x00169745u); RECOMP_ABI_CALL(0x00169180u, sub_00169180); /* call 0x00169180 */

loc_00169745: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169751; /* jb: below (unsigned <) */

loc_0016974C: ;
    PUSH32(esp, 0x00169751u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00169751: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001697D3(); return; } /* jae: above or equal (unsigned >=) */

loc_0016975A: ;
    _fa = (uint32_t)(MEM32(0x180DAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DAC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169772; /* je: equal / zero */

loc_00169766: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00169772: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x180DAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016978A; /* jne: not equal / not zero */

loc_00169785: ;
    edx = 1;

loc_0016978A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169792; /* je: equal / zero */

loc_0016978F: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169792: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016979A; /* je: equal / zero */

loc_00169797: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016979A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001697A2; /* je: equal / zero */

loc_0016979F: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001697A2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_001697A9; /* jns: not sign (positive) */

loc_001697A6: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001697A9: ;
    MEM32(eax) = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x4012C;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0x40130;
    MEM32(eax + 0x1C) = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001697EF(); return; /* tail jmp 0x001697EF */

}

/**
 * sub_001697D3
 * Original: 0x001697D3 - 0x001697EF (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001697D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001697D3: ;
    MEM32(eax) = 0x4012C;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = 0x40130;
    MEM32(eax + 0x14) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001697EF(); return; /* fallthrough 0x001697EF */

}

/**
 * sub_001697EF
 * Original: 0x001697EF - 0x001697F1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001697EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001697EF: ;
    MEM32(esi) = eax;

    g_seh_ebp = ebp; sub_001697F1(); return; /* fallthrough 0x001697F1 */

}

/**
 * sub_001697F1
 * Original: 0x001697F1 - 0x00169885 (148 bytes, 48 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001697F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001697F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169807; /* je: equal / zero */

loc_001697F6: ;
    eax = esi;
    PUSH32(esp, 0x001697FDu); RECOMP_ABI_CALL(0x00169520u, sub_00169520); /* call 0x00169520 */

loc_001697FD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169807u); RECOMP_ABI_CALL(0x001692A0u, sub_001692A0); /* call 0x001692A0 */

loc_00169807: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169879; /* je: equal / zero */

loc_0016980C: ;
    eax = esi;
    PUSH32(esp, 0x00169813u); RECOMP_ABI_CALL(0x001694B0u, sub_001694B0); /* call 0x001694B0 */

loc_00169813: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169879; /* jne: not equal / not zero */

loc_0016981C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169828; /* jb: below (unsigned <) */

loc_00169823: ;
    PUSH32(esp, 0x00169828u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00169828: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x180DAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = MEM32(esi + 0x1A18);
    ecx = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00169849; /* jne: not equal / not zero */

loc_00169844: ;
    edx = 1;

loc_00169849: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169851; /* je: equal / zero */

loc_0016984E: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169851: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169859; /* je: equal / zero */

loc_00169856: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169859: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169861; /* je: equal / zero */

loc_0016985E: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169861: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00169868; /* jns: not sign (positive) */

loc_00169865: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169868: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = edi;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00169879: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169890
 * Original: 0x00169890 - 0x0016996C (220 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169890: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1A10);
    ecx = MEM32(esi + edx * 4 + 0x1A10);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    edi = esi + edx * 4 + 0x1A10;

loc_001698B3: ;
    eax = MEM32(edi);
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001698B3; /* jne: not equal / not zero */

loc_001698CD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001698E3; /* jb: below (unsigned <) */

loc_001698DE: ;
    PUSH32(esp, 0x001698E3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001698E3: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x180DAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169904; /* jne: not equal / not zero */

loc_001698FF: ;
    edx = 1;

loc_00169904: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016990C; /* je: equal / zero */

loc_00169909: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016990C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169914; /* je: equal / zero */

loc_00169911: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169914: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016991C; /* je: equal / zero */

loc_00169919: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016991C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00169923; /* jns: not sign (positive) */

loc_00169920: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00169923: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x40100;
    MEM32(eax + 8) = edx;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x4012C;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    ecx = MEM32(esi + 0x1A04);
    edx = MEM32(esi + 0x1A14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016996C(); return; } /* je: equal / zero */

loc_00169957: ;
    _fa = (uint32_t)(MEM32(0x180DAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DAC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016996C(); return; } /* je: equal / zero */

loc_00169963: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00169978(); return; /* tail jmp 0x00169978 */

}

/**
 * sub_0016996C
 * Original: 0x0016996C - 0x00169978 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016996C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016996C: ;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00169978(); return; /* fallthrough 0x00169978 */

}

/**
 * sub_00169978
 * Original: 0x00169978 - 0x00169994 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169978: ;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40210;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001699A0
 * Original: 0x001699A0 - 0x001699E0 (64 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001699A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001699A0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A18);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001699B2; /* je: equal / zero */

loc_001699B0: ;
    eax = ecx;

loc_001699B2: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x001699BFu); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_001699BF: ;
    edx = MEM32(edi + 0x2478);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + edx * 4 + 0x1974) = eax;
    eax = MEM32(edi + 0x1DE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001699DE; /* je: equal / zero */

loc_001699D9: ;
    PUSH32(esp, 0x001699DEu); RECOMP_ABI_CALL(0x00168EC0u, sub_00168EC0); /* call 0x00168EC0 */

loc_001699DE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001699E0
 * Original: 0x001699E0 - 0x00169A55 (117 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001699E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001699E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001699FB; /* jne: not equal / not zero */

loc_001699F1: ;
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169A00; /* je: equal / zero */

loc_001699FB: ;
    PUSH32(esp, 0x00169A00u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00169A00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00169A0F; /* jne: not equal / not zero */

loc_00169A0A: ;
    ebx = 5;

loc_00169A0F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00169A55(); return; } /* je: equal / zero */

loc_00169A17: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169A46; /* je: equal / zero */

loc_00169A1C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169A23u); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_00169A23: ;
    eax = MEM32(esi + 0x2478);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + eax * 4 + 0x1974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169A40; /* je: equal / zero */

loc_00169A38: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169A40u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_00169A40: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00169A46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00169A4Cu); RECOMP_ABI_CALL(0x001696A0u, sub_001696A0); /* call 0x001696A0 */

loc_00169A4C: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00169A92(); return; } /* je: equal / zero */

loc_00169A53: ;
    g_seh_ebp = ebp; sub_00169A8B(); return; /* tail jmp 0x00169A8B */

}

/**
 * sub_00169A55
 * Original: 0x00169A55 - 0x00169A8B (54 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169A55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169A55: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00169A92(); return; } /* je: equal / zero */

loc_00169A5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169A63u); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_00169A63: ;
    ecx = MEM32(esi + 0x2478);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + ecx * 4 + 0x1974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169A80; /* je: equal / zero */

loc_00169A78: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169A80u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_00169A80: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00169A8Bu); RECOMP_ABI_CALL(0x00169890u, sub_00169890); /* call 0x00169890 */

    g_seh_ebp = ebp; sub_00169A8B(); return; /* fallthrough 0x00169A8B */

}

/**
 * sub_00169A8B
 * Original: 0x00169A8B - 0x00169A92 (7 bytes, 2 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169A8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169A8B: ;
    eax = esi;
    PUSH32(esp, 0x00169A92u); RECOMP_ABI_CALL(0x001699A0u, sub_001699A0); /* call 0x001699A0 */

    g_seh_ebp = ebp; sub_00169A92(); return; /* fallthrough 0x00169A92 */

}

/**
 * sub_00169A92
 * Original: 0x00169A92 - 0x00169AC5 (51 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169A92(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169A92: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00169ABB; /* je: equal / zero */

loc_00169A98: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0xFF1000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169AB6; /* jne: not equal / not zero */

loc_00169AAC: ;
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169ABB; /* je: equal / zero */

loc_00169AB6: ;
    PUSH32(esp, 0x00169ABBu); RECOMP_ABI_CALL(0x00172050u, sub_00172050); /* call 0x00172050 */

loc_00169ABB: ;
    eax = MEM32(esi + 0x2478);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169AD0
 * Original: 0x00169AD0 - 0x00169BD4 (260 bytes, 74 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169AD0(void)
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

loc_00169AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi + 0x196C);
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00169AF8; /* jge: greater or equal (signed >=) */

loc_00169AF2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00169AF8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00169B15; /* jge: greater or equal (signed >=) */

loc_00169B0F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00169B15: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(esi + 0x1970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00169BB2; /* je: equal / zero */

loc_00169B2C: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00169B77; /* jp: parity */

loc_00169B3F: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00169B77; /* jp: parity */

loc_00169B52: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(esi + 0x1A14);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169BB2; /* jne: not equal / not zero */

loc_00169B66: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169BB2; /* jne: not equal / not zero */

loc_00169B6E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFBFFFu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00169BB2;

loc_00169B77: ;
    edx = MEM32(esi + 8);
    edx = edx | 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esi + 8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00169BB2; /* je: equal / zero */

loc_00169B8A: ;
    ecx = MEM32(esi + 4);
    eax = eax & 0xFFFFFEFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00169BA0; /* jb: below (unsigned <) */

loc_00169B9B: ;
    PUSH32(esp, 0x00169BA0u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00169BA0: ;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00169BB2: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x96C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x970) = eax;
    PUSH32(esp, 0x00169BCFu); RECOMP_ABI_CALL(0x00162200u, sub_00162200); /* call 0x00162200 */

loc_00169BCF: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00169BE0
 * Original: 0x00169BE0 - 0x00169C97 (183 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169BE0: ;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00169BF5u); RECOMP_ABI_CALL(0x00169420u, sub_00169420); /* call 0x00169420 */

loc_00169BF5: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169C04u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_00169C04: ;
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00169C13u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00169C13: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00169C1Cu); RECOMP_ABI_CALL(0x00168D50u, sub_00168D50); /* call 0x00168D50 */

loc_00169C1C: ;
    PUSH32(esp, 0x00169C21u); RECOMP_ABI_CALL(0x00169180u, sub_00169180); /* call 0x00169180 */

loc_00169C21: ;
    edx = MEM32(esi + 0x96C);
    eax = MEM32(esi + 0x970);
    ecx = MEM32(esp + 0x18C);
    edi = MEM32(0x1809C0);
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esi + 0x96C) = ecx;
    MEM32(esi + 0x970) = edx;
    eax = esi;
    MEM32(0x1809C0) = 5;
    PUSH32(esp, 0x00169C61u); RECOMP_ABI_CALL(0x00169520u, sub_00169520); /* call 0x00169520 */

loc_00169C61: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = esp + 0x10;
    MEM32(esi + 0x96C) = eax;
    MEM32(esi + 0x970) = ecx;
    PUSH32(esp, edx);
    MEM32(0x1809C0) = edi;
    PUSH32(esp, 0x00169C85u); RECOMP_ABI_CALL(0x001692A0u, sub_001692A0); /* call 0x001692A0 */

loc_00169C85: ;
    eax = esi;
    PUSH32(esp, 0x00169C8Cu); RECOMP_ABI_CALL(0x001694B0u, sub_001694B0); /* call 0x001694B0 */

loc_00169C8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00169CA0
 * Original: 0x00169CA0 - 0x00169CA8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CA0(void)
{

loc_00169CA0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169CB0
 * Original: 0x00169CB0 - 0x00169CD9 (41 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169CB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169CC0; /* je: equal / zero */

loc_00169CB8: ;
    eax = 0x8876086Cu;
    esp += 16; return; /* ret 12 */

loc_00169CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = 0x10B;
    esi = 0x176248;
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00169CE0
 * Original: 0x00169CE0 - 0x00169D7F (159 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00169CF4u); RECOMP_ABI_CALL(0x0016E1A4u, sub_0016E1A4); /* call 0x0016E1A4 */

loc_00169CF4: ;
    esi = eax;
    PUSH32(esp, 0x00169CFBu); RECOMP_ABI_CALL(0x0016E185u, sub_0016E185); /* call 0x0016E185 */

loc_00169CFB: ;
    ecx = MEM32(esi);
    edx = ecx;
    edi = eax;
    ebx = eax;
    ebp = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xC00000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp & 0xE0000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = ebp;
    goto loc_00169D27;

loc_00169D23: ;
    ebp = MEM32(esp + 0x14);

loc_00169D27: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169D34; /* jne: not equal / not zero */

loc_00169D2C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x60000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169D43; /* jne: not equal / not zero */

loc_00169D34: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169D43; /* je: equal / zero */

loc_00169D3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169D5C; /* je: equal / zero */

loc_00169D43: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169D5C; /* je: equal / zero */

loc_00169D47: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169D58; /* jne: not equal / not zero */

loc_00169D4C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169D58; /* jne: not equal / not zero */

loc_00169D50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xE0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169D5C; /* jne: not equal / not zero */

loc_00169D58: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00169D5C: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169D23; /* je: equal / zero */

loc_00169D6E: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169D80
 * Original: 0x00169D80 - 0x00169EC1 (321 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169D80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x00169DA0u); RECOMP_ABI_CALL(0x0016E1A4u, sub_0016E1A4); /* call 0x0016E1A4 */

loc_00169DA0: ;
    esi = eax;
    PUSH32(esp, 0x00169DA7u); RECOMP_ABI_CALL(0x0016E185u, sub_0016E185); /* call 0x0016E185 */

loc_00169DA7: ;
    ecx = MEM32(esi);
    edx = ecx;
    edi = eax;
    ebx = eax;
    ebp = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xC00000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xE0000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ebp;
    goto loc_00169DD3;

loc_00169DCF: ;
    ebp = MEM32(esp + 0x10);

loc_00169DD3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00169DE0; /* jne: not equal / not zero */

loc_00169DD8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x60000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00169DEF; /* jne: not equal / not zero */

loc_00169DE0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00169DEF; /* je: equal / zero */

loc_00169DE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00169E13; /* je: equal / zero */

loc_00169DEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00169E13; /* je: equal / zero */

loc_00169DF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00169E04; /* jne: not equal / not zero */

loc_00169DF8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00169E04; /* jne: not equal / not zero */

loc_00169DFC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xE0000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00169E13; /* jne: not equal / not zero */

loc_00169E04: ;
    ecx = MEM32(esp + 0x20);
    ebp = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00169E34; /* je: equal / zero */

loc_00169E13: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00169DCF; /* je: equal / zero */

loc_00169E25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8876086Cu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00169E34: ;
    eax = ZX16(MEM16(esi + 4));
    edi = MEM32(esp + 0x24);
    MEM32(edi) = eax;
    ecx = ZX16(MEM16(esi + 6));
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x32)) >> 32) & 1);
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = edx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169E62u); RECOMP_ABI_CALL(0x0016E145u, sub_0016E145); /* call 0x0016E145 */

loc_00169E62: ;
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00169EB5; /* ja: above (unsigned >) */

loc_00169E6E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x169EC4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00169E75u) goto loc_00169E75;
    if (_jt == 0x00169E88u) goto loc_00169E88;
    if (_jt == 0x00169E9Bu) goto loc_00169E9B;
    if (_jt == 0x00169EAEu) goto loc_00169EAE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00169E75: ;
    MEM32(edi + 0x10) = 0x1E;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00169E88: ;
    MEM32(edi + 0x10) = 0x11;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00169E9B: ;
    MEM32(edi + 0x10) = 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00169EAE: ;
    MEM32(edi + 0x10) = 0x12;

loc_00169EB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00169EE0
 * Original: 0x00169EE0 - 0x00169F10 (48 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169EE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169EF0; /* je: equal / zero */

loc_00169EE8: ;
    eax = 0x8876086Cu;
    esp += 16; return; /* ret 12 */

loc_00169EF0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169EFF; /* je: equal / zero */

loc_00169EF7: ;
    eax = 0x8876086Bu;
    esp += 16; return; /* ret 12 */

loc_00169EFF: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169F09u); RECOMP_ABI_CALL(0x00162AA0u, sub_00162AA0); /* call 0x00162AA0 */

loc_00169F09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00169F10
 * Original: 0x00169F10 - 0x00169F23 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169F10: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x175CB0));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169F30
 * Original: 0x00169F30 - 0x00169FE9 (185 bytes, 60 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169F30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169F40; /* je: equal / zero */

loc_00169F38: ;
    eax = 0x8876086Cu;
    esp += 12; return; /* ret 8 */

loc_00169F40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169F63; /* jne: not equal / not zero */

loc_00169F4B: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00169F63: ;
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169F82; /* jne: not equal / not zero */

loc_00169F70: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00169F88;

loc_00169F82: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00169F88: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169FAC; /* jne: not equal / not zero */

loc_00169F9C: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00169FB5;

loc_00169FAC: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00169FB5: ;
    ecx = esi + 0x1C28;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00169FC3u); RECOMP_ABI_CALL(0x00163480u, sub_00163480); /* call 0x00163480 */

loc_00169FC3: ;
    MEM32(edi + 8) = eax;
    edx = MEM32(esi + 0x1A18);
    eax = ZX8(MEM8(edx + 0xD));
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x1DDC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00169FDFu); RECOMP_ABI_CALL(0x0016E145u, sub_0016E145); /* call 0x0016E145 */

loc_00169FDF: ;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00169FF0
 * Original: 0x00169FF0 - 0x0016A04E (94 bytes, 27 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00169FF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A000; /* je: equal / zero */

loc_00169FF8: ;
    eax = 0x8876086Cu;
    esp += 24; return; /* ret 20 */

loc_0016A000: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016A015; /* je: equal / zero */

loc_0016A00D: ;
    eax = 0x8876086Bu;
    esp += 24; return; /* ret 20 */

loc_0016A015: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0016A023; /* jne: not equal / not zero */

loc_0016A01B: ;
    eax = 0x8876086Au;
    esp += 24; return; /* ret 20 */

loc_0016A023: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x175CB0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0016A01B; /* jns: not sign (positive) */

loc_0016A031: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x175CB0));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7789F796;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8876086Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8876086Au)) >> 32) & 1);
    eax = eax + 0x8876086Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016A050
 * Original: 0x0016A050 - 0x0016A0CE (126 bytes, 36 insns)
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A050: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A060; /* je: equal / zero */

loc_0016A058: ;
    eax = 0x8876086Cu;
    esp += 28; return; /* ret 24 */

loc_0016A060: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A06F; /* je: equal / zero */

loc_0016A067: ;
    eax = 0x8876086Bu;
    esp += 28; return; /* ret 24 */

loc_0016A06F: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(eax + 0x175CB0));
    SET_LO8(ecx, 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016A0C1; /* je: equal / zero */

loc_0016A07F: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016A09C; /* je: equal / zero */

loc_0016A087: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x175CB0)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x175CB0), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A0C9; /* jne: not equal / not zero */

loc_0016A094: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_0016A09C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016A0B4; /* je: equal / zero */

loc_0016A0A0: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edx + 0x175CB0)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x175CB0), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A0C9; /* jne: not equal / not zero */

loc_0016A0AC: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_0016A0B4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x175CB0)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x175CB0), 0x3C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A0C9; /* jne: not equal / not zero */

loc_0016A0C1: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_0016A0C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0016A0D0
 * Original: 0x0016A0D0 - 0x0016A14E (126 bytes, 42 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016A0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A0D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016A11C; /* jne: not equal / not zero */

loc_0016A0D8: ;
    eax = MEM32(esp + 8);
    edx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A0ED; /* je: equal / zero */

loc_0016A0E5: ;
    eax = 0x8876086Bu;
    esp += 24; return; /* ret 20 */

loc_0016A0ED: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A141; /* je: equal / zero */

loc_0016A0F3: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x175CB0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0016A141; /* jns: not sign (positive) */

loc_0016A101: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A149; /* je: equal / zero */

loc_0016A10A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A149; /* je: equal / zero */

loc_0016A10E: ;
    eax = ecx;
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016A124; /* jbe: below or equal (unsigned <=) */

loc_0016A11C: ;
    eax = 0x8876086Cu;
    esp += 24; return; /* ret 20 */

loc_0016A124: ;
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016A141; /* jb: below (unsigned <) */

loc_0016A130: ;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016A141; /* jb: below (unsigned <) */

loc_0016A137: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016A141; /* ja: above (unsigned >) */

loc_0016A13C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016A149; /* jbe: below or equal (unsigned <=) */

loc_0016A141: ;
    eax = 0x8876086Au;
    esp += 24; return; /* ret 20 */

loc_0016A149: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016A150
 * Original: 0x0016A150 - 0x0016A1A2 (82 bytes, 23 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016A150: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A160; /* je: equal / zero */

loc_0016A158: ;
    eax = 0x8876086Cu;
    esp += 24; return; /* ret 20 */

loc_0016A160: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016A16F; /* je: equal / zero */

loc_0016A167: ;
    eax = 0x8876086Bu;
    esp += 24; return; /* ret 20 */

loc_0016A16F: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x175CB0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0016A185; /* js: sign (negative) */

loc_0016A17D: ;
    eax = 0x8876086Au;
    esp += 24; return; /* ret 20 */

loc_0016A185: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(ecx + 0x175CB0));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7789F796;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8876086Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8876086Au)) >> 32) & 1);
    eax = eax + 0x8876086Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016A1B0
 * Original: 0x0016A1B0 - 0x0016A1CB (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A1B0: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0x0016A1BFu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016A1BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016A1CB(); return; } /* jne: not equal / not zero */

loc_0016A1C3: ;
    eax = 0x8007000Eu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016A1CB
 * Original: 0x0016A1CB - 0x0016A1F8 (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A1CB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A1CB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax + 0xC;
    MEM32(eax + 8) = edi;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    ecx = 0x3C;
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
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016A200
 * Original: 0x0016A200 - 0x0016A21D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A200: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016A21A; /* jne: not equal / not zero */

loc_0016A208: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A21A; /* je: equal / zero */

loc_0016A20F: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016A21Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016A21A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A220
 * Original: 0x0016A220 - 0x0016A25F (63 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A220: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x180E48);
    if (CMP_EQ(_fa, _fb)) goto loc_0016A252; /* je: equal / zero */

loc_0016A22D: ;
    ecx = eax + 0x924;
    MEM32(ecx) = 1;
    MEM32(eax + 0x928) = 0;
    MEM32(eax + 0x92C) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0016A660(); return; /* tail jmp 0x0016A660 */

loc_0016A252: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0016A660(); return; /* tail jmp 0x0016A660 */

}

/**
 * sub_0016A260
 * Original: 0x0016A260 - 0x0016A274 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A260(void)
{

loc_0016A260: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x784);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A280
 * Original: 0x0016A280 - 0x0016A5E8 (872 bytes, 235 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A280(void)
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

loc_0016A280: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016A528; /* jl: less (signed <) */

loc_0016A296: ;
    ebx = MEM32(esp + 0x10);
    esi = edi + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi * 4;
    edx = ebx * 4 + 0x8E8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    ebx = ecx;
    PUSH32(esp, ebp);
    goto loc_0016A2C0;

    /* nop */

loc_0016A2C0: ;
    ecx = MEM32(0x180E48);
    ecx = MEM32(edx + ecx + -4);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A2E1; /* jge: greater or equal (signed >=) */

loc_0016A2DB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A2E1: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A307; /* jge: greater or equal (signed >=) */

loc_0016A301: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A307: ;
    ebp = ecx;
    ebp = ebp >> 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A32C; /* jge: greater or equal (signed >=) */

loc_0016A326: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A32C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A34D; /* jge: greater or equal (signed >=) */

loc_0016A347: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A34D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x180E48);
    ecx = MEM32(edx + ecx);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A376; /* jge: greater or equal (signed >=) */

loc_0016A370: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A376: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A39C; /* jge: greater or equal (signed >=) */

loc_0016A396: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A39C: ;
    ebp = ecx;
    ebp = ebp >> 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A3C2; /* jge: greater or equal (signed >=) */

loc_0016A3BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A3C2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A3E3; /* jge: greater or equal (signed >=) */

loc_0016A3DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A3E3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x180E48);
    ecx = MEM32(edx + ecx + 4);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A40D; /* jge: greater or equal (signed >=) */

loc_0016A407: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A40D: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A433; /* jge: greater or equal (signed >=) */

loc_0016A42D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A433: ;
    ebp = ecx;
    ebp = ebp >> 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A459; /* jge: greater or equal (signed >=) */

loc_0016A453: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A459: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A47A; /* jge: greater or equal (signed >=) */

loc_0016A474: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A47A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x180E48);
    ecx = MEM32(edx + ecx + 8);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A4A4; /* jge: greater or equal (signed >=) */

loc_0016A49E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A4A4: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A4CA; /* jge: greater or equal (signed >=) */

loc_0016A4C4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A4CA: ;
    ebp = ecx;
    ebp = ebp >> 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A4F0; /* jge: greater or equal (signed >=) */

loc_0016A4EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A4F0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A511; /* jge: greater or equal (signed >=) */

loc_0016A50B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A511: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0016A2C0; /* jne: not equal / not zero */

loc_0016A527: ;
    POP32(esp, ebp);

loc_0016A528: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016A5E2; /* jae: above or equal (unsigned >=) */

loc_0016A530: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx * 4 + 0x8E4;
    esi = edi;
    /* nop */

loc_0016A540: ;
    ecx = MEM32(0x180E48);
    ecx = MEM32(edx + ecx);
    edi = ecx;
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A560; /* jge: greater or equal (signed >=) */

loc_0016A55A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A560: ;
    edi = ecx;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A586; /* jge: greater or equal (signed >=) */

loc_0016A580: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A586: ;
    edi = ecx;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A5AB; /* jge: greater or equal (signed >=) */

loc_0016A5A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A5AB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016A5CC; /* jge: greater or equal (signed >=) */

loc_0016A5C6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016A5CC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0016A540; /* jne: not equal / not zero */

loc_0016A5E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016A5F0
 * Original: 0x0016A5F0 - 0x0016A609 (25 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A5F0(void)
{

loc_0016A5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = 0x3C;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016A610
 * Original: 0x0016A610 - 0x0016A61C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A610: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016A620
 * Original: 0x0016A620 - 0x0016A62E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A620: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A630
 * Original: 0x0016A630 - 0x0016A631 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A630(void)
{

loc_0016A630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016A640
 * Original: 0x0016A640 - 0x0016A64C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A640: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016A650
 * Original: 0x0016A650 - 0x0016A65E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A650: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A660
 * Original: 0x0016A660 - 0x0016A6E0 (128 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A660: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x180E48);
    eax = MEM32(ebx + 0x784);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x784) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016A6E0(); return; } /* jne: not equal / not zero */

loc_0016A680: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x4800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    eax = MEM32(ebx + 0x788);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A6A8; /* je: equal / zero */

loc_0016A69C: ;
    eax = ecx;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;

loc_0016A6A8: ;
    ecx = MEM32(0x180E00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016A6B4u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0016A6B4: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016A6C0; /* jb: below (unsigned <) */

loc_0016A6BB: ;
    PUSH32(esp, 0x0016A6C0u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016A6C0: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x0016A6C9u); RECOMP_ABI_CALL(0x00161DD0u, sub_00161DD0); /* call 0x00161DD0 */

loc_0016A6C9: ;
    MEM32(eax) = 0x41E78;
    MEM32(eax + 4) = 0x210000;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A6E0
 * Original: 0x0016A6E0 - 0x0016A845 (357 bytes, 82 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A6E0: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ecx | MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0016A701; /* jne: not equal / not zero */

loc_0016A6ED: ;
    edx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A701; /* je: equal / zero */

loc_0016A6F7: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016A701: ;
    MEM32(ebx + 0x788) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0xEC);
    ecx = ecx & 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x78C) = ecx;
    ebp = MEM32(eax + 8);
    edx = MEM32(ebp + 0xD8);
    MEM32(ebx + 0x790) = edx;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016A741; /* jb: below (unsigned <) */

loc_0016A73C: ;
    PUSH32(esp, 0x0016A741u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016A741: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0016A762; /* jne: not equal / not zero */

loc_0016A748: ;
    ecx = 0x39;
    esi = ebp;
    edi = 0x180BB0;
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
    ecx = MEM32(ebp + 0xD8);
    MEM32(0x180DD0) = ecx;

loc_0016A762: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016A773; /* jne: not equal / not zero */

loc_0016A76A: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x0016A773u); RECOMP_ABI_CALL(0x00161DD0u, sub_00161DD0); /* call 0x00161DD0 */

loc_0016A773: ;
    MEM32(eax) = 0x200260;
    edi = eax + 4;
    ecx = 8;
    esi = ebp;
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
    MEM32(eax + 0x24) = 0x800A60;
    esi = ebp + 0x28;
    edi = eax + 0x28;
    ecx = 0x20;
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
    ecx = MEM32(ebp + 0xA8);
    MEM32(eax + 0xA8) = 0x417F8;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB0) = 0x81E20;
    edx = MEM32(ebp + 0xAC);
    MEM32(eax + 0xB4) = edx;
    ecx = MEM32(ebp + 0xB0);
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = 0x241E40;
    esi = ebp + 0xB4;
    edi = eax + 0xC0;
    ecx = 9;
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
    MEM32(eax + 0xE4) = 0x81E74;
    edx = MEM32(ebp + 0xDC);
    MEM32(eax + 0xE8) = edx;
    ecx = MEM32(ebp + 0xE0);
    MEM32(eax + 0xEC) = ecx;
    ecx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016A845(); return; } /* je: equal / zero */

loc_0016A81B: ;
    MEM32(eax + 0xF0) = 0x80288;
    edx = MEM32(ebp + 0x20);
    MEM32(eax + 0xF4) = edx;
    ecx = MEM32(ebp + 0x24);
    MEM32(eax + 0xF8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A845
 * Original: 0x0016A845 - 0x0016A853 (14 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A845(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A845: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A860
 * Original: 0x0016A860 - 0x0016AB27 (711 bytes, 189 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016A860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x180E48);
    eax = MEM32(edx + 0x784);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016AB21; /* je: equal / zero */

loc_0016A88C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = eax;
    goto loc_0016A8A0;

    /* nop */
    edi = edi;

loc_0016A8A0: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MIN(xmm0, XMM_MEM(0x2F3FE0)); /* minps */
    xmm0 = XMM_MAX(xmm0, XMM_MEM(0x96FBA0)); /* maxps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(0x2F3FF0)); /* mulps */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 0); /* cvtss2si */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 0); /* cvtss2si */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 0); /* cvtss2si */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 0); /* cvtss2si */
    ebx = ebx << 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;
    esi = MEM32(ebp + 8);
    MEM32(edx + edi * 4 + 0x8E4) = esi;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016A902; /* jb: below (unsigned <) */

loc_0016A8FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A8FFu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016A8FF: ;
    edx = MEM32(ebp + -4);

loc_0016A902: ;
    ecx = MEM32(edi * 4 + 0x2F4000);
    ebx = MEM32(ebp + -8);
    ecx = ecx ^ MEM32(ebx + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A929; /* jne: not equal / not zero */

loc_0016A917: ;
    MEM32(0x180BD8) = esi;
    MEM32(eax) = 0x40A60;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A929: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A940; /* jne: not equal / not zero */

loc_0016A92E: ;
    MEM32(0x180BDC) = esi;
    MEM32(eax) = 0x40A64;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A940: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A957; /* jne: not equal / not zero */

loc_0016A945: ;
    MEM32(0x180BE0) = esi;
    MEM32(eax) = 0x40A68;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A957: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A96E; /* jne: not equal / not zero */

loc_0016A95C: ;
    MEM32(0x180BE4) = esi;
    MEM32(eax) = 0x40A6C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A96E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A988; /* jne: not equal / not zero */

loc_0016A976: ;
    MEM32(0x180BE8) = esi;
    MEM32(eax) = 0x40A70;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A988: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A9A2; /* jne: not equal / not zero */

loc_0016A990: ;
    MEM32(0x180BEC) = esi;
    MEM32(eax) = 0x40A74;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A9A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A9BC; /* jne: not equal / not zero */

loc_0016A9AA: ;
    MEM32(0x180BF0) = esi;
    MEM32(eax) = 0x40A78;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A9BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A9D6; /* jne: not equal / not zero */

loc_0016A9C4: ;
    MEM32(0x180BF4) = esi;
    MEM32(eax) = 0x40A7C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A9D6: ;
    ecx = MEM32(edi * 4 + 0x2F4000);
    ecx = ecx ^ MEM32(ebx + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016A9FA; /* jne: not equal / not zero */

loc_0016A9E8: ;
    MEM32(0x180BF8) = esi;
    MEM32(eax) = 0x40A80;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A9FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA11; /* jne: not equal / not zero */

loc_0016A9FF: ;
    MEM32(0x180BFC) = esi;
    MEM32(eax) = 0x40A84;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA11: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA28; /* jne: not equal / not zero */

loc_0016AA16: ;
    MEM32(0x180C00) = esi;
    MEM32(eax) = 0x40A88;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA28: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA3F; /* jne: not equal / not zero */

loc_0016AA2D: ;
    MEM32(0x180C04) = esi;
    MEM32(eax) = 0x40A8C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA3F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA59; /* jne: not equal / not zero */

loc_0016AA47: ;
    MEM32(0x180C08) = esi;
    MEM32(eax) = 0x40A90;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA73; /* jne: not equal / not zero */

loc_0016AA61: ;
    MEM32(0x180C0C) = esi;
    MEM32(eax) = 0x40A94;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA73: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AA8D; /* jne: not equal / not zero */

loc_0016AA7B: ;
    MEM32(0x180C10) = esi;
    MEM32(eax) = 0x40A98;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AA8D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AAA7; /* jne: not equal / not zero */

loc_0016AA95: ;
    MEM32(0x180C14) = esi;
    MEM32(eax) = 0x40A9C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AAA7: ;
    ecx = MEM32(edi * 4 + 0x2F4000);
    ecx = ecx ^ MEM32(ebx + 0xEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AACB; /* jne: not equal / not zero */

loc_0016AAB9: ;
    MEM32(0x180C5C) = esi;
    MEM32(eax) = 0x41E20;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AACB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016AAE2; /* jne: not equal / not zero */

loc_0016AAD0: ;
    MEM32(0x180C60) = esi;
    MEM32(eax) = 0x41E24;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AAE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AB05; /* jne: not equal / not zero */

loc_0016AAE6: ;
    esi = MEM32(ebp + 0xC);
    MEM32(eax) = 0xC181C;
    ebx = MEM32(esi);
    ecx = eax + 4;
    MEM32(ecx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(ecx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(ecx + 8) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AB05: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0016A8A0; /* jne: not equal / not zero */

loc_0016AB1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016AB21: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016AB30
 * Original: 0x0016AB30 - 0x0016AB42 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AB30(void)
{

loc_0016AB30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AB3Fu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016AB3F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AB50
 * Original: 0x0016AB50 - 0x0016AB66 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AB50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AB63; /* je: equal / zero */

loc_0016AB58: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AB63u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016AB63: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AB70
 * Original: 0x0016AB70 - 0x0016AB91 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AB70: ;
    eax = MEM32(0x183608);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AB8F; /* jne: not equal / not zero */

loc_0016AB79: ;
    PUSH32(esp, 0x176);
    PUSH32(esp, 0x0016AB83u); RECOMP_ABI_CALL(0x0015D407u, sub_0015D407); /* call 0x0015D407 */

loc_0016AB83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x183608) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016AB8F; /* jne: not equal / not zero */

loc_0016AB8C: ;
    esp += 12; return; /* ret 8 */

loc_0016AB8F: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_0016ABA0
 * Original: 0x0016ABA0 - 0x0016ABC1 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ABA0: ;
    eax = MEM32(0x18360C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016ABBF; /* jne: not equal / not zero */

loc_0016ABA9: ;
    PUSH32(esp, 0x177);
    PUSH32(esp, 0x0016ABB3u); RECOMP_ABI_CALL(0x0015D407u, sub_0015D407); /* call 0x0015D407 */

loc_0016ABB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x18360C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016ABBF; /* jne: not equal / not zero */

loc_0016ABBC: ;
    esp += 12; return; /* ret 8 */

loc_0016ABBF: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_0016ABD0
 * Original: 0x0016ABD0 - 0x0016ABD8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ABD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ABD0: ;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp + 4)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016ABE0
 * Original: 0x0016ABE0 - 0x0016AC13 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ABE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016ABE0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0016ABEC; /* je: equal / zero */

loc_0016ABE5: ;
    eax = 3;
    goto loc_0016ABF8;

loc_0016ABEC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016ABF8: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AC10u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016AC10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AC20
 * Original: 0x0016AC20 - 0x0016AC2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC20(void)
{

loc_0016AC20: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AC2Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016AC2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AC30
 * Original: 0x0016AC30 - 0x0016AC50 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AC30: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016AC50(); return; } /* ja: above (unsigned >) */

loc_0016AC3A: ;
    eax = 0xC;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB0800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_000AFAE8(); return; /* tail jmp 0x000AFAE8 */

}

/**
 * sub_0016AC50
 * Original: 0x0016AC50 - 0x0016AC66 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AC50: ;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp + 8)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB0800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_000AFAE8(); return; /* tail jmp 0x000AFAE8 */

}

/**
 * sub_0016AC70
 * Original: 0x0016AC70 - 0x0016AC82 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC70(void)
{

loc_0016AC70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AC7Fu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016AC7F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AC90
 * Original: 0x0016AC90 - 0x0016ACA3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AC90: ;
    PUSH32(esp, ecx);
    MEM32(esp) = 0x190;

loc_0016AC98: ;
    eax = MEM32(esp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = eax;
    if ((_fa != 0)) goto loc_0016AC98; /* jne: not equal / not zero */

loc_0016ACA1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016ACB0
 * Original: 0x0016ACB0 - 0x0016ACDF (47 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ACB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_0016ACC3; /* ja: above (unsigned >) */

loc_0016ACBE: ;
    esi = MEM32(ecx + 0x44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016ACC3: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016ACCD; /* ja: above (unsigned >) */

loc_0016ACCA: ;
    _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016ACCD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0;
    SET_LO8(ecx, ((_fas < 0)) ? 1 : 0); /* sets */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016ACE0
 * Original: 0x0016ACE0 - 0x0016ACF3 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ACE0(void)
{

loc_0016ACE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x180E48);
    MEM32(ecx + 0x19FC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AD00
 * Original: 0x0016AD00 - 0x0016AD70 (112 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AD00_gen(void)   /* iter-20 EMIT-PROBE rename: shadowed by recomp_manual.c */
{

loc_0016AD00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x40) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016AD80
 * Original: 0x0016AD80 - 0x0016AD84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AD80(void)
{

loc_0016AD80: ;
    MEM32(edx + ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AD90
 * Original: 0x0016AD90 - 0x0016ADC3 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016AD90: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0016AD9C; /* je: equal / zero */

loc_0016AD95: ;
    eax = 3;
    goto loc_0016ADA8;

loc_0016AD9C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016ADA8: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016ADC0u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016ADC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016ADD0
 * Original: 0x0016ADD0 - 0x0016ADDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ADD0(void)
{

loc_0016ADD0: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016ADDBu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016ADDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ADE0
 * Original: 0x0016ADE0 - 0x0016ADEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ADE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ADE0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ADF0
 * Original: 0x0016ADF0 - 0x0016AE05 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ADF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ADF0: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AE10
 * Original: 0x0016AE10 - 0x0016AE11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE10(void)
{

loc_0016AE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AE20
 * Original: 0x0016AE20 - 0x0016AE31 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AE20: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AE40
 * Original: 0x0016AE40 - 0x0016AE41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE40(void)
{

loc_0016AE40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AE50
 * Original: 0x0016AE50 - 0x0016AE5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AE50: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AE60
 * Original: 0x0016AE60 - 0x0016AE75 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AE60: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AE80
 * Original: 0x0016AE80 - 0x0016AE94 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016AE80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x780000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AEA0
 * Original: 0x0016AEA0 - 0x0016AEAF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AEA0: ;
    eax = MEM32(ecx + 0x1C20);
    eax = MEM32(eax + 0x44);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016AEB0
 * Original: 0x0016AEB0 - 0x0016AEB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEB0(void)
{

loc_0016AEB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AEC0
 * Original: 0x0016AEC0 - 0x0016AEE1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AEC0: ;
    eax = MEM32(0x183614);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016AED3u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016AED3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016AEE1(); return; } /* jne: not equal / not zero */

loc_0016AEDA: ;
    eax = 0x8007000Eu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016AEE1
 * Original: 0x0016AEE1 - 0x0016AF60 (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AEE1: ;
    ecx = MEM32(0x183614);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx * 4;
    MEM32(esi + 0x28) = edx;
    MEM32(esi) = eax;
    ecx = MEM32(0x183610);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx * 4 + -516;
    eax = MEM32(esi + 0x30);
    MEM32(esi + 4) = edx;
    MEM32(esi + 0x2C) = 5;
    MEM32(eax) = 3;
    eax = MEM32(0x183614);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x183610));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x183610)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016AF25: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AF25; /* jne: not equal / not zero */

loc_0016AF2C: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x64800000);
    edx = eax * 8;
    ecx = eax + -1;
    PUSH32(esp, edx);
    MEM32(esi + 0x38) = ecx;
    PUSH32(esp, 0x0016AF4Bu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016AF4B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AF60
 * Original: 0x0016AF60 - 0x0016AF89 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AF75; /* je: equal / zero */

loc_0016AF6A: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AF75u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016AF75: ;
    esi = MEM32(esi + 0x48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AF87; /* je: equal / zero */

loc_0016AF7C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016AF87u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016AF87: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016AF90
 * Original: 0x0016AF90 - 0x0016B003 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AF90: ;
    edx = MEM32(0x180E48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B003(); return; } /* ja: above (unsigned >) */

loc_0016AFAD: ;
    ecx = MEM32(esp + 0x14);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B02C(); return; } /* je: equal / zero */

loc_0016AFBB: ;
    ebp = MEM32(edx + edi * 8 + 0x68);
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    eax = edx + edi * 8 + 0x64;
    if (CMP_A(_fa, _fb)) goto loc_0016AFCC; /* ja: above (unsigned >) */

loc_0016AFC9: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 0x44);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AFCC: ;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi + 1;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B086(); return; } /* je: equal / zero */

loc_0016AFDF: ;
    /* nop */

loc_0016AFE0: ;
    edi = MEM32(edx + ecx * 8 + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016AFEB; /* ja: above (unsigned >) */

loc_0016AFE8: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(edx + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AFEB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B084(); return; } /* jb: below (unsigned <) */

loc_0016AFF3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AFE0; /* jne: not equal / not zero */

loc_0016AFFB: ;
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
 * sub_0016AFB6
 * Original: 0x0016AFB6 - 0x0016B003 (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AFB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AFB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B02C(); return; } /* je: equal / zero */

loc_0016AFBB: ;
    ebp = MEM32(edx + edi * 8 + 0x68);
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    eax = edx + edi * 8 + 0x64;
    if (CMP_A(_fa, _fb)) goto loc_0016AFCC; /* ja: above (unsigned >) */

loc_0016AFC9: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 0x44);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AFCC: ;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi + 1;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B086(); return; } /* je: equal / zero */

loc_0016AFDF: ;
    /* nop */

loc_0016AFE0: ;
    edi = MEM32(edx + ecx * 8 + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016AFEB; /* ja: above (unsigned >) */

loc_0016AFE8: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(edx + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AFEB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B084(); return; } /* jb: below (unsigned <) */

loc_0016AFF3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AFE0; /* jne: not equal / not zero */

loc_0016AFFB: ;
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
 * sub_0016B003
 * Original: 0x0016B003 - 0x0016B01D (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B003(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B003: ;
    ecx = MEM32(edx + 0x34);
    edi = MEM32(edx + 0x48);
    ebp = MEM32(edi + ecx * 8);
    ebx = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B01D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016B014: ;
    edi = esi;
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0016AFB6(); return; /* tail jmp 0x0016AFB6 */

}

/**
 * sub_0016B01D
 * Original: 0x0016B01D - 0x0016B02C (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B01D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B01D: ;
    ebx = MEM32(edx + 0x38);

loc_0016B020: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = esi;
    _fb = (uint32_t)(MEM32(edi + ecx * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(edi + ecx * 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B020; /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_0016B02C(); return; /* fallthrough 0x0016B02C */

}

/**
 * sub_0016B02C
 * Original: 0x0016B02C - 0x0016B084 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B02C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B02C: ;
    ebp = MEM32(edx + 0x48);
    esi = MEM32(ebp + ecx * 8 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    eax = ebp + ecx * 8;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0016B04A; /* ja: above (unsigned >) */

loc_0016B043: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;

loc_0016B04A: ;
    edi = MEM32(edx + 0x34);
    ebx = MEM32(edx + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B086(); return; } /* je: equal / zero */

loc_0016B05A: ;
    /* nop */

loc_0016B060: ;
    esi = MEM32(ebp + ecx * 8 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B06B; /* ja: above (unsigned >) */

loc_0016B068: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B06B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B084(); return; } /* jb: below (unsigned <) */

loc_0016B071: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B060; /* jne: not equal / not zero */

loc_0016B078: ;
    eax = MEM32(esp + 0x14);
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
 * sub_0016B084
 * Original: 0x0016B084 - 0x0016B086 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016B084(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B084: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0016B086(); return; /* fallthrough 0x0016B086 */

}

/**
 * sub_0016B086
 * Original: 0x0016B086 - 0x0016B08E (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B086(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B086: ;
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
 * sub_0016B090
 * Original: 0x0016B090 - 0x0016B0C2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B090: ;
    eax = MEM32(ecx + 0x1C20);
    eax = MEM32(eax + 0x44);
    edx = MEM32(ecx + 0x24);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B0C2(); return; } /* jb: below (unsigned <) */

loc_0016B0A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B0C2(); return; } /* jae: above or equal (unsigned >=) */

loc_0016B0AC: ;
    edi = MEM32(ecx);
    esi = MEM32(ecx + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B0C2
 * Original: 0x0016B0C2 - 0x0016B104 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B0C2: ;
    esi = MEM32(ecx + 0x40);
    eax = MEM32(ecx + 0x934);
    eax = MEM32(eax + 0x400B10);
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x60);
    edi = esi;
    eax = eax & 0x7FFFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B104(); return; } /* jb: below (unsigned <) */

loc_0016B0F2: ;
    if (CMP_NE(_fa, _fb)) goto loc_0016B0F9; /* jne: not equal / not zero */

loc_0016B0F4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B104(); return; } /* ja: above (unsigned >) */

loc_0016B0F9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B104
 * Original: 0x0016B104 - 0x0016B10A (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B104(void)
{

loc_0016B104: ;
    eax = MEM32(ecx + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B110
 * Original: 0x0016B110 - 0x0016B129 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B110: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B143(); return; } /* je: equal / zero */

loc_0016B11D: ;
    edx = MEM32(esi + 0x934);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    g_seh_ebp = ebp; sub_0016B130(); return; /* tail jmp 0x0016B130 */

}

/**
 * sub_0016B130
 * Original: 0x0016B130 - 0x0016B143 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B130: ;
    eax = MEM32(edx + 0x400B10);
    ecx = MEM32(edi);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B130; /* jne: not equal / not zero */

loc_0016B142: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0016B143(); return; /* fallthrough 0x0016B143 */

}

/**
 * sub_0016B143
 * Original: 0x0016B143 - 0x0016B172 (47 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B143(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B143: ;
    edx = MEM32(esi + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(esi + 0x24);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B15D; /* jb: below (unsigned <) */

loc_0016B158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B187(); return; } /* jb: below (unsigned <) */

loc_0016B15D: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B172(); return; } /* jne: not equal / not zero */

loc_0016B16C: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B172
 * Original: 0x0016B172 - 0x0016B182 (16 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B172: ;
    PUSH32(esp, 0x0016B177u); RECOMP_ABI_CALL(0x0016AF90u, sub_0016AF90); /* call 0x0016AF90 */

loc_0016B177: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B182(); return; } /* je: equal / zero */

loc_0016B17B: ;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B182
 * Original: 0x0016B182 - 0x0016B187 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B182(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B182: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0016B187(); return; /* fallthrough 0x0016B187 */

}

/**
 * sub_0016B187
 * Original: 0x0016B187 - 0x0016B18B (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B187(void)
{

loc_0016B187: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B190
 * Original: 0x0016B190 - 0x0016B1BD (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B190: ;
    eax = MEM32(0x180E48);
    eax = MEM32(eax + 0x1C28);
    (void)0; /* sfence: cache/ordering hint, nothing to model */
    ecx = MEM32(eax + 0x100410);
    ecx = ecx | 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = ecx;

loc_0016B1B0: ;
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B1B0; /* jne: not equal / not zero */

loc_0016B1BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B1C0
 * Original: 0x0016B1C0 - 0x0016B1DE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016B1C0: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(ecx);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 4)));
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B1E0
 * Original: 0x0016B1E0 - 0x0016B24B (107 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B1F3; /* jb: below (unsigned <) */

loc_0016B1EE: ;
    PUSH32(esp, 0x0016B1F3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016B1F3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0x81D8C;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0016B226; /* jne: not equal / not zero */

loc_0016B20F: ;
    MEM32(eax + 0xC) = 0x40100;
    MEM32(eax + 0x10) = 6;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0016B226: ;
    MEM32(eax + 0xC) = 0x40110;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x40100;
    MEM32(eax + 0x18) = 7;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016B250
 * Original: 0x0016B250 - 0x0016B26B (27 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B250: ;
    ecx = MEM32(0x180E48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B25Du); RECOMP_ABI_CALL(0x00171880u, sub_00171880); /* call 0x00171880 */

loc_0016B25D: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0016B770(); return; /* tail jmp 0x0016B770 */

}

/**
 * sub_0016B270
 * Original: 0x0016B270 - 0x0016B27F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B270(void)
{

loc_0016B270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x180E48);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B280
 * Original: 0x0016B280 - 0x0016B2C4 (68 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016B280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B280: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x180E48);
    if (TEST_Z(_fa, _fb)) goto loc_0016B295; /* je: equal / zero */

loc_0016B28E: ;
    ecx = MEM32(ecx + 0x30);
    edx = MEM32(ecx);
    goto loc_0016B2B4;

loc_0016B295: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0016B2BF; /* je: equal / zero */

loc_0016B29A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0016B2AC; /* je: equal / zero */

loc_0016B29F: ;
    edx = MEM32(ecx + 0x30);
    edx = MEM32(edx);
    eax = MEM32(ecx + 0x1A00);
    goto loc_0016B2B4;

loc_0016B2AC: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax);
    eax = MEM32(ecx + 0x2C);

loc_0016B2B4: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016B2BF; /* jle: less or equal (signed <=) */

loc_0016B2BA: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

loc_0016B2BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B2D0
 * Original: 0x0016B2D0 - 0x0016B2E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B2E2(); return; } /* je: equal / zero */

loc_0016B2DA: ;
    edx = MEM32(esi + 0x770);
    g_seh_ebp = ebp; sub_0016B2E4(); return; /* tail jmp 0x0016B2E4 */

}

/**
 * sub_0016B2E2
 * Original: 0x0016B2E2 - 0x0016B2E4 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B2E2: ;
    edx = MEM32(esi);

    g_seh_ebp = ebp; sub_0016B2E4(); return; /* fallthrough 0x0016B2E4 */

}

/**
 * sub_0016B2E4
 * Original: 0x0016B2E4 - 0x0016B346 (98 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B2E4: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B346(); return; } /* jne: not equal / not zero */

loc_0016B2E9: ;
    eax = MEM32(0x180E48);
    eax = MEM32(eax + 0x1C28);
    (void)0; /* sfence: cache/ordering hint, nothing to model */
    ecx = MEM32(eax + 0x100410);
    ecx = ecx | 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = ecx;
    /* nop */

loc_0016B310: ;
    /* HOST_GPU_PROGRESS_WAIT: block on executor progress, retaining real ack. */
    if (MEM32(eax + 0x100410) & 0x10000u) {
        extern void xbox_Nv2aWaitProgress(void);
        xbox_Nv2aWaitProgress();
    }
    { /* GPU BUSY-WAIT SHIM (iter-10): clear the NV2A kick/busy bit the software
       * executor never writes back, so this per-frame match-render wait completes
       * instead of spinning forever. Reversible: RECOMP_GPU_BUSYWAIT_SHIM=0 restores
       * the real wait. See recomp_manual.c. */
      extern int recomp_gpu_busywait_shim(void);
      if (recomp_gpu_busywait_shim()) MEM32(eax + 0x100410) &= ~0x10000u; }
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B310; /* jne: not equal / not zero */

loc_0016B31C: ;
    ecx = MEM32(esi + 0x1C20);
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = edx;
    eax = MEM32(0x1809A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B37E(); return; } /* je: equal / zero */

loc_0016B334: ;
    PUSH32(esp, 0x0016B339u); RECOMP_ABI_CALL(0x00164F80u, sub_00164F80); /* call 0x00164F80 */

loc_0016B339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B334; /* jne: not equal / not zero */

loc_0016B33D: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x2000;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B346
 * Original: 0x0016B346 - 0x0016B37E (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B346: ;
    eax = MEM32(esi);
    ecx = 0x180990;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C20) = ecx;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = eax;
    edx = MEM32(esi + 0x1C20);
    MEM32(edx + 0x44) = eax;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x2478);
    MEM32(esi + 0x1DE4) = edx;

    g_seh_ebp = ebp; sub_0016B37E(); return; /* fallthrough 0x0016B37E */

}

/**
 * sub_0016B37E
 * Original: 0x0016B37E - 0x0016B380 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B37E(void)
{

loc_0016B37E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B380
 * Original: 0x0016B380 - 0x0016B3EB (107 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B380: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0016B390; /* je: equal / zero */

loc_0016B388: ;
    esi = MEM32(ecx + 0x770);
    goto loc_0016B392;

loc_0016B390: ;
    esi = MEM32(ecx);

loc_0016B392: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B3E9; /* jne: not equal / not zero */

loc_0016B397: ;
    eax = MEM32(0x180E48);
    eax = MEM32(eax + 0x1C28);
    (void)0; /* sfence: cache/ordering hint, nothing to model */
    edx = MEM32(eax + 0x100410);
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = edx;
    goto loc_0016B3C0;

    /* nop */

loc_0016B3C0: ;
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B3C0; /* jne: not equal / not zero */

loc_0016B3CC: ;
    ecx = MEM32(ecx + 0x1C20);
    esi = esi & 0xFFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = esi;
    goto loc_0016B3E0;

    /* nop */

loc_0016B3E0: ;
    PUSH32(esp, 0x0016B3E5u); RECOMP_ABI_CALL(0x00164F80u, sub_00164F80); /* call 0x00164F80 */

loc_0016B3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B3E0; /* jne: not equal / not zero */

loc_0016B3E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B3F0
 * Original: 0x0016B3F0 - 0x0016B4A8 (184 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B3F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0016B404; /* jb: below (unsigned <) */

loc_0016B3FF: ;
    PUSH32(esp, 0x0016B404u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016B404: ;
    edi = MEM32(esi + 0x2C);
    MEM32(eax) = 0x4A310;
    edx = edi;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax * 8;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esi + 0x40);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x41D70;
    MEM32(eax + 0xC) = edi;
    ecx = 0x41D90;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0;
    ecx = eax + 0x20;
    MEM32(esi) = ecx;
    ecx = edi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi + ecx * 8 + 0x64) = edi;
    MEM32(esi + ecx * 8 + 0x68) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0016B485; /* je: equal / zero */

loc_0016B469: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x34);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(esi + 0x48);
    MEM32(esi + 0x34) = ecx;
    MEM32(ebp + ecx * 8) = edi;
    ebp = MEM32(esi + 0x48);
    MEM32(ebp + ecx * 8 + 4) = eax;
    POP32(esp, ebp);

loc_0016B485: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x2C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016B4A1; /* jne: not equal / not zero */

loc_0016B49A: ;
    ecx = esi;
    PUSH32(esp, 0x0016B4A1u); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_0016B4A1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B4B0
 * Original: 0x0016B4B0 - 0x0016B5F8 (328 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B4B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x2C);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016B5F3; /* jae: above or equal (unsigned >=) */

loc_0016B4D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B4DF; /* jne: not equal / not zero */

loc_0016B4D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B4DFu); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_0016B4DF: ;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x0016B4E7u); RECOMP_ABI_CALL(0x0016AF90u, sub_0016AF90); /* call 0x0016AF90 */

loc_0016B4E7: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5F2; /* je: equal / zero */

loc_0016B4F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B4F9u); RECOMP_ABI_CALL(0x0016B110u, sub_0016B110); /* call 0x0016B110 */

loc_0016B4F9: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B502; /* ja: above (unsigned >) */

loc_0016B4FF: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B502: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B50C; /* ja: above (unsigned >) */

loc_0016B509: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B50C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    if ((_fas < 0)) goto loc_0016B5BB; /* js: sign (negative) */

loc_0016B519: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2400 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B5BB; /* jb: below (unsigned <) */

loc_0016B525: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B55A; /* je: equal / zero */

loc_0016B52F: ;
    (void)0; /* emms - empty MMX state */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = MEM32(esi + 0x19FC); PUSH32(esp, 0x0016B53Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016B538u); } /* indirect call */
    }

loc_0016B53E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B549u); RECOMP_ABI_CALL(0x0016B110u, sub_0016B110); /* call 0x0016B110 */

loc_0016B549: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x0016B553u); RECOMP_ABI_CALL(0x0016ACB0u, sub_0016ACB0); /* call 0x0016ACB0 */

loc_0016B553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B5BB; /* jb: below (unsigned <) */

loc_0016B55A: ;
    edi = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    MEM32(esi + 0x1DD0) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0016B574; /* jne: not equal / not zero */

loc_0016B56A: ;
    MEM32(edi + 0x10) = 0x40110;
    MEM32(edi + 0x14) = eax;

loc_0016B574: ;
    MEM32(edi + 0x18) = 0x40100;
    MEM32(edi + 0x1C) = 5;
    PUSH32(esp, 0x0016B587u); RECOMP_ABI_CALL(0x0016B190u, sub_0016B190); /* call 0x0016B190 */

loc_0016B587: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B58Fu); RECOMP_ABI_CALL(0x0016B110u, sub_0016B110); /* call 0x0016B110 */

loc_0016B58F: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x0016B599u); RECOMP_ABI_CALL(0x0016ACB0u, sub_0016ACB0); /* call 0x0016ACB0 */

loc_0016B599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B5F8(); return; } /* jae: above or equal (unsigned >=) */

loc_0016B5A0: ;
    eax = 0x40100;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0x0016B5B8u); RECOMP_ABI_CALL(0x0016B190u, sub_0016B190); /* call 0x0016B190 */

loc_0016B5B8: ;
    edi = MEM32(ebp);

loc_0016B5BB: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5DD; /* je: equal / zero */

loc_0016B5C5: ;
    (void)0; /* emms - empty MMX state */
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = MEM32(esi + 0x19FC); PUSH32(esp, 0x0016B5DAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016B5D4u); } /* indirect call */
    }

loc_0016B5DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B5DD: ;
    edx = MEM32(esi + 0x30);
    esi = MEM32(esi + 0x2C);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016B5E7: ;
    ecx = MEM32(edx);
    edi = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B5E7; /* jb: below (unsigned <) */

loc_0016B5F1: ;
    POP32(esp, ebx);

loc_0016B5F2: ;
    POP32(esp, ebp);

loc_0016B5F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B5F8
 * Original: 0x0016B5F8 - 0x0016B61A (34 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B5F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B5F8: ;
    /* HOST_GPU_FENCE_WAIT: the host executor retires real releases, but does
     * not deliver XDK software-method 5's interrupt. Wait for this fence
     * cooperatively instead of sleeping on the unsupported GPU event. */
    {
        extern void xbox_Nv2aWaitProgress(void);
        uint32_t target = MEM32(ebp);
        uint32_t semaphore = MEM32(esi + 0x30);
        while ((int32_t)(MEM32(semaphore) - target) < 0)
            xbox_Nv2aWaitProgress();
        goto loc_0016B613;
    }
    edi = MEM32(0x22BC60);
    _fb = (uint32_t)(0x1DCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1DCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B604: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0016B60Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B60Du); } /* indirect call */
    }

loc_0016B60F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B604; /* jne: not equal / not zero */

loc_0016B613: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B620
 * Original: 0x0016B620 - 0x0016B655 (53 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B655(); return; } /* je: equal / zero */

loc_0016B62F: ;
    eax = MEM32(esi + 0x764);
    edi = MEM32(eax + 4);
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x768);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x768) = edx;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B655
 * Original: 0x0016B655 - 0x0016B741 (236 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B655: ;
    edi = MEM32(esi);
    edx = MEM32(esi + 0x30);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = edi + ebx;
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0016B674u); RECOMP_ABI_CALL(0x0016B090u, sub_0016B090); /* call 0x0016B090 */

loc_0016B674: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B6C4; /* jb: below (unsigned <) */

loc_0016B681: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016B6C0; /* jbe: below or equal (unsigned <=) */

loc_0016B68B: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x44) = edx;
    edx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016B6B1; /* jbe: below or equal (unsigned <=) */

loc_0016B6AB: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B6B1: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B6BB; /* jne: not equal / not zero */

loc_0016B6B8: ;
    eax = edi + 4;

loc_0016B6BB: ;
    ecx = edi + ebx;
    MEM32(esi) = edi;

loc_0016B6C0: ;
    MEM32(esp + 0x1C) = ecx;

loc_0016B6C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016B714; /* jae: above or equal (unsigned >=) */

loc_0016B6C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B714; /* ja: above (unsigned >) */

loc_0016B6CE: ;
    ebx = MEM32(0x183614);
    eax = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x38);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B6E1: ;
    ecx = MEM32(edx + eax * 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edx + eax * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016B6F6; /* jae: above or equal (unsigned >=) */

loc_0016B6F3: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B6F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016B708; /* jbe: below or equal (unsigned <=) */

loc_0016B6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B708; /* je: equal / zero */

loc_0016B6FF: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 8), ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B6E1; /* ja: above (unsigned >) */

loc_0016B708: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016B714u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B714: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFFDFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFDFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B741(); return; } /* je: equal / zero */

loc_0016B72A: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0016B739u); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_0016B739: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B741
 * Original: 0x0016B741 - 0x0016B757 (22 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B741(void)
{

loc_0016B741: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0016B748u); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_0016B748: ;
    ecx = esi;
    PUSH32(esp, 0x0016B74Fu); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_0016B74F: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B760
 * Original: 0x0016B760 - 0x0016B76F (15 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B760: ;
    eax = MEM32(0x183610);
    PUSH32(esp, eax);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B76Eu); RECOMP_ABI_CALL(0x0016B620u, sub_0016B620); /* call 0x0016B620 */

loc_0016B76E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B770
 * Original: 0x0016B770 - 0x0016B7B4 (68 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B770: ;
    ecx = MEM32(0x180E48);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = eax + esi * 4;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016B7B0; /* jb: below (unsigned <) */

loc_0016B78D: ;
    eax = MEM32(0x183610);
    edx = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi * 4 + 0x204;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016B7A3; /* jbe: below or equal (unsigned <=) */

loc_0016B7A1: ;
    eax = ecx;

loc_0016B7A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016B7A9; /* jbe: below or equal (unsigned <=) */

loc_0016B7A7: ;
    edx = ecx;

loc_0016B7A9: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B7B0u); RECOMP_ABI_CALL(0x0016B620u, sub_0016B620); /* call 0x0016B620 */

loc_0016B7B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B7C0
 * Original: 0x0016B7C0 - 0x0016B7D1 (17 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B7C0(void)
{

loc_0016B7C0: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B7D0u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B7D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B7E0
 * Original: 0x0016B7E0 - 0x0016B824 (68 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B7E0: ;
    eax = MEM32(0x180E48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B855(); return; } /* je: equal / zero */

loc_0016B7E9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B826(); return; } /* jne: not equal / not zero */

loc_0016B7FE: ;
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B826(); return; } /* je: equal / zero */

loc_0016B805: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B80Bu); RECOMP_ABI_CALL(0x001607F0u, sub_001607F0); /* call 0x001607F0 */

loc_0016B80B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B824(); return; } /* je: equal / zero */

loc_0016B80F: ;
    edx = MEM32(0x180E48);
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B820u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B820: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
