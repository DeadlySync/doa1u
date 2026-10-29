/**
 * DOAU1 - Recompiled code chunk 42
 * Functions: 250 (0x00159DAD - 0x0015F950)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00159DAD
 * Original: 0x00159DAD - 0x00159DBB (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159DAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00159DBB(); return; } /* jne: not equal / not zero */

loc_00159DB1: ;
    MEM32(ebp + -80) = 1;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_00159DBB(); return; /* fallthrough 0x00159DBB */

}

/**
 * sub_00159DBB
 * Original: 0x00159DBB - 0x00159DC5 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159DBB: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00159DC5(); return; } /* jle: less or equal (signed <=) */

loc_00159DC1: ;
    MEM8(ebp + -50) = 1;

    g_seh_ebp = ebp; sub_00159DC5(); return; /* fallthrough 0x00159DC5 */

}

/**
 * sub_00159DC5
 * Original: 0x00159DC5 - 0x00159DE0 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159DC5: ;
    edi = MEM32(ebp + -84);
    ebx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00159DE0(); return; } /* je: equal / zero */

loc_00159DD3: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x00159DDEu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_00159DDE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_00159DE0(); return; /* fallthrough 0x00159DE0 */

}

/**
 * sub_00159DE0
 * Original: 0x00159DE0 - 0x00159EAD (205 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159DE0: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159DF4; /* je: equal / zero */

loc_00159DE6: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0ED(); return; } /* je: equal / zero */

loc_00159DF4: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00159DFFu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159DFF: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0DA(); return; } /* je: equal / zero */

loc_00159E0B: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159E54; /* je: equal / zero */

loc_00159E11: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x73 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159E26; /* jne: not equal / not zero */

loc_00159E17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159E21; /* jl: less (signed <) */

loc_00159E1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159E26; /* jle: less or equal (signed <=) */

loc_00159E21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159E54; /* jne: not equal / not zero */

loc_00159E26: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0DA(); return; } /* jne: not equal / not zero */

loc_00159E30: ;
    ecx = eax;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + -96);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + -73);
    ecx = ecx ^ esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0DA(); return; } /* je: equal / zero */

loc_00159E54: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0D4(); return; } /* jne: not equal / not zero */

loc_00159E5E: ;
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A0C9(); return; } /* je: equal / zero */

loc_00159E68: ;
    MEM8(ebp + -100) = LO8(eax);
    eax = ZX8(LO8(eax));
    ecx = MEM32(0x2FD3C0);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159E89; /* je: equal / zero */

loc_00159E7B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00159E86u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159E86: ;
    MEM8(ebp + -99) = LO8(eax);

loc_00159E89: ;
    PUSH32(esp, MEM32(0x2FD3D0));
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159E9Cu); RECOMP_ABI_CALL(0x0015BF64u, sub_0015BF64); /* call 0x0015BF64 */

loc_00159E9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebp + -108));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015A0CC(); return; /* tail jmp 0x0015A0CC */

}

/**
 * sub_00159EAD
 * Original: 0x00159EAD - 0x00159ED7 (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159EAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159EAD: ;
    eax = ecx;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015A126(); return; } /* je: equal / zero */

loc_00159EB8: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00159DBB(); return; } /* je: equal / zero */

loc_00159EC1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015A12A(); return; } /* je: equal / zero */

loc_00159EC9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00159BB3(); return; } /* je: equal / zero */

loc_00159ED2: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00159F00(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00159ED7(); return; /* fallthrough 0x00159ED7 */

}

/**
 * sub_00159ED7
 * Original: 0x00159ED7 - 0x00159EDF (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159ED7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159ED7: ;
    eax = ZX8(MEM8(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00159EE8(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00159EDF(); return; /* fallthrough 0x00159EDF */

}

/**
 * sub_00159EDF
 * Original: 0x00159EDF - 0x00159EE8 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159EDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159EDF: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    g_seh_ebp = ebp; sub_0015A421(); return; /* tail jmp 0x0015A421 */

}

/**
 * sub_00159EE8
 * Original: 0x00159EE8 - 0x00159F00 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159EE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159EE8: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) - 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_00159EF5: ;
    eax = MEM32(ebp + -124);
    MEM32(ebp + 0x10) = eax;
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

}

/**
 * sub_00159F00
 * Original: 0x00159F00 - 0x0015A016 (278 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159F00: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159F0A; /* jle: less or equal (signed <=) */

loc_00159F06: ;
    MEM8(ebp + -50) = 1;

loc_00159F0A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    esi = edi;
    MEM32(ebp + -120) = esi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F22; /* jne: not equal / not zero */

loc_00159F18: ;
    esi = edi + 1;
    MEM32(ebp + -120) = esi;
    MEM8(ebp + -73) = 0xFF;

loc_00159F22: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F6F; /* jne: not equal / not zero */

loc_00159F28: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    PUSH32(esp, 0x00159F34u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_00159F34: ;
    MEM32(ebp + -24) = esp;
    eax = esp;
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00159F6F;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F61; /* jne: not equal / not zero */

loc_00159F58: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0015A451(); return; /* tail jmp 0x0015A451 */

loc_00159F61: ;
    MEM32(ebp + -112) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);

loc_00159F6F: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F8F; /* jne: not equal / not zero */

loc_00159F81: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F8F; /* jne: not equal / not zero */

loc_00159F86: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00159FF6;

loc_00159F8F: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00159FF6;

loc_00159F94: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159FDE; /* jne: not equal / not zero */

loc_00159F99: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159FDE; /* je: equal / zero */

loc_00159F9D: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159FDE; /* je: equal / zero */

loc_00159FA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00159FAD; /* jae: above or equal (unsigned >=) */

loc_00159FA9: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00159FB1;

loc_00159FAD: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00159FB1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00159FDA; /* ja: above (unsigned >) */

loc_00159FB5: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00159FC2: ;
    eax = edi;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00159FC2; /* jne: not equal / not zero */

loc_00159FDA: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00159FF6;

loc_00159FDE: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00159FF6: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F94; /* jne: not equal / not zero */

loc_00159FFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A004: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00159DC5(); return; } /* jne: not equal / not zero */

loc_0015A00E: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_00159DC5(); return; /* tail jmp 0x00159DC5 */

}

/**
 * sub_00159F42
 * Original: 0x00159F42 - 0x00159F46 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F42(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159F42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00159F46
 * Original: 0x00159F46 - 0x0015A016 (208 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159F46: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00159F50u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00159F50: ;
    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F61; /* jne: not equal / not zero */

loc_00159F58: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0015A451(); return; /* tail jmp 0x0015A451 */

loc_00159F61: ;
    MEM32(ebp + -112) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F8F; /* jne: not equal / not zero */

loc_00159F81: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F8F; /* jne: not equal / not zero */

loc_00159F86: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00159FF6;

loc_00159F8F: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00159FF6;

loc_00159F94: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159FDE; /* jne: not equal / not zero */

loc_00159F99: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159FDE; /* je: equal / zero */

loc_00159F9D: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159FDE; /* je: equal / zero */

loc_00159FA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00159FAD; /* jae: above or equal (unsigned >=) */

loc_00159FA9: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00159FB1;

loc_00159FAD: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00159FB1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00159FDA; /* ja: above (unsigned >) */

loc_00159FB5: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00159FC2: ;
    eax = edi;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00159FC2; /* jne: not equal / not zero */

loc_00159FDA: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00159FF6;

loc_00159FDE: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00159FF6: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159F94; /* jne: not equal / not zero */

loc_00159FFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A004: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00159DC5(); return; } /* jne: not equal / not zero */

loc_0015A00E: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_00159DC5(); return; /* tail jmp 0x00159DC5 */

}

/**
 * sub_0015A016
 * Original: 0x0015A016 - 0x0015A0C9 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A016(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A016: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A039; /* jne: not equal / not zero */

loc_0015A01B: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A02A; /* jne: not equal / not zero */

loc_0015A020: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A02A; /* je: equal / zero */

loc_0015A024: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A039;

loc_0015A02A: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A034u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A034: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0015A039: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A15B(); return; } /* jne: not equal / not zero */

loc_0015A042: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A04Cu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A04C: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A09B; /* je: equal / zero */

loc_0015A056: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A09B; /* je: equal / zero */

loc_0015A05B: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A082; /* je: equal / zero */

loc_0015A068: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A076; /* je: equal / zero */

loc_0015A06E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A076; /* jne: not equal / not zero */

loc_0015A073: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A076: ;
    MEM32(ebp + -56) = 0x6F;
    g_seh_ebp = ebp; sub_0015A15B(); return; /* tail jmp 0x0015A15B */

loc_0015A082: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A093; /* je: equal / zero */

loc_0015A08A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A091u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A091: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A093: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015A158(); return; /* tail jmp 0x0015A158 */

loc_0015A09B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A0A5u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A0A5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A0BD; /* je: equal / zero */

loc_0015A0B0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A0BD; /* jge: greater or equal (signed >=) */

loc_0015A0BA: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A0BD: ;
    MEM32(ebp + -56) = 0x78;
    g_seh_ebp = ebp; sub_0015A15B(); return; /* tail jmp 0x0015A15B */

}

/**
 * sub_0015A01B
 * Original: 0x0015A01B - 0x0015A0C9 (174 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A01B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A01B: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A02A; /* jne: not equal / not zero */

loc_0015A020: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A02A; /* je: equal / zero */

loc_0015A024: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A039;

loc_0015A02A: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A034u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A034: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0015A039: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A15B(); return; } /* jne: not equal / not zero */

loc_0015A042: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A04Cu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A04C: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A09B; /* je: equal / zero */

loc_0015A056: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A09B; /* je: equal / zero */

loc_0015A05B: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A082; /* je: equal / zero */

loc_0015A068: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A076; /* je: equal / zero */

loc_0015A06E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A076; /* jne: not equal / not zero */

loc_0015A073: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A076: ;
    MEM32(ebp + -56) = 0x6F;
    g_seh_ebp = ebp; sub_0015A15B(); return; /* tail jmp 0x0015A15B */

loc_0015A082: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A093; /* je: equal / zero */

loc_0015A08A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A091u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A091: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A093: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015A158(); return; /* tail jmp 0x0015A158 */

loc_0015A09B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A0A5u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A0A5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A0BD; /* je: equal / zero */

loc_0015A0B0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A0BD; /* jge: greater or equal (signed >=) */

loc_0015A0BA: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A0BD: ;
    MEM32(ebp + -56) = 0x78;
    g_seh_ebp = ebp; sub_0015A15B(); return; /* tail jmp 0x0015A15B */

}

/**
 * sub_0015A0C9
 * Original: 0x0015A0C9 - 0x0015A0D4 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A0C9: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_00159DE0(); return; /* tail jmp 0x00159DE0 */

}

/**
 * sub_0015A0CC
 * Original: 0x0015A0CC - 0x0015A0D4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A0CC: ;
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_00159DE0(); return; /* tail jmp 0x00159DE0 */

}

/**
 * sub_0015A0D4
 * Original: 0x0015A0D4 - 0x0015A0DA (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A0D4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00159DE0(); return; /* tail jmp 0x00159DE0 */

}

/**
 * sub_0015A0DA
 * Original: 0x0015A0DA - 0x0015A126 (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A0DA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A0ED; /* je: equal / zero */

loc_0015A0E2: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A0EBu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A0EB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A0ED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A0F5: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A0FF: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* je: equal / zero */

loc_0015A10C: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A11E; /* je: equal / zero */

loc_0015A115: ;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

loc_0015A11E: ;
    MEM8(eax) = 0;
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

}

/**
 * sub_0015A0ED
 * Original: 0x0015A0ED - 0x0015A126 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A0ED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A0F5: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A0FF: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* je: equal / zero */

loc_0015A10C: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A11E; /* je: equal / zero */

loc_0015A115: ;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

loc_0015A11E: ;
    MEM8(eax) = 0;
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

}

/**
 * sub_0015A126
 * Original: 0x0015A126 - 0x0015A12A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A126(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A126: ;
    MEM8(ebp + -42) = 1;

    g_seh_ebp = ebp; sub_0015A12A(); return; /* fallthrough 0x0015A12A */

}

/**
 * sub_0015A12A
 * Original: 0x0015A12A - 0x0015A3A1 (631 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A12A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A12A: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A138; /* jne: not equal / not zero */

loc_0015A132: ;
    MEM8(ebp + -51) = 1;
    goto loc_0015A13D;

loc_0015A138: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A15B; /* jne: not equal / not zero */

loc_0015A13D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A14C; /* jne: not equal / not zero */

loc_0015A142: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A14C; /* je: equal / zero */

loc_0015A146: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A15B;

loc_0015A14C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A156u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A156: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0015A15B: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A292; /* je: equal / zero */

loc_0015A165: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A270; /* jne: not equal / not zero */

loc_0015A16F: ;
    edi = 0x80;

loc_0015A174: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A17A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A180: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A195; /* jle: less or equal (signed <=) */

loc_0015A189: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A191u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A191: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1A1;

loc_0015A195: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1A5: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A1C5; /* jne: not equal / not zero */

loc_0015A1AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A21D; /* jge: greater or equal (signed >=) */

loc_0015A1B0: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A220;

loc_0015A1C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0015A1D4u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0015A1D4: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_0015A220;

loc_0015A1DC: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A1F0; /* jle: less or equal (signed <=) */

loc_0015A1E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A1ECu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A1EC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1FB;

loc_0015A1F0: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1FF: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x0015A219u); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A219: ;
    ebx = eax;
    goto loc_0015A220;

loc_0015A21D: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A220: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A252; /* jne: not equal / not zero */

loc_0015A226: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A244; /* je: equal / zero */

loc_0015A239: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A244; /* jne: not equal / not zero */

loc_0015A23E: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A263;

loc_0015A244: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A24Eu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A24E: ;
    ebx = eax;
    goto loc_0015A263;

loc_0015A252: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A263; /* je: equal / zero */

loc_0015A25A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A261u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A261: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A263: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A174; /* je: equal / zero */

loc_0015A26D: ;
    MEM32(ebp + -48) = ebx;

loc_0015A270: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A27A: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A37E;

loc_0015A292: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A375; /* jne: not equal / not zero */

loc_0015A29C: ;
    edi = 0x80;

loc_0015A2A1: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2AD: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A2C2; /* jle: less or equal (signed <=) */

loc_0015A2B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A2BEu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A2BE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A2CE;

loc_0015A2C2: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A2D2: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A2E3; /* jne: not equal / not zero */

loc_0015A2D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A322; /* jge: greater or equal (signed >=) */

loc_0015A2DD: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0015A325;

loc_0015A2E3: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_0015A325;

loc_0015A2F0: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A304; /* jle: less or equal (signed <=) */

loc_0015A2F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A300u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A300: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A30F;

loc_0015A304: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A313: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x0015A31Eu); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A31E: ;
    ebx = eax;
    goto loc_0015A325;

loc_0015A322: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A325: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A357; /* jne: not equal / not zero */

loc_0015A32B: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A349; /* je: equal / zero */

loc_0015A33E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A349; /* jne: not equal / not zero */

loc_0015A343: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A368;

loc_0015A349: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A353u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A353: ;
    ebx = eax;
    goto loc_0015A368;

loc_0015A357: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A368; /* je: equal / zero */

loc_0015A35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A366u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A366: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A368: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2A1; /* je: equal / zero */

loc_0015A372: ;
    MEM32(ebp + -48) = ebx;

loc_0015A375: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A37B: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -64)));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015A37E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A388; /* jne: not equal / not zero */

loc_0015A384: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A388: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A392: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A398: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

    g_seh_ebp = ebp; sub_0015A3A1(); return; /* fallthrough 0x0015A3A1 */

}

/**
 * sub_0015A13D
 * Original: 0x0015A13D - 0x0015A3A1 (612 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A13D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A13D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A14C; /* jne: not equal / not zero */

loc_0015A142: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A14C; /* je: equal / zero */

loc_0015A146: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A15B;

loc_0015A14C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A156u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A156: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0015A15B: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A292; /* je: equal / zero */

loc_0015A165: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A270; /* jne: not equal / not zero */

loc_0015A16F: ;
    edi = 0x80;

loc_0015A174: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A17A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A180: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A195; /* jle: less or equal (signed <=) */

loc_0015A189: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A191u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A191: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1A1;

loc_0015A195: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1A5: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A1C5; /* jne: not equal / not zero */

loc_0015A1AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A21D; /* jge: greater or equal (signed >=) */

loc_0015A1B0: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A220;

loc_0015A1C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0015A1D4u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0015A1D4: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_0015A220;

loc_0015A1DC: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A1F0; /* jle: less or equal (signed <=) */

loc_0015A1E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A1ECu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A1EC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1FB;

loc_0015A1F0: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1FF: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x0015A219u); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A219: ;
    ebx = eax;
    goto loc_0015A220;

loc_0015A21D: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A220: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A252; /* jne: not equal / not zero */

loc_0015A226: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A244; /* je: equal / zero */

loc_0015A239: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A244; /* jne: not equal / not zero */

loc_0015A23E: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A263;

loc_0015A244: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A24Eu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A24E: ;
    ebx = eax;
    goto loc_0015A263;

loc_0015A252: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A263; /* je: equal / zero */

loc_0015A25A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A261u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A261: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A263: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A174; /* je: equal / zero */

loc_0015A26D: ;
    MEM32(ebp + -48) = ebx;

loc_0015A270: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A27A: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A37E;

loc_0015A292: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A375; /* jne: not equal / not zero */

loc_0015A29C: ;
    edi = 0x80;

loc_0015A2A1: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2AD: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A2C2; /* jle: less or equal (signed <=) */

loc_0015A2B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A2BEu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A2BE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A2CE;

loc_0015A2C2: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A2D2: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A2E3; /* jne: not equal / not zero */

loc_0015A2D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A322; /* jge: greater or equal (signed >=) */

loc_0015A2DD: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0015A325;

loc_0015A2E3: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_0015A325;

loc_0015A2F0: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A304; /* jle: less or equal (signed <=) */

loc_0015A2F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A300u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A300: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A30F;

loc_0015A304: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A313: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x0015A31Eu); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A31E: ;
    ebx = eax;
    goto loc_0015A325;

loc_0015A322: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A325: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A357; /* jne: not equal / not zero */

loc_0015A32B: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A349; /* je: equal / zero */

loc_0015A33E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A349; /* jne: not equal / not zero */

loc_0015A343: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A368;

loc_0015A349: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A353u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A353: ;
    ebx = eax;
    goto loc_0015A368;

loc_0015A357: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A368; /* je: equal / zero */

loc_0015A35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A366u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A366: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A368: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2A1; /* je: equal / zero */

loc_0015A372: ;
    MEM32(ebp + -48) = ebx;

loc_0015A375: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A37B: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -64)));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015A37E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A388; /* jne: not equal / not zero */

loc_0015A384: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A388: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A392: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A398: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

    g_seh_ebp = ebp; sub_0015A3A1(); return; /* fallthrough 0x0015A3A1 */

}

/**
 * sub_0015A158
 * Original: 0x0015A158 - 0x0015A3A1 (585 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A158(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A158: ;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A292; /* je: equal / zero */

loc_0015A165: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A270; /* jne: not equal / not zero */

loc_0015A16F: ;
    edi = 0x80;

loc_0015A174: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A17A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A180: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A195; /* jle: less or equal (signed <=) */

loc_0015A189: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A191u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A191: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1A1;

loc_0015A195: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1A5: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A1C5; /* jne: not equal / not zero */

loc_0015A1AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A21D; /* jge: greater or equal (signed >=) */

loc_0015A1B0: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A220;

loc_0015A1C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0015A1D4u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0015A1D4: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_0015A220;

loc_0015A1DC: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A1F0; /* jle: less or equal (signed <=) */

loc_0015A1E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A1ECu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A1EC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1FB;

loc_0015A1F0: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1FF: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x0015A219u); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A219: ;
    ebx = eax;
    goto loc_0015A220;

loc_0015A21D: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A220: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A252; /* jne: not equal / not zero */

loc_0015A226: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A244; /* je: equal / zero */

loc_0015A239: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A244; /* jne: not equal / not zero */

loc_0015A23E: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A263;

loc_0015A244: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A24Eu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A24E: ;
    ebx = eax;
    goto loc_0015A263;

loc_0015A252: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A263; /* je: equal / zero */

loc_0015A25A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A261u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A261: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A263: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A174; /* je: equal / zero */

loc_0015A26D: ;
    MEM32(ebp + -48) = ebx;

loc_0015A270: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A27A: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A37E;

loc_0015A292: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A375; /* jne: not equal / not zero */

loc_0015A29C: ;
    edi = 0x80;

loc_0015A2A1: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2AD: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A2C2; /* jle: less or equal (signed <=) */

loc_0015A2B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A2BEu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A2BE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A2CE;

loc_0015A2C2: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A2D2: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A2E3; /* jne: not equal / not zero */

loc_0015A2D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A322; /* jge: greater or equal (signed >=) */

loc_0015A2DD: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0015A325;

loc_0015A2E3: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_0015A325;

loc_0015A2F0: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A304; /* jle: less or equal (signed <=) */

loc_0015A2F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A300u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A300: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A30F;

loc_0015A304: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A313: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x0015A31Eu); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A31E: ;
    ebx = eax;
    goto loc_0015A325;

loc_0015A322: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A325: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A357; /* jne: not equal / not zero */

loc_0015A32B: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A349; /* je: equal / zero */

loc_0015A33E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A349; /* jne: not equal / not zero */

loc_0015A343: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A368;

loc_0015A349: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A353u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A353: ;
    ebx = eax;
    goto loc_0015A368;

loc_0015A357: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A368; /* je: equal / zero */

loc_0015A35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A366u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A366: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A368: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2A1; /* je: equal / zero */

loc_0015A372: ;
    MEM32(ebp + -48) = ebx;

loc_0015A375: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A37B: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -64)));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015A37E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A388; /* jne: not equal / not zero */

loc_0015A384: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A388: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A392: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A398: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

    g_seh_ebp = ebp; sub_0015A3A1(); return; /* fallthrough 0x0015A3A1 */

}

/**
 * sub_0015A15B
 * Original: 0x0015A15B - 0x0015A3A1 (582 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A15B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A15B: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A292; /* je: equal / zero */

loc_0015A165: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A270; /* jne: not equal / not zero */

loc_0015A16F: ;
    edi = 0x80;

loc_0015A174: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A17A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1DC; /* je: equal / zero */

loc_0015A180: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A195; /* jle: less or equal (signed <=) */

loc_0015A189: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A191u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A191: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1A1;

loc_0015A195: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1A5: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A1C5; /* jne: not equal / not zero */

loc_0015A1AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A21D; /* jge: greater or equal (signed >=) */

loc_0015A1B0: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A220;

loc_0015A1C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0015A1D4u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0015A1D4: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_0015A220;

loc_0015A1DC: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A1F0; /* jle: less or equal (signed <=) */

loc_0015A1E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A1ECu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A1EC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A1FB;

loc_0015A1F0: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A21D; /* je: equal / zero */

loc_0015A1FF: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x0015A219u); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A219: ;
    ebx = eax;
    goto loc_0015A220;

loc_0015A21D: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A220: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A252; /* jne: not equal / not zero */

loc_0015A226: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A244; /* je: equal / zero */

loc_0015A239: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A244; /* jne: not equal / not zero */

loc_0015A23E: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A263;

loc_0015A244: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A24Eu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A24E: ;
    ebx = eax;
    goto loc_0015A263;

loc_0015A252: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A263; /* je: equal / zero */

loc_0015A25A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A261u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A261: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A263: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A174; /* je: equal / zero */

loc_0015A26D: ;
    MEM32(ebp + -48) = ebx;

loc_0015A270: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A27A: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_0015A37E;

loc_0015A292: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A375; /* jne: not equal / not zero */

loc_0015A29C: ;
    edi = 0x80;

loc_0015A2A1: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2F0; /* je: equal / zero */

loc_0015A2AD: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A2C2; /* jle: less or equal (signed <=) */

loc_0015A2B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A2BEu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A2BE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A2CE;

loc_0015A2C2: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A2D2: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A2E3; /* jne: not equal / not zero */

loc_0015A2D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A322; /* jge: greater or equal (signed >=) */

loc_0015A2DD: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0015A325;

loc_0015A2E3: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_0015A325;

loc_0015A2F0: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015A304; /* jle: less or equal (signed <=) */

loc_0015A2F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A300u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015A300: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015A30F;

loc_0015A304: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A322; /* je: equal / zero */

loc_0015A313: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x0015A31Eu); RECOMP_ABI_CALL(0x00159892u, sub_00159892); /* call 0x00159892 */

loc_0015A31E: ;
    ebx = eax;
    goto loc_0015A325;

loc_0015A322: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A325: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015A357; /* jne: not equal / not zero */

loc_0015A32B: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A349; /* je: equal / zero */

loc_0015A33E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A349; /* jne: not equal / not zero */

loc_0015A343: ;
    MEM8(ebp + -25) = 1;
    goto loc_0015A368;

loc_0015A349: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0015A353u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A353: ;
    ebx = eax;
    goto loc_0015A368;

loc_0015A357: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A368; /* je: equal / zero */

loc_0015A35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A366u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A366: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A368: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2A1; /* je: equal / zero */

loc_0015A372: ;
    MEM32(ebp + -48) = ebx;

loc_0015A375: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A37E; /* je: equal / zero */

loc_0015A37B: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -64)));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015A37E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A388; /* jne: not equal / not zero */

loc_0015A384: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A388: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A392: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_0015A398: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

    g_seh_ebp = ebp; sub_0015A3A1(); return; /* fallthrough 0x0015A3A1 */

}

/**
 * sub_0015A3A1
 * Original: 0x0015A3A1 - 0x0015A3CD (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A3A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A3A1: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A3B4; /* je: equal / zero */

loc_0015A3A7: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_0015A3C1;

loc_0015A3B4: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A3BE; /* je: equal / zero */

loc_0015A3BA: ;
    MEM32(ebx) = eax;
    goto loc_0015A3C1;

loc_0015A3BE: ;
    MEM16(ebx) = LO16(eax);

loc_0015A3C1: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    g_seh_ebp = ebp; sub_0015A435(); return; /* tail jmp 0x0015A435 */

}

/**
 * sub_0015A3C1
 * Original: 0x0015A3C1 - 0x0015A3CD (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A3C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A3C1: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    g_seh_ebp = ebp; sub_0015A435(); return; /* tail jmp 0x0015A435 */

}

/**
 * sub_0015A3CD
 * Original: 0x0015A3CD - 0x0015A451 (132 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A3CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A3CD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x0015A3D8u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A3D8: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A41E; /* jne: not equal / not zero */

loc_0015A3E8: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x2FD3C0);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015A435; /* je: equal / zero */

loc_0015A3F8: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x0015A403u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_0015A403: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A432; /* je: equal / zero */

loc_0015A40E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A41E; /* je: equal / zero */

loc_0015A413: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A41Cu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A41C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A41E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_0015A423: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x0015A42Eu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A42E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0015A451(); return; /* tail jmp 0x0015A451 */

loc_0015A432: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015A435: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992D(); return; } /* jne: not equal / not zero */

loc_0015A43F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* jne: not equal / not zero */

loc_0015A444: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992A(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0015A451(); return; /* fallthrough 0x0015A451 */

}

/**
 * sub_0015A421
 * Original: 0x0015A421 - 0x0015A451 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A421: ;
    if (_flags /* je: equal / zero */) { g_seh_ebp = ebp; sub_0015A451(); return; }

loc_0015A423: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x0015A42Eu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015A42E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0015A451(); return; /* tail jmp 0x0015A451 */

    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992D(); return; } /* jne: not equal / not zero */

loc_0015A43F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* jne: not equal / not zero */

loc_0015A444: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992A(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0015A451(); return; /* fallthrough 0x0015A451 */

}

/**
 * sub_0015A435
 * Original: 0x0015A435 - 0x0015A451 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A435(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A435: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992D(); return; } /* jne: not equal / not zero */

loc_0015A43F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* jne: not equal / not zero */

loc_0015A444: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015992A(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0015A451(); return; /* fallthrough 0x0015A451 */

}

/**
 * sub_0015A451
 * Original: 0x0015A451 - 0x0015A481 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A451(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A451: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A460; /* jne: not equal / not zero */

loc_0015A457: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x0015A45Fu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015A45F: ;
    POP32(esp, ecx);

loc_0015A460: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A475; /* jne: not equal / not zero */

loc_0015A469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A475; /* jne: not equal / not zero */

loc_0015A46D: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A475; /* jne: not equal / not zero */

loc_0015A472: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015A475: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015A480u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015A480: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015A481
 * Original: 0x0015A481 - 0x0015A4B3 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A481(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A481: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 4);
    edx = ~edx;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015A4A9; /* je: equal / zero */

loc_0015A4A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015A4A3: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A4A0; /* jne: not equal / not zero */

loc_0015A4A9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015A4A3; /* jl: less (signed <) */

loc_0015A4AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A4B3
 * Original: 0x0015A4B3 - 0x0015A500 (77 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A4B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A4B3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0xC);
    esi = eax;
    eax = edi + esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0015A4DBu); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015A4DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0015A4FD; /* js: sign (negative) */

loc_0015A4E1: ;
    edi = edi + esi * 4;

loc_0015A4E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A4FD; /* je: equal / zero */

loc_0015A4E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x0015A4F2u); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015A4F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A4E4; /* jge: greater or equal (signed >=) */

loc_0015A4FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A500
 * Original: 0x0015A500 - 0x0015A572 (114 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x20);
    eax = edi + 1;
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ebx * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015A54F; /* je: equal / zero */

loc_0015A52E: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A538u); RECOMP_ABI_CALL(0x0015A481u, sub_0015A481); /* call 0x0015A481 */

loc_0015A538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015A54C; /* jne: not equal / not zero */

loc_0015A53E: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A547u); RECOMP_ABI_CALL(0x0015A4B3u, sub_0015A4B3); /* call 0x0015A4B3 */

loc_0015A547: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;

loc_0015A54C: ;
    eax = MEM32(ebp + 8);

loc_0015A54F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & edx;
    _fa = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A56A; /* jge: greater or equal (signed >=) */

loc_0015A561: ;
    edi = eax + ebx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0015A56A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A572
 * Original: 0x0015A572 - 0x0015A58D (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A572(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A572: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 3);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);

loc_0015A580: ;
    esi = MEM32(eax);
    MEM32(ecx + eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A580; /* jne: not equal / not zero */

loc_0015A58B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A58D
 * Original: 0x0015A58D - 0x0015A599 (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A58D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A58D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A599
 * Original: 0x0015A599 - 0x0015A5B2 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015A599(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A599: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A59B: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A5AF; /* jne: not equal / not zero */

loc_0015A5A5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015A59B; /* jl: less (signed <) */

loc_0015A5AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0015A5AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A5B2
 * Original: 0x0015A5B2 - 0x0015A62D (123 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A5B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A5B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(ebp + 8);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = esi;
    ecx = edx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ~edi;
    MEM32(ebp + -4) = eax;

loc_0015A5E0: ;
    esi = MEM32(ebx + eax * 4);
    ecx = esi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = ecx;
    ecx = edx;
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0xC);
    esi = esi | MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + eax * 4) = esi;
    esi = MEM32(ebp + -12);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0015A5E0; /* jl: less (signed <) */

loc_0015A605: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + ecx * 4;

loc_0015A610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015A61C; /* jl: less (signed <) */

loc_0015A615: ;
    edx = MEM32(ecx);
    MEM32(ebx + eax * 4) = edx;
    goto loc_0015A620;

loc_0015A61C: ;
    MEM32(ebx + eax * 4) = MEM32(ebx + eax * 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015A620: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A610; /* jge: greater or equal (signed >=) */

loc_0015A628: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A62D
 * Original: 0x0015A62D - 0x0015A785 (344 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A62D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015A62D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 6);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 2);
    eax = ZX16(MEM16(eax));
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x3FFF));
    edi = edi - 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFC001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFC001u (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0015A696; /* jne: not equal / not zero */

loc_0015A678: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A67Fu); RECOMP_ABI_CALL(0x0015A599u, sub_0015A599); /* call 0x0015A599 */

loc_0015A67F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015A745; /* jne: not equal / not zero */

loc_0015A688: ;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_0015A68E: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0015A747;

loc_0015A696: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A69Fu); RECOMP_ABI_CALL(0x0015A572u, sub_0015A572); /* call 0x0015A572 */

loc_0015A69F: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A6ABu); RECOMP_ABI_CALL(0x0015A500u, sub_0015A500); /* call 0x0015A500 */

loc_0015A6AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A6B3; /* je: equal / zero */

loc_0015A6B2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015A6B3: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esi + 8)));
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015A6C9; /* jge: greater or equal (signed >=) */

loc_0015A6BF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    goto loc_0015A705;

loc_0015A6C9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0015A709; /* jg: greater (signed >) */

loc_0015A6CD: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A6DEu); RECOMP_ABI_CALL(0x0015A572u, sub_0015A572); /* call 0x0015A572 */

loc_0015A6DE: ;
    eax = ebp + -12;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A6E8u); RECOMP_ABI_CALL(0x0015A5B2u, sub_0015A5B2); /* call 0x0015A5B2 */

loc_0015A6E8: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A6F4u); RECOMP_ABI_CALL(0x0015A500u, sub_0015A500); /* call 0x0015A500 */

loc_0015A6F4: ;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A702u); RECOMP_ABI_CALL(0x0015A5B2u, sub_0015A5B2); /* call 0x0015A5B2 */

loc_0015A702: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015A705: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015A68E;

loc_0015A709: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, MEM32(esi + 0xC));
    if (CMP_L(_fas, _fbs)) goto loc_0015A731; /* jl: less (signed <) */

loc_0015A710: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -9) = MEM8(ebp + -9) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A725u); RECOMP_ABI_CALL(0x0015A5B2u, sub_0015A5B2); /* call 0x0015A5B2 */

loc_0015A725: ;
    ebx = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esi))) >> 32) & 1);
    ebx = ebx + MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015A747;

loc_0015A731: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -9) = MEM8(ebp + -9) & 0x7F;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A743u); RECOMP_ABI_CALL(0x0015A5B2u, sub_0015A5B2); /* call 0x0015A5B2 */

loc_0015A743: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015A745: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A747: ;
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esi + 0xC)));
    ecx = ecx - MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esi + 0x10);
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 8);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A776; /* jne: not equal / not zero */

loc_0015A769: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -8);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = edx;
    goto loc_0015A780;

loc_0015A776: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015A780; /* jne: not equal / not zero */

loc_0015A77B: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = ebx;

loc_0015A780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A785
 * Original: 0x0015A785 - 0x0015A79B (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A785(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A785: ;
    PUSH32(esp, 0x2FD474);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0015A797u); RECOMP_ABI_CALL(0x0015A62Du, sub_0015A62D); /* call 0x0015A62D */

loc_0015A797: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A79B
 * Original: 0x0015A79B - 0x0015A7B1 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A79B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A79B: ;
    PUSH32(esp, 0x2FD48C);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0015A7ADu); RECOMP_ABI_CALL(0x0015A62Du, sub_0015A62D); /* call 0x0015A62D */

loc_0015A7AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A7B1
 * Original: 0x0015A7B1 - 0x0015A82D (124 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A7B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A7B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    esi = ecx;
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    ecx = MEM32(eax + 6);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 2);
    eax = ZX16(MEM16(eax));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    esi = esi & 0x7FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A7F6u); RECOMP_ABI_CALL(0x0015A500u, sub_0015A500); /* call 0x0015A500 */

loc_0015A7F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A804; /* je: equal / zero */

loc_0015A7FC: ;
    ecx = 0x80000000u;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015A807;

loc_0015A804: ;
    ecx = MEM32(ebp + -16);

loc_0015A807: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x7FFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A815; /* jne: not equal / not zero */

loc_0015A80E: ;
    MEM32(ebp + -4) = 1;

loc_0015A815: ;
    eax = MEM32(ebp + 0xC);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    MEM16(eax + 8) = LO16(edi);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A82D
 * Original: 0x0015A82D - 0x0015A85A (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A82D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A82D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A849u); RECOMP_ABI_CALL(0x0015C26Cu, sub_0015C26C); /* call 0x0015C26C */

loc_0015A849: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A855u); RECOMP_ABI_CALL(0x0015A785u, sub_0015A785); /* call 0x0015A785 */

loc_0015A855: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A85A
 * Original: 0x0015A85A - 0x0015A888 (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A85A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A85A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A877u); RECOMP_ABI_CALL(0x0015C26Cu, sub_0015C26C); /* call 0x0015C26C */

loc_0015A877: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A883u); RECOMP_ABI_CALL(0x0015A7B1u, sub_0015A7B1); /* call 0x0015A7B1 */

loc_0015A883: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A888
 * Original: 0x0015A888 - 0x0015A8B5 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A888(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A888: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A8A4u); RECOMP_ABI_CALL(0x0015C26Cu, sub_0015C26C); /* call 0x0015C26C */

loc_0015A8A4: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A8B0u); RECOMP_ABI_CALL(0x0015A79Bu, sub_0015A79B); /* call 0x0015A79B */

loc_0015A8B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A8B5
 * Original: 0x0015A8B5 - 0x0015A934 (127 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A8B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A8B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 1;
    MEM8(esi) = 0x30;
    eax = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0015A8F2; /* jle: less or equal (signed <=) */

loc_0015A8D3: ;
    MEM32(ebp + 8) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A8D8: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A8E4; /* je: equal / zero */

loc_0015A8DE: ;
    edx = SX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015A8E7;

loc_0015A8E4: ;
    PUSH32(esp, 0x30);
    POP32(esp, edx);

loc_0015A8E7: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A8D8; /* jne: not equal / not zero */

loc_0015A8EF: ;
    edx = MEM32(ebp + 0x10);

loc_0015A8F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(eax) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0015A90B; /* jl: less (signed <) */

loc_0015A8F9: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x35) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x35 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015A90B; /* jl: less (signed <) */

loc_0015A8FE: ;
    goto loc_0015A903;

loc_0015A900: ;
    MEM8(eax) = 0x30;

loc_0015A903: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A900; /* je: equal / zero */

loc_0015A909: ;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015A90B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A915; /* jne: not equal / not zero */

loc_0015A910: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015A92F;

loc_0015A915: ;
    eax = edi;
    edx = eax + 1;

loc_0015A91A: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A91A; /* jne: not equal / not zero */

loc_0015A921: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A92Cu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0015A92C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015A92F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A934
 * Original: 0x0015A934 - 0x0015A9EE (186 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A934(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A934: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + 6));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7FF;
    esi = 0x80000000u;
    MEM32(ebp + -4) = esi;
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx);
    ebx = ZX16(LO16(ecx));
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A984; /* je: equal / zero */

loc_0015A971: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A97D; /* je: equal / zero */

loc_0015A975: ;
    edi = ecx + 0x3C00;
    goto loc_0015A9A5;

loc_0015A97D: ;
    edi = 0x7FFF;
    goto loc_0015A9A5;

loc_0015A984: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A99C; /* jne: not equal / not zero */

loc_0015A98A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A99C; /* jne: not equal / not zero */

loc_0015A98E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    MEM16(eax + 8) = LO16(ebx);
    goto loc_0015A9E9;

loc_0015A99C: ;
    edi = ecx + 0x3C01;
    MEM32(ebp + -4) = ebx;

loc_0015A9A5: ;
    ecx = edx;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015A9E0; /* jne: not equal / not zero */

loc_0015A9C1: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    ebx = ecx;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0015A9C1; /* je: equal / zero */

loc_0015A9E0: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 8) = LO16(ecx);

loc_0015A9E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A9EE
 * Original: 0x0015A9EE - 0x0015AA53 (101 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015A9EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A9EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AA03u); RECOMP_ABI_CALL(0x0015A934u, sub_0015A934); /* call 0x0015A934 */

loc_0015AA03: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebp + -12;
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AA1Eu); RECOMP_ABI_CALL(0x0015C71Fu, sub_0015C71F); /* call 0x0015C71F */

loc_0015AA1E: ;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    MEM32(ecx + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -38);
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -40);
    MEM32(ecx + 4) = eax;
    eax = ebp + -36;
    esi = edi;
    edx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015AA40: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AA40; /* jne: not equal / not zero */

loc_0015AA4A: ;
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015AA53
 * Original: 0x0015AA53 - 0x0015AA5C (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AA53(void)
{

loc_0015AA53: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AA5Au); RECOMP_ABI_CALL(0x00159170u, sub_00159170); /* call 0x00159170 */

loc_0015AA5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015AA5C
 * Original: 0x0015AA5C - 0x0015AA87 (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AA5C(void)
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

loc_0015AA5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015AA62u); RECOMP_ABI_CALL(0x0015C9CDu, sub_0015C9CD); /* call 0x0015C9CD */

loc_0015AA62: ;
    esi = MEM32(eax);
    /* FPU: fninit  */
    PUSH32(esp, 0x0015AA6Bu); RECOMP_ABI_CALL(0x00154A62u, sub_00154A62); /* call 0x00154A62 */

loc_0015AA6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AA85; /* je: equal / zero */

loc_0015AA6F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10008) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10008 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AA85; /* je: equal / zero */

loc_0015AA7A: ;
    MEM16(eax + 6) = MEM16(eax + 6) & 0;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 8) = MEM16(eax + 8) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0015AA85: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015AA87
 * Original: 0x0015AA87 - 0x0015AB19 (146 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AA87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015AA87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AA91; /* je: equal / zero */

loc_0015AA8E: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0015AA91: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AA99; /* je: equal / zero */

loc_0015AA96: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AA99: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AAA1; /* je: equal / zero */

loc_0015AA9E: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AAA1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AAA9; /* je: equal / zero */

loc_0015AAA6: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AAA9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AAB1; /* je: equal / zero */

loc_0015AAAE: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AAB1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AABB; /* je: equal / zero */

loc_0015AAB6: ;
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AABB: ;
    PUSH32(esp, ebp);
    edx = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0xC00;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = 0x300;
    ebp = 0x200;
    if ((_fa == 0)) goto loc_0015AAF7; /* je: equal / zero */

loc_0015AAD6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AAF2; /* je: equal / zero */

loc_0015AADE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AAEE; /* je: equal / zero */

loc_0015AAE6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AAF7; /* jne: not equal / not zero */

loc_0015AAEA: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AAF7;

loc_0015AAEE: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AAF7;

loc_0015AAF2: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AAF7: ;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0015AB06; /* je: equal / zero */

loc_0015AAFB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AB0B; /* jne: not equal / not zero */

loc_0015AAFF: ;
    eax = eax | 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AB0B;

loc_0015AB06: ;
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB0B: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0015AB18; /* je: equal / zero */

loc_0015AB13: ;
    eax = eax | 0x40000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AB19
 * Original: 0x0015AB19 - 0x0015ABA7 (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AB19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015AB19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB21; /* je: equal / zero */

loc_0015AB20: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015AB21: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB29; /* je: equal / zero */

loc_0015AB26: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB29: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB31; /* je: equal / zero */

loc_0015AB2E: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB31: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB39; /* je: equal / zero */

loc_0015AB36: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB39: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB41; /* je: equal / zero */

loc_0015AB3E: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB41: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AB4C; /* je: equal / zero */

loc_0015AB49: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB4C: ;
    ecx = ebx;
    edx = 0x300;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = 0x200;
    if ((_fa == 0)) goto loc_0015AB80; /* je: equal / zero */

loc_0015AB5D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AB7B; /* je: equal / zero */

loc_0015AB65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AB74; /* je: equal / zero */

loc_0015AB69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AB80; /* jne: not equal / not zero */

loc_0015AB6D: ;
    eax = eax | 0xC00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AB80;

loc_0015AB74: ;
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AB80;

loc_0015AB7B: ;
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB80: ;
    ecx = ebx;
    ecx = ecx & 0x30000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0015AB96; /* je: equal / zero */

loc_0015AB8A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AB98; /* jne: not equal / not zero */

loc_0015AB92: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015AB98;

loc_0015AB96: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015AB98: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000 (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0015ABA6; /* je: equal / zero */

loc_0015ABA1: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015ABA7
 * Original: 0x0015ABA7 - 0x0015ABE0 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ABA7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ABA7: ;
    SET_LO8(ecx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABB5; /* je: equal / zero */

loc_0015ABB2: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0015ABB5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABBD; /* je: equal / zero */

loc_0015ABBA: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABBD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABC5; /* je: equal / zero */

loc_0015ABC2: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABC5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABCD; /* je: equal / zero */

loc_0015ABCA: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABCD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABD5; /* je: equal / zero */

loc_0015ABD2: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABD5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ABDF; /* je: equal / zero */

loc_0015ABDA: ;
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015ABDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AC01
 * Original: 0x0015AC01 - 0x0015AC33 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015AC01(void)
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

loc_0015AC01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -4) = g_fp_control_word; /* fnstcw word ptr [ebp - 4] */
    ebx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AC12u); RECOMP_ABI_CALL(0x0015AA87u, sub_0015AA87); /* call 0x0015AA87 */

loc_0015AC12: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    eax = ~eax;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    eax = eax & MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AC28u); RECOMP_ABI_CALL(0x0015AB19u, sub_0015AB19); /* call 0x0015AB19 */

loc_0015AC28: ;
    MEM32(ebp + 0xC) = eax;
    g_fp_control_word = MEM16(ebp + 0xC); /* fldcw word ptr [ebp + 0xc] */
    eax = ebx;
    POP32(esp, ebx);
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
 * sub_0015AC33
 * Original: 0x0015AC33 - 0x0015AC49 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AC33(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015AC33: ;
    eax = MEM32(esp + 8);
    eax = eax & 0xFFF7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0015AC46u); RECOMP_ABI_CALL(0x0015AC01u, sub_0015AC01); /* call 0x0015AC01 */

loc_0015AC46: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015AC75
 * Original: 0x0015AC75 - 0x0015ADD8 (355 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015AC75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015AC75: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AC81u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015AC81: ;
    edi = MEM32(ebp + 8);
    esi = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(0x2FD52C);
    ecx = edx;

loc_0015AC90: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ACA1; /* je: equal / zero */

loc_0015AC94: ;
    ebx = eax + eax * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + ebx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015AC90; /* jb: below (unsigned <) */

loc_0015ACA1: ;
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015ACAF; /* jae: above or equal (unsigned >=) */

loc_0015ACAB: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ACB1; /* je: equal / zero */

loc_0015ACAF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015ACB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ADCB; /* je: equal / zero */

loc_0015ACB9: ;
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015ADCB; /* je: equal / zero */

loc_0015ACC7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015ACD8; /* jne: not equal / not zero */

loc_0015ACCC: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015ADD3;

loc_0015ACD8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ADC6; /* je: equal / zero */

loc_0015ACE1: ;
    eax = MEM32(esi + 0x58);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015ADB8; /* jne: not equal / not zero */

loc_0015ACF9: ;
    edx = MEM32(0x2FD520);
    eax = MEM32(0x2FD524);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015AD31; /* jge: greater or equal (signed >=) */

loc_0015AD0A: ;
    eax = edx + edx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0015AD10: ;
    edi = MEM32(esi + 0x54);
    MEM32(eax + edi + 8) = MEM32(eax + edi + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(0x2FD520);
    ebx = MEM32(0x2FD524);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015AD10; /* jl: less (signed <) */

loc_0015AD2E: ;
    ebx = MEM32(ebp + 8);

loc_0015AD31: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Eu (32-bit) */
    edi = MEM32(esi + 0x5C);
    if (CMP_NE(_fa, _fb)) goto loc_0015AD47; /* jne: not equal / not zero */

loc_0015AD3E: ;
    MEM32(esi + 0x5C) = 0x83;
    goto loc_0015ADAB;

loc_0015AD47: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000090u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000090u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AD58; /* jne: not equal / not zero */

loc_0015AD4F: ;
    MEM32(esi + 0x5C) = 0x81;
    goto loc_0015ADAB;

loc_0015AD58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000091u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000091u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AD69; /* jne: not equal / not zero */

loc_0015AD60: ;
    MEM32(esi + 0x5C) = 0x84;
    goto loc_0015ADAB;

loc_0015AD69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000093u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000093u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AD7A; /* jne: not equal / not zero */

loc_0015AD71: ;
    MEM32(esi + 0x5C) = 0x85;
    goto loc_0015ADAB;

loc_0015AD7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AD8B; /* jne: not equal / not zero */

loc_0015AD82: ;
    MEM32(esi + 0x5C) = 0x82;
    goto loc_0015ADAB;

loc_0015AD8B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AD9C; /* jne: not equal / not zero */

loc_0015AD93: ;
    MEM32(esi + 0x5C) = 0x86;
    goto loc_0015ADAB;

loc_0015AD9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000092u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000092u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015ADAB; /* jne: not equal / not zero */

loc_0015ADA4: ;
    MEM32(esi + 0x5C) = 0x8A;

loc_0015ADAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, 8);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0015ADB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015ADB0u); } /* indirect call */
    }

loc_0015ADB2: ;
    POP32(esp, ecx);
    MEM32(esi + 0x5C) = edi;
    goto loc_0015ADBF;

loc_0015ADB8: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0015ADBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015ADBDu); } /* indirect call */
    }

loc_0015ADBF: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ecx);
    MEM32(esi + 0x58) = eax;

loc_0015ADC6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015ADD3;

loc_0015ADCB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015ADD3u); RECOMP_ABI_CALL(0x000AD34Cu, sub_000AD34C); /* call 0x000AD34C */

loc_0015ADD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE26
 * Original: 0x0015AE26 - 0x0015AE2C (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE26(void)
{

loc_0015AE26: ;
    eax = 0x404;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE2C
 * Original: 0x0015AE2C - 0x0015AE32 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE2C(void)
{

loc_0015AE2C: ;
    eax = 0x412;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE32
 * Original: 0x0015AE32 - 0x0015AE38 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE32(void)
{

loc_0015AE32: ;
    eax = 0x804;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE38
 * Original: 0x0015AE38 - 0x0015AE3E (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE38(void)
{

loc_0015AE38: ;
    eax = 0x411;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE3E
 * Original: 0x0015AE3E - 0x0015AE69 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE3E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015AE3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA9E0C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = 0xA9E1E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0xA9E1C4) = eax;
    MEM32(0xA9E0B8) = eax;
    MEM32(0xA9E0B0) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015AE6A
 * Original: 0x0015AE6A - 0x0015AECD (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AE6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015AE6A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B17B8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AE76u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015AE76: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AE7Du); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015AE7D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AE87u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015AE87: ;
    edi = eax;
    MEM32(ebp + -32) = edi;
    esi = MEM32(edi + 0x60);
    MEM32(ebp + -28) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E0B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0xA9E0B4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AEBC; /* je: equal / zero */

loc_0015AE9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AEA9; /* je: equal / zero */

loc_0015AE9E: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015AEA9; /* jne: not equal / not zero */

loc_0015AEA2: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AEA8u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015AEA8: ;
    POP32(esp, ecx);

loc_0015AEA9: ;
    eax = MEM32(0xA9E0B4);
    MEM32(edi + 0x60) = eax;
    esi = MEM32(0xA9E0B4);
    MEM32(ebp + -28) = esi;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015AEBC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AEC5u); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0015AEC5: ;
    eax = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AECCu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015AECC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AED0
 * Original: 0x0015AED0 - 0x0015AED9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AED0(void)
{

loc_0015AED0: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0015AED7u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015AED7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015AED9
 * Original: 0x0015AED9 - 0x0015AFE8 (271 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015AED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015AED9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AF08; /* je: equal / zero */

loc_0015AEE4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015AEE8: ;
    _fa = (uint32_t)(MEM32(eax + 0x2FD538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2FD538), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AF11; /* je: equal / zero */

loc_0015AEF0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015AEE8; /* jb: below (unsigned <) */

loc_0015AEFB: ;
    _fa = (uint32_t)(MEM32(0x98B410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B410), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AFE3; /* je: equal / zero */

loc_0015AF08: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015AF0Du); RECOMP_ABI_CALL(0x0015AE3Eu, sub_0015AE3E); /* call 0x0015AE3E */

loc_0015AF0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0015AF11: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = 0xA9E0C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = ecx + 0x2FD554;

loc_0015AF30: ;
    SET_LO8(eax, MEM8(edi));
    ebx = edi;
    goto loc_0015AF5F;

loc_0015AF36: ;
    SET_LO8(edx, MEM8(ebx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015AF63; /* je: equal / zero */

loc_0015AF3D: ;
    eax = ZX8(LO8(eax));
    esi = ZX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015AF5B; /* ja: above (unsigned >) */

loc_0015AF47: ;
    edx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(edx + 0x2FD530));

loc_0015AF50: ;
    MEM8(eax + 0xA9E0C1) = MEM8(eax + 0xA9E0C1) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 0xA9E0C1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015AF50; /* jbe: below or equal (unsigned <=) */

loc_0015AF5B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebx));

loc_0015AF5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015AF36; /* jne: not equal / not zero */

loc_0015AF63: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015AF30; /* jb: below (unsigned <) */

loc_0015AF6F: ;
    eax = MEM32(ebp + 8);
    MEM32(0xA9E1C4) = eax;
    _fb = (uint32_t)(0x3A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3A4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0xA9E0B8) = 1;
    if ((_fa == 0)) goto loc_0015AFC2; /* je: equal / zero */

loc_0015AF88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015AFB6; /* je: equal / zero */

loc_0015AF8D: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015AFAA; /* je: equal / zero */

loc_0015AF92: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015AF9E; /* je: equal / zero */

loc_0015AF95: ;
    MEM32(0xA9E0B0) = MEM32(0xA9E0B0) & 0;
    _fa = (uint32_t)(MEM32(0xA9E0B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015AFCC;

loc_0015AF9E: ;
    MEM32(0xA9E0B0) = 0x404;
    goto loc_0015AFCC;

loc_0015AFAA: ;
    MEM32(0xA9E0B0) = 0x412;
    goto loc_0015AFCC;

loc_0015AFB6: ;
    MEM32(0xA9E0B0) = 0x804;
    goto loc_0015AFCC;

loc_0015AFC2: ;
    MEM32(0xA9E0B0) = 0x411;

loc_0015AFCC: ;
    PUSH32(esp, 6);
    esi = ecx + 0x2FD53C;
    POP32(esp, ecx);
    edi = 0xA9E1E0;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0015AFE3: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015AFF8
 * Original: 0x0015AFF8 - 0x0015B110 (280 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AFF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015AFF8: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2B17C8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B004u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B004: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B00Fu); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015B00F: ;
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    MEM32(0x98B410) = ebx;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B033; /* jne: not equal / not zero */

loc_0015B023: ;
    MEM32(0x98B410) = 1;
    edi = MEM32(0x98B3F8);

loc_0015B033: ;
    MEM32(ebp + 8) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E1C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0xA9E1C4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B0FB; /* je: equal / zero */

loc_0015B042: ;
    esi = MEM32(0xA9E0B4);
    MEM32(ebp + -36) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B053; /* je: equal / zero */

loc_0015B04F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B063; /* je: equal / zero */

loc_0015B053: ;
    PUSH32(esp, 0x220);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B05Du); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015B05D: ;
    POP32(esp, ecx);
    esi = eax;
    MEM32(ebp + -36) = esi;

loc_0015B063: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B0E4; /* je: equal / zero */

loc_0015B067: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B06Du); RECOMP_ABI_CALL(0x0015AED9u, sub_0015AED9); /* call 0x0015AED9 */

loc_0015B06D: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B0E4; /* jne: not equal / not zero */

loc_0015B075: ;
    MEM32(esi) = ebx;
    eax = MEM32(0xA9E1C4);
    MEM32(esi + 4) = eax;
    eax = MEM32(0xA9E0B8);
    MEM32(esi + 8) = eax;
    eax = MEM32(0xA9E0B0);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B091: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015B0A9; /* jge: greater or equal (signed >=) */

loc_0015B099: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0xA9E1E0));
    MEM16(esi + eax * 2 + 0x10) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015B091;

loc_0015B0A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B0AB: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015B0C2; /* jge: greater or equal (signed >=) */

loc_0015B0B5: ;
    SET_LO8(ecx, MEM8(eax + 0xA9E0C0));
    MEM8(eax + esi + 0x1C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015B0AB;

loc_0015B0C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B0C4: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015B0DE; /* jge: greater or equal (signed >=) */

loc_0015B0CE: ;
    SET_LO8(ecx, MEM8(eax + 0xA9E200));
    MEM8(eax + esi + 0x11D) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015B0C4;

loc_0015B0DE: ;
    MEM32(0xA9E0B4) = esi;

loc_0015B0E4: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B0FE; /* jne: not equal / not zero */

loc_0015B0EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E0B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0xA9E0B4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B0FE; /* je: equal / zero */

loc_0015B0F2: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B0F8u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015B0F8: ;
    POP32(esp, ecx);
    goto loc_0015B0FE;

loc_0015B0FB: ;
    MEM32(ebp + -32) = ebx;

loc_0015B0FE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B107u); RECOMP_ABI_CALL(0x0015B110u, sub_0015B110); /* call 0x0015B110 */

loc_0015B107: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B10Fu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B10F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B110
 * Original: 0x0015B110 - 0x0015B119 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B110(void)
{

loc_0015B110: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0015B117u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015B117: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B119
 * Original: 0x0015B119 - 0x0015B141 (40 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015B119(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B119: ;
    _fa = (uint32_t)(MEM32(0xA9E43C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9E43C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B13E; /* jne: not equal / not zero */

loc_0015B122: ;
    PUSH32(esp, 0);
    MEM32(0xA9E1C4) = 0xFFFFFFFDu;
    PUSH32(esp, 0x0015B133u); RECOMP_ABI_CALL(0x0015AFF8u, sub_0015AFF8); /* call 0x0015AFF8 */

loc_0015B133: ;
    POP32(esp, ecx);
    MEM32(0xA9E43C) = 1;

loc_0015B13E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B141
 * Original: 0x0015B141 - 0x0015B16B (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B141(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B141: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B147u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015B147: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B155; /* jne: not equal / not zero */

loc_0015B14D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0015B154u); RECOMP_ABI_CALL(0x00159170u, sub_00159170); /* call 0x00159170 */

loc_0015B154: ;
    POP32(esp, ecx);

loc_0015B155: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B163; /* je: equal / zero */

loc_0015B15D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B163u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0015B163: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015B16Au); RECOMP_ABI_CALL(0x000AD193u, sub_000AD193); /* call 0x000AD193 */

loc_0015B16A: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0015B16B(); return; /* fallthrough 0x0015B16B */

}

/**
 * sub_0015B16B
 * Original: 0x0015B16B - 0x0015B195 (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B16B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B16B: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B17F; /* je: equal / zero */

loc_0015B172: ;
    eax = MEM32(0x2FCC78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B192; /* je: equal / zero */

loc_0015B17B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0015B17Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B17Bu); } /* indirect call */
    }

loc_0015B17D: ;
    goto loc_0015B192;

loc_0015B17F: ;
    eax = MEM32(0x2FCC7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B18A; /* je: equal / zero */

loc_0015B188: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0015B18Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B188u); } /* indirect call */
    }

loc_0015B18A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015B191u); RECOMP_ABI_CALL(0x00154DFEu, sub_00154DFE); /* call 0x00154DFE */

loc_0015B191: ;
    POP32(esp, ecx);

loc_0015B192: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015B195
 * Original: 0x0015B195 - 0x0015B203 (110 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B195: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B17D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B1A1u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B1A1: ;
    eax = MEM32(0x96FA28);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    eax = eax + 0x20;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B1C3; /* jne: not equal / not zero */

loc_0015B1BC: ;
    esi = MEM32(ebp + 8);
    MEM32(eax) = esi;
    goto loc_0015B1DF;

loc_0015B1C3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(eax + 0x50);
    MEM32(esi + 0x50) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B1DEu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015B1DE: ;
    POP32(esp, ecx);

loc_0015B1DF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x50));
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x0015B1E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B1E6u); } /* indirect call */
    }

loc_0015B1E9: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B1EFu); RECOMP_ABI_CALL(0x0015B141u, sub_0015B141); /* call 0x0015B141 */

loc_0015B1EF: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    MEM32(ebp + -28) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B200u); RECOMP_ABI_CALL(0x0015AC75u, sub_0015AC75); /* call 0x0015AC75 */

loc_0015B200: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B1EF
 * Original: 0x0015B1EF - 0x0015B29D (174 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B1EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B1EF: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    MEM32(ebp + -28) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015B200u); RECOMP_ABI_CALL(0x0015AC75u, sub_0015AC75); /* call 0x0015AC75 */

loc_0015B200: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B22B; /* jne: not equal / not zero */

loc_0015B21B: ;
    PUSH32(esp, 0x0015B220u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B220: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015B29A;

loc_0015B22B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015B238u); RECOMP_ABI_CALL(0x00159331u, sub_00159331); /* call 0x00159331 */

loc_0015B238: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015B280; /* je: equal / zero */

loc_0015B240: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B246u); RECOMP_ABI_CALL(0x00154CA0u, sub_00154CA0); /* call 0x00154CA0 */

loc_0015B246: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15B195);
    PUSH32(esp, MEM32(esp + 0x24));
    MEM32(esi + 0x4C) = edi;
    PUSH32(esp, 0);
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x0015B265u); RECOMP_ABI_CALL(0x000AD420u, sub_000AD420); /* call 0x000AD420 */

loc_0015B265: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015B279; /* je: equal / zero */

loc_0015B26E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015B274u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_0015B274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B297; /* jne: not equal / not zero */

loc_0015B279: ;
    PUSH32(esp, 0x0015B27Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015B27E: ;
    ebx = eax;

loc_0015B280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B286u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015B286: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015B292; /* je: equal / zero */

loc_0015B28B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015B291u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_0015B291: ;
    POP32(esp, ecx);

loc_0015B292: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015B299;

loc_0015B297: ;
    eax = edi;

loc_0015B299: ;
    POP32(esp, esi);

loc_0015B29A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B203
 * Original: 0x0015B203 - 0x0015B29D (154 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B203(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B203: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0015B20Eu); RECOMP_ABI_CALL(0x001534D0u, sub_001534D0); /* call 0x001534D0 */

loc_0015B20E: ;
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B22B; /* jne: not equal / not zero */

loc_0015B21B: ;
    PUSH32(esp, 0x0015B220u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B220: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015B29A;

loc_0015B22B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015B238u); RECOMP_ABI_CALL(0x00159331u, sub_00159331); /* call 0x00159331 */

loc_0015B238: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015B280; /* je: equal / zero */

loc_0015B240: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B246u); RECOMP_ABI_CALL(0x00154CA0u, sub_00154CA0); /* call 0x00154CA0 */

loc_0015B246: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15B195);
    PUSH32(esp, MEM32(esp + 0x24));
    MEM32(esi + 0x4C) = edi;
    PUSH32(esp, 0);
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x0015B265u); RECOMP_ABI_CALL(0x000AD420u, sub_000AD420); /* call 0x000AD420 */

loc_0015B265: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015B279; /* je: equal / zero */

loc_0015B26E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015B274u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_0015B274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B297; /* jne: not equal / not zero */

loc_0015B279: ;
    PUSH32(esp, 0x0015B27Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015B27E: ;
    ebx = eax;

loc_0015B280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B286u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015B286: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015B292; /* je: equal / zero */

loc_0015B28B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015B291u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_0015B291: ;
    POP32(esp, ecx);

loc_0015B292: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015B299;

loc_0015B297: ;
    eax = edi;

loc_0015B299: ;
    POP32(esp, esi);

loc_0015B29A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B29D
 * Original: 0x0015B29D - 0x0015B2E1 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B29D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B29D: ;
    MEM32(0x98B22C) = MEM32(0x98B22C) + 1;
    _fa = (uint32_t)(MEM32(0x98B22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x0015B2ADu); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015B2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015B2C6; /* je: equal / zero */

loc_0015B2B9: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x18) = 0x1000;
    goto loc_0015B2D7;

loc_0015B2C6: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 0x14;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x18) = 2;

loc_0015B2D7: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B2E1
 * Original: 0x0015B2E1 - 0x0015B30B (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B2E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B2E1: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xA9E300) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015B2F0; /* jb: below (unsigned <) */

loc_0015B2ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015B2F0: ;
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 4);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B30B
 * Original: 0x0015B30B - 0x0015B336 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B30B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B30B: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B316; /* jne: not equal / not zero */

loc_0015B313: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015B316: ;
    SET_LO16(eax, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015B330; /* jbe: below or equal (unsigned <=) */

loc_0015B321: ;
    PUSH32(esp, 0x0015B326u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B326: ;
    MEM32(eax) = 0x2A;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0015B330: ;
    MEM8(ecx) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B340
 * Original: 0x0015B340 - 0x0015B3D5 (149 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015B340: ;
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0015B371; /* jne: not equal / not zero */

loc_0015B349: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    eax = ebx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015B3B8;

loc_0015B371: ;
    ecx = eax;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_0015B37F: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(ebx), (unsigned)(1), &_cf, 32, 0);
      ebx = _rcv; } /* rcr */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(eax), (unsigned)(1), &_cf, 32, 0);
      eax = _rcv; } /* rcr */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0015B37F; /* jne: not equal / not zero */

loc_0015B38B: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (_cf) goto loc_0015B3AD; /* jb: below (unsigned <) */

loc_0015B39F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015B3AD; /* ja: above (unsigned >) */

loc_0015B3A5: ;
    if (CMP_B(_fa, _fb)) goto loc_0015B3B6; /* jb: below (unsigned <) */

loc_0015B3A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0015B3B6; /* jbe: below or equal (unsigned <=) */

loc_0015B3AD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0015B3B6: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B3B8: ;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 8)));
    eax = eax - MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0xC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015B3D5
 * Original: 0x0015B3D5 - 0x0015B3D8 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015B3D5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B3D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B3D8
 * Original: 0x0015B3D8 - 0x0015B3F3 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B3D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B3D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015B3E9u); RECOMP_ABI_CALL(0x0015DC97u, sub_0015DC97); /* call 0x0015DC97 */

loc_0015B3E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B3EF; /* je: equal / zero */

loc_0015B3ED: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B3EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B3F3
 * Original: 0x0015B3F3 - 0x0015B40E (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B3F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B3F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015B404u); RECOMP_ABI_CALL(0x0015DCFCu, sub_0015DCFC); /* call 0x0015DCFC */

loc_0015B404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B40A; /* je: equal / zero */

loc_0015B408: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B40A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B40E
 * Original: 0x0015B40E - 0x0015B425 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B40E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B40E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015B41Bu); RECOMP_ABI_CALL(0x0015DD65u, sub_0015DD65); /* call 0x0015DD65 */

loc_0015B41B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B421; /* je: equal / zero */

loc_0015B41F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B421: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B425
 * Original: 0x0015B425 - 0x0015B435 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B425(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B425: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x22BD0C); PUSH32(esp, 0x0015B42Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B429u); } /* indirect call */
    }

loc_0015B42F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015B435
 * Original: 0x0015B435 - 0x0015B496 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B435(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B435: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B17E8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B441u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B441: ;
    _fa = (uint32_t)(MEM32(0x98B414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B414), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B454; /* jne: not equal / not zero */

loc_0015B44A: ;
    MEM32(0x98B414) = 0x15B425;

loc_0015B454: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x98B414); PUSH32(esp, 0x0015B464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B45Eu); } /* indirect call */
    }

loc_0015B464: ;
    MEM32(ebp + -32) = eax;
    goto loc_0015B48C;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B48Au); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015B48A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015B48C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B495u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B495: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B469
 * Original: 0x0015B469 - 0x0015B496 (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B469(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B469: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    PUSH32(esp, 8);
    PUSH32(esp, 0x0015B48Au); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015B48A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B495u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B495: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B477
 * Original: 0x0015B477 - 0x0015B496 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B477(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B477: ;
    esp = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xC0000017u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B48A; /* jne: not equal / not zero */

loc_0015B483: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015B48Au); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015B48A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B495u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B495: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B496
 * Original: 0x0015B496 - 0x0015B573 (221 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B496(void)
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

loc_0015B496: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_0015B4DF; /* je: equal / zero */

loc_0015B4B4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015B4DB; /* je: equal / zero */

loc_0015B4B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015B4D7; /* je: equal / zero */

loc_0015B4BA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015B4D3; /* je: equal / zero */

loc_0015B4BD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015B4DF; /* je: equal / zero */

loc_0015B4C0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015B4CB; /* je: equal / zero */

loc_0015B4C4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015B53B; /* jne: not equal / not zero */

loc_0015B4C7: ;
    PUSH32(esp, 0x10);
    goto loc_0015B4E1;

loc_0015B4CB: ;
    MEM32(esi) = 1;
    goto loc_0015B53B;

loc_0015B4D3: ;
    PUSH32(esp, 0x12);
    goto loc_0015B4E1;

loc_0015B4D7: ;
    PUSH32(esp, 0x11);
    goto loc_0015B4E1;

loc_0015B4DB: ;
    PUSH32(esp, 4);
    goto loc_0015B4E1;

loc_0015B4DF: ;
    PUSH32(esp, 8);

loc_0015B4E1: ;
    POP32(esp, ebx);
    PUSH32(esp, ecx);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B4EDu); RECOMP_ABI_CALL(0x00155ACEu, sub_00155ACE); /* call 0x00155ACE */

loc_0015B4ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B53B; /* jne: not equal / not zero */

loc_0015B4F4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B50D; /* je: equal / zero */

loc_0015B4FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B50D; /* je: equal / zero */

loc_0015B501: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B50D; /* je: equal / zero */

loc_0015B506: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015B522;

loc_0015B50D: ;
    ecx = MEM32(esp + 0x50);
    fp_push(MEMD(esi + 0x10)); /* fld double */
    ecx = ecx & 0xFFFFFFE3u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMD(esp + 0x40) = fp_top(); fp_pop(); /* fstp */
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x50) = ecx;

loc_0015B522: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B538u); RECOMP_ABI_CALL(0x0015582Au, sub_0015582A); /* call 0x0015582A */

loc_0015B538: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B53B: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(esp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B549u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_0015B549: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 8 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015B564; /* je: equal / zero */

loc_0015B550: ;
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B564; /* jne: not equal / not zero */

loc_0015B559: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B55Fu); RECOMP_ABI_CALL(0x0015B3D5u, sub_0015B3D5); /* call 0x0015B3D5 */

loc_0015B55F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015B56C; /* jne: not equal / not zero */

loc_0015B564: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B56Bu); RECOMP_ABI_CALL(0x00155CBBu, sub_00155CBB); /* call 0x00155CBB */

loc_0015B56B: ;
    POP32(esp, ecx);

loc_0015B56C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015B573
 * Original: 0x0015B573 - 0x0015B5B9 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B573(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B573: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B5A2; /* jae: above or equal (unsigned >=) */

loc_0015B57F: ;
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B5A2; /* jne: not equal / not zero */

loc_0015B599: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015B5A2: ;
    PUSH32(esp, 0x0015B5A7u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B5A7: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015B5B2u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015B5B2: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B5B9
 * Original: 0x0015B5B9 - 0x0015B602 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B5B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B5B9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B5EB; /* jae: above or equal (unsigned >=) */

loc_0015B5C5: ;
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B5EB; /* je: equal / zero */

loc_0015B5E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B5EB; /* je: equal / zero */

loc_0015B5E5: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015B5EB: ;
    PUSH32(esp, 0x0015B5F0u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B5F0: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015B5FBu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015B5FB: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B602
 * Original: 0x0015B602 - 0x0015B643 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B602(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B602: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B62C; /* jae: above or equal (unsigned >=) */

loc_0015B60E: ;
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B62C; /* je: equal / zero */

loc_0015B629: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0015B62C: ;
    PUSH32(esp, 0x0015B631u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B631: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015B63Cu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015B63C: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015B643
 * Original: 0x0015B643 - 0x0015B6D7 (148 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B643: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B17F8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B64Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B64F: ;
    edi = MEM32(ebp + 8);
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    ecx = MEM32(ecx * 4 + 0xA9E320);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B6B1; /* jne: not equal / not zero */

loc_0015B670: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B677u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015B677: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B6A8; /* jne: not equal / not zero */

loc_0015B680: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B68Eu); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_0015B68E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B6A5; /* jne: not equal / not zero */

loc_0015B694: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B69Fu); RECOMP_ABI_CALL(0x00150EDAu, sub_00150EDA); /* call 0x00150EDA */

loc_0015B69F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015B6D1;

loc_0015B6A5: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015B6A8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B6B1u); RECOMP_ABI_CALL(0x0015B6DAu, sub_0015B6DA); /* call 0x0015B6DA */

loc_0015B6B1: ;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi + edi * 4;
    eax = MEM32(eax * 4 + 0xA9E320);
    eax = eax + ecx * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0015B6CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B6C8u); } /* indirect call */
    }

loc_0015B6CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015B6D1: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B6D6u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B6D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B6DA
 * Original: 0x0015B6DA - 0x0015B6E3 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B6DA(void)
{

loc_0015B6DA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0015B6E1u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015B6E1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B6E3
 * Original: 0x0015B6E3 - 0x0015B705 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B6E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B6E3: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x0015B704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B6FEu); } /* indirect call */
    }

loc_0015B704: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B705
 * Original: 0x0015B705 - 0x0015B7D8 (211 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B705(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B705: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2B1808);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B711u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B711: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B71Cu); RECOMP_ABI_CALL(0x00156F54u, sub_00156F54); /* call 0x00156F54 */

loc_0015B71C: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B7A6; /* je: equal / zero */

loc_0015B725: ;
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B72Cu); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015B72C: ;
    POP32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -36) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0015B866(); return; } /* jge: greater or equal (signed >=) */

loc_0015B73E: ;
    esi = MEM32(edi * 4 + 0xA9E320);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B80F(); return; } /* je: equal / zero */

loc_0015B74D: ;
    MEM32(ebp + -32) = esi;
    eax = MEM32(edi * 4 + 0xA9E320);
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x500;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B803(); return; } /* jae: above or equal (unsigned >=) */

loc_0015B764: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015B7D0; /* jne: not equal / not zero */

loc_0015B76A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7B9; /* jne: not equal / not zero */

loc_0015B771: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B778u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015B778: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7B1; /* jne: not equal / not zero */

loc_0015B785: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B793u); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_0015B793: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7AE; /* jne: not equal / not zero */

loc_0015B799: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B7A4u); RECOMP_ABI_CALL(0x00150EDAu, sub_00150EDA); /* call 0x00150EDA */

loc_0015B7A4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015B7A6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0015B872(); return; /* tail jmp 0x0015B872 */

loc_0015B7AE: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015B7B1: ;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B7B9u); RECOMP_ABI_CALL(0x0015B7DEu, sub_0015B7DE); /* call 0x0015B7DE */

loc_0015B7B9: ;
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0015B7C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B7BDu); } /* indirect call */
    }

loc_0015B7C3: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B7E7(); return; } /* je: equal / zero */

loc_0015B7C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x0015B7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B7CAu); } /* indirect call */
    }

loc_0015B7D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015B74D;

}

/**
 * sub_0015B732
 * Original: 0x0015B732 - 0x0015B7D8 (166 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B732(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B732: ;
    MEM32(ebp + -36) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0015B866(); return; } /* jge: greater or equal (signed >=) */

loc_0015B73E: ;
    esi = MEM32(edi * 4 + 0xA9E320);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B80F(); return; } /* je: equal / zero */

loc_0015B74D: ;
    MEM32(ebp + -32) = esi;
    eax = MEM32(edi * 4 + 0xA9E320);
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x500;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B803(); return; } /* jae: above or equal (unsigned >=) */

loc_0015B764: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015B7D0; /* jne: not equal / not zero */

loc_0015B76A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7B9; /* jne: not equal / not zero */

loc_0015B771: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0015B778u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015B778: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7B1; /* jne: not equal / not zero */

loc_0015B785: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B793u); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_0015B793: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B7AE; /* jne: not equal / not zero */

loc_0015B799: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B7A4u); RECOMP_ABI_CALL(0x00150EDAu, sub_00150EDA); /* call 0x00150EDA */

loc_0015B7A4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0015B872(); return; /* tail jmp 0x0015B872 */

loc_0015B7AE: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015B7B1: ;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0x0015B7B9u); RECOMP_ABI_CALL(0x0015B7DEu, sub_0015B7DE); /* call 0x0015B7DE */

loc_0015B7B9: ;
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0015B7C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B7BDu); } /* indirect call */
    }

loc_0015B7C3: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B7E7(); return; } /* je: equal / zero */

loc_0015B7C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x0015B7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015B7CAu); } /* indirect call */
    }

loc_0015B7D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015B74D;

}

/**
 * sub_0015B7DE
 * Original: 0x0015B7DE - 0x0015B7E7 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B7DE(void)
{

loc_0015B7DE: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0015B7E5u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015B7E5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B7E7
 * Original: 0x0015B7E7 - 0x0015B878 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B7E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B7E7: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    _fb = (uint32_t)(MEM32(edi * 4 + 0xA9E320)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi * 4 + 0xA9E320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x28);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B866; /* jne: not equal / not zero */

loc_0015B809: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015B732(); return; /* tail jmp 0x0015B732 */

    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B81Au); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015B81A: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B866; /* je: equal / zero */

loc_0015B822: ;
    ecx = edi * 4 + 0xA9E320;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0xA9E300) = MEM32(0xA9E300) + 0x20;
    _fa = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B832: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B851; /* jae: above or equal (unsigned >=) */

loc_0015B83A: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    goto loc_0015B832;

loc_0015B851: ;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015B85Du); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015B85D: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B866; /* jne: not equal / not zero */

loc_0015B862: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015B866: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015B86Fu); RECOMP_ABI_CALL(0x0015B878u, sub_0015B878); /* call 0x0015B878 */

loc_0015B86F: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B877u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B803
 * Original: 0x0015B803 - 0x0015B878 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B803(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B803: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B866; /* jne: not equal / not zero */

loc_0015B809: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015B732(); return; /* tail jmp 0x0015B732 */

    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B81Au); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015B81A: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B866; /* je: equal / zero */

loc_0015B822: ;
    ecx = edi * 4 + 0xA9E320;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0xA9E300) = MEM32(0xA9E300) + 0x20;
    _fa = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B832: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B851; /* jae: above or equal (unsigned >=) */

loc_0015B83A: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    goto loc_0015B832;

loc_0015B851: ;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015B85Du); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015B85D: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B866; /* jne: not equal / not zero */

loc_0015B862: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015B866: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015B86Fu); RECOMP_ABI_CALL(0x0015B878u, sub_0015B878); /* call 0x0015B878 */

loc_0015B86F: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B877u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B80F
 * Original: 0x0015B80F - 0x0015B878 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B80F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B80F: ;
    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B81Au); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015B81A: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B866; /* je: equal / zero */

loc_0015B822: ;
    ecx = edi * 4 + 0xA9E320;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0xA9E300) = MEM32(0xA9E300) + 0x20;
    _fa = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B832: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015B851; /* jae: above or equal (unsigned >=) */

loc_0015B83A: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    goto loc_0015B832;

loc_0015B851: ;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015B85Du); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015B85D: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B866; /* jne: not equal / not zero */

loc_0015B862: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015B866: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015B86Fu); RECOMP_ABI_CALL(0x0015B878u, sub_0015B878); /* call 0x0015B878 */

loc_0015B86F: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B877u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B866
 * Original: 0x0015B866 - 0x0015B878 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B866(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B866: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015B86Fu); RECOMP_ABI_CALL(0x0015B878u, sub_0015B878); /* call 0x0015B878 */

loc_0015B86F: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B877u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B872
 * Original: 0x0015B872 - 0x0015B878 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B872(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B872: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B877u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B878
 * Original: 0x0015B878 - 0x0015B881 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B878(void)
{

loc_0015B878: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0015B87Fu); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015B87F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B881
 * Original: 0x0015B881 - 0x0015B90E (141 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B881(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B881: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1820);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B88Du); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B88D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B898; /* je: equal / zero */

loc_0015B895: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0015B898: ;
    _fa = (uint32_t)(MEM8(ebp + 0xD)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xD), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B8A1; /* je: equal / zero */

loc_0015B89E: ;
    SET_LO8(ebx, LO8(ebx) | 0x80);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015B8A1: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B8AA; /* je: equal / zero */

loc_0015B8A7: ;
    SET_LO8(ebx, LO8(ebx) | 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015B8AA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B8AFu); RECOMP_ABI_CALL(0x0015B705u, sub_0015B705); /* call 0x0015B705 */

loc_0015B8AF: ;
    esi = eax;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B8D0; /* jne: not equal / not zero */

loc_0015B8B9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B8BEu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B8BE: ;
    MEM32(eax) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B8C9u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015B8C9: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015B908;

loc_0015B8D0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B8DDu); RECOMP_ABI_CALL(0x0015B573u, sub_0015B573); /* call 0x0015B573 */

loc_0015B8DD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -25) = LO8(ebx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    ecx = MEM32(ecx * 4 + 0xA9E320);
    MEM8(ecx + eax * 8 + 4) = LO8(ebx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B906u); RECOMP_ABI_CALL(0x0015B911u, sub_0015B911); /* call 0x0015B911 */

loc_0015B906: ;
    eax = esi;

loc_0015B908: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B90Du); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B90D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B911
 * Original: 0x0015B911 - 0x0015B919 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B911(void)
{

loc_0015B911: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015B917u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015B917: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B919
 * Original: 0x0015B919 - 0x0015B9B4 (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B919: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1830);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B925u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B925: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B9BF(); return; } /* jae: above or equal (unsigned >=) */

loc_0015B934: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015B9BF(); return; } /* je: equal / zero */

loc_0015B954: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B95Au); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015B95A: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015B997; /* je: equal / zero */

loc_0015B968: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B96Eu); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_0015B96E: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B975u); RECOMP_ABI_CALL(0x000AAD42u, sub_000AAD42); /* call 0x000AAD42 */

loc_0015B975: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B983; /* jne: not equal / not zero */

loc_0015B979: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B97Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015B97E: ;
    MEM32(ebp + -28) = eax;
    goto loc_0015B987;

loc_0015B983: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015B987: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B9A6; /* je: equal / zero */

loc_0015B98D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B992u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015B992: ;
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_0015B997: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B99Cu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B99C: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015B9A6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B9AFu); RECOMP_ABI_CALL(0x0015B9B7u, sub_0015B9B7); /* call 0x0015B9B7 */

loc_0015B9AF: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0015B9CD(); return; /* tail jmp 0x0015B9CD */

}

/**
 * sub_0015B9B7
 * Original: 0x0015B9B7 - 0x0015B9BF (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B9B7(void)
{

loc_0015B9B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015B9BDu); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015B9BD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015B9BF
 * Original: 0x0015B9BF - 0x0015B9D3 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B9BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B9BF: ;
    PUSH32(esp, 0x0015B9C4u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B9C4: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B9D2u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B9D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B9CD
 * Original: 0x0015B9CD - 0x0015B9D3 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B9CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B9CD: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015B9D2u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015B9D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B9D3
 * Original: 0x0015B9D3 - 0x0015BA54 (129 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B9D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B9D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B9EFu); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_0015B9EF: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015BA04; /* jne: not equal / not zero */

loc_0015B9F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B9FCu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015B9FC: ;
    MEM32(eax) = 9;
    goto loc_0015BA2B;

loc_0015BA04: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA14u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_0015BA14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0015BA31; /* jne: not equal / not zero */

loc_0015BA1B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA20u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015BA20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BA31; /* je: equal / zero */

loc_0015BA24: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA2Au); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_0015BA2A: ;
    POP32(esp, ecx);

loc_0015BA2B: ;
    eax = edi;
    edx = edi;
    goto loc_0015BA50;

loc_0015BA31: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(eax * 4 + 0xA9E320);
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + esi * 4;
    eax = eax + ecx * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);

loc_0015BA50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015BA54
 * Original: 0x0015BA54 - 0x0015BAE9 (149 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BA54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BA54: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1840);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA60u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BA60: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015BAF4(); return; } /* jae: above or equal (unsigned >=) */

loc_0015BA6F: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015BAF4(); return; } /* je: equal / zero */

loc_0015BA8F: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA95u); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015BA95: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BABD; /* je: equal / zero */

loc_0015BAA3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BAB2u); RECOMP_ABI_CALL(0x0015B9D3u, sub_0015B9D3); /* call 0x0015B9D3 */

loc_0015BAB2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = edx;
    goto loc_0015BAD8;

loc_0015BABD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BAC2u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BAC2: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BACDu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BACD: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = MEM32(ebp + -32) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015BAD8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BAE1u); RECOMP_ABI_CALL(0x0015BAECu, sub_0015BAEC); /* call 0x0015BAEC */

loc_0015BAE1: ;
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0015BB0C(); return; /* tail jmp 0x0015BB0C */

}

/**
 * sub_0015BAEC
 * Original: 0x0015BAEC - 0x0015BAF4 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BAEC(void)
{

loc_0015BAEC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015BAF2u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015BAF2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015BAF4
 * Original: 0x0015BAF4 - 0x0015BB0C (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BAF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BAF4: ;
    PUSH32(esp, 0x0015BAF9u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BAF9: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015BB04u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BB04: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx;

    g_seh_ebp = ebp; sub_0015BB0C(); return; /* fallthrough 0x0015BB0C */

}

/**
 * sub_0015BB0C
 * Original: 0x0015BB0C - 0x0015BB12 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BB0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BB0C: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015BB11u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BB11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BB12
 * Original: 0x0015BB12 - 0x0015BDA8 (662 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BB12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BB12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x14);
    eax = 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    MEM8(ebp + -1) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0015BB39; /* jne: not equal / not zero */

loc_0015BB28: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015BB35; /* jne: not equal / not zero */

loc_0015BB2D: ;
    _fa = (uint32_t)(MEM32(0x98B430)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B430), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BB39; /* je: equal / zero */

loc_0015BB35: ;
    MEM8(ebp + -1) = 0x80;

loc_0015BB39: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    eax = edx;
    POP32(esp, esi);
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015BB60; /* je: equal / zero */

loc_0015BB48: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015BB57; /* je: equal / zero */

loc_0015BB4B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015BB7B; /* jne: not equal / not zero */

loc_0015BB4E: ;
    MEM32(ebp + -16) = 0xC0000000u;
    goto loc_0015BB67;

loc_0015BB57: ;
    MEM32(ebp + -16) = 0x40000000;
    goto loc_0015BB67;

loc_0015BB60: ;
    MEM32(ebp + -16) = 0x80000000u;

loc_0015BB67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BBAC; /* je: equal / zero */

loc_0015BB6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BBA3; /* je: equal / zero */

loc_0015BB71: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BB9A; /* je: equal / zero */

loc_0015BB76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BB95; /* je: equal / zero */

loc_0015BB7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BB80u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BB80: ;
    MEM32(eax) = 0x16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BB8Bu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BB8B: ;
    MEM32(eax) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015BD59;

loc_0015BB95: ;
    MEM32(ebp + -8) = esi;
    goto loc_0015BBAF;

loc_0015BB9A: ;
    MEM32(ebp + -8) = 2;
    goto loc_0015BBAF;

loc_0015BBA3: ;
    MEM32(ebp + -8) = 1;
    goto loc_0015BBAF;

loc_0015BBAC: ;
    MEM32(ebp + -8) = ebx;

loc_0015BBAF: ;
    eax = edx;
    PUSH32(esp, edi);
    edx = 0x700;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    esi = 0x100;
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_0015BBF9; /* jg: greater (signed >) */

loc_0015BBCA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015BBF0; /* je: equal / zero */

loc_0015BBCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BBF0; /* je: equal / zero */

loc_0015BBD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BBEB; /* je: equal / zero */

loc_0015BBD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC25; /* je: equal / zero */

loc_0015BBDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BC0B; /* jne: not equal / not zero */

loc_0015BBE2: ;
    MEM32(ebp + -12) = 2;
    goto loc_0015BC35;

loc_0015BBEB: ;
    MEM32(ebp + -12) = edi;
    goto loc_0015BC35;

loc_0015BBF0: ;
    MEM32(ebp + -12) = 3;
    goto loc_0015BC35;

loc_0015BBF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x500 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC2E; /* je: equal / zero */

loc_0015BC00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x600 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC25; /* je: equal / zero */

loc_0015BC07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC2E; /* je: equal / zero */

loc_0015BC0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC10u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BC10: ;
    MEM32(eax) = 0x16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC1Bu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BC1B: ;
    MEM32(eax) = ebx;

loc_0015BC1D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015BD58;

loc_0015BC25: ;
    MEM32(ebp + -12) = 5;
    goto loc_0015BC35;

loc_0015BC2E: ;
    MEM32(ebp + -12) = 1;

loc_0015BC35: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    ebx = 0x80;
    if (TEST_Z(_fa, _fb)) goto loc_0015BC53; /* je: equal / zero */

loc_0015BC41: ;
    ecx = MEM32(0x98B218);
    ecx = ~ecx;
    ecx = ecx & MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0015BC53; /* js: sign (negative) */

loc_0015BC50: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015BC53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BC64; /* je: equal / zero */

loc_0015BC57: ;
    MEM8(ebp + -14) = MEM8(ebp + -14) | 1;
    _fa = (uint32_t)(MEM8(ebp + -14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = ebx | 0x4000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | edi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015BC64: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BC6B; /* je: equal / zero */

loc_0015BC69: ;
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015BC6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BC77; /* je: equal / zero */

loc_0015BC6F: ;
    ebx = ebx | 0x8000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015BC81;

loc_0015BC77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BC81; /* je: equal / zero */

loc_0015BC7B: ;
    ebx = ebx | 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015BC81: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC86u); RECOMP_ABI_CALL(0x0015B705u, sub_0015B705); /* call 0x0015B705 */

loc_0015BC86: ;
    edi = eax;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BCA9; /* jne: not equal / not zero */

loc_0015BC8F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC94u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BC94: ;
    MEM32(eax) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC9Fu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BC9F: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015BCA2: ;
    eax = esi;
    goto loc_0015BD58;

loc_0015BCA9: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCCDu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0015BCCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BCDF; /* jne: not equal / not zero */

loc_0015BCD1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCD6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015BCD6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCDCu); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_0015BCDC: ;
    POP32(esp, ecx);
    goto loc_0015BCA2;

loc_0015BCDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCE6u); RECOMP_ABI_CALL(0x0015B573u, sub_0015B573); /* call 0x0015B573 */

loc_0015BCE6: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) | 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax * 4 + 0xA9E320;
    eax = edi;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebx);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -1) = MEM8(ebp + -1) & 0x48;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + ecx + 4) = LO8(eax);
    if ((_fa != 0)) goto loc_0015BD41; /* jne: not equal / not zero */

loc_0015BD15: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0015BD41; /* jns: not sign (positive) */

loc_0015BD19: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BD41; /* je: equal / zero */

loc_0015BD1F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD29u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015BD29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0015BD5D; /* jne: not equal / not zero */

loc_0015BD34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD39u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015BD39: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x83 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BD9C; /* jne: not equal / not zero */

loc_0015BD41: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BD56; /* jne: not equal / not zero */

loc_0015BD47: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BD56; /* je: equal / zero */

loc_0015BD4D: ;
    eax = MEM32(ebx);
    eax = esi + eax + 4;
    MEM8(eax) = MEM8(eax) | 0x20;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015BD56: ;
    eax = edi;

loc_0015BD58: ;
    POP32(esp, edi);

loc_0015BD59: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0015BD5D: ;
    PUSH32(esp, 1);
    eax = ebp + -2;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(ebp + -2) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD6Du); RECOMP_ABI_CALL(0x0015955Eu, sub_0015955E); /* call 0x0015955E */

loc_0015BD6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BD8A; /* jne: not equal / not zero */

loc_0015BD74: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BD8A; /* jne: not equal / not zero */

loc_0015BD7A: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD83u); RECOMP_ABI_CALL(0x0015CCADu, sub_0015CCAD); /* call 0x0015CCAD */

loc_0015BD83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015BD9C; /* je: equal / zero */

loc_0015BD8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD94u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015BD94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BD41; /* jne: not equal / not zero */

loc_0015BD9C: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BDA2u); RECOMP_ABI_CALL(0x0015785Cu, sub_0015785C); /* call 0x0015785C */

loc_0015BDA2: ;
    POP32(esp, ecx);
    goto loc_0015BC1D;

}

/**
 * sub_0015BDED
 * Original: 0x0015BDED - 0x0015BDFD (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BDED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BDED: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BDFC; /* je: equal / zero */

loc_0015BDF3: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x0015BDFBu); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015BDFB: ;
    POP32(esp, ecx);

loc_0015BDFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BDFD
 * Original: 0x0015BDFD - 0x0015BE42 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BDFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BDFD: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2B1860);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE09u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BE09: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE2Au); RECOMP_ABI_CALL(0x0015BB12u, sub_0015BB12); /* call 0x0015BB12 */

loc_0015BE2A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE39u); RECOMP_ABI_CALL(0x0015BE42u, sub_0015BE42); /* call 0x0015BE42 */

loc_0015BE39: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE41u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BE41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BE42
 * Original: 0x0015BE42 - 0x0015BE52 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BE42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BE42: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BE51; /* je: equal / zero */

loc_0015BE48: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x0015BE50u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015BE50: ;
    POP32(esp, ecx);

loc_0015BE51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BE52
 * Original: 0x0015BE52 - 0x0015BF17 (197 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BE52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BE52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0015BEF2; /* jne: not equal / not zero */

loc_0015BE67: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BE86; /* je: equal / zero */

loc_0015BE6F: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_0015BE8B;

loc_0015BE86: ;
    eax = 0x2FD44C;

loc_0015BE8B: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BEF2; /* je: equal / zero */

loc_0015BE91: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE9Du); RECOMP_ABI_CALL(0x0015B30Bu, sub_0015B30B); /* call 0x0015B30B */

loc_0015BE9D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015BEB7; /* jne: not equal / not zero */

loc_0015BEA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BEABu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015BEAB: ;
    MEM32(eax) = 0x2A;

loc_0015BEB1: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    goto loc_0015BF12;

loc_0015BEB7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015BEEC; /* jle: less or equal (signed <=) */

loc_0015BEBD: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0015BED4; /* js: sign (negative) */

loc_0015BEC2: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp + edi + -8));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    goto loc_0015BEE2;

loc_0015BED4: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + edi + -8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BEE0u); RECOMP_ABI_CALL(0x00154ECCu, sub_00154ECC); /* call 0x00154ECC */

loc_0015BEE0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015BEE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BEB1; /* je: equal / zero */

loc_0015BEE7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015BEBD; /* jl: less (signed <) */

loc_0015BEEC: ;
    SET_LO16(eax, MEM16(ebp + 8));
    goto loc_0015BF12;

loc_0015BEF2: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0015BF05; /* js: sign (negative) */

loc_0015BEF8: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    MEM16(ecx) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015BF12;

loc_0015BF05: ;
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF10u); RECOMP_ABI_CALL(0x0015CE67u, sub_0015CE67); /* call 0x0015CE67 */

loc_0015BF10: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015BF12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015BF17
 * Original: 0x0015BF17 - 0x0015BF55 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BF17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BF17: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1870);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF23u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BF23: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF2Fu); RECOMP_ABI_CALL(0x001538A0u, sub_001538A0); /* call 0x001538A0 */

loc_0015BF2F: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF3Du); RECOMP_ABI_CALL(0x0015BE52u, sub_0015BE52); /* call 0x0015BE52 */

loc_0015BF3D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF4Bu); RECOMP_ABI_CALL(0x0015BF55u, sub_0015BF55); /* call 0x0015BF55 */

loc_0015BF4B: ;
    SET_LO16(eax, MEM16(ebp + -32));
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF54u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015BF54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BF55
 * Original: 0x0015BF55 - 0x0015BF5F (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BF55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015BF55: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0015BF5Du); RECOMP_ABI_CALL(0x001538F2u, sub_001538F2); /* call 0x001538F2 */

loc_0015BF5D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015BF64
 * Original: 0x0015BF64 - 0x0015BF9B (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BF64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BF64: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BF85; /* je: equal / zero */

loc_0015BF6C: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BF85; /* je: equal / zero */

loc_0015BF73: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BF88; /* jne: not equal / not zero */

loc_0015BF79: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BF85; /* je: equal / zero */

loc_0015BF81: ;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0015BF85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015BF88: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BF97; /* je: equal / zero */

loc_0015BF90: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(ecx) = LO16(eax);

loc_0015BF97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015BF9B
 * Original: 0x0015BF9B - 0x0015BFC7 (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BF9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BF9B: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015BFA1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x2FD678)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x2FD678) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BFB0; /* je: equal / zero */

loc_0015BFAA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015BFA1; /* jb: below (unsigned <) */

loc_0015BFB0: ;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2FD678)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x2FD678) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BFC6; /* jne: not equal / not zero */

loc_0015BFBB: ;
    PUSH32(esp, MEM32(eax + 0x2FD67C));
    PUSH32(esp, 0x0015BFC6u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0015BFC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015BFF1
 * Original: 0x0015BFF1 - 0x0015C013 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BFF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BFF1: ;
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0x0015BFFBu); RECOMP_ABI_CALL(0x0015BF9Bu, sub_0015BF9B); /* call 0x0015BF9B */

loc_0015BFFB: ;
    eax = MEM32(0x98B41C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015C007; /* je: equal / zero */

loc_0015C005: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0015C007u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C005u); } /* indirect call */
    }

loc_0015C007: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0015C011u); RECOMP_ABI_CALL(0x0015BF9Bu, sub_0015BF9B); /* call 0x0015BF9B */

loc_0015C011: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C013
 * Original: 0x0015C013 - 0x0015C07F (108 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C013(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C013: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015C05F; /* je: equal / zero */

loc_0015C01E: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015C031; /* jne: not equal / not zero */

loc_0015C029: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0015C05F; /* jns: not sign (positive) */

loc_0015C02D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015C05F; /* jne: not equal / not zero */

loc_0015C031: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C03E; /* jne: not equal / not zero */

loc_0015C037: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015C03Du); RECOMP_ABI_CALL(0x0015B29Du, sub_0015B29D); /* call 0x0015B29D */

loc_0015C03D: ;
    POP32(esp, ecx);

loc_0015C03E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C04E; /* jne: not equal / not zero */

loc_0015C045: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C05F; /* jne: not equal / not zero */

loc_0015C04B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_0015C04E: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0015C065; /* je: equal / zero */

loc_0015C058: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C067; /* je: equal / zero */

loc_0015C05C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_0015C05F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015C062: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015C065: ;
    MEM8(eax) = LO8(ebx);

loc_0015C067: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = ebx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015C062;

}

/**
 * sub_0015C0BA
 * Original: 0x0015C0BA - 0x0015C0C4 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C0BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C0BA: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x0015C0C2u); RECOMP_ABI_CALL(0x001538F2u, sub_001538F2); /* call 0x001538F2 */

loc_0015C0C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C0C4
 * Original: 0x0015C0C4 - 0x0015C0E5 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C0C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C0C4: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = edx + esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015C0DA; /* jb: below (unsigned <) */

loc_0015C0D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C0DD; /* jae: above or equal (unsigned >=) */

loc_0015C0DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C0DD: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C0E5
 * Original: 0x0015C0E5 - 0x0015C143 (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C0E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C0E5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0015C0F9u); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015C0F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C117; /* je: equal / zero */

loc_0015C100: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0015C10Du); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015C10D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C117; /* je: equal / zero */

loc_0015C114: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C117: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0015C125u); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015C125: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C12F; /* je: equal / zero */

loc_0015C12C: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C12F: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0015C13Du); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015C13D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C143
 * Original: 0x0015C143 - 0x0015C171 (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C143(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C143: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = esi;
    esi = edi + edi;
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(eax + 8);
    edx = edi;
    edx = edx >> 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C171
 * Original: 0x0015C171 - 0x0015C19E (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C171(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C171: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    edi = edi << 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C19E
 * Original: 0x0015C19E - 0x0015C26C (206 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015C19E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C19E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x404E;
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0015C211; /* jbe: below or equal (unsigned <=) */

loc_0015C1C2: ;
    MEM32(ebp + 0x10) = eax;

loc_0015C1C5: ;
    esi = ebx;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, ebx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C1D3u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C1D3: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C1D9u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C1D9: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C1E3u); RECOMP_ABI_CALL(0x0015C0E5u, sub_0015C0E5); /* call 0x0015C0E5 */

loc_0015C1E3: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C1E9u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C1E9: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C204u); RECOMP_ABI_CALL(0x0015C0E5u, sub_0015C0E5); /* call 0x0015C0E5 */

loc_0015C204: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015C1C5; /* jne: not equal / not zero */

loc_0015C20F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C211: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C245; /* jne: not equal / not zero */

loc_0015C216: ;
    edi = MEM32(ebx + 8);

loc_0015C219: ;
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(0xFFF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xFFF0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = MEM32(ebx);
    esi = eax;
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C219; /* je: equal / zero */

loc_0015C242: ;
    MEM32(ebx + 8) = edi;

loc_0015C245: ;
    esi = 0x8000;
    goto loc_0015C25A;

loc_0015C24C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C252u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C252: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_0015C25A: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015C24C; /* je: equal / zero */

loc_0015C25F: ;
    SET_LO16(eax, MEM16(ebp + -4));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebx + 0xA) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015C26C
 * Original: 0x0015C26C - 0x0015C6B3 (1095 bytes, 388 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015C26C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C26C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = ebp + -84;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + 0x10) = edi;

loc_0015C2A1: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C2B7; /* je: equal / zero */

loc_0015C2A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C2B7; /* je: equal / zero */

loc_0015C2AD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C2B7; /* je: equal / zero */

loc_0015C2B2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C2BA; /* jne: not equal / not zero */

loc_0015C2B7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C2A1;

loc_0015C2BA: ;
    PUSH32(esp, 4);
    POP32(esp, esi);

loc_0015C2BD: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C531; /* ja: above (unsigned >) */

loc_0015C2C9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15C6B3); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0015C2D0u) goto loc_0015C2D0;
    if (_jt == 0x0015C320u) goto loc_0015C320;
    if (_jt == 0x0015C36Bu) goto loc_0015C36B;
    if (_jt == 0x0015C395u) goto loc_0015C395;
    if (_jt == 0x0015C3EEu) goto loc_0015C3EE;
    if (_jt == 0x0015C463u) goto loc_0015C463;
    if (_jt == 0x0015C493u) goto loc_0015C493;
    if (_jt == 0x0015C4BCu) goto loc_0015C4BC;
    if (_jt == 0x0015C4DDu) goto loc_0015C4DD;
    if (_jt == 0x0015C4FDu) goto loc_0015C4FD;
    if (_jt == 0x0015C531u) goto loc_0015C531;
    if (_jt == 0x0015C53Fu) goto loc_0015C53F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015C2D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C2E1; /* jl: less (signed <) */

loc_0015C2D5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C2E1; /* jg: greater (signed >) */

loc_0015C2DA: ;
    PUSH32(esp, 3);
    goto loc_0015C4E9;

loc_0015C2E1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x2FD3D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x2FD3D4) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C2F0; /* jne: not equal / not zero */

loc_0015C2E9: ;
    PUSH32(esp, 5);
    goto loc_0015C527;

loc_0015C2F0: ;
    eax = SX8(LO8(ebx));
    _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015C317; /* je: equal / zero */

loc_0015C2F8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015C30B; /* je: equal / zero */

loc_0015C2FC: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015C38E; /* je: equal / zero */

loc_0015C305: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0015C5C4;

loc_0015C30B: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    MEM32(ebp + -40) = 0x8000;
    goto loc_0015C2BD;

loc_0015C317: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0015C2BD;

loc_0015C320: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0015C32D; /* jl: less (signed <) */

loc_0015C328: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C2DA; /* jle: less or equal (signed <=) */

loc_0015C32D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x2FD3D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x2FD3D4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C3E7; /* je: equal / zero */

loc_0015C339: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C363; /* je: equal / zero */

loc_0015C33E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C363; /* je: equal / zero */

loc_0015C343: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C38E; /* je: equal / zero */

loc_0015C348: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x43 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C305; /* jle: less or equal (signed <=) */

loc_0015C34D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x45 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C35C; /* jle: less or equal (signed <=) */

loc_0015C352: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x63 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C305; /* jle: less or equal (signed <=) */

loc_0015C357: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x65 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C305; /* jg: greater (signed >) */

loc_0015C35C: ;
    PUSH32(esp, 6);
    goto loc_0015C527;

loc_0015C363: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0xB);
    goto loc_0015C527;

loc_0015C36B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C379; /* jl: less (signed <) */

loc_0015C370: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C2DA; /* jle: less or equal (signed <=) */

loc_0015C379: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x2FD3D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x2FD3D4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C2E9; /* je: equal / zero */

loc_0015C385: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C4F5; /* jne: not equal / not zero */

loc_0015C38E: ;
    eax = edx;
    goto loc_0015C2BD;

loc_0015C395: ;
    MEM32(ebp + -16) = edx;

loc_0015C398: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), edx (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0015C3B1; /* jle: less or equal (signed <=) */

loc_0015C3A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C3AAu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015C3AA: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C3BD;

loc_0015C3B1: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015C3BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C3DF; /* je: equal / zero */

loc_0015C3C1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x19 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C3D7; /* jae: above or equal (unsigned >=) */

loc_0015C3C7: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - 0x30);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);
    goto loc_0015C3DA;

loc_0015C3D7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C3DA: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C398;

loc_0015C3DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x2FD3D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x2FD3D4) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C44C; /* jne: not equal / not zero */

loc_0015C3E7: ;
    eax = esi;
    goto loc_0015C2BD;

loc_0015C3EE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -36) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0015C407; /* jne: not equal / not zero */

loc_0015C3FA: ;
    goto loc_0015C402;

loc_0015C3FC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C402: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C3FC; /* je: equal / zero */

loc_0015C407: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), edx (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0015C420; /* jle: less or equal (signed <=) */

loc_0015C412: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C419u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015C419: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C42C;

loc_0015C420: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015C42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C44C; /* je: equal / zero */

loc_0015C430: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x19 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C447; /* jae: above or equal (unsigned >=) */

loc_0015C436: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - 0x30);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);

loc_0015C447: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C407;

loc_0015C44C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C363; /* je: equal / zero */

loc_0015C455: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C363; /* je: equal / zero */

loc_0015C45E: ;
    goto loc_0015C348;

loc_0015C463: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), edx (32-bit) */
    MEM32(ebp + -36) = edx;
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0015C47F; /* jle: less or equal (signed <=) */

loc_0015C471: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C478u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015C478: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C48B;

loc_0015C47F: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015C48B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C4F5; /* je: equal / zero */

loc_0015C48F: ;
    eax = esi;
    goto loc_0015C4EA;

loc_0015C493: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    ecx = edi + -2;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0015C4A3; /* jl: less (signed <) */

loc_0015C49E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C4E7; /* jle: less or equal (signed <=) */

loc_0015C4A3: ;
    eax = SX8(LO8(ebx));
    _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015C525; /* je: equal / zero */

loc_0015C4AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015C519; /* je: equal / zero */

loc_0015C4AF: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0015C5C2; /* jne: not equal / not zero */

loc_0015C4B8: ;
    PUSH32(esp, 8);
    goto loc_0015C527;

loc_0015C4BC: ;
    MEM32(ebp + -32) = edx;
    goto loc_0015C4C4;

loc_0015C4C1: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C4C4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C4C1; /* je: equal / zero */

loc_0015C4C9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C305; /* jl: less (signed <) */

loc_0015C4D2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C305; /* jg: greater (signed >) */

loc_0015C4DB: ;
    goto loc_0015C4E7;

loc_0015C4DD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C4F0; /* jl: less (signed <) */

loc_0015C4E2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C4F0; /* jg: greater (signed >) */

loc_0015C4E7: ;
    PUSH32(esp, 9);

loc_0015C4E9: ;
    POP32(esp, eax);

loc_0015C4EA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0015C2BD;

loc_0015C4F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C4B8; /* je: equal / zero */

loc_0015C4F5: ;
    edi = MEM32(ebp + 0x10);
    goto loc_0015C5C4;

loc_0015C4FD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C52D; /* je: equal / zero */

loc_0015C503: ;
    eax = SX8(LO8(ebx));
    _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + -1;
    MEM32(ebp + 0x10) = ecx;
    if ((_fa == 0)) goto loc_0015C525; /* je: equal / zero */

loc_0015C511: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015C5C2; /* jne: not equal / not zero */

loc_0015C519: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 7);
    POP32(esp, eax);
    goto loc_0015C2BD;

loc_0015C525: ;
    PUSH32(esp, 7);

loc_0015C527: ;
    POP32(esp, eax);
    goto loc_0015C2BD;

loc_0015C52D: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015C531: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C2BD; /* jne: not equal / not zero */

loc_0015C53A: ;
    goto loc_0015C5C4;

loc_0015C53F: ;
    MEM32(ebp + -32) = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C548: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0015C560; /* jle: less or equal (signed <=) */

loc_0015C554: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C55Cu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015C55C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015C56D;

loc_0015C560: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015C56D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C58D; /* je: equal / zero */

loc_0015C571: ;
    ecx = SX8(LO8(ebx));
    eax = esi + esi * 4;
    esi = ecx + eax * 2 + -48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1450 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C588; /* jg: greater (signed >) */

loc_0015C583: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C548;

loc_0015C588: ;
    esi = 0x1451;

loc_0015C58D: ;
    MEM32(ebp + -28) = esi;

loc_0015C590: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0015C5A8; /* jle: less or equal (signed <=) */

loc_0015C59C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C5A4u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015C5A4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015C5B5;

loc_0015C5A8: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015C5B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C305; /* je: equal / zero */

loc_0015C5BD: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C590;

loc_0015C5C2: ;
    edi = ecx;

loc_0015C5C4: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C669; /* je: equal / zero */

loc_0015C5D3: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015C5F0; /* jbe: below or equal (unsigned <=) */

loc_0015C5DB: ;
    _fa = (uint32_t)(MEM8(ebp + -61)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -61), 5 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C5E4; /* jl: less (signed <) */

loc_0015C5E1: ;
    MEM8(ebp + -61) = MEM8(ebp + -61) + 1;
    _fa = (uint32_t)(MEM8(ebp + -61)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015C5E4: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C5F3;

loc_0015C5F0: ;
    eax = MEM32(ebp + -12);

loc_0015C5F3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015C690; /* jbe: below or equal (unsigned <=) */

loc_0015C5FD: ;
    goto loc_0015C605;

loc_0015C5FF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C605: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C5FF; /* je: equal / zero */

loc_0015C60B: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -84;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C61Bu); RECOMP_ABI_CALL(0x0015C19Eu, sub_0015C19E); /* call 0x0015C19E */

loc_0015C61B: ;
    eax = MEM32(ebp + -28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015C62A; /* jge: greater or equal (signed >=) */

loc_0015C628: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015C62A: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C635; /* jne: not equal / not zero */

loc_0015C632: ;
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015C635: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C63D; /* jne: not equal / not zero */

loc_0015C63A: ;
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015C63D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1450 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C672; /* jg: greater (signed >) */

loc_0015C644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEBB0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFEBB0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C689; /* jl: less (signed <) */

loc_0015C64B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C658u); RECOMP_ABI_CALL(0x0015D1B1u, sub_0015D1B1); /* call 0x0015D1B1 */

loc_0015C658: ;
    edx = MEM32(ebp + -56);
    ebx = MEM32(ebp + -54);
    esi = MEM32(ebp + -50);
    eax = MEM32(ebp + -46);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015C698;

loc_0015C669: ;
    MEM32(ebp + -20) = 4;
    goto loc_0015C690;

loc_0015C672: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x7FFF;
    esi = 0x80000000u;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = 2;
    goto loc_0015C698;

loc_0015C689: ;
    MEM32(ebp + -20) = 1;

loc_0015C690: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C698: ;
    ecx = MEM32(ebp + 8);
    eax = eax | MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ecx + 6) = esi;
    POP32(esp, esi);
    MEM32(ecx + 2) = ebx;
    MEM16(ecx + 0xA) = LO16(eax);
    eax = MEM32(ebp + -20);
    MEM16(ecx) = LO16(edx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015C6E3
 * Original: 0x0015C6E3 - 0x0015C71F (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015C6E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C6E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -12;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C701u); RECOMP_ABI_CALL(0x0015C26Cu, sub_0015C26C); /* call 0x0015C26C */

loc_0015C701: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C70Fu); RECOMP_ABI_CALL(0x0015A7B1u, sub_0015A7B1); /* call 0x0015A7B1 */

loc_0015C70F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C71A; /* jne: not equal / not zero */

loc_0015C717: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015C71A: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015C71F
 * Original: 0x0015C71F - 0x0015C996 (631 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015C71F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C71F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    ecx = eax;
    esi = 0x7FFF;
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    PUSH32(esp, edi);
    MEM8(ebp + -32) = 0xCC;
    MEM8(ebp + -31) = 0xCC;
    MEM8(ebp + -30) = 0xCC;
    MEM8(ebp + -29) = 0xCC;
    MEM8(ebp + -28) = 0xCC;
    MEM8(ebp + -27) = 0xCC;
    MEM8(ebp + -26) = 0xCC;
    MEM8(ebp + -25) = 0xCC;
    MEM8(ebp + -24) = 0xCC;
    MEM8(ebp + -23) = 0xCC;
    MEM8(ebp + -22) = 0xFB;
    MEM8(ebp + -21) = 0x3F;
    MEM32(ebp + -4) = 1;
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C781; /* je: equal / zero */

loc_0015C77B: ;
    MEM8(ebx + 2) = 0x2D;
    goto loc_0015C785;

loc_0015C781: ;
    MEM8(ebx + 2) = 0x20;

loc_0015C785: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0015C79A; /* jne: not equal / not zero */

loc_0015C78D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C79A; /* jne: not equal / not zero */

loc_0015C791: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C886; /* je: equal / zero */

loc_0015C79A: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C810; /* jne: not equal / not zero */

loc_0015C79F: ;
    eax = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM16(ebx) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0015C7B3; /* jne: not equal / not zero */

loc_0015C7AD: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C7C2; /* je: equal / zero */

loc_0015C7B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015C7C2; /* jne: not equal / not zero */

loc_0015C7BB: ;
    esi = 0x2B1C14;
    goto loc_0015C803;

loc_0015C7C2: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C7DC; /* je: equal / zero */

loc_0015C7C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C7DC; /* jne: not equal / not zero */

loc_0015C7CF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C7FE; /* jne: not equal / not zero */

loc_0015C7D5: ;
    esi = 0x2B1C0C;
    goto loc_0015C7EB;

loc_0015C7DC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C7FE; /* jne: not equal / not zero */

loc_0015C7E0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C7FE; /* jne: not equal / not zero */

loc_0015C7E6: ;
    esi = 0x2B1C04;

loc_0015C7EB: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(ebx + 3) = 5;

loc_0015C7F5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015C968;

loc_0015C7FE: ;
    esi = 0x2B1BFC;

loc_0015C803: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    MEM8(ebx + 3) = 6;
    goto loc_0015C7F5;

loc_0015C810: ;
    eax = ZX16(LO16(edx));
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4D10);
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0;
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = edi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + ecx * 2;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4D);
    esi = ecx + eax + -323162868;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -18) = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX16(LO16(esi));
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM16(ebp + -10) = LO16(edx);
    MEM32(ebp + -14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C856u); RECOMP_ABI_CALL(0x0015D1B1u, sub_0015D1B1); /* call 0x0015D1B1 */

loc_0015C856: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + -10)) & 0xFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -10), 0x3FFF (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015C871; /* jb: below (unsigned <) */

loc_0015C861: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C86Fu); RECOMP_ABI_CALL(0x0015CF8Fu, sub_0015CF8F); /* call 0x0015CF8F */

loc_0015C86F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015C871: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    edi = MEM32(ebp + 0x14);
    MEM16(ebx) = LO16(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0015C88F; /* je: equal / zero */

loc_0015C87D: ;
    eax = SX16(LO16(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C88F; /* jg: greater (signed >) */

loc_0015C886: ;
    MEM8(ebx + 4) = 0x30;
    goto loc_0015C981;

loc_0015C88F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C897; /* jle: less or equal (signed <=) */

loc_0015C894: ;
    PUSH32(esp, 0x15);
    POP32(esp, edi);

loc_0015C897: ;
    esi = ZX16(MEM16(ebp + -10));
    _fb = (uint32_t)(0x3FFE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x3FFE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -10) = MEM16(ebp + -10) & 0;
    _fa = (uint32_t)(MEM16(ebp + -10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = 8;

loc_0015C8AD: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C8B6u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C8B6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0015C8AD; /* jne: not equal / not zero */

loc_0015C8BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015C8D7; /* jge: greater or equal (signed >=) */

loc_0015C8C0: ;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas <= 0)) goto loc_0015C8D7; /* jle: less or equal (signed <=) */

loc_0015C8CA: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C8D3u); RECOMP_ABI_CALL(0x0015C171u, sub_0015C171); /* call 0x0015C171 */

loc_0015C8D3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0015C8CA; /* jne: not equal / not zero */

loc_0015C8D7: ;
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebx + 4;
    MEM32(ebp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0015C934; /* jle: less or equal (signed <=) */

loc_0015C8E4: ;
    MEM32(ebp + -8) = ecx;

loc_0015C8E7: ;
    esi = ebp + -20;
    edi = ebp + -44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C8F9u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C8F9: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C902u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C902: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C90Fu); RECOMP_ABI_CALL(0x0015C0E5u, sub_0015C0E5); /* call 0x0015C0E5 */

loc_0015C90F: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C918u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015C918: ;
    SET_LO8(eax, MEM8(ebp + -9));
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    MEM8(ebp + -9) = 0;
    if ((_fa != 0)) goto loc_0015C8E7; /* jne: not equal / not zero */

loc_0015C931: ;
    eax = MEM32(ebp + 0x10);

loc_0015C934: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x35) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x35 (8-bit) */
    ecx = ebx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_0015C976; /* jl: less (signed <) */

loc_0015C940: ;
    goto loc_0015C94B;

loc_0015C942: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C94F; /* jne: not equal / not zero */

loc_0015C947: ;
    MEM8(eax) = 0x30;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015C94B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C942; /* jae: above or equal (unsigned >=) */

loc_0015C94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C957; /* jae: above or equal (unsigned >=) */

loc_0015C953: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx) = MEM16(ebx) + 1;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0015C957: ;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0015C959: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ebx + 3) = LO8(eax);
    eax = SX8(LO8(eax));
    MEM8(eax + ebx + 4) = 0;

loc_0015C968: ;
    eax = MEM32(ebp + -4);

loc_0015C96B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0015C970: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C97A; /* jne: not equal / not zero */

loc_0015C975: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015C976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C970; /* jae: above or equal (unsigned >=) */

loc_0015C97A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015C959; /* jae: above or equal (unsigned >=) */

loc_0015C97E: ;
    MEM8(ecx) = 0x30;

loc_0015C981: ;
    MEM16(ebx) = MEM16(ebx) & 0;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebx + 2) = 0x20;
    MEM8(ebx + 3) = 1;
    MEM8(ebx + 5) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015C96B;

}

/**
 * sub_0015C996
 * Original: 0x0015C996 - 0x0015C9C4 (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015C996(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C996: ;
    ecx = MEM32(0x2FD52C);
    eax = edx;
    PUSH32(esp, edi);

loc_0015C99F: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C9B1; /* je: equal / zero */

loc_0015C9A4: ;
    edi = ecx + ecx * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + edi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015C99F; /* jb: below (unsigned <) */

loc_0015C9B1: ;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0015C9C1; /* jae: above or equal (unsigned >=) */

loc_0015C9BC: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C9C3; /* je: equal / zero */

loc_0015C9C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C9C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C9CD
 * Original: 0x0015C9CD - 0x0015C9D6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C9CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C9CD: ;
    PUSH32(esp, 0x0015C9D2u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015C9D2: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015C9D6
 * Original: 0x0015C9D6 - 0x0015CB17 (321 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C9D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C9D6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1C20);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C9E2u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015C9E2: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CB20(); return; } /* je: equal / zero */

loc_0015C9EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CB20(); return; } /* je: equal / zero */

loc_0015C9F7: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CAAC; /* je: equal / zero */

loc_0015CA03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CAAC; /* je: equal / zero */

loc_0015CA0C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CAAC; /* je: equal / zero */

loc_0015CA15: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CAAC; /* je: equal / zero */

loc_0015CA1E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CA31; /* je: equal / zero */

loc_0015CA23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CA31; /* je: equal / zero */

loc_0015CA28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CB20(); return; } /* jne: not equal / not zero */

loc_0015CA31: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CA36u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015CA36: ;
    ebx = eax;
    edi = 0x2FD4A8;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CA74; /* jne: not equal / not zero */

loc_0015CA42: ;
    PUSH32(esp, MEM32(0x2FD528));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CA4Du); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0015CA4D: ;
    POP32(esp, ecx);
    MEM32(ebx + 0x54) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CB20(); return; } /* je: equal / zero */

loc_0015CA59: ;
    ecx = MEM32(0x2FD528);
    esi = edi;
    edi = eax;
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
    esi = MEM32(ebp + 8);

loc_0015CA74: ;
    edx = MEM32(ebx + 0x54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CA7Cu); RECOMP_ABI_CALL(0x0015C996u, sub_0015C996); /* call 0x0015C996 */

loc_0015CA7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CB20(); return; } /* je: equal / zero */

loc_0015CA84: ;
    edx = MEM32(eax + 8);
    goto loc_0015CAA5;

loc_0015CA89: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x2FD52C);
    ecx = ecx + ecx * 2;
    edi = MEM32(ebx + 0x54);
    ecx = edi + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015CB13; /* jae: above or equal (unsigned >=) */

loc_0015CAA5: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CA89; /* je: equal / zero */

loc_0015CAAA: ;
    goto loc_0015CB13;

loc_0015CAAC: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CAB3u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015CAB3: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015CAF9; /* je: equal / zero */

loc_0015CABC: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CAE9; /* je: equal / zero */

loc_0015CAC1: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CAD9; /* je: equal / zero */

loc_0015CAC6: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015CB07; /* jne: not equal / not zero */

loc_0015CAC9: ;
    eax = MEM32(0x98B428);
    MEM32(ebp + -28) = eax;
    MEM32(0x98B428) = edi;
    goto loc_0015CB07;

loc_0015CAD9: ;
    eax = MEM32(0x98B424);
    MEM32(ebp + -28) = eax;
    MEM32(0x98B424) = edi;
    goto loc_0015CB07;

loc_0015CAE9: ;
    eax = MEM32(0x98B42C);
    MEM32(ebp + -28) = eax;
    MEM32(0x98B42C) = edi;
    goto loc_0015CB07;

loc_0015CAF9: ;
    eax = MEM32(0x98B420);
    MEM32(ebp + -28) = eax;
    MEM32(0x98B420) = edi;

loc_0015CB07: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CB10u); RECOMP_ABI_CALL(0x0015CB17u, sub_0015CB17); /* call 0x0015CB17 */

loc_0015CB10: ;
    edx = MEM32(ebp + -28);

loc_0015CB13: ;
    eax = edx;
    g_seh_ebp = ebp; sub_0015CB2E(); return; /* tail jmp 0x0015CB2E */

}

/**
 * sub_0015CB17
 * Original: 0x0015CB17 - 0x0015CB20 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CB17(void)
{

loc_0015CB17: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015CB1Eu); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015CB1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015CB20
 * Original: 0x0015CB20 - 0x0015CB2E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CB20: ;
    PUSH32(esp, 0x0015CB25u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015CB25: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0015CB2E(); return; /* fallthrough 0x0015CB2E */

}

/**
 * sub_0015CB2E
 * Original: 0x0015CB2E - 0x0015CB34 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CB2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CB2E: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015CB33u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015CB33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015CB34
 * Original: 0x0015CB34 - 0x0015CC67 (307 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CB34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CB34: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2B1C30);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CB40u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015CB40: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015CBB6; /* je: equal / zero */

loc_0015CB4C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015CB96; /* je: equal / zero */

loc_0015CB50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CB96; /* je: equal / zero */

loc_0015CB55: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CB96; /* je: equal / zero */

loc_0015CB5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CB89; /* je: equal / zero */

loc_0015CB5F: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015CB7C; /* je: equal / zero */

loc_0015CB64: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015CB6F; /* je: equal / zero */

loc_0015CB67: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0015CCA7(); return; /* tail jmp 0x0015CCA7 */

loc_0015CB6F: ;
    esi = 0x98B428;
    edi = MEM32(0x98B428);
    goto loc_0015CBC1;

loc_0015CB7C: ;
    esi = 0x98B424;
    edi = MEM32(0x98B424);
    goto loc_0015CBC1;

loc_0015CB89: ;
    esi = 0x98B42C;
    edi = MEM32(0x98B42C);
    goto loc_0015CBC1;

loc_0015CB96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CB9Bu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015CB9B: ;
    ebx = eax;
    MEM32(ebp + -36) = ebx;
    edx = MEM32(ebx + 0x54);
    esi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CBABu); RECOMP_ABI_CALL(0x0015C996u, sub_0015C996); /* call 0x0015C996 */

loc_0015CBAB: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015CBCB;

loc_0015CBB6: ;
    esi = 0x98B420;
    edi = MEM32(0x98B420);

loc_0015CBC1: ;
    MEM32(ebp + -28) = 1;
    ebx = MEM32(ebp + -36);

loc_0015CBCB: ;
    MEM32(ebp + -32) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CCA5(); return; } /* je: equal / zero */

loc_0015CBD7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CBE2; /* jne: not equal / not zero */

loc_0015CBDB: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CBE2u); RECOMP_ABI_CALL(0x001534D0u, sub_001534D0); /* call 0x001534D0 */

loc_0015CBE2: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CBF0; /* je: equal / zero */

loc_0015CBE7: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CBEDu); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015CBED: ;
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015CBF0: ;
    MEM32(ebp + -4) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC05; /* je: equal / zero */

loc_0015CBFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC05; /* je: equal / zero */

loc_0015CC00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC20; /* jne: not equal / not zero */

loc_0015CC05: ;
    edx = MEM32(ebx + 0x58);
    MEM32(ebp + -44) = edx;
    MEM32(ebx + 0x58) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC4C; /* jne: not equal / not zero */

loc_0015CC13: ;
    edx = MEM32(ebx + 0x5C);
    MEM32(ebp + -48) = edx;
    MEM32(ebx + 0x5C) = 0x8C;

loc_0015CC20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC4C; /* jne: not equal / not zero */

loc_0015CC25: ;
    eax = MEM32(0x2FD520);

loc_0015CC2A: ;
    MEM32(ebp + -40) = eax;
    edx = MEM32(0x2FD524);
    esi = MEM32(0x2FD520);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CC4E; /* jge: greater or equal (signed >=) */

loc_0015CC3F: ;
    edx = eax + eax * 2;
    esi = MEM32(ebx + 0x54);
    MEM32(esi + edx * 4 + 8) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015CC2A;

loc_0015CC4C: ;
    MEM32(esi) = ecx;

loc_0015CC4E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CC57u); RECOMP_ABI_CALL(0x0015CC6Fu, sub_0015CC6F); /* call 0x0015CC6F */

loc_0015CC57: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CC7C(); return; } /* jne: not equal / not zero */

loc_0015CC5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x5C));
    PUSH32(esp, 8);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0015CC64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015CC62u); } /* indirect call */
    }

loc_0015CC64: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0015CC81(); return; /* tail jmp 0x0015CC81 */

}

/**
 * sub_0015CC6F
 * Original: 0x0015CC6F - 0x0015CC7C (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CC6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CC6F: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC7B; /* je: equal / zero */

loc_0015CC74: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015CC7Au); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015CC7A: ;
    POP32(esp, ecx);

loc_0015CC7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015CC7C
 * Original: 0x0015CC7C - 0x0015CC81 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CC7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CC7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0015CC81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015CC7Fu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_0015CC81(); return; /* fallthrough 0x0015CC81 */

}

/**
 * sub_0015CC81
 * Original: 0x0015CC81 - 0x0015CCA5 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CC81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CC81: ;
    POP32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC94; /* je: equal / zero */

loc_0015CC8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC94; /* je: equal / zero */

loc_0015CC8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CCA5(); return; } /* jne: not equal / not zero */

loc_0015CC94: ;
    ecx = MEM32(ebp + -44);
    MEM32(ebx + 0x58) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CCA5(); return; } /* jne: not equal / not zero */

loc_0015CC9F: ;
    eax = MEM32(ebp + -48);
    MEM32(ebx + 0x5C) = eax;

    g_seh_ebp = ebp; sub_0015CCA5(); return; /* fallthrough 0x0015CCA5 */

}

/**
 * sub_0015CCA5
 * Original: 0x0015CCA5 - 0x0015CCA7 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015CCA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CCA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0015CCA7(); return; /* fallthrough 0x0015CCA7 */

}

/**
 * sub_0015CCA7
 * Original: 0x0015CCA7 - 0x0015CCAD (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CCA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CCA7: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015CCACu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015CCAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015CCAD
 * Original: 0x0015CCAD - 0x0015CDD0 (291 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015CCAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015CCAD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1008;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CCBAu); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_0015CCBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CCC9u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015CCC9: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015CDCA; /* je: equal / zero */

loc_0015CCDA: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CCE5u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015CCE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015CDCA; /* je: equal / zero */

loc_0015CCF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0015CD6F; /* jle: less or equal (signed <=) */

loc_0015CCFA: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, MEM32(ebp + 8));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x400;
    edi = ebp + -4104;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD16u); RECOMP_ABI_CALL(0x0015D227u, sub_0015D227); /* call 0x0015D227 */

loc_0015CD16: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    edi = 0x1000;

loc_0015CD20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0015CD28; /* jge: greater or equal (signed >=) */

loc_0015CD26: ;
    eax = ebx;

loc_0015CD28: ;
    PUSH32(esp, eax);
    eax = ebp + -4104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD38u); RECOMP_ABI_CALL(0x00157B5Cu, sub_00157B5C); /* call 0x00157B5C */

loc_0015CD38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015CD48; /* je: equal / zero */

loc_0015CD40: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015CD20; /* jg: greater (signed >) */

loc_0015CD46: ;
    goto loc_0015CD60;

loc_0015CD48: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD4Du); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015CD4D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015CD5D; /* jne: not equal / not zero */

loc_0015CD52: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD57u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015CD57: ;
    MEM32(eax) = 0xD;

loc_0015CD5D: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015CD60: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD6Bu); RECOMP_ABI_CALL(0x0015D227u, sub_0015D227); /* call 0x0015D227 */

loc_0015CD6B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015CDB5;

loc_0015CD6F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0015CDB5; /* jge: greater or equal (signed >=) */

loc_0015CD71: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD7Eu); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015CD7E: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD86u); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_0015CD86: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CD8Fu); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_0015CD8F: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015CDB5; /* jne: not equal / not zero */

loc_0015CD9C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CDA1u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015CDA1: ;
    MEM32(eax) = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CDACu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015CDAC: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CDB3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0015CDB3: ;
    MEM32(edi) = eax;

loc_0015CDB5: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CDC2u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_0015CDC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, ebx);
    goto loc_0015CDCC;

loc_0015CDCA: ;
    eax = edi;

loc_0015CDCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015CDD0
 * Original: 0x0015CDD0 - 0x0015CE48 (120 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CDD0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1C40);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CDDCu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015CDDC: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CE53(); return; } /* jae: above or equal (unsigned >=) */

loc_0015CDE7: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015CE53(); return; } /* je: equal / zero */

loc_0015CE07: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CE0Du); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015CE0D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CE2B; /* je: equal / zero */

loc_0015CE1B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CE24u); RECOMP_ABI_CALL(0x0015CCADu, sub_0015CCAD); /* call 0x0015CCAD */

loc_0015CE24: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    goto loc_0015CE3A;

loc_0015CE2B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CE30u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015CE30: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015CE3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CE43u); RECOMP_ABI_CALL(0x0015CE4Bu, sub_0015CE4B); /* call 0x0015CE4B */

loc_0015CE43: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0015CE61(); return; /* tail jmp 0x0015CE61 */

}

/**
 * sub_0015CE4B
 * Original: 0x0015CE4B - 0x0015CE53 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CE4B(void)
{

loc_0015CE4B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015CE51u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015CE51: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015CE53
 * Original: 0x0015CE53 - 0x0015CE61 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CE53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CE53: ;
    PUSH32(esp, 0x0015CE58u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015CE58: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0015CE61(); return; /* fallthrough 0x0015CE61 */

}

/**
 * sub_0015CE61
 * Original: 0x0015CE61 - 0x0015CE67 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CE61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CE61: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015CE66u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015CE66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015CE67
 * Original: 0x0015CE67 - 0x0015CF8F (296 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015CE67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015CE67: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x82 (8-bit) */
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0015CF80; /* je: equal / zero */

loc_0015CE81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CF80; /* jne: not equal / not zero */

loc_0015CE89: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CEA5; /* je: equal / zero */

loc_0015CE8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    MEM32(esi + 4) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0015CF80; /* je: equal / zero */

loc_0015CE9A: ;
    edx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    MEM32(esi + 0xC) = eax;

loc_0015CEA5: ;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015CEE2; /* jne: not equal / not zero */

loc_0015CEBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCCF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCCF0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CECD; /* je: equal / zero */

loc_0015CEC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCD10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCD10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CED8; /* jne: not equal / not zero */

loc_0015CECD: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CED3u); RECOMP_ABI_CALL(0x0015B2E1u, sub_0015B2E1); /* call 0x0015B2E1 */

loc_0015CED3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015CEDF; /* jne: not equal / not zero */

loc_0015CED8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CEDEu); RECOMP_ABI_CALL(0x0015B29Du, sub_0015B29D); /* call 0x0015B29D */

loc_0015CEDE: ;
    POP32(esp, ecx);

loc_0015CEDF: ;
    ecx = MEM32(ebp + -4);

loc_0015CEE2: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x108 (16-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0015CF50; /* je: equal / zero */

loc_0015CEEB: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    edx = eax + 2;
    MEM32(esi) = edx;
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015CF10; /* jle: less or equal (signed <=) */

loc_0015CF03: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CF0Bu); RECOMP_ABI_CALL(0x00157CE7u, sub_00157CE7); /* call 0x00157CE7 */

loc_0015CF0B: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0015CF42;

loc_0015CF10: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF2E; /* je: equal / zero */

loc_0015CF15: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(edx * 4 + 0xA9E320);
    eax = ecx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    goto loc_0015CF33;

loc_0015CF2E: ;
    eax = 0x2FD44C;

loc_0015CF33: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CF45; /* je: equal / zero */

loc_0015CF39: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CF42u); RECOMP_ABI_CALL(0x001591FEu, sub_001591FE); /* call 0x001591FE */

loc_0015CF42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015CF45: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(ebp + 8);
    MEM16(eax) = LO16(ebx);
    goto loc_0015CF6B;

loc_0015CF50: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(ebp + 0xC) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015CF65u); RECOMP_ABI_CALL(0x00157CE7u, sub_00157CE7); /* call 0x00157CE7 */

loc_0015CF65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_0015CF6B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF77; /* je: equal / zero */

loc_0015CF71: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015CF86;

loc_0015CF77: ;
    eax = ebx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015CF8B;

loc_0015CF80: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_0015CF86: ;
    eax = 0xFFFF;

loc_0015CF8B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015CF8F
 * Original: 0x0015CF8F - 0x0015D1B1 (546 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015CF8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015CF8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0xA));
    PUSH32(esp, edi);
    edi = ecx;
    edx = 0x7FFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = ecx + eax;
    MEM32(ebp + 8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0015D191; /* jae: above or equal (unsigned >=) */

loc_0015CFD9: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D191; /* jae: above or equal (unsigned >=) */

loc_0015CFE4: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xBFFD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xBFFD (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015D191; /* ja: above (unsigned >) */

loc_0015CFEF: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x3FBF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x3FBF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015CFFA; /* ja: above (unsigned >) */

loc_0015CFF6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015D034;

loc_0015CFFA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 0x7FFFFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_0015D01C; /* jne: not equal / not zero */

loc_0015D004: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015D01E; /* jne: not equal / not zero */

loc_0015D00E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D01E; /* jne: not equal / not zero */

loc_0015D013: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D01E; /* jne: not equal / not zero */

loc_0015D017: ;
    goto loc_0015D18B;

loc_0015D01C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015D01E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D041; /* jne: not equal / not zero */

loc_0015D023: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015D041; /* jne: not equal / not zero */

loc_0015D02B: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D041; /* jne: not equal / not zero */

loc_0015D030: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D041; /* jne: not equal / not zero */

loc_0015D034: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    goto loc_0015D1AC;

loc_0015D041: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = 5;

loc_0015D051: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0015D0A5; /* jle: less or equal (signed <=) */

loc_0015D05C: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebx + 8;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -24) = eax;

loc_0015D06D: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx));
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D08Bu); RECOMP_ABI_CALL(0x0015C0C4u, sub_0015C0C4); /* call 0x0015C0C4 */

loc_0015D08B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D098; /* je: equal / zero */

loc_0015D092: ;
    eax = MEM32(ebp + -4);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0015D098: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -12)) < (uint32_t)(2));
    MEM32(ebp + -12) = MEM32(ebp + -12) - 2;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015D06D; /* jne: not equal / not zero */

loc_0015D0A5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015D051; /* jg: greater (signed >) */

loc_0015D0B5: ;
    _fb = (uint32_t)(0xC002) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xC002)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xC002;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0015D0E8; /* jle: less or equal (signed <=) */

loc_0015D0C3: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -25), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015D0E1; /* jne: not equal / not zero */

loc_0015D0C9: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D0D2u); RECOMP_ABI_CALL(0x0015C143u, sub_0015C143); /* call 0x0015C143 */

loc_0015D0D2: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0015D0C3; /* jg: greater (signed >) */

loc_0015D0E1: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015D121; /* jg: greater (signed >) */

loc_0015D0E8: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0015D121; /* jge: greater or equal (signed >=) */

loc_0015D0F6: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = ZX16(LO16(eax));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015D101: ;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -36), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015D10A; /* je: equal / zero */

loc_0015D107: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015D10A: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D113u); RECOMP_ABI_CALL(0x0015C171u, sub_0015C171); /* call 0x0015C171 */

loc_0015D113: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0015D101; /* jne: not equal / not zero */

loc_0015D117: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D121; /* je: equal / zero */

loc_0015D11D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -36) = MEM8(ebp + -36) | 1;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015D121: ;
    _fa = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -36), 0x8000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015D138; /* ja: above (unsigned >) */

loc_0015D129: ;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D16D; /* jne: not equal / not zero */

loc_0015D138: ;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -34), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D16A; /* jne: not equal / not zero */

loc_0015D13E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -34) = MEM32(ebp + -34) & 0;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -30), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D165; /* jne: not equal / not zero */

loc_0015D148: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -30) = MEM32(ebp + -30) & 0;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -26), 0xFFFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D15F; /* jne: not equal / not zero */

loc_0015D154: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -26) = 0x8000;
    goto loc_0015D16D;

loc_0015D15F: ;
    MEM16(ebp + -26) = MEM16(ebp + -26) + 1;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015D16D;

loc_0015D165: ;
    MEM32(ebp + -30) = MEM32(ebp + -30) + 1;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015D16D;

loc_0015D16A: ;
    MEM32(ebp + -34) = MEM32(ebp + -34) + 1;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015D16D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D191; /* jae: above or equal (unsigned >=) */

loc_0015D176: ;
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(esi) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    MEM32(esi + 2) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 6) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015D18B: ;
    MEM16(esi + 0xA) = LO16(eax);
    goto loc_0015D1AC;

loc_0015D191: ;
    _cf = (int)((LO16(edi)) != 0);
    SET_LO16(edi, (uint32_t)(0u - (uint32_t)(LO16(edi))));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7FFF8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x7FFF8000)) >> 32) & 1);
    edi = edi + 0x7FFF8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = edi;

loc_0015D1AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D1B1
 * Original: 0x0015D1B1 - 0x0015D227 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D1B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D1B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0x2FD710;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D224; /* je: equal / zero */

loc_0015D1C7: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0015D1D4; /* jge: greater or equal (signed >=) */

loc_0015D1C9: ;
    MEM32(ebp + 0xC) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + 0xC)));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = 0x2FD870;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015D1D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D1DF; /* jne: not equal / not zero */

loc_0015D1D9: ;
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);

loc_0015D1DF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D224; /* je: equal / zero */

loc_0015D1E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0015D1E6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = (uint32_t)(((int32_t)(int32_t)(MEM32(ebp + 0xC))) >> ((3) & 31u));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x54;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D21D; /* je: equal / zero */

loc_0015D1F7: ;
    eax = eax + eax * 2;
    esi = ebx + eax * 4;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x8000 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015D210; /* jb: below (unsigned <) */

loc_0015D204: ;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -10) = MEM32(ebp + -10) - 1;
    _fa = (uint32_t)(MEM32(ebp + -10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ebp + -12;

loc_0015D210: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D219u); RECOMP_ABI_CALL(0x0015CF8Fu, sub_0015CF8F); /* call 0x0015CF8F */

loc_0015D219: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015D21D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D1E6; /* jne: not equal / not zero */

loc_0015D222: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015D224: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D227
 * Original: 0x0015D227 - 0x0015D293 (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D227(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015D227: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx * 4 + 0xA9E320;
    ecx = eax + eax * 4;
    eax = MEM32(edx);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(eax + ecx + 4));
    PUSH32(esp, esi);
    esi = 0x8000;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D263; /* jne: not equal / not zero */

loc_0015D258: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) & 0x7F;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0015D276;

loc_0015D263: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x4000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015D283; /* jne: not equal / not zero */

loc_0015D26D: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | 0x80;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015D276: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFC000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015D283: ;
    PUSH32(esp, 0x0015D288u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015D288: ;
    MEM32(eax) = 0x16;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015D293
 * Original: 0x0015D293 - 0x0015D30B (120 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D293: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1C50);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D29Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015D29F: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015D316(); return; } /* jae: above or equal (unsigned >=) */

loc_0015D2AA: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015D316(); return; } /* je: equal / zero */

loc_0015D2CA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D2D0u); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015D2D0: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015D2EE; /* je: equal / zero */

loc_0015D2DE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D2E7u); RECOMP_ABI_CALL(0x0015D227u, sub_0015D227); /* call 0x0015D227 */

loc_0015D2E7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    goto loc_0015D2FD;

loc_0015D2EE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D2F3u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015D2F3: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015D2FD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D306u); RECOMP_ABI_CALL(0x0015D30Eu, sub_0015D30E); /* call 0x0015D30E */

loc_0015D306: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0015D324(); return; /* tail jmp 0x0015D324 */

}

/**
 * sub_0015D30E
 * Original: 0x0015D30E - 0x0015D316 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D30E(void)
{

loc_0015D30E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015D314u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015D314: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015D316
 * Original: 0x0015D316 - 0x0015D324 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D316(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D316: ;
    PUSH32(esp, 0x0015D31Bu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_0015D31B: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0015D324(); return; /* fallthrough 0x0015D324 */

}

/**
 * sub_0015D324
 * Original: 0x0015D324 - 0x0015D32A (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D324(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D324: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015D329u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015D329: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D330
 * Original: 0x0015D330 - 0x0015D348 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D330(void)
{

loc_0015D330: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x0015D33Cu); RECOMP_ABI_CALL(0x000619A0u, sub_000619A0); /* call 0x000619A0 */

loc_0015D33C: ;
    MEM32(esi) = 0x2B1D08;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D348
 * Original: 0x0015D348 - 0x0015D364 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D348(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D348: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015D350u); RECOMP_ABI_CALL(0x0015D364u, sub_0015D364); /* call 0x0015D364 */

loc_0015D350: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015D35E; /* je: equal / zero */

loc_0015D357: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015D35Du); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0015D35D: ;
    POP32(esp, ecx);

loc_0015D35E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D364
 * Original: 0x0015D364 - 0x0015D36F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D364(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D364: ;
    MEM32(ecx) = 0x2B1D08;
    g_seh_ebp = ebp; sub_00061090(); return; /* tail jmp 0x00061090 */

}

/**
 * sub_0015D36F
 * Original: 0x0015D36F - 0x0015D3C7 (88 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D36F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D36F: ;
    eax = 0x15FF67;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D379u); RECOMP_ABI_CALL(0x00158904u, sub_00158904); /* call 0x00158904 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015D379: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2B1D10);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D389u); RECOMP_ABI_CALL(0x00061A80u, sub_00061A80); /* call 0x00061A80 */

loc_0015D389: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D399u); RECOMP_ABI_CALL(0x000619A0u, sub_000619A0); /* call 0x000619A0 */

loc_0015D399: ;
    PUSH32(esp, 0x2B221C);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x2B1D08;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3AEu); RECOMP_ABI_CALL(0x00150A5Au, sub_00150A5A); /* call 0x00150A5A */

loc_0015D3AE: ;
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3BBu); RECOMP_ABI_CALL(0x00061B30u, sub_00061B30); /* call 0x00061B30 */

loc_0015D3BB: ;
    MEM32(esi) = 0x2B1D08;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D3AF
 * Original: 0x0015D3AF - 0x0015D3C7 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D3AF(void)
{

loc_0015D3AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x0015D3BBu); RECOMP_ABI_CALL(0x00061B30u, sub_00061B30); /* call 0x00061B30 */

loc_0015D3BB: ;
    MEM32(esi) = 0x2B1D08;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D3C7
 * Original: 0x0015D3C7 - 0x0015D407 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D3C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D3C7: ;
    eax = 0x15FF79;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3D1u); RECOMP_ABI_CALL(0x00158904u, sub_00158904); /* call 0x00158904 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015D3D1: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2B1D28);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3E1u); RECOMP_ABI_CALL(0x00061A80u, sub_00061A80); /* call 0x00061A80 */

loc_0015D3E1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3F1u); RECOMP_ABI_CALL(0x000619A0u, sub_000619A0); /* call 0x000619A0 */

loc_0015D3F1: ;
    PUSH32(esp, 0x2B1FA4);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x236248;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D406u); RECOMP_ABI_CALL(0x00150A5Au, sub_00150A5A); /* call 0x00150A5A */

loc_0015D406: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0015D407
 * Original: 0x0015D407 - 0x0015D43E (55 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015D407(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D407: ;
    eax = MEM32(0x8001003Cu);
    eax = MEM32(eax + -2147417992);
    edx = 0x7FFF0000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015D439; /* jae: above or equal (unsigned >=) */

loc_0015D42A: ;
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D439; /* je: equal / zero */

loc_0015D431: ;
    eax = ecx + -2147418112;
    goto loc_0015D43B;

loc_0015D439: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015D43B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D43E
 * Original: 0x0015D43E - 0x0015D480 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D43E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D43E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D456u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_0015D456: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015D45E; /* jge: greater or equal (signed >=) */

loc_0015D45A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015D45E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D463u); RECOMP_ABI_CALL(0x000ADC15u, sub_000ADC15); /* call 0x000ADC15 */

loc_0015D463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D474; /* je: equal / zero */

loc_0015D468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D47B; /* jne: not equal / not zero */

loc_0015D46D: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0015D47B;

loc_0015D474: ;
    MEM32(ebp + -4) = 1;

loc_0015D47B: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D480
 * Original: 0x0015D480 - 0x0015D4A7 (39 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi);
    goto loc_0015D49E;

loc_0015D48A: ;
    ecx = esi + -60;
    esi = MEM32(esi);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = 0xC0000120u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCC8); PUSH32(esp, 0x0015D49Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D498u); } /* indirect call */
    }

loc_0015D49E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D48A; /* jne: not equal / not zero */

loc_0015D4A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015D4A7
 * Original: 0x0015D4A7 - 0x0015D570 (201 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D4A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D4A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BB8C));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x0015D4C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D4C3u); } /* indirect call */
    }

loc_0015D4C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015D4DA; /* jge: greater or equal (signed >=) */

loc_0015D4CD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D4D3u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_0015D4D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015D56C;

loc_0015D4DA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0015D4E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D4DAu); } /* indirect call */
    }

loc_0015D4E0: ;
    edx = MEM32(0x22BD18);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D532; /* je: equal / zero */

loc_0015D4EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0015D4F2: ;
    esi = ecx + -60;
    edx = MEM32(esi + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015D522; /* jne: not equal / not zero */

loc_0015D4FF: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015D522; /* jne: not equal / not zero */

loc_0015D505: ;
    ebx = MEM32(esi + 0x40);
    edx = esi + 0x3C;
    edi = MEM32(edx);
    MEM32(ebx) = edi;
    MEM32(edi + 4) = ebx;
    edi = MEM32(ebp + -4);
    ebx = ebp + -8;
    MEM32(edx) = ebx;
    MEM32(esi + 0x40) = edi;
    MEM32(edi) = edx;
    MEM32(ebp + -4) = edx;

loc_0015D522: ;
    edx = MEM32(0x22BD18);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D4F2; /* jne: not equal / not zero */

loc_0015D52F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0015D532: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0015D53Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D534u); } /* indirect call */
    }

loc_0015D53A: ;
    eax = ebp + -8;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D560; /* je: equal / zero */

loc_0015D542: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15D480);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x0015D552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D54Cu); } /* indirect call */
    }

loc_0015D552: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x0015D560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D55Au); } /* indirect call */
    }

loc_0015D560: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x0015D569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D563u); } /* indirect call */
    }

loc_0015D569: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015D56C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D570
 * Original: 0x0015D570 - 0x0015D690 (288 bytes, 121 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015D570: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D5B0; /* js: sign (negative) */

loc_0015D578: ;
    edx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    edx = edx | edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D636; /* js: sign (negative) */

loc_0015D584: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D678; /* js: sign (negative) */

loc_0015D592: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D5AA; /* jae: above or equal (unsigned >=) */

loc_0015D59F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D5AA; /* js: sign (negative) */

loc_0015D5A7: ;
    esp += 16; return; /* ret 12 */

loc_0015D5AA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0015D5B0: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    edx = edx | edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D5DC; /* js: sign (negative) */

loc_0015D5BA: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D606; /* js: sign (negative) */

loc_0015D5C4: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D600; /* jae: above or equal (unsigned >=) */

loc_0015D5D1: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0015D600; /* jg: greater (signed >) */

loc_0015D5D9: ;
    esp += 16; return; /* ret 12 */

loc_0015D5DC: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D61E; /* js: sign (negative) */

loc_0015D5E8: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D600; /* jae: above or equal (unsigned >=) */

loc_0015D5F5: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D600; /* js: sign (negative) */

loc_0015D5FD: ;
    esp += 16; return; /* ret 12 */

loc_0015D600: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0015D606: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D600; /* jae: above or equal (unsigned >=) */

loc_0015D615: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D600; /* js: sign (negative) */

loc_0015D61B: ;
    esp += 16; return; /* ret 12 */

loc_0015D61E: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D600; /* jae: above or equal (unsigned >=) */

loc_0015D62D: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0015D600; /* jg: greater (signed >) */

loc_0015D633: ;
    esp += 16; return; /* ret 12 */

loc_0015D636: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D660; /* js: sign (negative) */

loc_0015D642: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D65A; /* jae: above or equal (unsigned >=) */

loc_0015D64F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0015D65A; /* jg: greater (signed >) */

loc_0015D657: ;
    esp += 16; return; /* ret 12 */

loc_0015D65A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0015D660: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D65A; /* jae: above or equal (unsigned >=) */

loc_0015D66F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0015D600; /* js: sign (negative) */

loc_0015D675: ;
    esp += 16; return; /* ret 12 */

loc_0015D678: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0015D65A; /* jae: above or equal (unsigned >=) */

loc_0015D687: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0015D65A; /* jg: greater (signed >) */

loc_0015D68D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015D690
 * Original: 0x0015D690 - 0x0015D6BC (44 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D6A8u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_0015D6A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D6B7; /* jl: less (signed <) */

loc_0015D6AC: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015D6B7; /* jne: not equal / not zero */

loc_0015D6B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0015D6B7: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D6BC
 * Original: 0x0015D6BC - 0x0015D6FA (62 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D6BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D6BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    esi = 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D6D9u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0015D6D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D6F2; /* je: equal / zero */

loc_0015D6DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D6F2; /* jne: not equal / not zero */

loc_0015D6E2: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D6ED; /* je: equal / zero */

loc_0015D6E9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D6F2; /* jne: not equal / not zero */

loc_0015D6ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015D6F4;

loc_0015D6F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015D6F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015D6FA
 * Original: 0x0015D6FA - 0x0015D760 (102 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D6FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D6FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x2B1D6C;
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x0015D735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D72Fu); } /* indirect call */
    }

loc_0015D735: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D758; /* jl: less (signed <) */

loc_0015D73B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D747u); RECOMP_ABI_CALL(0x0015D6BCu, sub_0015D6BC); /* call 0x0015D6BC */

loc_0015D747: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D758; /* jne: not equal / not zero */

loc_0015D74B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ebx = 0xC00000E4u;
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x0015D758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D752u); } /* indirect call */
    }

loc_0015D758: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015D760
 * Original: 0x0015D760 - 0x0015D7DE (126 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015D7D7; /* jae: above or equal (unsigned >=) */

loc_0015D770: ;
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0015D77Fu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_0015D77F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x21371);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0015D793u); RECOMP_ABI_CALL(0x0015D6BCu, sub_0015D6BC); /* call 0x0015D6BC */

loc_0015D793: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D7D7; /* je: equal / zero */

loc_0015D799: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x68);
    POP32(esp, ecx);
    edi = 0x2FDBB0;
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
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x20);
    eax = esi + 0xC;
    PUSH32(esp, 0x2FDD10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015D7BCu); RECOMP_ABI_CALL(0x001528C5u, sub_001528C5); /* call 0x001528C5 */

loc_0015D7BC: ;
    eax = MEM32(0x2FDBB4);
    MEM32(esi) = eax;
    eax = MEM32(0x2FDBB8);
    MEM32(esi + 4) = eax;
    eax = MEM32(0x2FDD0C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);

loc_0015D7D7: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015D7DE
 * Original: 0x0015D7DE - 0x0015D7FD (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D7DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D7DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -512;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D7F9u); RECOMP_ABI_CALL(0x0015D760u, sub_0015D760); /* call 0x0015D760 */

loc_0015D7F9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015D7FD
 * Original: 0x0015D7FD - 0x0015D8B4 (183 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D7FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D7FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -516;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D81Bu); RECOMP_ABI_CALL(0x0015D6FAu, sub_0015D6FA); /* call 0x0015D6FA */

loc_0015D81B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = 0x24830000;
    if (CMP_L(_fas, _fbs)) goto loc_0015D86B; /* jl: less (signed <) */

loc_0015D826: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D82Eu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0015D82E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D850; /* jne: not equal / not zero */

loc_0015D834: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Au);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x0015D83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D839u); } /* indirect call */
    }

loc_0015D83F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D845u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015D845: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x0015D84Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D848u); } /* indirect call */
    }

loc_0015D84E: ;
    goto loc_0015D8A2;

loc_0015D850: ;
    MEM32(esi) = 0xBE4BEA00u;
    eax = MEM32(ebp + -512);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xC) = eax;
    goto loc_0015D878;

loc_0015D86B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x0015D872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D86Cu); } /* indirect call */
    }

loc_0015D872: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D878u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015D878: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D8A2; /* jl: less (signed <) */

loc_0015D87C: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -516;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D88Cu); RECOMP_ABI_CALL(0x0015D760u, sub_0015D760); /* call 0x0015D760 */

loc_0015D88C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D8A2; /* jne: not equal / not zero */

loc_0015D890: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x0015D899u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D893u); } /* indirect call */
    }

loc_0015D899: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D8A0u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0015D8A0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015D8A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D8AA; /* je: equal / zero */

loc_0015D8A6: ;
    eax = esi;
    goto loc_0015D8AD;

loc_0015D8AA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015D8AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D8B4
 * Original: 0x0015D8B4 - 0x0015DADC (552 bytes, 191 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015D8B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D8B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(0x2FDBB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FDBB4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D9A5; /* je: equal / zero */

loc_0015D8D6: ;
    eax = ebp + -516;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D8E6u); RECOMP_ABI_CALL(0x0015D6FAu, sub_0015D6FA); /* call 0x0015D6FA */

loc_0015D8E6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D928; /* je: equal / zero */

loc_0015D8F3: ;
    ecx = MEM32(ebp + -512);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015D901; /* jb: below (unsigned <) */

loc_0015D8FE: ;
    PUSH32(esp, 0x64);
    POP32(esp, ecx);

loc_0015D901: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015D919; /* jbe: below or equal (unsigned <=) */

loc_0015D907: ;
    eax = ebp + -504;

loc_0015D90D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D919; /* je: equal / zero */

loc_0015D911: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015D90D; /* jb: below (unsigned <) */

loc_0015D919: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D938; /* jne: not equal / not zero */

loc_0015D91D: ;
    PUSH32(esp, 0x57);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D926u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015D926: ;
    goto loc_0015D938;

loc_0015D928: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x0015D92Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D929u); } /* indirect call */
    }

loc_0015D92F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D935u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015D935: ;
    esi = MEM32(ebp + 0xC);

loc_0015D938: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DA6F; /* je: equal / zero */

loc_0015D940: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = esi << 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D950u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_0015D950: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DA68; /* je: equal / zero */

loc_0015D962: ;
    PUSH32(esp, 0x21371);
    eax = ebp + -516;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D976u); RECOMP_ABI_CALL(0x0015D6BCu, sub_0015D6BC); /* call 0x0015D6BC */

loc_0015D976: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DA6F; /* je: equal / zero */

loc_0015D980: ;
    PUSH32(esp, 0x68);
    POP32(esp, ecx);
    esi = ebp + -516;
    edi = 0x2FDBB0;
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
    _fa = (uint32_t)(MEM32(0x2FDBB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FDBB4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D9F5; /* jne: not equal / not zero */

loc_0015D998: ;
    eax = MEM32(0x2FDBB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015D9F5; /* jbe: below or equal (unsigned <=) */

loc_0015D9A2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015D9A5: ;
    _fa = (uint32_t)(MEM32(0x2FD9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD9F4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D9C8; /* jne: not equal / not zero */

loc_0015D9AD: ;
    eax = MEM32(0x2FD9F8);
    eax = eax + eax * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015D9C8; /* jb: below (unsigned <) */

loc_0015D9BC: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015DA6F; /* jb: below (unsigned <) */

loc_0015D9C8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D9FB; /* jne: not equal / not zero */

loc_0015D9CE: ;
    eax = ebp + -516;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D9DEu); RECOMP_ABI_CALL(0x0015D6FAu, sub_0015D6FA); /* call 0x0015D6FA */

loc_0015D9DE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D9FB; /* jne: not equal / not zero */

loc_0015D9EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x0015D9F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D9ECu); } /* indirect call */
    }

loc_0015D9F2: ;
    PUSH32(esp, eax);
    goto loc_0015DA6A;

loc_0015D9F5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x57);
    goto loc_0015DA6A;

loc_0015D9FB: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(eax * 4 + 0x2FDBBC);
    _fb = (uint32_t)(0x65) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x65;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DA1Fu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_0015DA1F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DA68; /* je: equal / zero */

loc_0015DA2D: ;
    PUSH32(esp, 0x31073);
    eax = ebp + -516;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DA41u); RECOMP_ABI_CALL(0x0015D6BCu, sub_0015D6BC); /* call 0x0015D6BC */

loc_0015DA41: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DA6F; /* je: equal / zero */

loc_0015DA47: ;
    PUSH32(esp, 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esi = ebp + -516;
    edi = 0x2FD9F0;
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
    _fa = (uint32_t)(MEM32(0x2FD9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD9F4), ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015DA6F; /* jne: not equal / not zero */

loc_0015DA68: ;
    PUSH32(esp, 0xD);

loc_0015DA6A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DA6Fu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015DA6F: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2FDBB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x2FDBB8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015DA83; /* jbe: below or equal (unsigned <=) */

loc_0015DA7A: ;
    PUSH32(esp, 0x57);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DA83u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_0015DA83: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DAC5; /* je: equal / zero */

loc_0015DA87: ;
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(edx * 4 + 0x2FDA00);
    MEM32(ecx) = eax;
    eax = MEM32(edx * 4 + 0x2FDA18);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015DAC5; /* je: equal / zero */

loc_0015DAAE: ;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0x2FDA30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2FDA30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DAC2u); RECOMP_ABI_CALL(0x001528C5u, sub_001528C5); /* call 0x001528C5 */

loc_0015DAC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015DAC5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DAD3; /* je: equal / zero */

loc_0015DACB: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DAD3u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0015DAD3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0015DADC
 * Original: 0x0015DADC - 0x0015DB6C (144 bytes, 52 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015DADC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015DADC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x120));
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B1D38);
    eax = ebp + -288;
    PUSH32(esp, 0x2B1DAC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DB03u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0015DB03: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -288;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x0015DB17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DB11u); } /* indirect call */
    }

loc_0015DB17: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    ecx = ebp + -20;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100080u);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x0015DB56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DB50u); } /* indirect call */
    }

loc_0015DB56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0015DB67; /* jge: greater or equal (signed >=) */

loc_0015DB5A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DB60u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_0015DB60: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015DB63: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0015DB67: ;
    eax = MEM32(ebp + 8);
    goto loc_0015DB63;

}

/**
 * sub_0015DB6C
 * Original: 0x0015DB6C - 0x0015DBC0 (84 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DB6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DB6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x2F3850;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0015DB7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DB75u); } /* indirect call */
    }

loc_0015DB7B: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015DB80: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x2FDD50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x2FDD50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015DB92; /* jne: not equal / not zero */

loc_0015DB8A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015DB80; /* jb: below (unsigned <) */

loc_0015DB90: ;
    goto loc_0015DBB3;

loc_0015DB92: ;
    edi = esi * 4 + 0x2FDD50;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0015DBA0u); RECOMP_ABI_CALL(0x000B4C60u, sub_000B4C60); /* call 0x000B4C60 */

loc_0015DBA0: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    MEM32(edi) = MEM32(edi) & eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;

loc_0015DBB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x0015DBBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DBB4u); } /* indirect call */
    }

loc_0015DBBA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DBC0
 * Original: 0x0015DBC0 - 0x0015DBDD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DBC0(void)
{

loc_0015DBC0: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x96FA28);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4 + 0x28);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DBDD
 * Original: 0x0015DBDD - 0x0015DC08 (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DBDD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DBDD: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x96FA28);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 4 + 0x28) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DC08
 * Original: 0x0015DC08 - 0x0015DC97 (143 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DC08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DC08: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x2F3850;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0015DC16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DC10u); } /* indirect call */
    }

loc_0015DC16: ;
    edx = MEM32(esp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax * 4 + 0x2FDD50;
    MEM32(eax) = MEM32(eax) | edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(XBOX_FS_BASE + 0x28);
    edi = MEM32(XBOX_FS_BASE + 4);
    ecx = MEM32(0x96FA28);
    ecx = MEM32(edi + ecx * 4);
    _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx + edx * 4 + 0x28;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0015DC58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DC52u); } /* indirect call */
    }

loc_0015DC58: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(XBOX_FS_BASE + 0x28);
    eax = MEM32(eax + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DC82; /* je: equal / zero */

loc_0015DC6C: ;
    PUSH32(esp, ebx);

loc_0015DC6D: ;
    ebx = MEM32(edx + -220);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DC7B; /* je: equal / zero */

loc_0015DC77: ;
    MEM32(ebx + edi) = MEM32(ebx + edi) & 0;
    _fa = (uint32_t)(MEM32(ebx + edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015DC7B: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015DC6D; /* jne: not equal / not zero */

loc_0015DC81: ;
    POP32(esp, ebx);

loc_0015DC82: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0015DC88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DC82u); } /* indirect call */
    }

loc_0015DC88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x0015DC8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DC89u); } /* indirect call */
    }

loc_0015DC8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DC97
 * Original: 0x0015DC97 - 0x0015DCE4 (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015DC97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DC97: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1DC0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DCA3u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DCA3: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DCE2; /* je: equal / zero */

loc_0015DCAA: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015DCF7(); return; } /* je: equal / zero */

loc_0015DCB1: ;
    edx = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0015DCF7(); return; } /* jb: below (unsigned <) */

loc_0015DCB9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(eax));
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = edx;

loc_0015DCCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DCDE; /* je: equal / zero */

loc_0015DCD2: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    goto loc_0015DCCE;

loc_0015DCDE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015DCE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0015DCE4(); return; /* fallthrough 0x0015DCE4 */

}

/**
 * sub_0015DCE4
 * Original: 0x0015DCE4 - 0x0015DCEC (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DCE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DCE4: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015DCE9u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DCE9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DCEC
 * Original: 0x0015DCEC - 0x0015DCF0 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DCEC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DCEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DCF0
 * Original: 0x0015DCF0 - 0x0015DCFC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DCF0: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DCE4(); return; /* tail jmp 0x0015DCE4 */

}

/**
 * sub_0015DCF7
 * Original: 0x0015DCF7 - 0x0015DCFC (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DCF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DCF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DCE4(); return; /* tail jmp 0x0015DCE4 */

}

/**
 * sub_0015DCFC
 * Original: 0x0015DCFC - 0x0015DD4D (81 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015DCFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DCFC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1DD0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DD08u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DD08: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DD4B; /* je: equal / zero */

loc_0015DD0F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015DD60(); return; } /* je: equal / zero */

loc_0015DD16: ;
    edx = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0015DD60(); return; } /* jb: below (unsigned <) */

loc_0015DD1E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = edx;

loc_0015DD35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DD47; /* je: equal / zero */

loc_0015DD39: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    goto loc_0015DD35;

loc_0015DD47: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015DD4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0015DD4D(); return; /* fallthrough 0x0015DD4D */

}

/**
 * sub_0015DD4D
 * Original: 0x0015DD4D - 0x0015DD55 (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DD4D: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015DD52u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DD52: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DD55
 * Original: 0x0015DD55 - 0x0015DD59 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD55(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DD55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DD59
 * Original: 0x0015DD59 - 0x0015DD65 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DD59: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DD4D(); return; /* tail jmp 0x0015DD4D */

}

/**
 * sub_0015DD60
 * Original: 0x0015DD60 - 0x0015DD65 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DD60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DD4D(); return; /* tail jmp 0x0015DD4D */

}

/**
 * sub_0015DD65
 * Original: 0x0015DD65 - 0x0015DD73 (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD65(void)
{

loc_0015DD65: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0015DD70u); RECOMP_ABI_CALL(0x0015DC97u, sub_0015DC97); /* call 0x0015DC97 */

loc_0015DD70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DD73
 * Original: 0x0015DD73 - 0x0015DDB8 (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015DD73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DD73: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1DE0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DD7Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DD7F: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DDB6; /* je: equal / zero */

loc_0015DD86: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015DDCB(); return; } /* je: equal / zero */

loc_0015DD8D: ;
    edx = eax;
    ecx = eax + ecx * 2 + -2;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX16(MEM16(eax));

loc_0015DD9A: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DDB2; /* je: equal / zero */

loc_0015DDA2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DDB2; /* je: equal / zero */

loc_0015DDA6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    goto loc_0015DD9A;

loc_0015DDB2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015DDB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0015DDB8(); return; /* fallthrough 0x0015DDB8 */

}

/**
 * sub_0015DDB8
 * Original: 0x0015DDB8 - 0x0015DDC0 (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DDB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DDB8: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015DDBDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DDBD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DDC0
 * Original: 0x0015DDC0 - 0x0015DDCB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DDC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0015DDCB(); return; /* fallthrough 0x0015DDCB */

}

/**
 * sub_0015DDCB
 * Original: 0x0015DDCB - 0x0015DDD0 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DDCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DDCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DDB8(); return; /* tail jmp 0x0015DDB8 */

}

/**
 * sub_0015DE0F
 * Original: 0x0015DE0F - 0x0015DE17 (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DE0F: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015DE14u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015DE14: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DE17
 * Original: 0x0015DE17 - 0x0015DE22 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DE17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0015DE22(); return; /* fallthrough 0x0015DE22 */

}

/**
 * sub_0015DE22
 * Original: 0x0015DE22 - 0x0015DE27 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DE22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0015DE0F(); return; /* tail jmp 0x0015DE0F */

}

/**
 * sub_0015DE28
 * Original: 0x0015DE28 - 0x0015DE2E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DE28: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BDBC)); return; /* indirect tail jmp */

}

/**
 * sub_0015DE30
 * Original: 0x0015DE30 - 0x0015DE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DE30: ;
    MEM32(0x98B434) = MEM32(0x98B434) + 1;
    _fa = (uint32_t)(MEM32(0x98B434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DE40
 * Original: 0x0015DE40 - 0x0015DE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DE40: ;
    MEM32(0x98B434) = MEM32(0x98B434) - 1;
    _fa = (uint32_t)(MEM32(0x98B434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DE50
 * Original: 0x0015DE50 - 0x0015DF71 (289 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DE50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015DE5Bu); RECOMP_ABI_CALL(0x0015F5A0u, sub_0015F5A0); /* call 0x0015F5A0 */

loc_0015DE5B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x98DDC0);
    PUSH32(esp, 0x0015DE6Cu); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0015DE6C: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x98DD80);
    ebx = eax;
    PUSH32(esp, 0x0015DE7Au); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_0015DE7A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x98DDA0);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0015DE8Au); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_0015DE8A: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x44);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0x0015DEA6u); RECOMP_ABI_CALL(0x0015F5E0u, sub_0015F5E0); /* call 0x0015F5E0 */

loc_0015DEA6: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x54);
    ebp = eax;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015DEBDu); RECOMP_ABI_CALL(0x0015FAF0u, sub_0015FAF0); /* call 0x0015FAF0 */

loc_0015DEBD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015DEC3u); RECOMP_ABI_CALL(0x0015F790u, sub_0015F790); /* call 0x0015F790 */

loc_0015DEC3: ;
    PUSH32(esp, 0x0015DEC8u); RECOMP_ABI_CALL(0x0015FD80u, sub_0015FD80); /* call 0x0015FD80 */

loc_0015DEC8: ;
    edx = MEM32(ebx);
    eax = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015DEDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DED7u); } /* indirect call */
    }

loc_0015DEDA: ;
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015DEE7; /* jne: not equal / not zero */

loc_0015DEE5: ;
    goto loc_0015DEE5;

loc_0015DEE7: ;
    ecx = MEM32(esi);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0015DEF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DEF2u); } /* indirect call */
    }

loc_0015DEF5: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015DF06; /* jge: greater or equal (signed >=) */

loc_0015DF04: ;
    goto loc_0015DF04;

loc_0015DF06: ;
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
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
    edx = esp + 0x10;
    ecx = eax;
    PUSH32(esp, edx);
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
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0015DF2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DF27u); } /* indirect call */
    }

loc_0015DF2A: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0015DF3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DF38u); } /* indirect call */
    }

loc_0015DF3B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015DF41u); RECOMP_ABI_CALL(0x0015F860u, sub_0015F860); /* call 0x0015F860 */

loc_0015DF41: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015DF47u); RECOMP_ABI_CALL(0x0015F730u, sub_0015F730); /* call 0x0015F730 */

loc_0015DF47: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0015DF4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DF4Au); } /* indirect call */
    }

loc_0015DF4D: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0015DF57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DF54u); } /* indirect call */
    }

loc_0015DF57: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0015DF61u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0015DF5Eu); } /* indirect call */
    }

loc_0015DF61: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015DF69u); RECOMP_ABI_CALL(0x0015F5C0u, sub_0015F5C0); /* call 0x0015F5C0 */

loc_0015DF69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DF80
 * Original: 0x0015DF80 - 0x0015DF85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DF80(void)
{

loc_0015DF80: ;
    SET_LO16(eax, 0x100);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DF90
 * Original: 0x0015DF90 - 0x0015DF96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DF90(void)
{

loc_0015DF90: ;
    eax = 0x2B1E30;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DFA0
 * Original: 0x0015DFA0 - 0x0015DFC1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DFA0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax + eax * 8;
    eax = ecx + eax * 2 + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DFD0
 * Original: 0x0015DFD0 - 0x0015E084 (180 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DFD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ecx;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx + ebx;
    MEM32(ebp) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edi = eax + eax * 8;
    if (1) _cf = (int)(((edi) >> (32 - (1))) & 1);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015E01Du); RECOMP_ABI_CALL(0x00111290u, sub_00111290); /* call 0x00111290 */

loc_0015E01D: ;
    ecx = eax + edi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015E031; /* jns: not sign (positive) */

loc_0015E029: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E031: ;
    edx = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x800007FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015E048; /* jns: not sign (positive) */

loc_0015E040: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFF800u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E048: ;
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015E05Du); RECOMP_ABI_CALL(0x0015DFA0u, sub_0015DFA0); /* call 0x0015DFA0 */

loc_0015E05D: ;
    edx = MEM32(esp + 0x44);
    MEM32(edx) = eax;
    eax = MEM32(ebp);
    ebp = MEM32(esp + 0x38);
    ecx = MEM32(edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015E076u); RECOMP_ABI_CALL(0x0015DFA0u, sub_0015DFA0); /* call 0x0015DFA0 */

loc_0015E076: ;
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E090
 * Original: 0x0015E090 - 0x0015E0E4 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E090: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x12;
    PUSH32(esp, ecx);
    edx = esp + 0x15;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E0CAu); RECOMP_ABI_CALL(0x00110CC0u, sub_00110CC0); /* call 0x00110CC0 */

loc_0015E0CA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x28);
    edx = MEM32(esp + 0x44);
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x29);
    edx = MEM32(esp + 0x40);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E0F0
 * Original: 0x0015E0F0 - 0x0015E1F2 (258 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E0F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0015E116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E113u); } /* indirect call */
    }

loc_0015E116: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E13B; /* jge: greater or equal (signed >=) */

loc_0015E121: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0015E12Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0015E12Bu); } /* indirect call */
    }

loc_0015E12E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015E13B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E186; /* jne: not equal / not zero */

loc_0015E140: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_0015E1D6; /* jle: less or equal (signed <=) */

loc_0015E150: ;
    esi = ebp;

loc_0015E152: ;
    eax = MEM32(edx);
    edi = eax;
    MEM32(esp + 0x20) = eax;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x20);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 0x22));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + -4) = edi;
    if ((_fa != 0)) goto loc_0015E152; /* jne: not equal / not zero */

loc_0015E184: ;
    goto loc_0015E1D6;

loc_0015E186: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E1B8; /* jne: not equal / not zero */

loc_0015E18B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_0015E1D6; /* jle: less or equal (signed <=) */

loc_0015E197: ;
    edi = ebp;
    /* nop */

loc_0015E1A0: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_0015E1A0; /* jne: not equal / not zero */

loc_0015E1B6: ;
    goto loc_0015E1D6;

loc_0015E1B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E1F0; /* jne: not equal / not zero */

loc_0015E1BD: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x1C);
    ecx = ZX16(LO16(ebp));
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

loc_0015E1D6: ;
    ecx = MEM32(ebx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0015E1E3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0015E1E0u); } /* indirect call */
    }

loc_0015E1E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015E1F0: ;
    goto loc_0015E1F0;

}

/**
 * sub_0015E200
 * Original: 0x0015E200 - 0x0015E209 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015E200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E200: ;
    MEM32(0x98B438) = MEM32(0x98B438) + 1;
    _fa = (uint32_t)(MEM32(0x98B438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E210
 * Original: 0x0015E210 - 0x0015E219 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0015E210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E210: ;
    MEM32(0x98B438) = MEM32(0x98B438) - 1;
    _fa = (uint32_t)(MEM32(0x98B438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E220
 * Original: 0x0015E220 - 0x0015E231 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E220: ;
    PUSH32(esp, edi);
    ecx = 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98DCC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E240
 * Original: 0x0015E240 - 0x0015E35D (285 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E240: ;
    eax = MEM32(0x98B438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E24E; /* jne: not equal / not zero */

loc_0015E249: ;
    PUSH32(esp, 0x0015E24Eu); RECOMP_ABI_CALL(0x0015E200u, sub_0015E200); /* call 0x0015E200 */

loc_0015E24E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(eax) = 0;
    eax = MEM32(esp + 0xC);
    MEM16(ecx) = 0;
    MEM16(edx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0015E27E; /* jne: not equal / not zero */

loc_0015E276: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E359; /* jle: less or equal (signed <=) */

loc_0015E27E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x2ACDB0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0015E2C1; /* jle: less or equal (signed <=) */

loc_0015E28C: ;
    /* nop */

loc_0015E290: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x2ACCB0);
    edi = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015E2B2; /* jns: not sign (positive) */

loc_0015E2AA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E2B2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E290; /* jl: less (signed <) */

loc_0015E2C1: ;
    edi = MEM32(0x2ACFB0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E301; /* jle: less or equal (signed <=) */

loc_0015E2CD: ;
    /* nop */

loc_0015E2D0: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x2ACCB0);
    edi = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015E2F2; /* jns: not sign (positive) */

loc_0015E2EA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E2F2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(edx * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E2D0; /* jl: less (signed <) */

loc_0015E301: ;
    edx = MEM32(0x2AD1B0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E342; /* jle: less or equal (signed <=) */

loc_0015E30D: ;
    PUSH32(esp, ebp);
    edi = edi;

loc_0015E310: ;
    ebp = (uint32_t)(int32_t)SMEM8(ecx + esi);
    ebp = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x2ACCB0);
    edx = SX16(LO16(edx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    ebp = ebp & 0x800003FFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015E332; /* jns: not sign (positive) */

loc_0015E32A: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFC00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E332: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E310; /* jl: less (signed <) */

loc_0015E341: ;
    POP32(esp, ebp);

loc_0015E342: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM16(eax) = LO16(ebx);
    eax = MEM32(esp + 0x20);
    MEM16(ecx) = LO16(edi);
    POP32(esp, edi);
    MEM16(eax) = LO16(edx);
    POP32(esp, ebx);

loc_0015E359: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E360
 * Original: 0x0015E360 - 0x0015E3B3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E360: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x98DCCC;
    PUSH32(esp, ebx);

loc_0015E368: ;
    SET_LO8(ebx, MEM8(ecx + -12));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + -12;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E3AA; /* je: equal / zero */

loc_0015E372: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E39F; /* je: equal / zero */

loc_0015E379: ;
    SET_LO8(ebx, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E3A2; /* je: equal / zero */

loc_0015E383: ;
    SET_LO8(ebx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E3A7; /* je: equal / zero */

loc_0015E38D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98DD8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98DD8C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E368; /* jl: less (signed <) */

loc_0015E39B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015E39F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015E3AA;

loc_0015E3A2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015E3AA;

loc_0015E3A7: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E3AA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E3B1; /* jl: less (signed <) */

loc_0015E3AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015E3B1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E3C0
 * Original: 0x0015E3C0 - 0x0015E3D6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E3C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E3D5; /* je: equal / zero */

loc_0015E3C8: ;
    MEM8(eax) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;

loc_0015E3D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E3E0
 * Original: 0x0015E3E0 - 0x0015E3F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E3E0(void)
{

loc_0015E3E0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E400
 * Original: 0x0015E400 - 0x0015E417 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E400(void)
{

loc_0015E400: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E420
 * Original: 0x0015E420 - 0x0015E43B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E420(void)
{

loc_0015E420: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 8));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0xA));
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E440
 * Original: 0x0015E440 - 0x0015E4A1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E440: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E49B; /* je: equal / zero */

loc_0015E448: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    SET_LO16(edx, MEM16(ecx + 8));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 4);
    PUSH32(esp, edi);
    edi = SX16(LO16(edx));
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0015E48D; /* jle: less or equal (signed <=) */

loc_0015E478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E484; /* jl: less (signed <) */

loc_0015E47F: ;
    eax = 0x7FFF;

loc_0015E484: ;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 8) = LO16(eax);
    esp += 4; return; /* ret */

loc_0015E48D: ;
    eax = 0xFFFF8000u;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 8) = LO16(eax);
    esp += 4; return; /* ret */

loc_0015E49B: ;
    SET_LO16(eax, MEM16(esp + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_0015E4B0
 * Original: 0x0015E4B0 - 0x0015E541 (145 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015E4B6u); RECOMP_ABI_CALL(0x0015E360u, sub_0015E360); /* call 0x0015E360 */

loc_0015E4B6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E53D; /* je: equal / zero */

loc_0015E4C0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x98BC90;
    PUSH32(esp, ebx);
    goto loc_0015E4D0;

    /* nop */

loc_0015E4D0: ;
    SET_LO8(ebx, MEM8(ecx + -144));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + -144;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E525; /* je: equal / zero */

loc_0015E4E0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E51A; /* je: equal / zero */

loc_0015E4E7: ;
    SET_LO8(ebx, MEM8(ecx + 0x90));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + 0x90;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E51D; /* je: equal / zero */

loc_0015E4F7: ;
    SET_LO8(ebx, MEM8(ecx + 0x120));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = ecx + 0x120;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E522; /* je: equal / zero */

loc_0015E507: ;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x240;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98C590) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98C590 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E4D0; /* jl: less (signed <) */

loc_0015E518: ;
    goto loc_0015E525;

loc_0015E51A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015E525;

loc_0015E51D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015E525;

loc_0015E522: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E525: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x88) = esi;
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0015E53D; /* jge: greater or equal (signed >=) */

loc_0015E538: ;
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015E53D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E550
 * Original: 0x0015E550 - 0x0015E567 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E550: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E565; /* je: equal / zero */

loc_0015E559: ;
    ecx = 0x24;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0015E565: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E570
 * Original: 0x0015E570 - 0x0015E587 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E570(void)
{

loc_0015E570: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E590
 * Original: 0x0015E590 - 0x0015E5D8 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E590: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E5AEu); RECOMP_ABI_CALL(0x00110BB0u, sub_00110BB0); /* call 0x00110BB0 */

loc_0015E5AE: ;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015E5C2u); RECOMP_ABI_CALL(0x0015E570u, sub_0015E570); /* call 0x0015E570 */

loc_0015E5C2: ;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015E5D0u); RECOMP_ABI_CALL(0x0015E3E0u, sub_0015E3E0); /* call 0x0015E3E0 */

loc_0015E5D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E5E0
 * Original: 0x0015E5E0 - 0x0015E5F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E5E0(void)
{

loc_0015E5E0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E600
 * Original: 0x0015E600 - 0x0015E6B0 (176 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E600: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0015E637; /* jne: not equal / not zero */

loc_0015E60E: ;
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E630; /* jle: less or equal (signed <=) */

loc_0015E617: ;
    edx = eax + 0x18;
    /* nop */

loc_0015E620: ;
    MEM16(edx) = 0;
    edi = MEM32(eax + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E620; /* jl: less (signed <) */

loc_0015E630: ;
    MEM32(eax + 0x78) = 0;

loc_0015E637: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E6AD; /* je: equal / zero */

loc_0015E63B: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    SET_LO16(edi, MEM16(esp + 0x14));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = SX16(LO16(edi));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E67B; /* jl: less (signed <) */

loc_0015E66C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E680; /* jle: less or equal (signed <=) */

loc_0015E674: ;
    ecx = 0x7FFF;
    goto loc_0015E680;

loc_0015E67B: ;
    ecx = 0xFFFF8000u;

loc_0015E680: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    edx = SX16(LO16(ecx));
    MEM16(eax + esi * 2 + 0x18) = LO16(ecx);
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0015E691; /* jge: greater or equal (signed >=) */

loc_0015E68F: ;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015E691: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x78) (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0015E6A1; /* jle: less or equal (signed <=) */

loc_0015E697: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E69E; /* jge: greater or equal (signed >=) */

loc_0015E69C: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0015E69E: ;
    MEM32(eax + 0x78) = edx;

loc_0015E6A1: ;
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 8) = LO16(edi);

loc_0015E6AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E6B0
 * Original: 0x0015E6B0 - 0x0015E71F (111 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0015E6B0(void)
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

loc_0015E6B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x78);
    ecx = esi + -1;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x2FDD58);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = esi;
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0015E6E3; /* jl: less (signed <) */

loc_0015E6E1: ;
    edx = ecx;

loc_0015E6E3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E6F0; /* jle: less or equal (signed <=) */

loc_0015E6E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E6F5; /* jl: less (signed <) */

loc_0015E6EC: ;
    eax = ecx;
    goto loc_0015E6F5;

loc_0015E6F0: ;
    eax = 1;

loc_0015E6F5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(edi + 0x7C) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0015E70C; /* jne: not equal / not zero */

loc_0015E6FD: ;
    fp_push(MEMD(0x2B1E50)); /* fld double */
    MEMD(edi + 0x80) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015E70C: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMD(0x2B1E50) / fp_top()); /* fdivr qword ptr [0x2b1e50] */
    MEMD(edi + 0x80) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015E720
 * Original: 0x0015E720 - 0x0015E736 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E72C; /* jne: not equal / not zero */

loc_0015E728: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015E72C: ;
    ecx = MEM32(esp + 8);
    SET_LO16(eax, MEM16(eax + ecx * 2 + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_0015E740
 * Original: 0x0015E740 - 0x0015E754 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E74B; /* jne: not equal / not zero */

loc_0015E748: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015E74B: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(eax + ecx + 0x58));
    esp += 4; return; /* ret */

}

/**
 * sub_0015E760
 * Original: 0x0015E760 - 0x0015E771 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E760(void)
{

loc_0015E760: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x58) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E780
 * Original: 0x0015E780 - 0x0015E891 (273 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015E780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax + 4;
    if (CMP_LE(_fas, _fbs)) goto loc_0015E7CA; /* jle: less or equal (signed <=) */

loc_0015E79D: ;
    /* nop */

loc_0015E7A0: ;
    eax = MEM32(esi + edi * 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0015E7ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E7A8u); } /* indirect call */
    }

loc_0015E7AB: ;
    ebx = eax;
    eax = MEM32(ebp + 0x10);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E888; /* jl: less (signed <) */

loc_0015E7BD: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E7A0; /* jl: less (signed <) */

loc_0015E7C8: ;
    eax = edx;

loc_0015E7CA: ;
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0015E87F; /* jle: less or equal (signed <=) */

loc_0015E7DD: ;
    ecx = MEM32(ebp + 0x14);
    edi = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_0015E7F0: ;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E864; /* jle: less or equal (signed <=) */

loc_0015E7F9: ;
    /* nop */

loc_0015E800: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015E815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E812u); } /* indirect call */
    }

loc_0015E815: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + edi);
    esi = MEM32(esp + 0x28);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + ebx * 2;
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
    edx = MEM32(esp + 0x1C);
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
    eax = MEM32(esp + 0x2C);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX16(LO16(eax));
    eax = MEM32(edx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0015E853u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E850u); } /* indirect call */
    }

loc_0015E853: ;
    eax = MEM32(ebp + 0x10);
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E800; /* jl: less (signed <) */

loc_0015E861: ;
    eax = MEM32(ebp + 8);

loc_0015E864: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0015E7F0; /* jl: less (signed <) */

loc_0015E87F: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0015E888: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E8A0
 * Original: 0x0015E8A0 - 0x0015EA64 (452 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E8A0(void)
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

loc_0015E8A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + esi * 2 + 0x8C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp + esi * 2 + 0x88));
    PUSH32(esp, edi);
    edi = MEM32(ebp + esi * 4 + 0x80);
    eax = MEM32(edi + 0x88);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E8DCu); RECOMP_ABI_CALL(0x0015E5E0u, sub_0015E5E0); /* call 0x0015E5E0 */

loc_0015E8DC: ;
    eax = MEM32(ebp + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E916; /* jle: less or equal (signed <=) */

loc_0015E8E8: ;
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = eax + ebp + 0x90;

loc_0015E8F4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E902u); RECOMP_ABI_CALL(0x0015E600u, sub_0015E600); /* call 0x0015E600 */

loc_0015E902: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E8F4; /* jl: less (signed <) */

loc_0015E914: ;
    ebp = edx;

loc_0015E916: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E91Cu); RECOMP_ABI_CALL(0x0015E6B0u, sub_0015E6B0); /* call 0x0015E6B0 */

loc_0015E91C: ;
    edx = MEM32(edi + 0x88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebp + esi * 2 + 0x8C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + esi * 2 + 0x88));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015E93Eu); RECOMP_ABI_CALL(0x0015E400u, sub_0015E400); /* call 0x0015E400 */

loc_0015E93E: ;
    eax = MEM32(ebp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EA5A; /* jle: less or equal (signed <=) */

loc_0015E94E: ;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + ebp + 0x90;
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_0015E960: ;
    ecx = MEM32(esp + 0x20);
    SET_LO16(esi, MEM16(ecx));
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015E97Bu); RECOMP_ABI_CALL(0x0015E420u, sub_0015E420); /* call 0x0015E420 */

loc_0015E97B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E98Bu); RECOMP_ABI_CALL(0x0015E5E0u, sub_0015E5E0); /* call 0x0015E5E0 */

loc_0015E98B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E993u); RECOMP_ABI_CALL(0x0015E600u, sub_0015E600); /* call 0x0015E600 */

loc_0015E993: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E99Au); RECOMP_ABI_CALL(0x0015E720u, sub_0015E720); /* call 0x0015E720 */

loc_0015E99A: ;
    ecx = SX16(LO16(eax));
    MEM32(esp + 0x44) = ecx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(edi + 0x80)); /* fmul qword ptr [edi + 0x80] */
    PUSH32(esp, 0x0015E9B3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0015E9B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E9C8; /* jl: less (signed <) */

loc_0015E9BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015E9CD; /* jle: less or equal (signed <=) */

loc_0015E9C1: ;
    eax = 0x7FFF;
    goto loc_0015E9CD;

loc_0015E9C8: ;
    eax = 0xFFFF8000u;

loc_0015E9CD: ;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax + -2340;
    if (CMP_L(_fas, _fbs)) goto loc_0015E9E0; /* jl: less (signed <) */

loc_0015E9DA: ;
    ecx = eax + 0x924;

loc_0015E9E0: ;
    eax = 0x38007001;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EA27; /* jl: less (signed <) */

loc_0015E9F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EA00; /* jl: less (signed <) */

loc_0015E9FB: ;
    esi = 7;

loc_0015EA00: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015EA08u); RECOMP_ABI_CALL(0x0015E760u, sub_0015E760); /* call 0x0015E760 */

loc_0015EA08: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EA2E; /* jl: less (signed <) */

loc_0015EA19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EA33; /* jle: less or equal (signed <=) */

loc_0015EA20: ;
    eax = 0x7FFF;
    goto loc_0015EA33;

loc_0015EA27: ;
    esi = 0xFFFFFFF8u;
    goto loc_0015EA00;

loc_0015EA2E: ;
    eax = 0xFFFF8000u;

loc_0015EA33: ;
    edx = MEM32(edi + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EA40u); RECOMP_ABI_CALL(0x0015E440u, sub_0015E440); /* call 0x0015E440 */

loc_0015EA40: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ebp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0015E960; /* jl: less (signed <) */

loc_0015EA5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0015EA70
 * Original: 0x0015EA70 - 0x0015EC21 (433 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EA70(void)
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

loc_0015EA70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = ecx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + 0x110;
    PUSH32(esp, edi);
    edi = eax + 0x190;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x210;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    edx = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + esi + 0x2A8;
    MEM32(esp + 0x30) = eax;
    eax = 8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x54)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x54))); }
    edx = MEM32(esi + ecx * 4 + 0x80);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EC19; /* jle: less or equal (signed <=) */

loc_0015EAD2: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = eax;
    goto loc_0015EB00;

loc_0015EAF1: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    /* nop */

loc_0015EB00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EB07u); RECOMP_ABI_CALL(0x0015E720u, sub_0015E720); /* call 0x0015E720 */

loc_0015EB07: ;
    edi = MEM32(esp + 0x34);
    MEM16(ebx + edi) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x20) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(edx + 0x80)); /* fmul qword ptr [edx + 0x80] */
    PUSH32(esp, 0x0015EB28u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0015EB28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EB3D; /* jl: less (signed <) */

loc_0015EB2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EB42; /* jle: less or equal (signed <=) */

loc_0015EB36: ;
    eax = 0x7FFF;
    goto loc_0015EB42;

loc_0015EB3D: ;
    eax = 0xFFFF8000u;

loc_0015EB42: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(edi) = LO16(eax);
    ecx = eax + -2340;
    if (CMP_L(_fas, _fbs)) goto loc_0015EB56; /* jl: less (signed <) */

loc_0015EB50: ;
    ecx = eax + 0x924;

loc_0015EB56: ;
    eax = 0x38007001;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = edx;
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EBA9; /* jl: less (signed <) */

loc_0015EB6C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EB76; /* jl: less (signed <) */

loc_0015EB71: ;
    ebx = 7;

loc_0015EB76: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x7C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(eax + 0x80)); /* fmul qword ptr [eax + 0x80] */
    PUSH32(esp, 0x0015EB94u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0015EB94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EBB0; /* jl: less (signed <) */

loc_0015EB9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EBB5; /* jle: less or equal (signed <=) */

loc_0015EBA2: ;
    eax = 0x7FFF;
    goto loc_0015EBB5;

loc_0015EBA9: ;
    ebx = 0xFFFFFFF8u;
    goto loc_0015EB76;

loc_0015EBB0: ;
    eax = 0xFFFF8000u;

loc_0015EBB5: ;
    edx = MEM32(esp + 0x20);
    MEM16(edx + edi) = LO16(eax);
    edi = MEM32(esp + 0x24);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(esp + 0x30);
    if (CMP_NE(_fa, _fb)) goto loc_0015EBDE; /* jne: not equal / not zero */

loc_0015EBCE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    MEM8(edx) = 0;
    MEM32(esp + 0x10) = 1;

loc_0015EBDE: ;
    eax = MEM32(esi + 0x54);
    ecx = 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, 8);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = edi;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    eax = MEM32(esi + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0015EAF1; /* jl: less (signed <) */

loc_0015EC19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0015EC30
 * Original: 0x0015EC30 - 0x0015ED56 (294 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC30(void)
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

loc_0015EC30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x44);
    eax = esi + 0x90;
    ecx = esi + 0xD0;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EC5E; /* jl: less (signed <) */

loc_0015EC5C: ;
    ebx = eax;

loc_0015EC5E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015EC6Bu); RECOMP_ABI_CALL(0x0015E780u, sub_0015E780); /* call 0x0015E780 */

loc_0015EC6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EC78; /* jne: not equal / not zero */

loc_0015EC72: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015EC78: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x44) (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0015ECB2; /* jge: greater or equal (signed >=) */

loc_0015EC7F: ;
    eax = MEM32(esi + 0x58);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015ECB2; /* jle: less or equal (signed <=) */

loc_0015EC88: ;
    edx = MEM32(esp + ebp * 4 + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ECAA; /* je: equal / zero */

loc_0015EC90: ;
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + ebx * 2;
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

loc_0015ECAA: ;
    eax = MEM32(esi + 0x58);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EC88; /* jl: less (signed <) */

loc_0015ECB2: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x58);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015ED4B; /* jle: less or equal (signed <=) */

loc_0015ECCA: ;
    ecx = esi + 0x298;
    edi = esi + 0x88;
    MEM32(esp + 0x14) = ecx;
    ebp = esi + 0x80;

loc_0015ECE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015ECE7u); RECOMP_ABI_CALL(0x0015E8A0u, sub_0015E8A0); /* call 0x0015E8A0 */

loc_0015ECE7: ;
    eax = MEM32(ebp);
    SET_LO16(edx, MEM16(eax + 0x7C));
    ecx = MEM32(eax + 0x88);
    MEM16(edi + 0x208) = LO16(edx);
    fp_push(MEMD(eax + 0x80)); /* fld double */
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x18;
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015ED17u); RECOMP_ABI_CALL(0x0015E420u, sub_0015E420); /* call 0x0015E420 */

loc_0015ED17: ;
    SET_LO16(ecx, MEM16(esp + 0x34));
    SET_LO16(edx, MEM16(esp + 0x24));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 4) = LO16(edx);
    PUSH32(esp, 0x0015ED2Fu); RECOMP_ABI_CALL(0x0015EA70u, sub_0015EA70); /* call 0x0015EA70 */

loc_0015ED2F: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esi + 0x58);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0015ECE0; /* jl: less (signed <) */

loc_0015ED4B: ;
    eax = MEM32(esi + 0x44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0015ED60
 * Original: 0x0015ED60 - 0x0015EE5A (250 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015ED60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0015EE54; /* jle: less or equal (signed <=) */

loc_0015ED81: ;
    PUSH32(esp, ebx);
    eax = esi + 0x290;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    ebp = esi + 0x2B0;

loc_0015ED93: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x2D0));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x2D2));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)LO16(eax)));
    _fb = (uint32_t)(MEM16(esi + 0x2D4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x2D4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(ecx));
    SET_LO16(ebx, LO16(ebx) - 1);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x2D0) = LO16(edx);
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EDE7; /* jne: not equal / not zero */

loc_0015EDD1: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EDE7; /* jne: not equal / not zero */

loc_0015EDD8: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EDE7; /* jne: not equal / not zero */

loc_0015EDDE: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EDE7; /* jne: not equal / not zero */

loc_0015EDE5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015EDE7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = ebx;
    ecx = esp + 0x28;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x30) = LO8(eax);
    PUSH32(esp, 0x0015EDFFu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EDFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0x0015EE12u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EE12: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = ebp + -8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EE20u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EE20: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0x58);
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0015ED93; /* jl: less (signed <) */

loc_0015EE50: ;
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);

loc_0015EE54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE60
 * Original: 0x0015EE60 - 0x0015EEDF (127 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EE60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0015EE73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015EE70u); } /* indirect call */
    }

loc_0015EE73: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015EED9; /* jle: less or equal (signed <=) */

loc_0015EE91: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015EE97u); RECOMP_ABI_CALL(0x0015EC30u, sub_0015EC30); /* call 0x0015EC30 */

loc_0015EE97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EED9; /* je: equal / zero */

loc_0015EE9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015EEA4u); RECOMP_ABI_CALL(0x0015ED60u, sub_0015ED60); /* call 0x0015ED60 */

loc_0015EEA4: ;
    ecx = MEM32(edi + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015EED9; /* jge: greater or equal (signed >=) */

loc_0015EEB3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0015EEBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015EEB8u); } /* indirect call */
    }

loc_0015EEBB: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015EE91; /* jg: greater (signed >) */

loc_0015EED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EEE0
 * Original: 0x0015EEE0 - 0x0015EF7F (159 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EEE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_0015EEF9; /* jg: greater (signed >) */

loc_0015EEF4: ;
    ebx = MEM32(eax + 0x50);
    goto loc_0015EF16;

loc_0015EEF9: ;
    eax = MEM32(eax + 0x50);
    eax = eax + ecx + 0x7FF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015EF16: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edi = ebx + -4;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0015EF21u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0015EF1Eu); } /* indirect call */
    }

loc_0015EF21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015EF2E; /* jge: greater or equal (signed >=) */

loc_0015EF28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015EF2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0x8001;
    PUSH32(esp, 0x0015EF45u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EF45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x0015EF58u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EF58: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0015EF79; /* jle: less or equal (signed <=) */

loc_0015EF64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015EF73u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EF73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015EF64; /* jne: not equal / not zero */

loc_0015EF79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EF80
 * Original: 0x0015EF80 - 0x0015F599 (1561 bytes, 514 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015EF80: ;
    eax = MEM32(0x2FDD5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 1;
    goto loc_0015EF90;

    /* nop */

loc_0015EF90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EF90; /* jne: not equal / not zero */

loc_0015EF97: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0015EFB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015EFB3u); } /* indirect call */
    }

loc_0015EFB6: ;
    edx = MEM32(esi);
    ebp = MEM32(esp + 0x24);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0015EFC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015EFC4u); } /* indirect call */
    }

loc_0015EFC7: ;
    edi = MEM32(esp + 0x38);
    ecx = MEM32(edi + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015EFE1; /* jge: greater or equal (signed >=) */

loc_0015EFD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015EFE1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x8000;
    PUSH32(esp, 0x0015EFF9u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015EFF9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F005: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x48));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F01Eu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F01E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F02A: ;
    SET_LO8(edx, MEM8(edi + 0x4C));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x0015F03Eu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F03E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F04A: ;
    SET_LO8(ecx, MEM8(edi + 0x50));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM8(esp + 0x34) = LO8(ecx);
    PUSH32(esp, 0x0015F05Eu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F05E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F06A: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = LO8(eax);
    PUSH32(esp, 0x0015F080u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F080: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F08C: ;
    SET_LO8(edx, MEM8(edi + 0x58));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x0015F0A0u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F0A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F0AC: ;
    ecx = MEM32(edi + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F0C1u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F0C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F0CD: ;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F0E3u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F0E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F0EF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 0x64));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0015F107u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F107: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F113: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = 4;
    PUSH32(esp, 0x0015F125u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F125: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F131: ;
    _fa = (uint32_t)(MEM16(edi + 0x2D0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x2D0), 0 (16-bit) */
    PUSH32(esp, esi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x0015F152u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F152: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F15E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x0015F174u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F174: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F180: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 0x2C8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0015F19Bu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F19B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F1A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x2CC));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F1C2u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F1C2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F1CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x2CA));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F1EAu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F1EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F1F6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 0x2CE));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0015F211u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F211: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F21D: ;
    eax = MEM32(edi + 0x6C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_0015F363; /* jle: less or equal (signed <=) */

loc_0015F22F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x68));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F248u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F248: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F254: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x6C));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F26Du); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F26D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F279: ;
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 0x20;
    if (CMP_LE(_fas, _fbs)) goto loc_0015F361; /* jle: less or equal (signed <=) */

loc_0015F289: ;
    /* nop */

loc_0015F290: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x0015F2A3u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F2A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F2AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F2C1u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F2C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F2CD: ;
    ecx = MEM32(edi + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F2E2u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F2E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F2EE: ;
    eax = MEM32(edi + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F304u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F304: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F310: ;
    edx = MEM32(edi + 0x78);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0015F325u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F325: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F331: ;
    ecx = MEM32(edi + 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F346u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F346: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F352: ;
    eax = MEM32(edi + 0x6C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F290; /* jl: less (signed <) */

loc_0015F361: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015F363: ;
    _fa = (uint32_t)(MEM8(edi + 0x2D6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2D6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F490; /* jne: not equal / not zero */

loc_0015F370: ;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x6C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F397; /* jne: not equal / not zero */

loc_0015F375: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x0015F388u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F388: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F394: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F397: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x41494E46;
    PUSH32(esp, 0x0015F3AEu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F3AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F3BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x18;
    PUSH32(esp, 0x0015F3D0u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F3D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F3DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = edi + 0x2D7;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F3ECu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F3EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F3F8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x2E8));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F414u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F414: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F420: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x0015F432u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F432: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F43E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x2EA));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F459u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F459: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F465: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x2EC));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0015F481u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F481: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F48D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F490: ;
    _fa = (uint32_t)(MEM8(edi + 0x2EE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2EE), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F537; /* jne: not equal / not zero */

loc_0015F49D: ;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x6C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F4C4; /* jne: not equal / not zero */

loc_0015F4A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x0015F4B5u); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F4B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F4C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0x43494E46;
    PUSH32(esp, 0x0015F4DBu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F4DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F4E7: ;
    ecx = MEM32(edi + 0x2F4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0015F4FFu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F4FF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F507: ;
    eax = MEM32(edi + 0x2F4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F537; /* je: equal / zero */

loc_0015F514: ;
    eax = MEM32(edi + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F537; /* je: equal / zero */

loc_0015F51E: ;
    ebp = MEM32(edi + 0x2F4);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F52Eu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F52E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F535: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F537: ;
    edi = MEM32(edi + 0x48);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM8(esp + 0x24) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0015F56C; /* jge: greater or equal (signed >=) */

loc_0015F549: ;
    /* nop */

loc_0015F550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F55Fu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F55F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F583; /* jne: not equal / not zero */

loc_0015F567: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F550; /* jl: less (signed <) */

loc_0015F56C: ;
    ecx = MEM32(0x2FDD5C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015F57Cu); RECOMP_ABI_CALL(0x0015E0F0u, sub_0015E0F0); /* call 0x0015E0F0 */

loc_0015F57C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F58D; /* je: equal / zero */

loc_0015F583: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015F58D: ;
    eax = ebx + ebp + 4;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015F5A0
 * Original: 0x0015F5A0 - 0x0015F5B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F5A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015F5A6u); RECOMP_ABI_CALL(0x0015E200u, sub_0015E200); /* call 0x0015E200 */

loc_0015F5A6: ;
    ecx = 0x5F0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98C500;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F5C0
 * Original: 0x0015F5C0 - 0x0015F5D6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F5C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015F5C6u); RECOMP_ABI_CALL(0x0015E210u, sub_0015E210); /* call 0x0015E210 */

loc_0015F5C6: ;
    ecx = 0x5F0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98C500;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F5E0
 * Original: 0x0015F5E0 - 0x0015F72D (333 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F5E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x98C500;
    goto loc_0015F5F0;

    /* nop */

loc_0015F5F0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F601; /* je: equal / zero */

loc_0015F5F4: ;
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98DCC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98DCC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F5F0; /* jl: less (signed <) */

loc_0015F601: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F72A; /* je: equal / zero */

loc_0015F60C: ;
    ecx = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    _fb = (uint32_t)(0x98C500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98C500;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM8(esi + 2) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0015F63E; /* jle: less or equal (signed <=) */

loc_0015F624: ;
    edi = MEM32(esp + 0x14);
    edx = esi + 4;
    PUSH32(esp, ebp);
    /* nop */

loc_0015F630: ;
    ebp = MEM32(edi + eax * 4);
    MEM32(edx) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F630; /* jl: less (signed <) */

loc_0015F63D: ;
    POP32(esp, ebp);

loc_0015F63E: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    edi = 0x7FFF0000;
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x0015F664u); RECOMP_ABI_CALL(0x00111290u, sub_00111290); /* call 0x00111290 */

loc_0015F664: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = 3;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = 0xAC44;
    MEM32(esi + 0x54) = 4;
    MEM32(esi + 0x50) = 0x12;
    MEM32(esi + 0x44) = 0x20;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = 0x1F4;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0x0015F6BDu); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0015F6BD: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x0015F6CCu); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0015F6CC: ;
    MEM32(esi + 0x84) = eax;
    eax = 0xFFFFFF80u;
    MEM16(esi + 0x2EA) = LO16(eax);
    MEM16(esi + 0x2EC) = LO16(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x2CC) = LO16(ebx);
    MEM16(esi + 0x2C8) = LO16(ebx);
    MEM16(esi + 0x2CE) = LO16(ebx);
    MEM16(esi + 0x2CA) = LO16(ebx);
    MEM8(esi + 0x2D6) = LO8(ebx);
    MEM16(esi + 0x2E8) = LO16(ebx);
    ecx = esi + 0x2D7;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, edi);

loc_0015F72A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F730
 * Original: 0x0015F730 - 0x0015F772 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F770; /* je: equal / zero */

loc_0015F739: ;
    PUSH32(esp, 0x0015F73Eu); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_0015F73E: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F751; /* je: equal / zero */

loc_0015F748: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F74Eu); RECOMP_ABI_CALL(0x0015E550u, sub_0015E550); /* call 0x0015E550 */

loc_0015F74E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F751: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F764; /* je: equal / zero */

loc_0015F75B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F761u); RECOMP_ABI_CALL(0x0015E550u, sub_0015E550); /* call 0x0015E550 */

loc_0015F761: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F764: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_0015F770: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F780
 * Original: 0x0015F780 - 0x0015F789 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F780(void)
{

loc_0015F780: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F790
 * Original: 0x0015F790 - 0x0015F852 (194 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015F790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0015F820; /* jle: less or equal (signed <=) */

loc_0015F7AC: ;
    eax = ebx + 4;
    MEM32(esp + 0x10) = eax;

loc_0015F7B3: ;
    esi = MEM32(ebx + 0x68);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015F809; /* jle: less or equal (signed <=) */

loc_0015F7BC: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015F7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015F7CDu); } /* indirect call */
    }

loc_0015F7D0: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F839; /* jne: not equal / not zero */

loc_0015F7DB: ;
    edi = MEM32(esp + 0x18);
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
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0015F802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015F7FFu); } /* indirect call */
    }

loc_0015F802: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F809: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0015F7B3; /* jl: less (signed <) */

loc_0015F820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x30) = eax;
    MEM8(ebx + 3) = LO8(eax);
    MEM8(ebx + 1) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0015F839: ;
    ebx = MEM32(ebx + edi * 4 + 4);
    eax = MEM32(ebx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0015F84Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0015F847u); } /* indirect call */
    }

loc_0015F84A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0015F850: ;
    goto loc_0015F850;

}

/**
 * sub_0015F860
 * Original: 0x0015F860 - 0x0015F869 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F860(void)
{

loc_0015F860: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 3) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F870
 * Original: 0x0015F870 - 0x0015F87C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F870(void)
{

loc_0015F870: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F880
 * Original: 0x0015F880 - 0x0015F88C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F880(void)
{

loc_0015F880: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F890
 * Original: 0x0015F890 - 0x0015F89C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F890(void)
{

loc_0015F890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F8A0
 * Original: 0x0015F8A0 - 0x0015F8AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F8A0(void)
{

loc_0015F8A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F8B0
 * Original: 0x0015F8B0 - 0x0015F908 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F8B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F8CF; /* je: equal / zero */

loc_0015F8C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F8CCu); RECOMP_ABI_CALL(0x0015E550u, sub_0015E550); /* call 0x0015E550 */

loc_0015F8CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F8CF: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015F8D8u); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0015F8D8: ;
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F8F4; /* je: equal / zero */

loc_0015F8EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F8F1u); RECOMP_ABI_CALL(0x0015E550u, sub_0015E550); /* call 0x0015E550 */

loc_0015F8F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F8F4: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015F8FDu); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0015F8FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x84) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F910
 * Original: 0x0015F910 - 0x0015F91C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F910(void)
{

loc_0015F910: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F920
 * Original: 0x0015F920 - 0x0015F92F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F920(void)
{

loc_0015F920: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F930
 * Original: 0x0015F930 - 0x0015F93C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F930(void)
{

loc_0015F930: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F940
 * Original: 0x0015F940 - 0x0015F94C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F940(void)
{

loc_0015F940: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F950
 * Original: 0x0015F950 - 0x0015F95C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F950(void)
{

loc_0015F950: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 4; return; /* ret */

}
