/**
 * DOAU1 - Recompiled code chunk 60
 * Functions: 250 (0x001B2E26 - 0x001B60E4)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B2E26
 * Original: 0x001B2E26 - 0x001B2E36 (16 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2E26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2E26: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 0x12), 0x8002 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B2E35; /* jne: not equal / not zero */

loc_001B2E2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B2E35u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001B2E35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B2E36
 * Original: 0x001B2E36 - 0x001B2E58 (34 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B2E36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2E36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B2E56u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B2E56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001B2E58(); return; /* fallthrough 0x001B2E58 */

}

/**
 * sub_001B2E58
 * Original: 0x001B2E58 - 0x001B2EE9 (145 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2E58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2E58: ;
    edi = MEM32(esi + 0x190);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B2E62: ;
    ebx = esi + 0x68;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001B2E6Du); RECOMP_ABI_CALL(0x001B24EEu, sub_001B24EE); /* call 0x001B24EE */

loc_001B2E6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B2EB4; /* je: equal / zero */

loc_001B2E71: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B2E7Bu); RECOMP_ABI_CALL(0x001B2C83u, sub_001B2C83); /* call 0x001B2C83 */

loc_001B2E7B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x1000 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B2EA7; /* je: equal / zero */

loc_001B2E87: ;
    ecx = MEM32(ebx);
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0xE), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B2EA7; /* jne: not equal / not zero */

loc_001B2E95: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x2000);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x12) = LO16(eax);

loc_001B2EA7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B2E62; /* jb: below (unsigned <) */

loc_001B2EB4: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x2000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2EF7(); return; } /* jne: not equal / not zero */

loc_001B2EBC: ;
    edi = MEM32(esi + 0x194);
    _fb = (uint32_t)(MEM32(esi + 0x190)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B2ECD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B2ED5u); RECOMP_ABI_CALL(0x001B2B51u, sub_001B2B51); /* call 0x001B2B51 */

loc_001B2ED5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2EE9(); return; } /* je: equal / zero */

loc_001B2ED9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B2ECD; /* jb: below (unsigned <) */

loc_001B2EE7: ;
    g_seh_ebp = ebp; sub_001B2EED(); return; /* tail jmp 0x001B2EED */

}

/**
 * sub_001B2EE9
 * Original: 0x001B2EE9 - 0x001B2EED (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EE9: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B2EED(); return; /* fallthrough 0x001B2EED */

}

/**
 * sub_001B2EED
 * Original: 0x001B2EED - 0x001B2EF7 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EED: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2E58(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B2EF7(); return; /* fallthrough 0x001B2EF7 */

}

/**
 * sub_001B2EF7
 * Original: 0x001B2EF7 - 0x001B2F1A (35 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EF7: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 0x40 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B2F0C; /* je: equal / zero */

loc_001B2F05: ;
    ecx = esi;
    PUSH32(esp, 0x001B2F0Cu); RECOMP_ABI_CALL(0x001B2C2Eu, sub_001B2C2E); /* call 0x001B2C2E */

loc_001B2F0C: ;
    ecx = ebp + -20;
    PUSH32(esp, 0x001B2F14u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B2F14: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B2F1A
 * Original: 0x001B2F1A - 0x001B2F59 (63 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2F1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2F1A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x001B2F2Au); RECOMP_ABI_CALL(0x001B24EEu, sub_001B24EE); /* call 0x001B24EE */

loc_001B2F2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F59(); return; } /* je: equal / zero */

loc_001B2F2E: ;
    eax = MEM32(edi);
    MEM8(eax + 0x3F) = 0x80;
    eax = esi + 0x12;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x1000 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B2F4E; /* je: equal / zero */

loc_001B2F3E: ;
    MEM16(eax) = MEM16(eax) & 0xEFFF;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(ecx, LO16(ecx) | 0x2000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax) = LO16(ecx);

loc_001B2F4E: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B2F57u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001B2F57: ;
    g_seh_ebp = ebp; sub_001B2F9C(); return; /* tail jmp 0x001B2F9C */

}

/**
 * sub_001B2F59
 * Original: 0x001B2F59 - 0x001B2F89 (48 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2F59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2F59: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F9C(); return; } /* jne: not equal / not zero */

loc_001B2F62: ;
    ecx = esi;
    PUSH32(esp, 0x001B2F69u); RECOMP_ABI_CALL(0x001B2E36u, sub_001B2E36); /* call 0x001B2E36 */

loc_001B2F69: ;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F9C(); return; } /* jne: not equal / not zero */

loc_001B2F6F: ;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x194), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F9C(); return; } /* jne: not equal / not zero */

loc_001B2F78: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x2800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x2800 (16-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F89(); return; } /* je: equal / zero */

loc_001B2F80: ;
    ecx = esi;
    PUSH32(esp, 0x001B2F87u); RECOMP_ABI_CALL(0x001B271Eu, sub_001B271E); /* call 0x001B271E */

loc_001B2F87: ;
    g_seh_ebp = ebp; sub_001B2F9C(); return; /* tail jmp 0x001B2F9C */

}

/**
 * sub_001B2F89
 * Original: 0x001B2F89 - 0x001B2F9C (19 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2F89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2F89: ;
    eax = 0x400;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B2F9C(); return; } /* jne: not equal / not zero */

loc_001B2F94: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B2F9Cu); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

    g_seh_ebp = ebp; sub_001B2F9C(); return; /* fallthrough 0x001B2F9C */

}

/**
 * sub_001B2F9C
 * Original: 0x001B2F9C - 0x001B2FA2 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2F9C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2F9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2FA2
 * Original: 0x001B2FA2 - 0x001B2FFF (93 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2FA2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x281F1C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B2FAE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B2FB6u); RECOMP_ABI_CALL(0x001B2A3Eu, sub_001B2A3E); /* call 0x001B2A3E */

loc_001B2FB6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B2FAE; /* jb: below (unsigned <) */

loc_001B2FBC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B2FC5u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001B2FC5: ;
    ecx = esi;
    PUSH32(esp, 0x001B2FCCu); RECOMP_ABI_CALL(0x001B29CFu, sub_001B29CF); /* call 0x001B29CF */

loc_001B2FCC: ;
    edi = esi + 0x80;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B2FE1; /* je: equal / zero */

loc_001B2FD8: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B2FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B2FDBu); } /* indirect call */
    }

loc_001B2FDE: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B2FE1: ;
    edi = esi + 0xC0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B2FF6; /* je: equal / zero */

loc_001B2FED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B2FF3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B2FF3: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B2FF6: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B5A51(); return; /* tail jmp 0x001B5A51 */

}

/**
 * sub_001B2FFF
 * Original: 0x001B2FFF - 0x001B306B (108 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2FFF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    if ((_fa == 0)) goto loc_001B3031; /* je: equal / zero */

loc_001B300F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B3016u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001B3016: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3031; /* je: equal / zero */

loc_001B302A: ;
    ecx = esi;
    PUSH32(esp, 0x001B3031u); RECOMP_ABI_CALL(0x001B29CFu, sub_001B29CF); /* call 0x001B29CF */

loc_001B3031: ;
    ecx = esi;
    PUSH32(esp, 0x001B3038u); RECOMP_ABI_CALL(0x001B40A8u, sub_001B40A8); /* call 0x001B40A8 */

loc_001B3038: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B30EB(); return; } /* jl: less (signed <) */

loc_001B3040: ;
    edx = MEM32(esi + 0x80);
    ecx = ZX16(MEM16(edx + 0xC));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B306B(); return; } /* je: equal / zero */

loc_001B304E: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B30A3(); return; } /* jne: not equal / not zero */

loc_001B3053: ;
    ecx = esi + 0x84;
    ebx = MEM32(ecx);
    ebx = ebx & 0xFFFEFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x20000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = ebx;
    g_seh_ebp = ebp; sub_001B30A3(); return; /* tail jmp 0x001B30A3 */

}

/**
 * sub_001B3067
 * Original: 0x001B3067 - 0x001B306B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3067(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3067: ;
    MEM32(ecx) = ebx;
    g_seh_ebp = ebp; sub_001B30A3(); return; /* tail jmp 0x001B30A3 */

}

/**
 * sub_001B306B
 * Original: 0x001B306B - 0x001B3086 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B306B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B306B: ;
    SET_LO8(ecx, MEM8(edx + 0xF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B309C(); return; } /* je: equal / zero */

loc_001B3073: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3086(); return; } /* je: equal / zero */

loc_001B3078: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B30A3(); return; } /* jne: not equal / not zero */

loc_001B307D: ;
    MEM8(esi + 0x86) = MEM8(esi + 0x86) | 3;
    _fa = (uint32_t)(MEM8(esi + 0x86)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B30A3(); return; /* tail jmp 0x001B30A3 */

}

/**
 * sub_001B3086
 * Original: 0x001B3086 - 0x001B309C (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3086(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3086: ;
    ecx = esi + 0x84;
    ebx = MEM32(ecx);
    ebx = ebx & 0xFFFDFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x10000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B3067(); return; /* tail jmp 0x001B3067 */

}

/**
 * sub_001B309C
 * Original: 0x001B309C - 0x001B30A3 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B309C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B309C: ;
    MEM8(esi + 0x86) = MEM8(esi + 0x86) & 0xFC;
    _fa = (uint32_t)(MEM8(esi + 0x86)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B30A3(); return; /* fallthrough 0x001B30A3 */

}

/**
 * sub_001B30A3
 * Original: 0x001B30A3 - 0x001B30D2 (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B30A3: ;
    ecx = ZX8(MEM8(edx + 0xE));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = ecx & 0x7C0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 1 (8-bit) */
    ecx = MEM32(esi + 0x84);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B30D2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B30CA: ;
    ecx = ecx | 0x800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B30D8(); return; /* tail jmp 0x001B30D8 */

}

/**
 * sub_001B30D2
 * Original: 0x001B30D2 - 0x001B30D8 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B30D2: ;
    ecx = ecx & 0xFF7FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B30D8(); return; /* fallthrough 0x001B30D8 */

}

/**
 * sub_001B30D8
 * Original: 0x001B30D8 - 0x001B30EB (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B30D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x84) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B30EB(); return; } /* je: equal / zero */

loc_001B30E2: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B522F(); return; /* tail jmp 0x001B522F */

}

/**
 * sub_001B30EB
 * Original: 0x001B30EB - 0x001B30EE (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30EB(void)
{

loc_001B30EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B30EE
 * Original: 0x001B30EE - 0x001B31BC (206 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B30EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B30EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3106u); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_001B3106: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x2000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B312B; /* jne: not equal / not zero */

loc_001B3110: ;
    SET_LO16(edx, 0xF7FF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3119u); RECOMP_ABI_CALL(0x001B24E6u, sub_001B24E6); /* call 0x001B24E6 */

loc_001B3119: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B3122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B311Fu); } /* indirect call */
    }

loc_001B3122: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B312Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3128u); } /* indirect call */
    }

loc_001B312B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3132u); RECOMP_ABI_CALL(0x001B522Fu, sub_001B522F); /* call 0x001B522F */

loc_001B3132: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001B31B4; /* jl: less (signed <) */

loc_001B3139: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3143u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3143: ;
    PUSH32(esp, MEM32(esi + 0xB0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B314Eu); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B314E: ;
    ecx = ebp + -16;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3158u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3158: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 6);
    eax = ebx + 8;
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
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ebx + 0x24) = 0x8000000Au;
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, MEM32(eax));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B317Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3177u); } /* indirect call */
    }

loc_001B317D: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3185u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3185: ;
    esi = MEM32(ebp + -4);
    eax = esi + 0xA8;
    MEM32(ebx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ebx);
    ecx = ebp + -16;
    MEM32(eax + 4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B31A5u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B31A5: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 0x20 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001B31B4; /* jne: not equal / not zero */

loc_001B31AD: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B31B4u); RECOMP_ABI_CALL(0x001B2E36u, sub_001B2E36); /* call 0x001B2E36 */

loc_001B31B4: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B31BC
 * Original: 0x001B31BC - 0x001B31F0 (52 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B31BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B31BC: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B31F0(); return; } /* jne: not equal / not zero */

loc_001B31C7: ;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B31DF; /* je: equal / zero */

loc_001B31D0: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, LO16(eax) & 0xFFDF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0x001B31DFu); RECOMP_ABI_CALL(0x001B2E36u, sub_001B2E36); /* call 0x001B2E36 */

loc_001B31DF: ;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B31EDu); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B31ED: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001B3246(); return; /* tail jmp 0x001B3246 */

}

/**
 * sub_001B31F0
 * Original: 0x001B31F0 - 0x001B3201 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B31F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B31F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3201(); return; } /* jne: not equal / not zero */

loc_001B31F5: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B3227(); return; /* tail jmp 0x001B3227 */

}

/**
 * sub_001B3201
 * Original: 0x001B3201 - 0x001B3212 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3201(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3201: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3212(); return; } /* jne: not equal / not zero */

loc_001B3206: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B3227(); return; /* tail jmp 0x001B3227 */

}

/**
 * sub_001B3212
 * Original: 0x001B3212 - 0x001B3227 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3212: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3241(); return; } /* jne: not equal / not zero */

loc_001B3217: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3231(); return; } /* jne: not equal / not zero */

loc_001B3220: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B3227(); return; /* fallthrough 0x001B3227 */

}

/**
 * sub_001B3227
 * Original: 0x001B3227 - 0x001B3231 (10 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3227(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3227: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B322Fu); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B322F: ;
    g_seh_ebp = ebp; sub_001B3246(); return; /* tail jmp 0x001B3246 */

}

/**
 * sub_001B3231
 * Original: 0x001B3231 - 0x001B3241 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3231(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3231: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x12) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B3246(); return; /* tail jmp 0x001B3246 */

}

/**
 * sub_001B3241
 * Original: 0x001B3241 - 0x001B3246 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3241(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3241: ;
    eax = 0x80004005u;

    g_seh_ebp = ebp; sub_001B3246(); return; /* fallthrough 0x001B3246 */

}

/**
 * sub_001B3246
 * Original: 0x001B3246 - 0x001B324A (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3246(void)
{

loc_001B3246: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B324A
 * Original: 0x001B324A - 0x001B3283 (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B324A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B324A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_001B326F; /* je: equal / zero */

loc_001B325B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B326Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3268u); } /* indirect call */
    }

loc_001B326B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B327B; /* jne: not equal / not zero */

loc_001B326F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3279u); RECOMP_ABI_CALL(0x001B31BCu, sub_001B31BC); /* call 0x001B31BC */

loc_001B3279: ;
    edi = eax;

loc_001B327B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3283
 * Original: 0x001B3283 - 0x001B32A6 (35 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3283(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3283: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B32C6(); return; } /* je: equal / zero */

loc_001B328C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B32BF(); return; } /* je: equal / zero */

loc_001B328F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B32B8(); return; } /* je: equal / zero */

loc_001B3292: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B32B1(); return; } /* je: equal / zero */

loc_001B3295: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B32A6(); return; } /* je: equal / zero */

loc_001B3298: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B32CB(); return; } /* jne: not equal / not zero */

loc_001B329B: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B32A4u); RECOMP_ABI_CALL(0x001B31BCu, sub_001B31BC); /* call 0x001B31BC */

loc_001B32A4: ;
    g_seh_ebp = ebp; sub_001B32CB(); return; /* tail jmp 0x001B32CB */

}

/**
 * sub_001B32A6
 * Original: 0x001B32A6 - 0x001B32B1 (11 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B32A6: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B32AFu); RECOMP_ABI_CALL(0x001B2652u, sub_001B2652); /* call 0x001B2652 */

loc_001B32AF: ;
    g_seh_ebp = ebp; sub_001B32CB(); return; /* tail jmp 0x001B32CB */

}

/**
 * sub_001B32B1
 * Original: 0x001B32B1 - 0x001B32B8 (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B32B1: ;
    PUSH32(esp, 0x001B32B6u); RECOMP_ABI_CALL(0x001B2E26u, sub_001B2E26); /* call 0x001B2E26 */

loc_001B32B6: ;
    g_seh_ebp = ebp; sub_001B32CB(); return; /* tail jmp 0x001B32CB */

}

/**
 * sub_001B32B8
 * Original: 0x001B32B8 - 0x001B32BF (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B32B8: ;
    PUSH32(esp, 0x001B32BDu); RECOMP_ABI_CALL(0x001B2C2Eu, sub_001B2C2E); /* call 0x001B2C2E */

loc_001B32BD: ;
    g_seh_ebp = ebp; sub_001B32CB(); return; /* tail jmp 0x001B32CB */

}

/**
 * sub_001B32BF
 * Original: 0x001B32BF - 0x001B32C6 (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B32BF: ;
    PUSH32(esp, 0x001B32C4u); RECOMP_ABI_CALL(0x001B29CFu, sub_001B29CF); /* call 0x001B29CF */

loc_001B32C4: ;
    g_seh_ebp = ebp; sub_001B32CB(); return; /* tail jmp 0x001B32CB */

}

/**
 * sub_001B32C6
 * Original: 0x001B32C6 - 0x001B32CB (5 bytes, 1 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B32C6: ;
    PUSH32(esp, 0x001B32CBu); RECOMP_ABI_CALL(0x001B4903u, sub_001B4903); /* call 0x001B4903 */

    g_seh_ebp = ebp; sub_001B32CB(); return; /* fallthrough 0x001B32CB */

}

/**
 * sub_001B32CB
 * Original: 0x001B32CB - 0x001B32CE (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32CB(void)
{

loc_001B32CB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B32CE
 * Original: 0x001B32CE - 0x001B32E9 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B32CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B32D6u); RECOMP_ABI_CALL(0x001B2FA2u, sub_001B2FA2); /* call 0x001B2FA2 */

loc_001B32D6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B32E3; /* je: equal / zero */

loc_001B32DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B32E3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B32E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B32E9
 * Original: 0x001B32E9 - 0x001B3308 (31 bytes, 13 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B32E9(void)
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

loc_001B32E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 8)); /* fmul qword ptr [ebp + 8] */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x10)); /* fmul qword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x18)); /* fmul qword ptr [ebp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B33AB
 * Original: 0x001B33AB - 0x001B346D (194 bytes, 78 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001B33AB(void)
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

loc_001B33AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(0x22CA68)); /* fld double */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B33EE; /* jp: parity */

loc_001B33C2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B33EE; /* jp: parity */

loc_001B33D0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(ebp + 0x1C)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B33EE; /* jp: parity */

loc_001B33DE: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    goto loc_001B3466;

loc_001B33EE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(0x281F60)); /* fld double */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3455; /* jnp: not parity */

loc_001B3404: ;
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3455; /* jnp: not parity */

loc_001B3412: ;
    fp_push(MEMD(ebp + 0x1C)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3455; /* jnp: not parity */

loc_001B3420: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + 8);
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0xC)); /* fmul qword ptr [ebp + 0xc] */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x14)); /* fmul qword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMD(ebp + 0x1C)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x1C)); /* fmul qword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x1C)); /* fmul qword ptr [ebp + 0x1c] */
    goto loc_001B3466;

loc_001B3455: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x1C)); /* fld double */

loc_001B3466: ;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B346D
 * Original: 0x001B346D - 0x001B3521 (180 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B346D(void)
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

loc_001B346D: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B34B2; /* jp: parity */

loc_001B3485: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B34B2; /* jp: parity */

loc_001B3493: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B34B2; /* jp: parity */

loc_001B34A1: ;
    eax = MEM32(esp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    goto loc_001B3504;

loc_001B34B2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x281C5C)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3509; /* jnp: not parity */

loc_001B34C7: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3509; /* jnp: not parity */

loc_001B34D5: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3509; /* jnp: not parity */

loc_001B34E3: ;
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001B34EBu); RECOMP_ABI_CALL(0x001B053Cu, sub_001B053C); /* call 0x001B053C */

loc_001B34EB: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */

loc_001B3504: ;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001B351D;

loc_001B3509: ;
    fp_push(MEMF(esi)); /* fld float */
    eax = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_001B351D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B3521
 * Original: 0x001B3521 - 0x001B35AA (137 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B3521(void)
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

loc_001B3521: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B3555; /* jp: parity */

loc_001B3539: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B3555; /* jp: parity */

loc_001B3547: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B35A6; /* jnp: not parity */

loc_001B3555: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x281C5C)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B35A6; /* jnp: not parity */

loc_001B356A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B35A6; /* jnp: not parity */

loc_001B3578: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B35A6; /* jnp: not parity */

loc_001B3586: ;
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001B358Eu); RECOMP_ABI_CALL(0x001B053Cu, sub_001B053C); /* call 0x001B053C */

loc_001B358E: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_001B35A6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B35AA
 * Original: 0x001B35AA - 0x001B3634 (138 bytes, 56 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001B35AA(void)
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

loc_001B35AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x22CA68)); /* fld double */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B35DF; /* jp: parity */

loc_001B35C9: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B35DF; /* jp: parity */

loc_001B35D7: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    goto loc_001B362D;

loc_001B35DF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(0x281F60)); /* fld double */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3625; /* jnp: not parity */

loc_001B35F5: ;
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3625; /* jnp: not parity */

loc_001B3603: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0xC)); /* fmul qword ptr [ebp + 0xc] */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x14)); /* fmul qword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + 0x14)); /* fmul qword ptr [ebp + 0x14] */
    goto loc_001B362D;

loc_001B3625: ;
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x14)); /* fld double */

loc_001B362D: ;
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B36C3
 * Original: 0x001B36C3 - 0x001B373A (119 bytes, 49 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B36C3(void)
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

loc_001B36C3: ;
    ecx = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B36ED; /* jp: parity */

loc_001B36DF: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3737; /* jnp: not parity */

loc_001B36ED: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x281C5C)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3737; /* jnp: not parity */

loc_001B3702: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3737; /* jnp: not parity */

loc_001B3710: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_001B3737: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B373A
 * Original: 0x001B373A - 0x001B3758 (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B373A(void)
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

loc_001B373A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    SMEM32(ebp + -8) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B376D
 * Original: 0x001B376D - 0x001B386E (257 bytes, 106 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001B376D(void)
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

loc_001B376D: ;
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
    PUSH32(esp, 0x001B37ABu); RECOMP_ABI_CALL(0x001B346Du, sub_001B346D); /* call 0x001B346D */

loc_001B37AB: ;
    eax = MEM32(ebp + 8);
    fp_pop(); /* fstp st(0) */
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
    POP32(esp, edi);
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
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
 * sub_001B38D4
 * Original: 0x001B38D4 - 0x001B390A (54 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B38D4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B38D4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B390A
 * Original: 0x001B390A - 0x001B3931 (39 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B390A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B390A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3931
 * Original: 0x001B3931 - 0x001B3951 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3931(void)
{

loc_001B3931: ;
    eax = ecx;
    ecx = eax + 4;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x281F68;
    MEM32(eax + 0x1C) = 0x1CE494;
    MEM32(eax + 0x10) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B3951
 * Original: 0x001B3951 - 0x001B3973 (34 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3951(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3951: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x281F68;
    if (CMP_EQ(_fa, _fb)) goto loc_001B396B; /* je: equal / zero */

loc_001B3961: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3967u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B3967: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B396B: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3973
 * Original: 0x001B3973 - 0x001B39FE (139 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3973(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B3973: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;
    PUSH32(esp, 1);
    eax = edi + edi * 4 + 5;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3998u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B3998: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x7FF8FFF2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebx = ebx + 0x8007000Eu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    if ((_fas < 0)) goto loc_001B39F5; /* js: sign (negative) */

loc_001B39AF: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B39C0u); RECOMP_ABI_CALL(0x001B38D4u, sub_001B38D4); /* call 0x001B38D4 */

loc_001B39C0: ;
    MEM32(esi + 0x18) = eax;
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001B39F5; /* jbe: below or equal (unsigned <=) */

loc_001B39CB: ;
    ecx = esi + 0xC;
    MEM32(ebp + 8) = 0x14;
    edx = eax + -1;

loc_001B39D8: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x14;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx + 4) = eax;
    edi = MEM32(eax + 4);
    MEM32(edi) = eax;
    if ((_fa != 0)) goto loc_001B39D8; /* jne: not equal / not zero */

loc_001B39F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B39FE
 * Original: 0x001B39FE - 0x001B3AA7 (169 bytes, 59 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B39FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B39FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AC8(); return; } /* je: equal / zero */

loc_001B3A0F: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x14));
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AC7(); return; } /* jb: below (unsigned <) */

loc_001B3A1F: ;
    edx = edi + 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AC7(); return; } /* je: equal / zero */

loc_001B3A2C: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3A47; /* jne: not equal / not zero */

loc_001B3A32: ;
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B3A47; /* jb: below (unsigned <) */

loc_001B3A3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3A45; /* je: equal / zero */

loc_001B3A3F: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B3A47; /* jae: above or equal (unsigned >=) */

loc_001B3A45: ;
    esi = eax;

loc_001B3A47: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3A2C; /* jne: not equal / not zero */

loc_001B3A4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AC7(); return; } /* je: equal / zero */

loc_001B3A51: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B3A80; /* jae: above or equal (unsigned >=) */

loc_001B3A57: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0x001B3A5Fu); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B3A5F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xA));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 8));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001B3A7Cu); RECOMP_ABI_CALL(0x001B38D4u, sub_001B38D4); /* call 0x001B38D4 */

loc_001B3A7C: ;
    MEM16(esi + 0xA) = LO16(ebx);

loc_001B3A80: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AC7(); return; } /* jne: not equal / not zero */

loc_001B3A9C: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + 4;
    eax = MEM32(edx);
    g_seh_ebp = ebp; sub_001B3AC3(); return; /* tail jmp 0x001B3AC3 */

}

/**
 * sub_001B3AA7
 * Original: 0x001B3AA7 - 0x001B3AC3 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3AA7: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3AC1; /* jne: not equal / not zero */

loc_001B3AAD: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3ABE; /* je: equal / zero */

loc_001B3AB4: ;
    SET_LO16(ebx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B3AC1; /* jbe: below or equal (unsigned <=) */

loc_001B3ABE: ;
    MEM32(edi + 0x18) = eax;

loc_001B3AC1: ;
    eax = MEM32(eax);

    g_seh_ebp = ebp; sub_001B3AC3(); return; /* fallthrough 0x001B3AC3 */

}

/**
 * sub_001B3AC3
 * Original: 0x001B3AC3 - 0x001B3AC7 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3AC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3AA7(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B3AC7(); return; /* fallthrough 0x001B3AC7 */

}

/**
 * sub_001B3AC7
 * Original: 0x001B3AC7 - 0x001B3AC8 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3AC7: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001B3AC8(); return; /* fallthrough 0x001B3AC8 */

}

/**
 * sub_001B3AC8
 * Original: 0x001B3AC8 - 0x001B3ACF (7 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AC8(void)
{

loc_001B3AC8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3ACF
 * Original: 0x001B3ACF - 0x001B3AF9 (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3ACF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3ACF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3AEA; /* je: equal / zero */

loc_001B3ADB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001B3AED; /* je: equal / zero */

loc_001B3AE2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3ADB; /* jne: not equal / not zero */

loc_001B3AE8: ;
    goto loc_001B3AED;

loc_001B3AEA: ;
    edx = MEM32(ebp + 8);

loc_001B3AED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3AF9
 * Original: 0x001B3AF9 - 0x001B3B1A (33 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3AF9: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xA) = MEM16(esi + 0xA) + LO16(edx);
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B3B14u); RECOMP_ABI_CALL(0x001B1730u, sub_001B1730); /* call 0x001B1730 */

loc_001B3B14: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3B1A
 * Original: 0x001B3B1A - 0x001B3B87 (109 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3B1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3B1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B3B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3B32u); } /* indirect call */
    }

loc_001B3B38: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3B82; /* je: equal / zero */

loc_001B3B3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_001B3B41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B3B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3B44u); } /* indirect call */
    }

loc_001B3B4A: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3B54u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3B54: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B3B54; /* jb: below (unsigned <) */

loc_001B3B61: ;
    MEM32(-25032700) = edi;
    ecx = ebp + -8;
    MEM32(-25032696) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3B75u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3B75: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B3B41; /* jne: not equal / not zero */

loc_001B3B80: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B3B82: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3B87
 * Original: 0x001B3B87 - 0x001B3B9E (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B87(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3B87: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B3B9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3B95u); } /* indirect call */
    }

loc_001B3B9B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3B9E
 * Original: 0x001B3B9E - 0x001B3BC3 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B9E(void)
{

loc_001B3B9E: ;
    eax = ecx;
    ecx = eax + 8;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x281F6C;
    MEM32(0x1CEAA0) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B3BC3
 * Original: 0x001B3BC3 - 0x001B3BEA (39 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3BC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3BC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    MEM32(edi) = 0x281F6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3BDEu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3BDE: ;
    MEM32(0x1CEAA0) = MEM32(0x1CEAA0) & 0;
    _fa = (uint32_t)(MEM32(0x1CEAA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 8;
    g_seh_ebp = ebp; sub_001B3BF7(); return; /* tail jmp 0x001B3BF7 */

}

/**
 * sub_001B3BEA
 * Original: 0x001B3BEA - 0x001B3BF7 (13 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3BEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3BEA: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3BF7(); return; } /* je: equal / zero */

loc_001B3BF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3BF7u); RECOMP_ABI_CALL(0x001AEAFBu, sub_001AEAFB); /* call 0x001AEAFB */

    g_seh_ebp = ebp; sub_001B3BF7(); return; /* fallthrough 0x001B3BF7 */

}

/**
 * sub_001B3BF7
 * Original: 0x001B3BF7 - 0x001B3C24 (45 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3BF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3BF7: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001B3BFEu); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B3BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3BEA(); return; } /* jne: not equal / not zero */

loc_001B3C02: ;
    eax = MEM32(0x1CEBFC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x1CEBF8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3C1Au); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3C1A: ;
    MEM32(edi) = 0x281DFC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B3C24
 * Original: 0x001B3C24 - 0x001B3CA8 (132 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3C24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B3C24: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3C39u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3C39: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_001B3C98; /* je: equal / zero */

loc_001B3C4C: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = esi + 8;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3C7Bu); RECOMP_ABI_CALL(0x001B390Au, sub_001B390A); /* call 0x001B390A */

loc_001B3C7B: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B3C8B; /* je: equal / zero */

loc_001B3C83: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001B3C8E; /* jbe: below or equal (unsigned <=) */

loc_001B3C8B: ;
    MEM32(esi + 0x18) = eax;

loc_001B3C8E: ;
    eax = MEM32(0x1CEBFC);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B3C98: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3CA0u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3CA0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3CA8
 * Original: 0x001B3CA8 - 0x001B3D41 (153 bytes, 59 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3CA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3CA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3CBFu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3CBF: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x17;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D6F(); return; } /* je: equal / zero */

loc_001B3CD6: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D6F(); return; } /* jb: below (unsigned <) */

loc_001B3CDF: ;
    edx = edi + 0x10;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D6F(); return; } /* je: equal / zero */

loc_001B3CEC: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3D04; /* jne: not equal / not zero */

loc_001B3CF2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B3D04; /* jb: below (unsigned <) */

loc_001B3CF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3D02; /* je: equal / zero */

loc_001B3CFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B3D04; /* jae: above or equal (unsigned >=) */

loc_001B3D02: ;
    ebx = eax;

loc_001B3D04: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3CEC; /* jne: not equal / not zero */

loc_001B3D0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D6F(); return; } /* je: equal / zero */

loc_001B3D0E: ;
    eax = MEM32(ebx + 8);
    ecx = esi + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B3D2A; /* jae: above or equal (unsigned >=) */

loc_001B3D18: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + esi;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3D27u); RECOMP_ABI_CALL(0x001B390Au, sub_001B390A); /* call 0x001B390A */

loc_001B3D27: ;
    MEM32(ebx + 8) = esi;

loc_001B3D2A: ;
    MEM32(ebx + 0xC) = 0x706F6C73;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D5F(); return; } /* jne: not equal / not zero */

loc_001B3D36: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi + 0x10;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_001B3D5B(); return; /* tail jmp 0x001B3D5B */

}

/**
 * sub_001B3D41
 * Original: 0x001B3D41 - 0x001B3D5B (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D41: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3D59; /* jne: not equal / not zero */

loc_001B3D47: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3D56; /* je: equal / zero */

loc_001B3D4E: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B3D59; /* jbe: below or equal (unsigned <=) */

loc_001B3D56: ;
    MEM32(edi + 0x18) = eax;

loc_001B3D59: ;
    eax = MEM32(eax);

    g_seh_ebp = ebp; sub_001B3D5B(); return; /* fallthrough 0x001B3D5B */

}

/**
 * sub_001B3D5B
 * Original: 0x001B3D5B - 0x001B3D5F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3D41(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B3D5F(); return; /* fallthrough 0x001B3D5F */

}

/**
 * sub_001B3D5F
 * Original: 0x001B3D5F - 0x001B3D6F (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D5F: ;
    eax = MEM32(0x1CEBF8);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001B3D6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3D6Cu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B3D6F(); return; /* fallthrough 0x001B3D6F */

}

/**
 * sub_001B3D6F
 * Original: 0x001B3D6F - 0x001B3D89 (26 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D6F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3D77u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3D77: ;
    eax = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3D89
 * Original: 0x001B3D89 - 0x001B3DA4 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D89(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3D89: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3D9Eu); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B3D9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3DA4
 * Original: 0x001B3DA4 - 0x001B3DBF (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3DA4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B3DACu); RECOMP_ABI_CALL(0x001B3951u, sub_001B3951); /* call 0x001B3951 */

loc_001B3DAC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3DB9; /* je: equal / zero */

loc_001B3DB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B3DB9u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B3DB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3DBF
 * Original: 0x001B3DBF - 0x001B3DF9 (58 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3DBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3DBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ebx;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + ecx + 0xFFF;
    ecx = ebp + -8;
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFFF000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3DF2u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3DF2: ;
    ecx = edi + 4;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_001B3E0C(); return; /* tail jmp 0x001B3E0C */

}

/**
 * sub_001B3DF9
 * Original: 0x001B3DF9 - 0x001B3E0C (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3DF9: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3E0A; /* je: equal / zero */

loc_001B3DFF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3E0A; /* jne: not equal / not zero */

loc_001B3E04: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 0xA) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3E47(); return; } /* je: equal / zero */

loc_001B3E0A: ;
    eax = MEM32(eax);

    g_seh_ebp = ebp; sub_001B3E0C(); return; /* fallthrough 0x001B3E0C */

}

/**
 * sub_001B3E0C
 * Original: 0x001B3E0C - 0x001B3E47 (59 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3DF9(); return; } /* jne: not equal / not zero */

loc_001B3E10: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001B3E19u); RECOMP_ABI_CALL(0x001B39FEu, sub_001B39FE); /* call 0x001B39FE */

loc_001B3E19: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3E36; /* je: equal / zero */

loc_001B3E1F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3E27u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3E27: ;
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3E36u); RECOMP_ABI_CALL(0x001B3B1Au, sub_001B3B1A); /* call 0x001B3B1A */

loc_001B3E36: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3E3Eu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3E3E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3E36
 * Original: 0x001B3E36 - 0x001B3E47 (17 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E36: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3E3Eu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3E3E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3E47
 * Original: 0x001B3E47 - 0x001B3E4E (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E47: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    g_seh_ebp = ebp; sub_001B3E36(); return; /* tail jmp 0x001B3E36 */

}

/**
 * sub_001B3E4E
 * Original: 0x001B3E4E - 0x001B3E64 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E4E: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = esi + 4;
    g_seh_ebp = ebp; sub_001B3E73(); return; /* tail jmp 0x001B3E73 */

}

/**
 * sub_001B3E64
 * Original: 0x001B3E64 - 0x001B3E73 (15 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E64: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3E8A(); return; } /* jne: not equal / not zero */

loc_001B3E6A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B3E73u); RECOMP_ABI_CALL(0x001B3AF9u, sub_001B3AF9); /* call 0x001B3AF9 */

    g_seh_ebp = ebp; sub_001B3E73(); return; /* fallthrough 0x001B3E73 */

}

/**
 * sub_001B3E73
 * Original: 0x001B3E73 - 0x001B3E7B (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E73: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3E64(); return; } /* jne: not equal / not zero */

loc_001B3E79: ;
    g_seh_ebp = ebp; sub_001B3E8A(); return; /* tail jmp 0x001B3E8A */

}

/**
 * sub_001B3E7B
 * Original: 0x001B3E7B - 0x001B3E8A (15 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E7B: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3E91(); return; } /* jne: not equal / not zero */

loc_001B3E81: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001B3E8Au); RECOMP_ABI_CALL(0x001B3AF9u, sub_001B3AF9); /* call 0x001B3AF9 */

    g_seh_ebp = ebp; sub_001B3E8A(); return; /* fallthrough 0x001B3E8A */

}

/**
 * sub_001B3E8A
 * Original: 0x001B3E8A - 0x001B3E91 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E8A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3E7B(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B3E91(); return; /* fallthrough 0x001B3E91 */

}

/**
 * sub_001B3E91
 * Original: 0x001B3E91 - 0x001B3EAA (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3E91: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3EA2; /* je: equal / zero */

loc_001B3E98: ;
    SET_LO16(edx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B3EA5; /* jbe: below or equal (unsigned <=) */

loc_001B3EA2: ;
    MEM32(esi + 0x18) = eax;

loc_001B3EA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3EAA
 * Original: 0x001B3EAA - 0x001B3EC5 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3EAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3EAA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B3EB2u); RECOMP_ABI_CALL(0x001B3BC3u, sub_001B3BC3); /* call 0x001B3BC3 */

loc_001B3EB2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3EBF; /* je: equal / zero */

loc_001B3EB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B3EBFu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B3EBF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3EC5
 * Original: 0x001B3EC5 - 0x001B3EF4 (47 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3EC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3EC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3EE1u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3EE1: ;
    eax = MEM32(0x1CEBF8);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 0x10;
    g_seh_ebp = ebp; sub_001B3F0E(); return; /* tail jmp 0x001B3F0E */

}

/**
 * sub_001B3EF4
 * Original: 0x001B3EF4 - 0x001B3F0E (26 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3EF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3EF4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3F30(); return; } /* jne: not equal / not zero */

loc_001B3EFA: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3F30(); return; } /* jne: not equal / not zero */

loc_001B3F03: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B3F0Cu); RECOMP_ABI_CALL(0x001B3D89u, sub_001B3D89); /* call 0x001B3D89 */

loc_001B3F0C: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001B3F0E(); return; /* fallthrough 0x001B3F0E */

}

/**
 * sub_001B3F0E
 * Original: 0x001B3F0E - 0x001B3F16 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3F0E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3EF4(); return; } /* jne: not equal / not zero */

loc_001B3F14: ;
    g_seh_ebp = ebp; sub_001B3F30(); return; /* tail jmp 0x001B3F30 */

}

/**
 * sub_001B3F16
 * Original: 0x001B3F16 - 0x001B3F30 (26 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3F16: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3F37(); return; } /* jne: not equal / not zero */

loc_001B3F1C: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3F37(); return; } /* jne: not equal / not zero */

loc_001B3F25: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001B3F2Eu); RECOMP_ABI_CALL(0x001B3D89u, sub_001B3D89); /* call 0x001B3D89 */

loc_001B3F2E: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001B3F30(); return; /* fallthrough 0x001B3F30 */

}

/**
 * sub_001B3F30
 * Original: 0x001B3F30 - 0x001B3F37 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3F30: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B3F16(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B3F37(); return; /* fallthrough 0x001B3F37 */

}

/**
 * sub_001B3F37
 * Original: 0x001B3F37 - 0x001B3F5E (39 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3F37: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3F46; /* je: equal / zero */

loc_001B3F3E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B3F49; /* jbe: below or equal (unsigned <=) */

loc_001B3F46: ;
    MEM32(edi + 0x18) = esi;

loc_001B3F49: ;
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001B3F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B3F4Cu); } /* indirect call */
    }

loc_001B3F4F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B3F57u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3F57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3F5E
 * Original: 0x001B3F5E - 0x001B3FA9 (75 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B3F5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3F5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3F72u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B3F72: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B3F9C; /* jne: not equal / not zero */

loc_001B3F7A: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3F8Bu); RECOMP_ABI_CALL(0x001B3E4Eu, sub_001B3E4E); /* call 0x001B3E4E */

loc_001B3F8B: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3F93u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3F93: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3F9Au); RECOMP_ABI_CALL(0x001B3B87u, sub_001B3B87); /* call 0x001B3B87 */

loc_001B3F9A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B3F9C: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B3FA4u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B3FA4: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3FA9
 * Original: 0x001B3FA9 - 0x001B3FB4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FA9(void)
{

loc_001B3FA9: ;
    MEM32(0x1CEBFC) = 0x1CE484;
    esp += 4; return; /* ret */

}

/**
 * sub_001B3FB4
 * Original: 0x001B3FB4 - 0x001B3FBF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FB4(void)
{

loc_001B3FB4: ;
    MEM32(0x1CEBF8) = 0x1CE488;
    esp += 4; return; /* ret */

}

/**
 * sub_001B3FEB
 * Original: 0x001B3FEB - 0x001B3FEF (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FEB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3FEB: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B3FEF
 * Original: 0x001B3FEF - 0x001B3FF3 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FEF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3FEF: ;
    MEM16(ecx) = MEM16(ecx) | LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B3FF3
 * Original: 0x001B3FF3 - 0x001B4015 (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B3FF3(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B3FF3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x1CEB7C); PUSH32(esp, 0x001B4012u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B400Cu); } /* indirect call */
    }

loc_001B4012: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B401D
 * Original: 0x001B401D - 0x001B4039 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B401D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B401D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B4038; /* jbe: below or equal (unsigned <=) */

loc_001B4026: ;
    PUSH32(esp, esi);

loc_001B4027: ;
    esi = MEM32(ecx);
    MEM8(edx + esi + 0xF) = 0x80;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4027; /* jb: below (unsigned <) */

loc_001B4037: ;
    POP32(esp, esi);

loc_001B4038: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B405D
 * Original: 0x001B405D - 0x001B40A0 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B405D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B405D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B4069; /* je: equal / zero */

loc_001B4065: ;
    MEM8(ecx + 0x17) = MEM8(ecx + 0x17) | 1;
    _fa = (uint32_t)(MEM8(ecx + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001B4069: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = 0x2000;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B407D; /* je: equal / zero */

loc_001B4077: ;
    MEM16(ecx + 0x16) = MEM16(ecx + 0x16) | 0x43F;
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_001B407D: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B4087; /* je: equal / zero */

loc_001B4083: ;
    MEM8(ecx + 0x1A) = MEM8(ecx + 0x1A) | 0x80;
    _fa = (uint32_t)(MEM8(ecx + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001B4087: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B4094; /* jne: not equal / not zero */

loc_001B4090: ;
    MEM8(ecx + 0x15) = MEM8(ecx + 0x15) | 0xE0;
    _fa = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001B4094: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B40A0(); return; } /* je: equal / zero */

loc_001B409A: ;
    MEM8(ecx + 0x64) = 1;
    g_seh_ebp = ebp; sub_001B40A5(); return; /* tail jmp 0x001B40A5 */

}

/**
 * sub_001B40A0
 * Original: 0x001B40A0 - 0x001B40A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001B40A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B40A2u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B40A5(); return; /* fallthrough 0x001B40A5 */

}

/**
 * sub_001B40A5
 * Original: 0x001B40A5 - 0x001B40A8 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40A5(void)
{

loc_001B40A5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B40A8
 * Original: 0x001B40A8 - 0x001B40DF (55 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B40A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B40A8: ;
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
    PUSH32(esp, 0x001B40BEu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B40BE: ;
    ecx = MEM32(esi + 0x70);
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B40E2(); return; } /* je: equal / zero */

loc_001B40CF: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B40DF(); return; } /* je: equal / zero */

loc_001B40D5: ;
    edi = 0x88780032u;
    g_seh_ebp = ebp; sub_001B41AD(); return; /* tail jmp 0x001B41AD */

}

/**
 * sub_001B40DF
 * Original: 0x001B40DF - 0x001B40E2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40DF: ;
    MEM8(esi + 0x64) = LO8(eax);

    g_seh_ebp = ebp; sub_001B40E2(); return; /* fallthrough 0x001B40E2 */

}

/**
 * sub_001B40E2
 * Original: 0x001B40E2 - 0x001B4100 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40E2: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B4100(); return; } /* je: equal / zero */

loc_001B40E9: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B413B(); return; } /* jne: not equal / not zero */

loc_001B40EE: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xA0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = eax;
    g_seh_ebp = ebp; sub_001B413B(); return; /* tail jmp 0x001B413B */

}

/**
 * sub_001B40FB
 * Original: 0x001B40FB - 0x001B4100 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40FB: ;
    MEM32(esi + 0x14) = eax;
    g_seh_ebp = ebp; sub_001B413B(); return; /* tail jmp 0x001B413B */

}

/**
 * sub_001B4100
 * Original: 0x001B4100 - 0x001B4119 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4100: ;
    SET_LO8(eax, MEM8(ecx + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4137(); return; } /* je: equal / zero */

loc_001B4107: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4128(); return; } /* je: equal / zero */

loc_001B410B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4119(); return; } /* je: equal / zero */

loc_001B410F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B413B(); return; } /* jne: not equal / not zero */

loc_001B4113: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 0xF0;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B413B(); return; /* tail jmp 0x001B413B */

}

/**
 * sub_001B4119
 * Original: 0x001B4119 - 0x001B4128 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4119: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xE0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B40FB(); return; /* tail jmp 0x001B40FB */

}

/**
 * sub_001B4128
 * Original: 0x001B4128 - 0x001B4137 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4128(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4128: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B40FB(); return; /* tail jmp 0x001B40FB */

}

/**
 * sub_001B4137
 * Original: 0x001B4137 - 0x001B413B (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4137(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4137: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B413B(); return; /* fallthrough 0x001B413B */

}

/**
 * sub_001B413B
 * Original: 0x001B413B - 0x001B415E (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B413B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B413B: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xE), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B415E(); return; } /* jne: not equal / not zero */

loc_001B4157: ;
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001B4163(); return; /* tail jmp 0x001B4163 */

}

/**
 * sub_001B415E
 * Original: 0x001B415E - 0x001B4163 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B415E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B415E: ;
    eax = eax | 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001B4163(); return; /* fallthrough 0x001B4163 */

}

/**
 * sub_001B4163
 * Original: 0x001B4163 - 0x001B41AD (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4163: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B41AD(); return; } /* je: equal / zero */

loc_001B416C: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_001B4173: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4173; /* jb: below (unsigned <) */

loc_001B4180: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B41AD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B4186: ;
    ecx = esi + 0xC;

loc_001B4189: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = ZX16(MEM16(ecx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B419D; /* je: equal / zero */

loc_001B4198: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B419D: ;
    MEM32(0xFE820304u) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4189; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001B41AD(); return; /* fallthrough 0x001B41AD */

}

/**
 * sub_001B41AD
 * Original: 0x001B41AD - 0x001B41BB (14 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B41AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B41AD: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B41B5u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B41B5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B41BB
 * Original: 0x001B41BB - 0x001B4243 (136 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B41BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B41BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B41D1u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B41D1: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B4237; /* je: equal / zero */

loc_001B41D9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B421B; /* jbe: below or equal (unsigned <=) */

loc_001B41E3: ;
    edx = esi + 0xC;
    PUSH32(esp, edi);

loc_001B41E7: ;
    edi = ZX16(MEM16(edx));
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x1CEC38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(0x1CEC38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(edx));
    edi = MEM32(0x1CEC38);
    ecx = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi + 0x7C) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B41E7; /* jb: below (unsigned <) */

loc_001B421A: ;
    POP32(esp, edi);

loc_001B421B: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B422Cu); RECOMP_ABI_CALL(0x001B1908u, sub_001B1908); /* call 0x001B1908 */

loc_001B422C: ;
    SET_LO16(edx, 0x10);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4237u); RECOMP_ABI_CALL(0x001B3FEBu, sub_001B3FEB); /* call 0x001B3FEB */

loc_001B4237: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B423Fu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B423F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B4243
 * Original: 0x001B4243 - 0x001B426B (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4243: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x70);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001B4267; /* jbe: below or equal (unsigned <=) */

loc_001B4257: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B425A: ;
    esi = ZX8(MEM8(ecx));
    MEM32(ebp + eax * 4 + -32) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B425A; /* jb: below (unsigned <) */

loc_001B4267: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B4286(); return; /* tail jmp 0x001B4286 */

}

/**
 * sub_001B426B
 * Original: 0x001B426B - 0x001B4286 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B426B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B426B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B4280; /* jbe: below or equal (unsigned <=) */

loc_001B4271: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + ecx * 4 + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + ecx * 4 + -32) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B427C; /* je: equal / zero */

loc_001B4277: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4271; /* jb: below (unsigned <) */

loc_001B427C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4285; /* jb: below (unsigned <) */

loc_001B4280: ;
    MEM32(ebp + eax * 4 + -32) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001B4285: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001B4286(); return; /* fallthrough 0x001B4286 */

}

/**
 * sub_001B4286
 * Original: 0x001B4286 - 0x001B42F4 (110 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B426B(); return; } /* jb: below (unsigned <) */

loc_001B428B: ;
    esi = MEM32(ebp + 8);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B4297: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4297; /* jb: below (unsigned <) */

loc_001B42A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_001B42C6; /* jae: above or equal (unsigned >=) */

loc_001B42AF: ;
    ecx = eax + eax * 4 + 1;

loc_001B42B3: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B42B3; /* jb: below (unsigned <) */

loc_001B42C4: ;
    MEM32(esi) = edx;

loc_001B42C6: ;
    edx = MEM32(ebp + 0xC);
    MEM16(edx) = MEM16(edx) & 0xFC00;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    ecx = MEM32(edx);
    if (CMP_AE(_fa, _fb)) goto loc_001B42EE; /* jae: above or equal (unsigned >=) */

loc_001B42D5: ;
    esi = ecx;
    ecx = eax + eax * 4 + -30;

loc_001B42DB: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B42DB; /* jb: below (unsigned <) */

loc_001B42EC: ;
    MEM32(edx) = esi;

loc_001B42EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B42F4
 * Original: 0x001B42F4 - 0x001B433C (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B42F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B42F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B43E0(); return; } /* je: equal / zero */

loc_001B4314: ;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B43E0(); return; } /* je: equal / zero */

loc_001B431E: ;
    eax = ebx;
    eax = MEM32(eax + 0xB8);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -16) = edi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B433C(); return; } /* jge: greater or equal (signed >=) */

loc_001B4338: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001B4342(); return; /* tail jmp 0x001B4342 */

}

/**
 * sub_001B433C
 * Original: 0x001B433C - 0x001B4342 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B433C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B433C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B4345(); return; } /* jle: less or equal (signed <=) */

loc_001B4340: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B4342(); return; /* fallthrough 0x001B4342 */

}

/**
 * sub_001B4342
 * Original: 0x001B4342 - 0x001B4345 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4342(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4342: ;
    MEM32(ebp + -16) = edi;

    g_seh_ebp = ebp; sub_001B4345(); return; /* fallthrough 0x001B4345 */

}

/**
 * sub_001B4345
 * Original: 0x001B4345 - 0x001B4365 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4345(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4345: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B4365(); return; } /* jge: greater or equal (signed >=) */

loc_001B4360: ;
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_001B436D(); return; /* tail jmp 0x001B436D */

}

/**
 * sub_001B4365
 * Original: 0x001B4365 - 0x001B436D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4365(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4365: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B436D(); return; } /* jle: less or equal (signed <=) */

loc_001B4369: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B436D(); return; /* fallthrough 0x001B436D */

}

/**
 * sub_001B436D
 * Original: 0x001B436D - 0x001B438A (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B436D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B436D: ;
    edx = MEM32(ecx + 0x70);
    esi = MEM32(edx + 0xB8);
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B438A(); return; } /* jge: greater or equal (signed >=) */

loc_001B4385: ;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001B4392(); return; /* tail jmp 0x001B4392 */

}

/**
 * sub_001B438A
 * Original: 0x001B438A - 0x001B4392 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B438A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B438A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B4392(); return; } /* jle: less or equal (signed <=) */

loc_001B438E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B4392(); return; /* fallthrough 0x001B4392 */

}

/**
 * sub_001B4392
 * Original: 0x001B4392 - 0x001B43B2 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4392(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4392: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B43B2(); return; } /* jge: greater or equal (signed >=) */

loc_001B43AD: ;
    MEM32(ebp + -20) = eax;
    g_seh_ebp = ebp; sub_001B43BA(); return; /* tail jmp 0x001B43BA */

}

/**
 * sub_001B43B2
 * Original: 0x001B43B2 - 0x001B43BA (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B43BA(); return; } /* jle: less or equal (signed <=) */

loc_001B43B6: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B43BA(); return; /* fallthrough 0x001B43BA */

}

/**
 * sub_001B43BA
 * Original: 0x001B43BA - 0x001B43D1 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43BA: ;
    edx = MEM32(ebx + 0xB8);
    edx = MEM32(edx + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B43D1(); return; } /* jge: greater or equal (signed >=) */

loc_001B43CC: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001B43D9(); return; /* tail jmp 0x001B43D9 */

}

/**
 * sub_001B43D1
 * Original: 0x001B43D1 - 0x001B43D9 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B43D9(); return; } /* jle: less or equal (signed <=) */

loc_001B43D5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B43D9(); return; /* fallthrough 0x001B43D9 */

}

/**
 * sub_001B43D9
 * Original: 0x001B43D9 - 0x001B43E0 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43D9: ;
    MEM32(ebp + -36) = 1;

    g_seh_ebp = ebp; sub_001B43E0(); return; /* fallthrough 0x001B43E0 */

}

/**
 * sub_001B43E0
 * Original: 0x001B43E0 - 0x001B4400 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43E0: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4538(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B43FB: ;
    edi = 0xFFF;

    g_seh_ebp = ebp; sub_001B4400(); return; /* fallthrough 0x001B4400 */

}

/**
 * sub_001B4400
 * Original: 0x001B4400 - 0x001B4410 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4400: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -40) = eax;
    g_seh_ebp = ebp; sub_001B4413(); return; /* tail jmp 0x001B4413 */

}

/**
 * sub_001B4410
 * Original: 0x001B4410 - 0x001B4413 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4410: ;
    eax = MEM32(ebp + -40);

    g_seh_ebp = ebp; sub_001B4413(); return; /* fallthrough 0x001B4413 */

}

/**
 * sub_001B4413
 * Original: 0x001B4413 - 0x001B4469 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4413(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4413: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B453F(); return; } /* jb: below (unsigned <) */

loc_001B441B: ;
    eax = esi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B453F(); return; } /* jae: above or equal (unsigned >=) */

loc_001B442A: ;
    edx = MEM32(ecx + 0x70);
    eax = ZX8(MEM8(edx + ebx + 0x28));
    eax = MEM32(edx + eax * 4 + 0x30);
    _fb = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + ebx * 4 + -76;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B447D(); return; } /* je: equal / zero */

loc_001B4447: ;
    SET_LO8(ebx, MEM8(ebx + edx + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4478(); return; } /* je: equal / zero */

loc_001B4450: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4473(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B4455: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B446E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B445A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4469(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B445F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4473(); return; } /* jne: not equal / not zero */

loc_001B4464: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B447B(); return; /* tail jmp 0x001B447B */

}

/**
 * sub_001B4469
 * Original: 0x001B4469 - 0x001B446E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4469(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4469: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B447B(); return; /* tail jmp 0x001B447B */

}

/**
 * sub_001B446E
 * Original: 0x001B446E - 0x001B4473 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B446E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B446E: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B447B(); return; /* tail jmp 0x001B447B */

}

/**
 * sub_001B4473
 * Original: 0x001B4473 - 0x001B4478 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4473(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4473: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B447B(); return; /* tail jmp 0x001B447B */

}

/**
 * sub_001B4478
 * Original: 0x001B4478 - 0x001B447B (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4478: ;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001B447B(); return; /* fallthrough 0x001B447B */

}

/**
 * sub_001B447B
 * Original: 0x001B447B - 0x001B447D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B447B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B447B: ;
    MEM32(esi) = eax;

    g_seh_ebp = ebp; sub_001B447D(); return; /* fallthrough 0x001B447D */

}

/**
 * sub_001B447D
 * Original: 0x001B447D - 0x001B4538 (187 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B447D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B447D: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x64);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001B4494; /* jbe: below or equal (unsigned <=) */

loc_001B4492: ;
    MEM32(esi) = edi;

loc_001B4494: ;
    esi = MEM32(ebp + -28);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(ebp + -24) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4410(); return; } /* jb: below (unsigned <) */

loc_001B44A4: ;
    eax = MEM32(ebp + -48);
    edx = MEM32(ebp + -72);
    ecx = eax;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -76);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -52);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    MEM32(ebx + esi * 4) = ecx;
    ecx = MEM32(ebp + -64);
    ebx = eax;
    ebx = ebx & 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -68);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    MEM32(ecx + esi * 4 + 0xC) = ebx;
    ebx = MEM32(ebp + -56);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + -60);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + esi * 4 + 0x18) = eax;
    ecx = MEM32(ebp + -44);
    eax = ZX8(MEM8(ecx + 0x64));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -28) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4400(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001B4538(); return; /* fallthrough 0x001B4538 */

}

/**
 * sub_001B4497
 * Original: 0x001B4497 - 0x001B4538 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4497(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4497: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(ebp + -24) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4410(); return; } /* jb: below (unsigned <) */

loc_001B44A4: ;
    eax = MEM32(ebp + -48);
    edx = MEM32(ebp + -72);
    ecx = eax;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -76);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -52);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    MEM32(ebx + esi * 4) = ecx;
    ecx = MEM32(ebp + -64);
    ebx = eax;
    ebx = ebx & 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -68);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    MEM32(ecx + esi * 4 + 0xC) = ebx;
    ebx = MEM32(ebp + -56);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + -60);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + esi * 4 + 0x18) = eax;
    ecx = MEM32(ebp + -44);
    eax = ZX8(MEM8(ecx + 0x64));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -28) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4400(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001B4538(); return; /* fallthrough 0x001B4538 */

}

/**
 * sub_001B4538
 * Original: 0x001B4538 - 0x001B453F (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4538(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4538: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B453F
 * Original: 0x001B453F - 0x001B4548 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B453F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B453F: ;
    MEM32(ebp + ebx * 4 + -76) = edi;
    g_seh_ebp = ebp; sub_001B4497(); return; /* tail jmp 0x001B4497 */

}

/**
 * sub_001B4548
 * Original: 0x001B4548 - 0x001B455B (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4548: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B455B(); return; } /* je: equal / zero */

loc_001B4557: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B45BD(); return; /* tail jmp 0x001B45BD */

}

/**
 * sub_001B455B
 * Original: 0x001B455B - 0x001B45BD (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B455B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B455B: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_001B457B; /* je: equal / zero */

loc_001B456A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B457B; /* je: equal / zero */

loc_001B4572: ;
    ecx = MEM32(edx + 0xB8);
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B457B: ;
    edx = MEM32(edx + 0xB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B45A9; /* je: equal / zero */

loc_001B4585: ;
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B45A9; /* je: equal / zero */

loc_001B458C: ;
    edx = ecx + 0x80;
    ecx = MEM32(edx);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B45A9; /* je: equal / zero */

loc_001B45A0: ;
    ecx = MEM32(ecx + 0xB8);
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B45A9: ;
    ecx = 0xFFFF8001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B45BB; /* jl: less (signed <) */

loc_001B45B2: ;
    ecx = 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B45BD(); return; } /* jle: less or equal (signed <=) */

loc_001B45BB: ;
    eax = ecx;

    g_seh_ebp = ebp; sub_001B45BD(); return; /* fallthrough 0x001B45BD */

}

/**
 * sub_001B45BD
 * Original: 0x001B45BD - 0x001B45CA (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B45BD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B45BD: ;
    ecx = MEM32(esp + 8);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B45CA
 * Original: 0x001B45CA - 0x001B4611 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B45CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B45CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x70);
    edx = MEM32(eax + 0xB0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4611(); return; } /* je: equal / zero */

loc_001B45DD: ;
    edx = MEM32(edx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4611(); return; } /* je: equal / zero */

loc_001B45E4: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x70);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x82000 (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4611(); return; } /* je: equal / zero */

loc_001B45F2: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    eax = MEM32(ecx + 8);
    edx = MEM32(edx + 0x50);
    _fb = (uint32_t)(0x498) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x498;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4637(); return; } /* je: equal / zero */

loc_001B460A: ;
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFB4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    g_seh_ebp = ebp; sub_001B4639(); return; /* tail jmp 0x001B4639 */

}

/**
 * sub_001B4611
 * Original: 0x001B4611 - 0x001B4623 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4611: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4623(); return; } /* je: equal / zero */

loc_001B461B: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    g_seh_ebp = ebp; sub_001B4634(); return; /* tail jmp 0x001B4634 */

}

/**
 * sub_001B4623
 * Original: 0x001B4623 - 0x001B4632 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4623(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4623: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4632(); return; } /* je: equal / zero */

loc_001B462D: ;
    MEM8(eax) = 1;
    g_seh_ebp = ebp; sub_001B4634(); return; /* tail jmp 0x001B4634 */

}

/**
 * sub_001B4632
 * Original: 0x001B4632 - 0x001B4634 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4632(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4632: ;
    MEM8(eax) = LO8(ebx);

    g_seh_ebp = ebp; sub_001B4634(); return; /* fallthrough 0x001B4634 */

}

/**
 * sub_001B4634
 * Original: 0x001B4634 - 0x001B4637 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4634: ;
    eax = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001B4637(); return; /* fallthrough 0x001B4637 */

}

/**
 * sub_001B4637
 * Original: 0x001B4637 - 0x001B4639 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4637(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4637: ;
    MEM32(eax) = ebx;

    g_seh_ebp = ebp; sub_001B4639(); return; /* fallthrough 0x001B4639 */

}

/**
 * sub_001B4639
 * Original: 0x001B4639 - 0x001B463E (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4639(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4639: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B463E
 * Original: 0x001B463E - 0x001B4699 (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B463E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B463E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 0x65));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x1CE330);
    PUSH32(esp, edi);
    edi = MEM32(edx + -25165824);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 0x1CE334);
    eax = MEM32(eax + 0x1CE338);
    edi = MEM32(edi + -25165824);
    eax = MEM32(eax + -25165824);
    MEM32(ebp + -28) = eax;
    eax = MEM32(esi + 8);
    ecx = eax + ecx * 8 + 0x488;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4699(); return; } /* jne: not equal / not zero */

loc_001B4690: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xFFFF;
    g_seh_ebp = ebp; sub_001B46A5(); return; /* tail jmp 0x001B46A5 */

}

/**
 * sub_001B4699
 * Original: 0x001B4699 - 0x001B46A5 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4699: ;
    edi = eax + -76;
    eax = ZX8(MEM8(edi + 0x64));
    eax = ZX16(MEM16(edi + eax * 2 + 0xA));

    g_seh_ebp = ebp; sub_001B46A5(); return; /* fallthrough 0x001B46A5 */

}

/**
 * sub_001B46A5
 * Original: 0x001B46A5 - 0x001B46B8 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46A5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B46B8(); return; } /* jne: not equal / not zero */

loc_001B46AD: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0xFFFF;
    g_seh_ebp = ebp; sub_001B46C2(); return; /* tail jmp 0x001B46C2 */

}

/**
 * sub_001B46B8
 * Original: 0x001B46B8 - 0x001B46C2 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46B8: ;
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFB4u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = ebx;
    ebx = ZX16(MEM16(ebx + 0xC));

    g_seh_ebp = ebp; sub_001B46C2(); return; /* fallthrough 0x001B46C2 */

}

/**
 * sub_001B46C2
 * Original: 0x001B46C2 - 0x001B46E0 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B46E0(); return; } /* je: equal / zero */

loc_001B46C6: ;
    ecx = MEM32(0x1CEC38);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001B46E9(); return; /* tail jmp 0x001B46E9 */

}

/**
 * sub_001B46E0
 * Original: 0x001B46E0 - 0x001B46E9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46E0: ;
    MEM32(ebp + -4) = ebx;
    MEM32(edx + -25165824) = ebx;

    g_seh_ebp = ebp; sub_001B46E9(); return; /* fallthrough 0x001B46E9 */

}

/**
 * sub_001B46E9
 * Original: 0x001B46E9 - 0x001B476D (132 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B47AD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B46FD: ;
    edx = esi + 0xC;

loc_001B4700: ;
    eax = ZX16(MEM16(edx));
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B470F; /* jne: not equal / not zero */

loc_001B4708: ;
    MEM32(ebp + -16) = 1;

loc_001B470F: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B471B; /* jne: not equal / not zero */

loc_001B4714: ;
    MEM32(ebp + -20) = 1;

loc_001B471B: ;
    edi = ZX16(MEM16(edx));
    ecx = MEM32(0x1CEC38);
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4700; /* jb: below (unsigned <) */

loc_001B4746: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B478B(); return; } /* je: equal / zero */

loc_001B474D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B476D(); return; } /* je: equal / zero */

loc_001B4752: ;
    eax = MEM32(0x1CEC38);
    ecx = ebx;
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + eax + 0x7C);
    eax = 0xFFFF;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4775(); return; } /* jne: not equal / not zero */

loc_001B476B: ;
    g_seh_ebp = ebp; sub_001B4772(); return; /* tail jmp 0x001B4772 */

}

/**
 * sub_001B476D
 * Original: 0x001B476D - 0x001B4772 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B476D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B476D: ;
    ecx = 0xFFFF;

    g_seh_ebp = ebp; sub_001B4772(); return; /* fallthrough 0x001B4772 */

}

/**
 * sub_001B4772
 * Original: 0x001B4772 - 0x001B4775 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4772: ;
    ebx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001B4775(); return; /* fallthrough 0x001B4775 */

}

/**
 * sub_001B4775
 * Original: 0x001B4775 - 0x001B478B (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4775(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4775: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x1CE334);
    MEM32(eax + -25165824) = ecx;
    g_seh_ebp = ebp; sub_001B4799(); return; /* tail jmp 0x001B4799 */

}

/**
 * sub_001B478B
 * Original: 0x001B478B - 0x001B47AD (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B478B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B478B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B47AD(); return; } /* je: equal / zero */

loc_001B4790: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4799; /* jne: not equal / not zero */

loc_001B4796: ;
    ebx = MEM32(ebp + -4);

loc_001B4799: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x1CE338);
    MEM32(eax + -25165824) = ebx;

    g_seh_ebp = ebp; sub_001B47AD(); return; /* fallthrough 0x001B47AD */

}

/**
 * sub_001B4799
 * Original: 0x001B4799 - 0x001B47AD (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4799(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4799: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x1CE338);
    MEM32(eax + -25165824) = ebx;

    g_seh_ebp = ebp; sub_001B47AD(); return; /* fallthrough 0x001B47AD */

}

/**
 * sub_001B47AD
 * Original: 0x001B47AD - 0x001B47D0 (35 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B47AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B47AD: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B47B6u); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B47B6: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x8000 (16-bit) */
    MEM8(esi + 0x65) = 0xFF;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B47D0(); return; } /* je: equal / zero */

loc_001B47C5: ;
    SET_LO16(edx, 0x7FFF);
    PUSH32(esp, 0x001B47CEu); RECOMP_ABI_CALL(0x001B3FEBu, sub_001B3FEB); /* call 0x001B3FEB */

loc_001B47CE: ;
    g_seh_ebp = ebp; sub_001B4814(); return; /* tail jmp 0x001B4814 */

}

/**
 * sub_001B47D0
 * Original: 0x001B47D0 - 0x001B481A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B47D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B47D0: ;
    eax = MEM32(esi + 0x68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM8(eax + 0x3F) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001B4814; /* je: equal / zero */

loc_001B47DE: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x54;
    _fb = (uint32_t)(0x4A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x4B8) = MEM32(eax + 0x4B8) | 0x40;
    _fa = (uint32_t)(MEM32(eax + 0x4B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x4C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x001B4814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B480Eu); } /* indirect call */
    }

loc_001B4814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4814
 * Original: 0x001B4814 - 0x001B481A (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4814(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B481A
 * Original: 0x001B481A - 0x001B487F (101 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B481A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B481A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B482Fu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B482F: ;
    MEM32(0x1CEAA4) = MEM32(0x1CEAA4) + 1;
    _fa = (uint32_t)(MEM32(0x1CEAA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4842u); RECOMP_ABI_CALL(0x001B9350u, sub_001B9350); /* call 0x001B9350 */

loc_001B4842: ;
    ebx = eax;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B485B; /* jne: not equal / not zero */

loc_001B4852: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B485Bu); RECOMP_ABI_CALL(0x001B463Eu, sub_001B463E); /* call 0x001B463E */

loc_001B485B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B486C; /* je: equal / zero */

loc_001B485F: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B486Cu); RECOMP_ABI_CALL(0x001B9350u, sub_001B9350); /* call 0x001B9350 */

loc_001B486C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001B4873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B4870u); } /* indirect call */
    }

loc_001B4873: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B487Bu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B487B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B487F
 * Original: 0x001B487F - 0x001B4903 (132 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B487F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B487F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4893u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4893: ;
    ecx = esi + 0x12;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B48F8; /* jne: not equal / not zero */

loc_001B489E: ;
    SET_LO16(edx, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B48A7u); RECOMP_ABI_CALL(0x001B3FEFu, sub_001B3FEF); /* call 0x001B3FEF */

loc_001B48A7: ;
    eax = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = eax + eax * 2;

loc_001B48B2: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B48B2; /* jb: below (unsigned <) */

loc_001B48BF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B48F8; /* jbe: below or equal (unsigned <=) */

loc_001B48C5: ;
    eax = esi + 0xC;

loc_001B48C8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B48DE; /* je: equal / zero */

loc_001B48D8: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B48DE: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034452) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B48C8; /* jb: below (unsigned <) */

loc_001B48F8: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4900u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4900: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B4903
 * Original: 0x001B4903 - 0x001B494B (72 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4903(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B4903: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001B4915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B490Fu); } /* indirect call */
    }

loc_001B4915: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B494B(); return; } /* jne: not equal / not zero */

loc_001B4923: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x4C4B40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C4B40)) >> 32) & 1);
    ecx = ecx + 0x4C4B40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B4954(); return; } /* jl: less (signed <) */

loc_001B4939: ;
    if (CMP_G(_fas, _fbs)) goto loc_001B4942; /* jg: greater (signed >) */

loc_001B493B: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4954(); return; } /* jb: below (unsigned <) */

loc_001B4942: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4949u); RECOMP_ABI_CALL(0x001B481Au, sub_001B481A); /* call 0x001B481A */

loc_001B4949: ;
    g_seh_ebp = ebp; sub_001B4954(); return; /* tail jmp 0x001B4954 */

}

/**
 * sub_001B494B
 * Original: 0x001B494B - 0x001B4954 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B494B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B494B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B4954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B4951u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B4954(); return; /* fallthrough 0x001B4954 */

}

/**
 * sub_001B4954
 * Original: 0x001B4954 - 0x001B4957 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4954(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4954: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B4957
 * Original: 0x001B4957 - 0x001B49B0 (89 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4957(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4957: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4972u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4972: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x12;
    SET_LO16(eax, MEM16(edi));
    ebx = 0x444;
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4A2B(); return; } /* je: equal / zero */

loc_001B498D: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi));
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B49B5(); return; } /* je: equal / zero */

loc_001B499E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B49B0(); return; } /* je: equal / zero */

loc_001B49A6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B49ABu); RECOMP_ABI_CALL(0x001B1DCAu, sub_001B1DCA); /* call 0x001B1DCA */

loc_001B49AB: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001B49B5(); return; /* tail jmp 0x001B49B5 */

}

/**
 * sub_001B49B0
 * Original: 0x001B49B0 - 0x001B49B5 (5 bytes, 1 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B49B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B49B0: ;
    PUSH32(esp, 0x001B49B5u); RECOMP_ABI_CALL(0x001B1DF1u, sub_001B1DF1); /* call 0x001B1DF1 */

    g_seh_ebp = ebp; sub_001B49B5(); return; /* fallthrough 0x001B49B5 */

}

/**
 * sub_001B49B5
 * Original: 0x001B49B5 - 0x001B4A2B (118 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B49B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B49B5: ;
    SET_LO16(ecx, MEM16(edi));
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(0u - (uint32_t)(LO16(ecx))));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B4A18; /* je: equal / zero */

loc_001B49D0: ;
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001B4A18; /* jne: not equal / not zero */

loc_001B49DA: ;
    ecx = ZX8(MEM8(esi + 0x64));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B49E7: ;
    edx = MEM32(-25034736);
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B49E7; /* jb: below (unsigned <) */

loc_001B49F4: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001B4A18; /* jbe: below or equal (unsigned <=) */

loc_001B49FA: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xC;

loc_001B4A02: ;
    ebx = ZX16(MEM16(ecx));
    _cf = 0; /* logical op clears CF */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-25034432) = ebx;
    ebx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B4A02; /* jb: below (unsigned <) */

loc_001B4A18: ;
    SET_LO16(edx, 0xFBBB);
    ecx = edi;
    PUSH32(esp, 0x001B4A23u); RECOMP_ABI_CALL(0x001B3FEBu, sub_001B3FEB); /* call 0x001B3FEB */

loc_001B4A23: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x001B4A2Bu); RECOMP_ABI_CALL(0x001B3FEFu, sub_001B3FEF); /* call 0x001B3FEF */

    g_seh_ebp = ebp; sub_001B4A2B(); return; /* fallthrough 0x001B4A2B */

}

/**
 * sub_001B4A2B
 * Original: 0x001B4A2B - 0x001B4A3D (18 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4A2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4A2B: ;
    ecx = ebp + -12;
    PUSH32(esp, 0x001B4A33u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4A33: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4A3D
 * Original: 0x001B4A3D - 0x001B4AAE (113 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4A3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4A3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -28;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4A57u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4A57: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4A6D; /* jne: not equal / not zero */

loc_001B4A5E: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B4A6D; /* je: equal / zero */

loc_001B4A6B: ;
    edx = eax;

loc_001B4A6D: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = 0xFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_001B4A8B; /* jne: not equal / not zero */

loc_001B4A79: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4ACC(); return; } /* je: equal / zero */

loc_001B4A86: ;
    ecx = eax;
    MEM32(ebp + 0xC) = ecx;

loc_001B4A8B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B4A95; /* je: equal / zero */

loc_001B4A8F: ;
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4ACC(); return; } /* je: equal / zero */

loc_001B4A95: ;
    eax = MEM32(0x1CE4A0);
    edx = eax;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4AAE(); return; } /* je: equal / zero */

loc_001B4AA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4AAE(); return; } /* jne: not equal / not zero */

loc_001B4AAA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B4AB1(); return; /* tail jmp 0x001B4AB1 */

}

/**
 * sub_001B4AAE
 * Original: 0x001B4AAE - 0x001B4AB1 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4AAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4AAE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001B4AB1(); return; /* fallthrough 0x001B4AB1 */

}

/**
 * sub_001B4AB1
 * Original: 0x001B4AB1 - 0x001B4ACC (27 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B4AB1(void)
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

loc_001B4AB1: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B4ACAu); RECOMP_ABI_CALL(0x001B3FF3u, sub_001B3FF3); /* call 0x001B3FF3 */

loc_001B4ACA: ;
    g_seh_ebp = ebp; sub_001B4AD7(); return; /* tail jmp 0x001B4AD7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B4ACC
 * Original: 0x001B4ACC - 0x001B4B75 (169 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4ACC(void)
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

loc_001B4ACC: ;
    eax = 0x1CE354;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    SET_LO8(ecx, MEM8(esi + 0x66));
    eax = ZX16(MEM16(esi + 0xC));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx + eax * 2;
    MEM8(esi + 0x66) = LO8(ecx);

loc_001B4AEC: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4AEC; /* jb: below (unsigned <) */

loc_001B4AFA: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xFE820160u) = eax;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = 0xFE820400u;
    eax = ecx + 1;

loc_001B4B1C: ;
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + eax));
    ebx = ZX8(MEM8(edi + esi * 2));
    SET_LO8(edx, MEM8(eax));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE82043Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFE82043Cu (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001B4B1C; /* jl: less (signed <) */

loc_001B4B4D: ;
    eax = esi + esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + edi));
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4B7D(); return; } /* je: equal / zero */

loc_001B4B5F: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4B75(); return; } /* jne: not equal / not zero */

loc_001B4B6F: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    g_seh_ebp = ebp; sub_001B4B7F(); return; /* tail jmp 0x001B4B7F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B4AD7
 * Original: 0x001B4AD7 - 0x001B4B75 (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4AD7(void)
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

loc_001B4AD7: ;
    SET_LO8(ecx, MEM8(esi + 0x66));
    eax = ZX16(MEM16(esi + 0xC));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx + eax * 2;
    MEM8(esi + 0x66) = LO8(ecx);

loc_001B4AEC: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4AEC; /* jb: below (unsigned <) */

loc_001B4AFA: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xFE820160u) = eax;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = 0xFE820400u;
    eax = ecx + 1;

loc_001B4B1C: ;
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + eax));
    ebx = ZX8(MEM8(edi + esi * 2));
    SET_LO8(edx, MEM8(eax));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE82043Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFE82043Cu (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001B4B1C; /* jl: less (signed <) */

loc_001B4B4D: ;
    eax = esi + esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + edi));
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4B7D(); return; } /* je: equal / zero */

loc_001B4B5F: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4B75(); return; } /* jne: not equal / not zero */

loc_001B4B6F: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    g_seh_ebp = ebp; sub_001B4B7F(); return; /* tail jmp 0x001B4B7F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B4B75
 * Original: 0x001B4B75 - 0x001B4B7D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4B75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4B75: ;
    eax = ZX8(MEM8(edi + 0x1F));
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    g_seh_ebp = ebp; sub_001B4B7F(); return; /* tail jmp 0x001B4B7F */

}

/**
 * sub_001B4B7D
 * Original: 0x001B4B7D - 0x001B4B7F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B4B7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4B7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B4B7F(); return; /* fallthrough 0x001B4B7F */

}

/**
 * sub_001B4B7F
 * Original: 0x001B4B7F - 0x001B4BAC (45 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4B7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4B7F: ;
    eax = eax << 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFE82043Cu) = eax;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 0xC));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -12);
    ecx = ebp + -28;
    MEM32(0xFE82031Cu) = eax;
    PUSH32(esp, 0x001B4BA5u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4BA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B4BAC
 * Original: 0x001B4BAC - 0x001B4CDB (303 bytes, 94 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4BAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4BAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4BC0u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4BC0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4C13; /* jne: not equal / not zero */

loc_001B4BC9: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx << 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 4);
    ecx = ecx ^ MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 8);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3FF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x30) = MEM32(esi + 0x30) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x14));
    MEM8(esi + 0x34) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xC));
    MEM8(esi + 0x35) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x10));
    MEM8(esi + 0x36) = LO8(eax);
    goto loc_001B4C5B;

loc_001B4C13: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4C5B; /* jne: not equal / not zero */

loc_001B4C18: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    edx = MEM32(esi + 0x30);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx & 0x3FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 4);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 8);
    ecx = ecx << 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x30) = ecx;
    SET_LO8(eax, MEM8(eax + 0xC));
    MEM8(esi + 0x37) = LO8(eax);

loc_001B4C5B: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B4CCC; /* je: equal / zero */

loc_001B4C61: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);

loc_001B4C6A: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4C6A; /* jb: below (unsigned <) */

loc_001B4C77: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B4CCC; /* jbe: below or equal (unsigned <=) */

loc_001B4C7D: ;
    eax = esi + 0xC;

loc_001B4C80: ;
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = 1;
    ecx = MEM32(esi + 0x18);
    MEM32(-25033960) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(-25033904) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(-25033876) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(-25033872) = ecx;
    MEM32(-25033988) = 0;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4C80; /* jb: below (unsigned <) */

loc_001B4CCC: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4CD4u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4CD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4CDB
 * Original: 0x001B4CDB - 0x001B4E6D (402 bytes, 137 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4CDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4CDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4CF1u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4CF1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4D6F; /* jne: not equal / not zero */

loc_001B4CFA: ;
    ecx = MEM32(eax + 4);
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xFFF000;
    ecx = ecx & 0xF000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x40) = MEM32(esi + 0x40) ^ ecx;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0x18);
    edx = edx ^ MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFFF;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM8(esi + 0x1F) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx = edx ^ MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(eax + 8);
    edx = MEM32(esi + 0x24);
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = ebx;
    SET_LO8(edx, MEM8(eax + 0x24));
    MEM8(esi + 0x27) = LO8(edx);
    edx = MEM32(eax + 0x14);
    edx = edx ^ MEM32(esi + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x28);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = edx;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esi + 0x2B) = LO8(eax);
    goto loc_001B4DDD;

loc_001B4D6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4DDD; /* jne: not equal / not zero */

loc_001B4D74: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 0x40);
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 0x18);
    edx = edx ^ MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFFF;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x30) = MEM32(esi + 0x30) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0xC);
    edx = edx ^ MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xFFF000;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(eax + 8);
    edx = MEM32(esi + 0x1C);
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ebx;
    edx = MEM32(eax + 0x14);
    edx = edx ^ MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x20);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = edx;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esi + 0x23) = LO8(eax);

loc_001B4DDD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B4E5C; /* je: equal / zero */

loc_001B4DE5: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_001B4DEC: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4DEC; /* jb: below (unsigned <) */

loc_001B4DF9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B4E5C; /* jbe: below or equal (unsigned <=) */

loc_001B4DFF: ;
    eax = esi + 0xC;

loc_001B4E02: ;
    edi = ZX16(MEM16(eax));
    MEM32(-25033992) = edi;
    MEM32(-25033988) = edx;
    edi = MEM32(esi + 0x18);
    MEM32(-25033960) = edi;
    edi = MEM32(esi + 0x1C);
    MEM32(-25033976) = edi;
    edi = MEM32(esi + 0x20);
    MEM32(-25033972) = edi;
    edi = MEM32(esi + 0x24);
    MEM32(-25033968) = edi;
    edi = MEM32(esi + 0x28);
    MEM32(-25033964) = edi;
    edi = MEM32(esi + 0x30);
    MEM32(-25033876) = edi;
    MEM32(-25033988) = 0;
    edi = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4E02; /* jb: below (unsigned <) */

loc_001B4E5C: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4E64u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4E6D
 * Original: 0x001B4E6D - 0x001B4EA3 (54 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4E6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4E6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B4E84u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4E84: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = 0xFFFF;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4EA3(); return; } /* je: equal / zero */

loc_001B4E90: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -32;
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
    esi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_001B4ECF(); return; /* tail jmp 0x001B4ECF */

}

/**
 * sub_001B4EA3
 * Original: 0x001B4EA3 - 0x001B4ECF (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4EA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4EA3: ;
    ecx = MEM32(ebx + 0x38);
    edi = MEM32(ebx + 0x3C);
    esi = ZX16(MEM16(ebx + 0x3A));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1A));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebx + 0x18);
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = edi;
    edi = ZX16(MEM16(ebx + 0x3E));
    MEM32(ebp + -12) = edi;

    g_seh_ebp = ebp; sub_001B4ECF(); return; /* fallthrough 0x001B4ECF */

}

/**
 * sub_001B4ECF
 * Original: 0x001B4ECF - 0x001B4F30 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4ECF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4ECF: ;
    edi = MEM32(ebx + 0x70);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 8), 0x200010 (32-bit) */
    edi = MEM32(ebp + -32);
    if (TEST_Z(_fa, _fb)) goto loc_001B4EE5; /* je: equal / zero */

loc_001B4EDE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4EE5; /* jne: not equal / not zero */

loc_001B4EE2: ;
    PUSH32(esp, 3);
    POP32(esp, edi);

loc_001B4EE5: ;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ebx + 0x18);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFFE0FFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 0x70);
    MEM32(ebx + 0x18) = eax;
    eax = ecx + 0xB8;
    MEM32(ebx + 0x38) = esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4F30(); return; } /* je: equal / zero */

loc_001B4F19: ;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B4F30(); return; } /* je: equal / zero */

loc_001B4F1F: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x30);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x3C) = ecx;
    eax = MEM32(eax);
    eax = MEM32(eax + 0x34);
    g_seh_ebp = ebp; sub_001B4F38(); return; /* tail jmp 0x001B4F38 */

}

/**
 * sub_001B4F30
 * Original: 0x001B4F30 - 0x001B4F38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4F30: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B4F38(); return; /* fallthrough 0x001B4F38 */

}

/**
 * sub_001B4F38
 * Original: 0x001B4F38 - 0x001B4FB7 (127 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4F38: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x12), LO8(edx) (8-bit) */
    MEM32(ebx + 0x3C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001B4FA6; /* je: equal / zero */

loc_001B4F48: ;
    eax = ZX8(MEM8(ebx + 0x64));
    ecx = eax + eax * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001B4F51: ;
    esi = MEM32(-25034736);
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4F51; /* jb: below (unsigned <) */

loc_001B4F5E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B4FA6; /* jbe: below or equal (unsigned <=) */

loc_001B4F64: ;
    eax = ebx + 0xC;

loc_001B4F67: ;
    esi = ZX16(MEM16(eax));
    MEM32(-25033992) = esi;
    MEM32(-25033988) = edx;
    esi = MEM32(ebx + 0x18);
    MEM32(-25033960) = esi;
    esi = MEM32(ebx + 0x38);
    MEM32(-25033868) = esi;
    esi = MEM32(ebx + 0x3C);
    MEM32(-25033864) = esi;
    MEM32(-25033988) = 0;
    esi = ZX8(MEM8(ebx + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4F67; /* jb: below (unsigned <) */

loc_001B4FA6: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B4FAEu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B4FAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4FB7
 * Original: 0x001B4FB7 - 0x001B5042 (139 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B4FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4FB7: ;
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
    PUSH32(esp, 0x001B4FCDu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B4FCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5034; /* je: equal / zero */

loc_001B4FD5: ;
    ecx = ZX8(MEM8(esi + 0x64));
    ecx = ZX16(MEM16(esi + ecx * 2 + 0xA));
    edx = MEM32(0x1CEC38);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + edx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx + 0x54), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5034; /* jne: not equal / not zero */

loc_001B4FF1: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B4FF1; /* jb: below (unsigned <) */

loc_001B4FFF: ;
    ecx = ZX16(MEM16(esi + 0xC));
    MEM32(-25033992) = ecx;
    MEM32(0xFE8202FCu) = eax;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x1CEC38);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x58);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(-25033988) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5032u); RECOMP_ABI_CALL(0x001B2556u, sub_001B2556); /* call 0x001B2556 */

loc_001B5032: ;
    edi = eax;

loc_001B5034: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B503Cu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B503C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5042
 * Original: 0x001B5042 - 0x001B51D1 (399 bytes, 142 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5042(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5042: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B505E; /* jne: not equal / not zero */

loc_001B5052: ;
    MEM32(ebp + -4) = 0x88780032u;
    goto loc_001B51CA;

loc_001B505E: ;
    eax = ZX16(MEM16(ecx + 0xC));
    edx = MEM32(0x1CEC38);
    PUSH32(esp, ebx);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x28);
    ebx = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x30);
    eax = MEM32(edx + 0x7C);
    MEM32(ebp + -8) = eax;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xFFF;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -40) = edx;
    edx = esi;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -36) = edx;
    edx = ebx;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = edx;
    edx = ebx;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = edx;
    edx = edi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0xF);
    eax = esi;
    MEM32(ebp + -24) = edx;
    POP32(esp, edx);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edi;
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_001B50EE: ;
    edx = ebp + eax * 4 + -40;
    esi = MEM32(edx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    esi = esi >> 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edx) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001B50EE; /* jb: below (unsigned <) */

loc_001B5101: ;
    eax = MEM32(ecx + 0x70);
    edx = MEM32(eax + 0x24);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    esi = MEM32(ecx + 0x70);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5138; /* jbe: below or equal (unsigned <=) */

loc_001B5116: ;
    edi = eax + 8;

loc_001B5119: ;
    esi = ZX8(MEM8(esi + edx + 0x28));
    MEM32(edi + -4) = esi;
    esi = MEM32(ebp + edx * 4 + -40);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi) = esi;
    esi = MEM32(ecx + 0x70);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5119; /* jb: below (unsigned <) */

loc_001B5134: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B514F; /* jae: above or equal (unsigned >=) */

loc_001B5138: ;
    esi = ebx;
    edi = eax + edx * 8 + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001B5140: ;
    MEM32(edi + -4) = MEM32(edi + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = 0xFFFFD8F0u;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B5140; /* jne: not equal / not zero */

loc_001B514F: ;
    edx = MEM32(ebp + -8);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = SX16(LO16(edx));
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x70);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xB8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B51B8; /* je: equal / zero */

loc_001B5168: ;
    _fa = (uint32_t)(MEM8(edx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B51B8; /* je: equal / zero */

loc_001B516E: ;
    edx = MEM32(edx + 0xB8);
    edx = MEM32(edx + 4);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    edx = MEM32(edx + 0x24);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    edx = MEM32(edx + 0x1C);
    MEM32(eax + 0x54) = edx;
    ecx = MEM32(ecx + 0x70);
    ecx = MEM32(ecx + 0xB8);
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 0x58) = ecx;
    goto loc_001B51C7;

loc_001B51B8: ;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x50) = esi;
    MEM32(eax + 0x54) = esi;
    MEM32(eax + 0x58) = esi;

loc_001B51C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B51CA: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B51D1
 * Original: 0x001B51D1 - 0x001B51E6 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B51D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B51D1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B51E0; /* je: equal / zero */

loc_001B51DA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001B51E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B51DDu); } /* indirect call */
    }

loc_001B51E0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B51F0
 * Original: 0x001B51F0 - 0x001B520E (30 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B51F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B51F0: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x1CEC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x1CEC48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x001B520Bu); RECOMP_ABI_CALL(0x001B401Du, sub_001B401D); /* call 0x001B401D */

loc_001B520B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B520E
 * Original: 0x001B520E - 0x001B5225 (23 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B520E(void)
{

loc_001B520E: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, 4);
    eax = eax * 4 + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B5222u); RECOMP_ABI_CALL(0x001B51F0u, sub_001B51F0); /* call 0x001B51F0 */

loc_001B5222: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B522F
 * Original: 0x001B522F - 0x001B53A9 (378 bytes, 109 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B522F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B522F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5249u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5249: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B539A; /* jne: not equal / not zero */

loc_001B5255: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B525Eu); RECOMP_ABI_CALL(0x001B1877u, sub_001B1877); /* call 0x001B1877 */

loc_001B525E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001B539A; /* jl: less (signed <) */

loc_001B5269: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xC;
    SET_LO16(eax, MEM16(edi));
    ecx = esi + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B527Bu); RECOMP_ABI_CALL(0x001B520Eu, sub_001B520E); /* call 0x001B520E */

loc_001B527B: ;
    SET_LO16(edx, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5286u); RECOMP_ABI_CALL(0x001B3FEFu, sub_001B3FEF); /* call 0x001B3FEF */

loc_001B5286: ;
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5295u); RECOMP_ABI_CALL(0x001B4243u, sub_001B4243); /* call 0x001B4243 */

loc_001B5295: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B52A0u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B52A0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B52ABu); RECOMP_ABI_CALL(0x001B4548u, sub_001B4548); /* call 0x001B4548 */

loc_001B52AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5382; /* jbe: below or equal (unsigned <=) */

loc_001B52B6: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B52B6; /* jb: below (unsigned <) */

loc_001B52C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    MEM32(-25033992) = ecx;
    ecx = MEM32(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B52D9; /* je: equal / zero */

loc_001B52D3: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B52D9: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(-25033960) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(-25033976) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(-25033972) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(-25033968) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(-25033964) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(-25033904) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(-25033876) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(-25033872) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(-25033868) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(-25033864) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(-25033984) = ecx;
    ecx = MEM32(ebp + eax * 4 + -56);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033880) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(-25033860) = ecx;
    MEM32(-25033956) = 0xFFFF;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B52B6; /* jb: below (unsigned <) */

loc_001B5382: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001B539A; /* je: equal / zero */

loc_001B538F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B539Au); RECOMP_ABI_CALL(0x001B4A3Du, sub_001B4A3D); /* call 0x001B4A3D */

loc_001B539A: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B53A2u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B53A2: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B53A9
 * Original: 0x001B53A9 - 0x001B546A (193 bytes, 62 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B53A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B53A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B53BEu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B53BE: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B545D; /* je: equal / zero */

loc_001B53C8: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B53D8u); RECOMP_ABI_CALL(0x001B4243u, sub_001B4243); /* call 0x001B4243 */

loc_001B53D8: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B53E3u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B53E3: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001B53EC: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B53EC; /* jb: below (unsigned <) */

loc_001B53F9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B545C; /* jbe: below or equal (unsigned <=) */

loc_001B53FF: ;
    edx = esi + 0xC;

loc_001B5402: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B5427; /* je: equal / zero */

loc_001B5422: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B5427: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -48);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -36);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -24);
    MEM32(0xFE820368u) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5402; /* jb: below (unsigned <) */

loc_001B545C: ;
    POP32(esp, edi);

loc_001B545D: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5465u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5465: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B546A
 * Original: 0x001B546A - 0x001B5502 (152 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B546A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B546A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B547Fu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B547F: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B54F5; /* je: equal / zero */

loc_001B5485: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5490u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B5490: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = ecx + ecx * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001B5499: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5499; /* jb: below (unsigned <) */

loc_001B54A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B54F5; /* jbe: below or equal (unsigned <=) */

loc_001B54AC: ;
    ecx = esi + 0xC;

loc_001B54AF: ;
    edx = ZX16(MEM16(ecx));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033988) = 1;
    MEM32(-25033888) = edx;
    edx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = edx;
    edx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = edx;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B54AF; /* jb: below (unsigned <) */

loc_001B54F5: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B54FDu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B54FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5502
 * Original: 0x001B5502 - 0x001B552B (41 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5502: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5518u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5518: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B553B(); return; } /* je: equal / zero */

loc_001B5524: ;
    edi = esi + 0x44;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_001B5535(); return; /* tail jmp 0x001B5535 */

}

/**
 * sub_001B552B
 * Original: 0x001B552B - 0x001B5535 (10 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B552B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B552B: ;
    ecx = esi + -92;
    PUSH32(esp, 0x001B5533u); RECOMP_ABI_CALL(0x001B5502u, sub_001B5502); /* call 0x001B5502 */

loc_001B5533: ;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_001B5535(); return; /* fallthrough 0x001B5535 */

}

/**
 * sub_001B5535
 * Original: 0x001B5535 - 0x001B553B (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5535(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5535: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B552B(); return; } /* jne: not equal / not zero */

loc_001B5539: ;
    g_seh_ebp = ebp; sub_001B5586(); return; /* tail jmp 0x001B5586 */

}

/**
 * sub_001B553B
 * Original: 0x001B553B - 0x001B5594 (89 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B553B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B553B: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5586; /* je: equal / zero */

loc_001B5541: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B554Cu); RECOMP_ABI_CALL(0x001B4548u, sub_001B4548); /* call 0x001B4548 */

loc_001B554C: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_001B5553: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5553; /* jb: below (unsigned <) */

loc_001B5560: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5586; /* jbe: below or equal (unsigned <=) */

loc_001B5566: ;
    eax = esi + 0xC;

loc_001B5569: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + -4);
    MEM32(-25033860) = edx;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5569; /* jb: below (unsigned <) */

loc_001B5586: ;
    ecx = ebp + -12;
    PUSH32(esp, 0x001B558Eu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B558E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5586
 * Original: 0x001B5586 - 0x001B5594 (14 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5586: ;
    ecx = ebp + -12;
    PUSH32(esp, 0x001B558Eu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B558E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5594
 * Original: 0x001B5594 - 0x001B559F (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5594(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5594: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B55AE(); return; } /* je: equal / zero */

loc_001B559D: ;
    g_seh_ebp = ebp; sub_001B55A6(); return; /* tail jmp 0x001B55A6 */

}

/**
 * sub_001B559F
 * Original: 0x001B559F - 0x001B55A6 (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B559F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B559F: ;
    ecx = esi;
    PUSH32(esp, 0x001B55A6u); RECOMP_ABI_CALL(0x001B4903u, sub_001B4903); /* call 0x001B4903 */

    g_seh_ebp = ebp; sub_001B55A6(); return; /* fallthrough 0x001B55A6 */

}

/**
 * sub_001B55A6
 * Original: 0x001B55A6 - 0x001B55AE (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B55A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B55A6: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B559F(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001B55AE(); return; /* fallthrough 0x001B55AE */

}

/**
 * sub_001B55AE
 * Original: 0x001B55AE - 0x001B55B0 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B55AE(void)
{

loc_001B55AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B55B0
 * Original: 0x001B55B0 - 0x001B5619 (105 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B55B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B55B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x1F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B55C6; /* je: equal / zero */

loc_001B55C1: ;
    PUSH32(esp, 0x001B55C6u); RECOMP_ABI_CALL(0x001B546Au, sub_001B546A); /* call 0x001B546A */

loc_001B55C6: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B55DB; /* je: equal / zero */

loc_001B55D4: ;
    ecx = esi;
    PUSH32(esp, 0x001B55DBu); RECOMP_ABI_CALL(0x001B5502u, sub_001B5502); /* call 0x001B5502 */

loc_001B55DB: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B55F4; /* je: equal / zero */

loc_001B55E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B55F4u); RECOMP_ABI_CALL(0x001B4A3Du, sub_001B4A3D); /* call 0x001B4A3D */

loc_001B55F4: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B560B; /* je: equal / zero */

loc_001B5602: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B560Bu); RECOMP_ABI_CALL(0x001B4E6Du, sub_001B4E6D); /* call 0x001B4E6D */

loc_001B560B: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B5619
 * Original: 0x001B5619 - 0x001B567E (101 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5619(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5619: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x281F7C;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001B563Bu); RECOMP_ABI_CALL(0x001B51D1u, sub_001B51D1); /* call 0x001B51D1 */

loc_001B563B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001B5647u); RECOMP_ABI_CALL(0x001AA982u, sub_001AA982); /* call 0x001AA982 */

loc_001B5647: ;
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x4C;
    MEM32(esi + 0x50) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x54;
    MEM32(esi + 0x58) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x5C;
    MEM32(esi + 0x60) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x44;
    MEM32(esi + 0x48) = eax;
    MEM32(eax) = eax;
    MEM8(esi + 0x65) = 0xFF;
    edi = esi + 0xC;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B567E
 * Original: 0x001B567E - 0x001B5775 (247 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B567E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B567E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x12;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B569Cu); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B569C: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5796(); return; } /* jne: not equal / not zero */

loc_001B56A8: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B56B0u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B56B0: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, 0x3111);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B56C5u); RECOMP_ABI_CALL(0x001B3FEBu, sub_001B3FEB); /* call 0x001B3FEB */

loc_001B56C5: ;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0xFD7F;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x65)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x65), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B5727; /* jae: above or equal (unsigned >=) */

loc_001B56D1: ;
    SET_LO16(edx, 0x8000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B56DAu); RECOMP_ABI_CALL(0x001B3FEFu, sub_001B3FEF); /* call 0x001B3FEF */

loc_001B56DA: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 2;

loc_001B56E1: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B56E1; /* jb: below (unsigned <) */

loc_001B56EE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5727; /* jbe: below or equal (unsigned <=) */

loc_001B56F4: ;
    eax = esi + 0xC;

loc_001B56F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B570D; /* je: equal / zero */

loc_001B5707: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B570D: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034456) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B56F7; /* jb: below (unsigned <) */

loc_001B5727: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x84) = MEM32(eax + 0x84) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001B573Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B5735u); } /* indirect call */
    }

loc_001B573B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B574B; /* jne: not equal / not zero */

loc_001B5740: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B574Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B5748u); } /* indirect call */
    }

loc_001B574B: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B578C(); return; } /* je: equal / zero */

loc_001B5758: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B578C(); return; } /* je: equal / zero */

loc_001B575F: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B578C(); return; } /* je: equal / zero */

loc_001B576E: ;
    edi = ecx + 0x44;
    eax = MEM32(edi);
    g_seh_ebp = ebp; sub_001B5782(); return; /* tail jmp 0x001B5782 */

}

/**
 * sub_001B5775
 * Original: 0x001B5775 - 0x001B5782 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5775(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5775: ;
    SET_LO8(edx, MEM8(eax + -74));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B578C(); return; } /* je: equal / zero */

loc_001B5780: ;
    eax = MEM32(eax);

    g_seh_ebp = ebp; sub_001B5782(); return; /* fallthrough 0x001B5782 */

}

/**
 * sub_001B5782
 * Original: 0x001B5782 - 0x001B578C (10 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5782(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5782: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5775(); return; } /* jne: not equal / not zero */

loc_001B5786: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B578Cu); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

    g_seh_ebp = ebp; sub_001B578C(); return; /* fallthrough 0x001B578C */

}

/**
 * sub_001B578C
 * Original: 0x001B578C - 0x001B5796 (10 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B578C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B578C: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B5794u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5794: ;
    g_seh_ebp = ebp; sub_001B57A5(); return; /* tail jmp 0x001B57A5 */

}

/**
 * sub_001B5796
 * Original: 0x001B5796 - 0x001B57B8 (34 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5796(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5796: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edi), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B57A5; /* jne: not equal / not zero */

loc_001B579D: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B57A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B57A2u); } /* indirect call */
    }

loc_001B57A5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B57B1; /* je: equal / zero */

loc_001B57AA: ;
    ecx = esi;
    PUSH32(esp, 0x001B57B1u); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B57B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B57A5
 * Original: 0x001B57A5 - 0x001B57B8 (19 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B57A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B57A5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B57B1; /* je: equal / zero */

loc_001B57AA: ;
    ecx = esi;
    PUSH32(esp, 0x001B57B1u); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B57B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B57B8
 * Original: 0x001B57B8 - 0x001B583D (133 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B57B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B57B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B57C7u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001B57C7: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5832; /* jne: not equal / not zero */

loc_001B57D0: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB4));
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B57E8u); RECOMP_ABI_CALL(0x001AD7CFu, sub_001AD7CF); /* call 0x001AD7CF */

loc_001B57E8: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB8));
    edx = MEM32(eax + 0xB4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    eax = edx + 0x7C;
    PUSH32(esp, eax);
    eax = ecx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5812u); RECOMP_ABI_CALL(0x001AA44Fu, sub_001AA44F); /* call 0x001AA44F */

loc_001B5812: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x7C) = MEM32(eax + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5832u); RECOMP_ABI_CALL(0x001B55B0u, sub_001B55B0); /* call 0x001B55B0 */

loc_001B5832: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B583Au); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001B583A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B583D
 * Original: 0x001B583D - 0x001B594A (269 bytes, 89 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B583D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B583D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5853u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5853: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5864; /* jne: not equal / not zero */

loc_001B5860: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001B5867;

loc_001B5864: ;
    edi = MEM32(eax + 0x20);

loc_001B5867: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5879; /* jne: not equal / not zero */

loc_001B5870: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5879u); RECOMP_ABI_CALL(0x001B567Eu, sub_001B567E); /* call 0x001B567E */

loc_001B5879: ;
    eax = esi + 0x5C;
    ecx = edi + 0x44;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B593C; /* je: equal / zero */

loc_001B5898: ;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B58A7u); RECOMP_ABI_CALL(0x001B4243u, sub_001B4243); /* call 0x001B4243 */

loc_001B58A7: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B58B2u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B58B2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B58BDu); RECOMP_ABI_CALL(0x001B4548u, sub_001B4548); /* call 0x001B4548 */

loc_001B58BD: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_001B58C4: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B58C4; /* jb: below (unsigned <) */

loc_001B58D1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B593C; /* jbe: below or equal (unsigned <=) */

loc_001B58D7: ;
    edx = esi + 0xC;

loc_001B58DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B58FF; /* je: equal / zero */

loc_001B58FA: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B58FF: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -52);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -40);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -28);
    MEM32(0xFE820368u) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xFE82037Cu) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B58DA; /* jb: below (unsigned <) */

loc_001B593C: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5944u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5944: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B594A
 * Original: 0x001B594A - 0x001B5A51 (263 bytes, 84 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B594A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B594A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -16;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5961u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5961: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5A43; /* je: equal / zero */

loc_001B5972: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5A43; /* je: equal / zero */

loc_001B597B: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B598C; /* jne: not equal / not zero */

loc_001B5984: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B598Cu); RECOMP_ABI_CALL(0x001B567Eu, sub_001B567E); /* call 0x001B567E */

loc_001B598C: ;
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5995u); RECOMP_ABI_CALL(0x001A89D7u, sub_001A89D7); /* call 0x001A89D7 */

loc_001B5995: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5A43; /* je: equal / zero */

loc_001B599F: ;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B59AEu); RECOMP_ABI_CALL(0x001B4243u, sub_001B4243); /* call 0x001B4243 */

loc_001B59AE: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B59B9u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B59B9: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B59C4u); RECOMP_ABI_CALL(0x001B4548u, sub_001B4548); /* call 0x001B4548 */

loc_001B59C4: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_001B59CB: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B59CB; /* jb: below (unsigned <) */

loc_001B59D8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5A43; /* jbe: below or equal (unsigned <=) */

loc_001B59DE: ;
    edx = esi + 0xC;

loc_001B59E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B5A06; /* je: equal / zero */

loc_001B5A01: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B5A06: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -52);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -40);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -28);
    MEM32(0xFE820368u) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xFE82037Cu) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B59E1; /* jb: below (unsigned <) */

loc_001B5A43: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5A4Bu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5A4B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5A51
 * Original: 0x001B5A51 - 0x001B5A89 (56 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5A51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5A51: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x281F7C;
    PUSH32(esp, 0x001B5A5Fu); RECOMP_ABI_CALL(0x001B594Au, sub_001B594A); /* call 0x001B594A */

loc_001B5A5F: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5A70; /* je: equal / zero */

loc_001B5A66: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B5A6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B5A69u); } /* indirect call */
    }

loc_001B5A6C: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B5A70: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5A81; /* je: equal / zero */

loc_001B5A77: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B5A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B5A7Au); } /* indirect call */
    }

loc_001B5A7D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B5A81: ;
    MEM32(esi) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B5A89
 * Original: 0x001B5A89 - 0x001B5B26 (157 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5A89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5A89: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5C51(); return; } /* jne: not equal / not zero */

loc_001B5AA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5AABu); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B5AAB: ;
    SET_LO16(edx, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5AB6u); RECOMP_ABI_CALL(0x001B3FEFu, sub_001B3FEF); /* call 0x001B3FEF */

loc_001B5AB6: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5AC6; /* je: equal / zero */

loc_001B5ABF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5AC6u); RECOMP_ABI_CALL(0x001B57B8u, sub_001B57B8); /* call 0x001B57B8 */

loc_001B5AC6: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5AF2; /* je: equal / zero */

loc_001B5AD3: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5AF2; /* je: equal / zero */

loc_001B5ADA: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5AF2; /* je: equal / zero */

loc_001B5AE9: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5AF2u); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B5AF2: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5AFAu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5AFA: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5AFA; /* jb: below (unsigned <) */

loc_001B5B09: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5B1Bu); RECOMP_ABI_CALL(0x001B401Du, sub_001B401D); /* call 0x001B401D */

loc_001B5B1B: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5B26(); return; } /* je: equal / zero */

loc_001B5B20: ;
    MEM8(esi + 0x16) = MEM8(esi + 0x16) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B5B2A(); return; /* tail jmp 0x001B5B2A */

}

/**
 * sub_001B5B26
 * Original: 0x001B5B26 - 0x001B5B2A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5B26: ;
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B5B2A(); return; /* fallthrough 0x001B5B2A */

}

/**
 * sub_001B5B2A
 * Original: 0x001B5B2A - 0x001B5B4B (33 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5B2A: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B5B39u); RECOMP_ABI_CALL(0x001B45CAu, sub_001B45CA); /* call 0x001B45CA */

loc_001B5B39: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5B4B(); return; } /* je: equal / zero */

loc_001B5B40: ;
    ecx = ZX8(MEM8(eax + 0x64));
    eax = ZX16(MEM16(eax + ecx * 2 + 0xA));
    g_seh_ebp = ebp; sub_001B5B5D(); return; /* tail jmp 0x001B5B5D */

}

/**
 * sub_001B5B4B
 * Original: 0x001B5B4B - 0x001B5B5D (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5B4B: ;
    eax = ZX8(MEM8(ebp + -1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x30000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001B5B5D(); return; /* fallthrough 0x001B5B5D */

}

/**
 * sub_001B5B5D
 * Original: 0x001B5B5D - 0x001B5C08 (171 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5B5D: ;
    SET_LO16(ecx, MEM16(edi));
    edx = ZX8(MEM8(esi + 0x64));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & 0x444);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(0u - (uint32_t)(LO16(ecx))));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEM32(ebp + -12) = eax;
    eax = edx;
    PUSH32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)7);

loc_001B5B7D: ;
    ebx = MEM32(-25034736);
    if (2) _cf = (int)(((ebx) >> ((2) - 1)) & 1);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B5B7D; /* jb: below (unsigned <) */

loc_001B5B8A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edx;
    if ((_fas < 0)) goto loc_001B5BF8; /* js: sign (negative) */

loc_001B5B90: ;
    ebx = esi + edx * 2 + 0xC;
    edi = 0xFFFF0000u;

loc_001B5B99: ;
    edx = ZX16(MEM16(ebx));
    eax = MEM32(esi + 0x40);
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B5BC6; /* je: equal / zero */

loc_001B5BC0: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B5BC6: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(-25033980) = edx;
    edx = MEM32(ebp + -12);
    MEM32(-25034464) = edx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE820124u) = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(-25034432) = ecx;
    MEM32(-25033988) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_001B5B99; /* jge: greater or equal (signed >=) */

loc_001B5BF5: ;
    edi = MEM32(ebp + -20);

loc_001B5BF8: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    eax = esi + 0x4C;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5C08(); return; } /* je: equal / zero */

loc_001B5C03: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001B5C16(); return; /* tail jmp 0x001B5C16 */

}

/**
 * sub_001B5C08
 * Original: 0x001B5C08 - 0x001B5C16 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5C08: ;
    ecx = ZX8(MEM8(ebp + -1));
    edx = MEM32(esi + 8);
    ecx = edx + ecx * 8 + 0x488;

    g_seh_ebp = ebp; sub_001B5C16(); return; /* fallthrough 0x001B5C16 */

}

/**
 * sub_001B5C16
 * Original: 0x001B5C16 - 0x001B5C51 (59 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5C16: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(esi + 0x65) = LO8(eax);

loc_001B5C2D: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5C2D; /* jb: below (unsigned <) */

loc_001B5C3C: ;
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -28;
    PUSH32(esp, 0x001B5C4Eu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5C4E: ;
    SET_LO16(eax, MEM16(edi));

    g_seh_ebp = ebp; sub_001B5C51(); return; /* fallthrough 0x001B5C51 */

}

/**
 * sub_001B5C51
 * Original: 0x001B5C51 - 0x001B5C55 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5C51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5C55
 * Original: 0x001B5C55 - 0x001B5C70 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5C55: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B5C5Du); RECOMP_ABI_CALL(0x001B5A51u, sub_001B5A51); /* call 0x001B5A51 */

loc_001B5C5D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5C6A; /* je: equal / zero */

loc_001B5C64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B5C6Au); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B5C6A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5C79
 * Original: 0x001B5C79 - 0x001B5C7D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C79(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5C79: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5C7D
 * Original: 0x001B5C7D - 0x001B5C81 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C7D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5C7D: ;
    MEM16(ecx) = MEM16(ecx) | LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B5C81
 * Original: 0x001B5C81 - 0x001B5CB4 (51 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5C81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5C81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5C95u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5C95: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 0x18 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5CB4(); return; } /* je: equal / zero */

loc_001B5CA1: ;
    ecx = MEM32(eax + 0xBC);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x7FF;
    g_seh_ebp = ebp; sub_001B5CDB(); return; /* tail jmp 0x001B5CDB */

}

/**
 * sub_001B5CB4
 * Original: 0x001B5CB4 - 0x001B5CDB (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5CB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5CB4: ;
    eax = MEM32(eax + 0xBC);
    ecx = MEM32(ebp + 8);
    edx = 0xFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x84);
    eax = ZX16(MEM16(eax + 8));
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001B5CDB(); return; /* fallthrough 0x001B5CDB */

}

/**
 * sub_001B5CDB
 * Original: 0x001B5CDB - 0x001B5CF3 (24 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5CDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5CDB: ;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -8;
    MEM32(esi + 0x154) = eax;
    PUSH32(esp, 0x001B5CEEu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5CEE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5CF3
 * Original: 0x001B5CF3 - 0x001B5D36 (67 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5CF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5CF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001B5CFDu); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001B5CFD: ;
    ecx = esi;
    PUSH32(esp, 0x001B5D04u); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B5D04: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x100 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5D34; /* je: equal / zero */

loc_001B5D0E: ;
    PUSH32(esp, edi);
    SET_LO16(edx, 0xFEFF);
    PUSH32(esp, 0x001B5D18u); RECOMP_ABI_CALL(0x001B5C79u, sub_001B5C79); /* call 0x001B5C79 */

loc_001B5D18: ;
    edi = esi + 0x84;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5D33; /* je: equal / zero */

loc_001B5D24: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001B5D30u); RECOMP_ABI_CALL(0x001B3F5Eu, sub_001B3F5E); /* call 0x001B3F5E */

loc_001B5D30: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B5D33: ;
    POP32(esp, edi);

loc_001B5D34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B5D36
 * Original: 0x001B5D36 - 0x001B5D8E (88 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5D36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5D36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5D4Du); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5D4D: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B5D8E(); return; } /* je: equal / zero */

loc_001B5D55: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(esi + 0x80);
    ebx = MEM32(edi + 0xCC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5D6Bu); RECOMP_ABI_CALL(0x001B253Du, sub_001B253D); /* call 0x001B253D */

loc_001B5D6B: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5D7Eu); RECOMP_ABI_CALL(0x001B253Du, sub_001B253D); /* call 0x001B253D */

loc_001B5D7E: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x200);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5D8Cu); RECOMP_ABI_CALL(0x001B5C7Du, sub_001B5C7D); /* call 0x001B5C7D */

loc_001B5D8C: ;
    g_seh_ebp = ebp; sub_001B5DB5(); return; /* tail jmp 0x001B5DB5 */

}

/**
 * sub_001B5D8E
 * Original: 0x001B5D8E - 0x001B5DB5 (39 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5D8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5D8E: ;
    eax = MEM32(esi + 0x80);
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, MEM32(eax + 0xC8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001B5DA7u); RECOMP_ABI_CALL(0x001B253Du, sub_001B253D); /* call 0x001B253D */

loc_001B5DA7: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0xFDFF);
    ebx = eax;
    PUSH32(esp, 0x001B5DB5u); RECOMP_ABI_CALL(0x001B5C79u, sub_001B5C79); /* call 0x001B5C79 */

    g_seh_ebp = ebp; sub_001B5DB5(); return; /* fallthrough 0x001B5DB5 */

}

/**
 * sub_001B5DB5
 * Original: 0x001B5DB5 - 0x001B5E77 (194 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5DB5: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;

loc_001B5DD4: ;
    eax = MEM32(0xFE820010u);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5DD4; /* jb: below (unsigned <) */

loc_001B5DE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5E58; /* jbe: below or equal (unsigned <=) */

loc_001B5DE6: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0xC;

loc_001B5DF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = 1;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B5E14; /* je: equal / zero */

loc_001B5E0E: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B5E14: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x154);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25033824) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(-25033764) = ebx;
    MEM32(-25033820) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5E44; /* je: equal / zero */

loc_001B5E3E: ;
    MEM32(-25033768) = ecx;

loc_001B5E44: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25033988) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5DF4; /* jb: below (unsigned <) */

loc_001B5E58: ;
    ecx = ebp + -16;
    PUSH32(esp, 0x001B5E60u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5E60: ;
    ecx = esi;
    PUSH32(esp, 0x001B5E67u); RECOMP_ABI_CALL(0x001B5A89u, sub_001B5A89); /* call 0x001B5A89 */

loc_001B5E67: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B5E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B5E6Du); } /* indirect call */
    }

loc_001B5E70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5E77
 * Original: 0x001B5E77 - 0x001B5FF6 (383 bytes, 113 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5E77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5E77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebp + -44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5E9Au); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5E9A: ;
    ecx = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx + ecx * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001B5EA7: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5EA7; /* jb: below (unsigned <) */

loc_001B5EB4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5F2D; /* jbe: below or equal (unsigned <=) */

loc_001B5EBD: ;
    edx = esi + 0xC;

loc_001B5EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = edi;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001B5EDC; /* je: equal / zero */

loc_001B5ED6: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B5EDC: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = ecx;
    ecx = MEM32(esi + 0x154);
    MEM32(-25033824) = ecx;
    MEM32(-25033764) = 0x20;
    MEM32(-25033820) = ebx;
    MEM32(-25033988) = ebx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5EC0; /* jb: below (unsigned <) */

loc_001B5F2D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F35u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5F35: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F3Cu); RECOMP_ABI_CALL(0x001B5A89u, sub_001B5A89); /* call 0x001B5A89 */

loc_001B5F3C: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x1CEC38);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x54;

loc_001B5F52: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5F52; /* jne: not equal / not zero */

loc_001B5F5A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F64u); RECOMP_ABI_CALL(0x001B5D36u, sub_001B5D36); /* call 0x001B5D36 */

loc_001B5F64: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F6Cu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B5F6C: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F77u); RECOMP_ABI_CALL(0x001B42F4u, sub_001B42F4); /* call 0x001B42F4 */

loc_001B5F77: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5F81u); RECOMP_ABI_CALL(0x001B253Du, sub_001B253D); /* call 0x001B253D */

loc_001B5F81: ;
    edx = ZX8(MEM8(esi + 0x64));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);

loc_001B5F8A: ;
    ebx = MEM32(-25034736);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5F8A; /* jb: below (unsigned <) */

loc_001B5F97: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B5FE7; /* jbe: below or equal (unsigned <=) */

loc_001B5F9D: ;
    edx = esi + 0xC;

loc_001B5FA0: ;
    ebx = ZX16(MEM16(edx));
    MEM32(-25033992) = ebx;
    MEM32(-25033988) = edi;
    ebx = MEM32(ebp + ecx * 4 + -44);
    MEM32(-25033888) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -32);
    MEM32(-25033884) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -20);
    MEM32(-25033880) = ebx;
    MEM32(0xFE8203D8u) = eax;
    MEM32(-25033988) = 0;
    ebx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5FA0; /* jb: below (unsigned <) */

loc_001B5FE7: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B5FEFu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B5FEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5FF6
 * Original: 0x001B5FF6 - 0x001B602C (54 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B5FF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5FF6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B600Au); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B600A: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6057(); return; } /* jne: not equal / not zero */

loc_001B6013: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B602C(); return; } /* jne: not equal / not zero */

loc_001B6019: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6028u); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B6028: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001B605A(); return; /* tail jmp 0x001B605A */

}

/**
 * sub_001B6020
 * Original: 0x001B6020 - 0x001B602C (12 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6020: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B6028u); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B6028: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001B605A(); return; /* tail jmp 0x001B605A */

}

/**
 * sub_001B602C
 * Original: 0x001B602C - 0x001B603E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B602C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B602C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B603E(); return; } /* jne: not equal / not zero */

loc_001B6032: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B6020(); return; /* tail jmp 0x001B6020 */

}

/**
 * sub_001B603E
 * Original: 0x001B603E - 0x001B6050 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B603E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B603E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6050(); return; } /* jne: not equal / not zero */

loc_001B6044: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B6020(); return; /* tail jmp 0x001B6020 */

}

/**
 * sub_001B6050
 * Original: 0x001B6050 - 0x001B6057 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6050: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_001B605A(); return; /* tail jmp 0x001B605A */

}

/**
 * sub_001B6057
 * Original: 0x001B6057 - 0x001B605A (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6057(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6057: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001B605A(); return; /* fallthrough 0x001B605A */

}

/**
 * sub_001B605A
 * Original: 0x001B605A - 0x001B6069 (15 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B605A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B605A: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B6062u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B6062: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6069
 * Original: 0x001B6069 - 0x001B60A2 (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6069: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_001B608E; /* je: equal / zero */

loc_001B607A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B608Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6087u); } /* indirect call */
    }

loc_001B608A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B609A; /* jne: not equal / not zero */

loc_001B608E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6098u); RECOMP_ABI_CALL(0x001B5FF6u, sub_001B5FF6); /* call 0x001B5FF6 */

loc_001B6098: ;
    edi = eax;

loc_001B609A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B60A2
 * Original: 0x001B60A2 - 0x001B60CB (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B60A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B60A2: ;
    eax = ZX16(MEM16(ecx + 0x12));
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B60CB(); return; } /* jne: not equal / not zero */

loc_001B60B0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x444) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x444 (16-bit) */
    PUSH32(esp, 0);
    POP32(esp, edx);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    MEM32(ecx) = edx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B60DF(); return; } /* je: equal / zero */

loc_001B60C6: ;
    MEM32(ecx) = MEM32(ecx) | 4;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B60DF(); return; /* tail jmp 0x001B60DF */

}

/**
 * sub_001B60CB
 * Original: 0x001B60CB - 0x001B60DF (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B60CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B60CB: ;
    ecx = 0x8001;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_001B60DF(); return; /* fallthrough 0x001B60DF */

}

/**
 * sub_001B60DF
 * Original: 0x001B60DF - 0x001B60E4 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B60DF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B60DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B60E4
 * Original: 0x001B60E4 - 0x001B6182 (158 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B60E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B60E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B60FAu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B60FA: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6194(); return; } /* jne: not equal / not zero */

loc_001B6107: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B610Eu); RECOMP_ABI_CALL(0x001B4FB7u, sub_001B4FB7); /* call 0x001B4FB7 */

loc_001B610E: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6119; /* je: equal / zero */

loc_001B6117: ;
    MEM32(eax) = ebx;

loc_001B6119: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B61B2(); return; } /* je: equal / zero */

loc_001B6124: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B612Du); RECOMP_ABI_CALL(0x001B2556u, sub_001B2556); /* call 0x001B2556 */

loc_001B612D: ;
    ecx = MEM32(esi + 0x80);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B613C; /* jae: above or equal (unsigned >=) */

loc_001B613A: ;
    eax = ecx;

loc_001B613C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x200 (16-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6182(); return; } /* je: equal / zero */

loc_001B6148: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xCC) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6182(); return; } /* jb: below (unsigned <) */

loc_001B6156: ;
    edx = MEM32(ecx + 0xD0);
    _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0xCC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6182(); return; } /* jae: above or equal (unsigned >=) */

loc_001B6166: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xD0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xD0)); }
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xCC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    g_seh_ebp = ebp; sub_001B61B2(); return; /* tail jmp 0x001B61B2 */

}
