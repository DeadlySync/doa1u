/**
 * DOAU1 - Recompiled code chunk 89
 * Functions: 51 (0x0022AE50 - 0x0022BA63)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0022AE50
 * Original: 0x0022AE50 - 0x0022AE55 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE50: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AE55
 * Original: 0x0022AE55 - 0x0022AE6E (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AE55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AE55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AE6E(); return; } /* jne: not equal / not zero */

loc_0022AE64: ;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0022AF55(); return; /* tail jmp 0x0022AF55 */

}

/**
 * sub_0022AE6E
 * Original: 0x0022AE6E - 0x0022AF32 (196 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE6E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -48;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x20;
    MEM8(ebp + -47) = 0x82;
    MEM32(ebp + -40) = ebx;
    PUSH32(esp, 0x0022AE89u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022AE89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AF32(); return; } /* jl: less (signed <) */

loc_0022AE93: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022AEA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AE9Au); } /* indirect call */
    }

loc_0022AEA0: ;
    SET_LO16(eax, ZX8(MEM8(ebp + 8)));
    ecx = MEM32(esi + 4);
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x30;
    MEM8(ebp + -47) = 0x40;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -8) = 0x41;
    MEM8(ebp + -7) = 3;
    MEM16(ebp + -4) = 1;
    MEM16(ebp + -2) = LO16(ebx);
    PUSH32(esp, 0x0022AEE7u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022AEE7: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x1C;
    MEM8(ebp + -47) = 0xC3;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    PUSH32(esp, 0x0022AF03u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022AF03: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022AF09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AF03u); } /* indirect call */
    }

loc_0022AF09: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF9;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AF32(); return; } /* je: equal / zero */

loc_0022AF13: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0022AF1Cu); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022AF1C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0022AF24u); RECOMP_ABI_CALL(0x002248A8u, sub_002248A8); /* call 0x002248A8 */

loc_0022AF24: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = ebx;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0022AF53(); return; /* tail jmp 0x0022AF53 */

}

/**
 * sub_0022AF32
 * Original: 0x0022AF32 - 0x0022AF44 (18 bytes, 7 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF32: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022AF38u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AF38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AF44(); return; } /* jg: greater (signed >) */

loc_0022AF3D: ;
    PUSH32(esp, 0x0022AF42u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AF42: ;
    g_seh_ebp = ebp; sub_0022AF53(); return; /* tail jmp 0x0022AF53 */

}

/**
 * sub_0022AF44
 * Original: 0x0022AF44 - 0x0022AF5A (22 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF44: ;
    PUSH32(esp, 0x0022AF49u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AF49: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AF53
 * Original: 0x0022AF53 - 0x0022AF5A (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF53: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AF55
 * Original: 0x0022AF55 - 0x0022AF5A (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF55: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AF5A
 * Original: 0x0022AF5A - 0x0022AF6E (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF5A: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AF6E(); return; } /* je: equal / zero */

loc_0022AF69: ;
    MEM32(edx + 0x18) = eax;
    g_seh_ebp = ebp; sub_0022AF70(); return; /* tail jmp 0x0022AF70 */

}

/**
 * sub_0022AF6E
 * Original: 0x0022AF6E - 0x0022AF70 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AF6E: ;
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_0022AF70(); return; /* fallthrough 0x0022AF70 */

}

/**
 * sub_0022AF70
 * Original: 0x0022AF70 - 0x0022AF76 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AF70(void)
{

loc_0022AF70: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AF76
 * Original: 0x0022AF76 - 0x0022AF8C (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022AF76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AF76: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AF89; /* je: equal / zero */

loc_0022AF7C: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0022AF8B; /* jne: not equal / not zero */

loc_0022AF85: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0022AF89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022AF8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AFB0
 * Original: 0x0022AFB0 - 0x0022AFDF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AFB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    PUSH32(esp, 0x6B776168);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x0022AFCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AFC6u); } /* indirect call */
    }

loc_0022AFCC: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AFDF(); return; } /* jne: not equal / not zero */

loc_0022AFD5: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0022B0FC(); return; /* tail jmp 0x0022B0FC */

}

/**
 * sub_0022AFDF
 * Original: 0x0022AFDF - 0x0022B0B1 (210 bytes, 69 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AFDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AFDF: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    esi = MEM32(0x222770);
    eax = MEM32(esi);
    MEM32(0x222770) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE0;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0022B029; /* jbe: below or equal (unsigned <=) */

loc_0022B013: ;
    ecx = esi + 0xC;
    edi = edx;
    MEM32(ebp + 8) = eax;

loc_0022B01B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022B021u); RECOMP_ABI_CALL(0x0022AF5Au, sub_0022AF5A); /* call 0x0022AF5A */

loc_0022B021: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022B01B; /* jne: not equal / not zero */

loc_0022B029: ;
    eax = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + 0x222776));
    MEM8(esi + 0x14) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x222777));
    MEM8(esi + 0x15) = LO8(eax);
    MEM8(esi + 0x17) = 3;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x2A) = 1;
    MEM8(esi + 0x3E) = 2;
    SET_LO8(ecx, MEM8(ebx + 0xA));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -11) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebx + 8));
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -8) = LO16(eax);
    eax = ebp + -32;
    MEM16(ebp + -10) = LO16(ecx);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    MEM8(ebp + -32) = 0x1C;
    MEM8(ebp + -31) = 9;
    PUSH32(esp, 0x0022B081u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022B081: ;
    edi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022B0C2(); return; } /* jge: greater or equal (signed >=) */

loc_0022B089: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x0022B092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B08Cu); } /* indirect call */
    }

loc_0022B092: ;
    eax = MEM32(0x222770);
    MEM32(esi) = eax;
    PUSH32(esp, edi);
    MEM32(0x222770) = esi;
    PUSH32(esp, 0x0022B0A5u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022B0A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022B0B1(); return; } /* jg: greater (signed >) */

loc_0022B0AA: ;
    PUSH32(esp, 0x0022B0AFu); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022B0AF: ;
    g_seh_ebp = ebp; sub_0022B0FB(); return; /* tail jmp 0x0022B0FB */

}

/**
 * sub_0022B0B1
 * Original: 0x0022B0B1 - 0x0022B0C2 (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B0B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B0B1: ;
    PUSH32(esp, 0x0022B0B6u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022B0B6: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0022B0FB(); return; /* tail jmp 0x0022B0FB */

}

/**
 * sub_0022B0C2
 * Original: 0x0022B0C2 - 0x0022B0FC (58 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B0C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B0C2: ;
    edx = MEM32(ebp + -16);
    eax = esi + 0x37C;
    MEM32(eax) = edx;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = ecx;
    MEM8(ebp + -60) = 0x1C;
    MEM8(ebp + -59) = 0xC;
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = ebp + -60;
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 1;
    PUSH32(esp, 0x0022B0F6u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022B0F6: ;
    MEM32(ebx + 0x18) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0022B0FC(); return; /* fallthrough 0x0022B0FC */

}

/**
 * sub_0022B0FB
 * Original: 0x0022B0FB - 0x0022B0FC (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B0FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B0FB: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0022B0FC(); return; /* fallthrough 0x0022B0FC */

}

/**
 * sub_0022B0FC
 * Original: 0x0022B0FC - 0x0022B102 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B0FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B0FC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022B102
 * Original: 0x0022B102 - 0x0022B334 (562 bytes, 192 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B102(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B102: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022B115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B10Fu); } /* indirect call */
    }

loc_0022B115: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(eax + 0x17));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B133; /* je: equal / zero */

loc_0022B124: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022B144;

loc_0022B133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B144; /* je: equal / zero */

loc_0022B137: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022B144: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -48) = 0x22B334;
    if (CMP_EQ(_fa, _fb)) goto loc_0022B327; /* je: equal / zero */

loc_0022B153: ;
    PUSH32(esp, esi);

loc_0022B154: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B31D; /* je: equal / zero */

loc_0022B162: ;
    MEM32(ebx + 4) = eax;
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(edi + 0x18);
    SET_LO8(ecx, MEM8(ecx + 0x16));
    MEM8(ebx + 0x11) = LO8(ecx);
    MEM8(ebx + 0x10) = 0;
    MEM8(ebx + 0x13) = 0;

loc_0022B183: ;
    ecx = MEM32(edi + 0x18);
    esi = MEM32(ebp + -8);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ecx + 0x14));
    esi = ebp + esi * 2 + -64;
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B1B1; /* je: equal / zero */

loc_0022B19B: ;
    MEM8(ecx + 0x16) = MEM8(ecx + 0x16) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x16)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x18);
    SET_LO8(edx, MEM8(ecx + 0x16));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x15) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022B1B1; /* jne: not equal / not zero */

loc_0022B1A9: ;
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi) = MEM16(esi) + 2;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(ecx + 0x16) = 0;

loc_0022B1B1: ;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = ecx;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0022B1F4; /* jbe: below or equal (unsigned <=) */

loc_0022B1C3: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edi + 0x18);
    MEM32(edx + 0x48) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0xC) = ecx;
    MEM8(ebx + 0x10) = 1;
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B1F4; /* jne: not equal / not zero */

loc_0022B1DB: ;
    edi = MEM32(edi + 0x18);
    esi = MEM32(eax);
    edx = ecx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edi = MEM32(ebp + -12);

loc_0022B1F4: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B20B; /* je: equal / zero */

loc_0022B1FF: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022B183; /* jl: less (signed <) */

loc_0022B209: ;
    goto loc_0022B20F;

loc_0022B20B: ;
    MEM8(ebx + 0x13) = 1;

loc_0022B20F: ;
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 4) = MEM32(eax + 4) - ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -68) = ecx;
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + 0x13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B239; /* je: equal / zero */

loc_0022B22E: ;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B239u); RECOMP_ABI_CALL(0x0022AF76u, sub_0022AF76); /* call 0x0022AF76 */

loc_0022B239: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B2B3; /* je: equal / zero */

loc_0022B23F: ;
    edx = MEM32(edi + 0x18);
    eax = edx + 0x4C;
    MEM32(ebp + -68) = eax;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B288; /* je: equal / zero */

loc_0022B24F: ;
    MEM32(edx + 0x40) = eax;
    esi = MEM32(eax);
    MEM32(edx + 0x44) = esi;
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B278; /* jne: not equal / not zero */

loc_0022B25D: ;
    ecx = MEM32(edx + 0x48);
    edi = MEM32(ebx + 0xC);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + edx + 0x4C;
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
    edi = MEM32(ebp + -12);

loc_0022B278: ;
    ecx = MEM32(edx + 0x48);
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 4) = MEM32(eax + 4) - ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0022B2B3;

loc_0022B288: ;
    MEM32(edx + 0x40) = MEM32(edx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x44) = MEM32(edx + 0x44) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B2B3; /* jne: not equal / not zero */

loc_0022B296: ;
    esi = MEM32(ebx + 0xC);
    ecx = MEM32(edx + 0x48);
    edi = esi + edx + 0x4C;
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
    edi = MEM32(ebp + -12);

loc_0022B2B3: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi + 4);
    MEM8(ebp + -40) = 0x1C;
    MEM8(ebp + -39) = 0xB;
    eax = MEM32(eax + 0x37C);
    MEM32(ebp + -24) = eax;
    eax = ebp + -72;
    MEM32(ebp + -16) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM8(ebp + -20) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B2E5u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022B2E5: ;
    eax = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(eax + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B2FE; /* je: equal / zero */

loc_0022B2EF: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022B313;

loc_0022B2FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B311; /* je: equal / zero */

loc_0022B302: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022B313;

loc_0022B311: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022B313: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022B154; /* jne: not equal / not zero */

loc_0022B31B: ;
    goto loc_0022B326;

loc_0022B31D: ;
    edi = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(ebx + 0x12));
    MEM8(edi + 0x17) = MEM8(edi + 0x17) | LO8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0022B326: ;
    POP32(esp, esi);

loc_0022B327: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B32Au); } /* indirect call */
    }

loc_0022B330: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022B334
 * Original: 0x0022B334 - 0x0022B51A (486 bytes, 177 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0022B334: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 0x18);
    MEM32(ebp + -20) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esi;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0022B35B; /* je: equal / zero */

loc_0022B358: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) - 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_0022B35B: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0022B49A; /* je: equal / zero */

loc_0022B365: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = edx + 0x4C;
    if (CMP_NE(_fa, _fb)) goto loc_0022B371; /* jne: not equal / not zero */

loc_0022B36E: ;
    esi = MEM32(eax + 8);

loc_0022B371: ;
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0022B45C; /* jbe: below or equal (unsigned <=) */

loc_0022B382: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

loc_0022B388: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x14);
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0022B3A9; /* je: equal / zero */

loc_0022B395: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    ebx = (uint32_t)(int32_t)SMEM8(ebp + -1);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -12))) >> 32) & 1);
    edi = edi + MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022B3A9; /* jne: not equal / not zero */

loc_0022B3A4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;

loc_0022B3A9: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    ebx = edi;
    _cf = 0; /* logical op clears CF */
    SET_LO16(ebx, LO16(ebx) & 0xF000);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x9000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x9000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022B420; /* jne: not equal / not zero */

loc_0022B3BD: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), 0xFFF (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0022B409; /* je: equal / zero */

loc_0022B3C4: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + edi + -2;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi));
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0022B422; /* je: equal / zero */

loc_0022B3E6: ;
    eax = edi;
    SET_LO16(ebx, LO16(eax));
    edi = esi;
    if (0x10) _cf = (int)(((ebx) >> (32 - (0x10))) & 1);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ebx, LO16(eax));
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */
    eax = MEM32(ebp + -16);
    esi = esi + eax * 2;

loc_0022B404: ;
    eax = MEM32(ebp + 0xC);
    goto loc_0022B422;

loc_0022B409: ;
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    esi = esi + MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_0022B404;

loc_0022B420: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022B422: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B446; /* je: equal / zero */

loc_0022B428: ;
    ecx = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & 0xF000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022B446; /* jne: not equal / not zero */

loc_0022B43A: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    _fb = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(MEM8(eax + 0x11)));
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(MEM8(ebp + -12)));
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + -12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x16)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + 0x16) = MEM8(edx + 0x16) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0022B446: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0022B388; /* jb: below (unsigned <) */

loc_0022B45C: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B49A; /* je: equal / zero */

loc_0022B462: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + 0x4C;
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
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B49A; /* je: equal / zero */

loc_0022B47F: ;
    ecx = MEM32(edx + 0x48);
    esi = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x44);
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + esi + 0x4C;
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

loc_0022B49A: ;
    esi = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0022B4AC; /* je: equal / zero */

loc_0022B4A4: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022B4AC: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B4C6; /* je: equal / zero */

loc_0022B4B2: ;
    ecx = MEM32(edx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0022B4C6; /* je: equal / zero */

loc_0022B4B9: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0022B4C6; /* je: equal / zero */

loc_0022B4BE: ;
    ecx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022B4C6: ;
    ecx = ZX8(MEM8(eax + 0x13));
    SET_LO8(eax, MEM8(eax + 0x12));
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x17) = MEM8(edx + 0x17) | LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0022B505; /* je: equal / zero */

loc_0022B4D4: ;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B4E5; /* je: equal / zero */

loc_0022B4E3: ;
    ebx = MEM32(eax);

loc_0022B4E5: ;
    PUSH32(esp, MEM32(ebp + -20));
    ecx = edx + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B4F0u); RECOMP_ABI_CALL(0x0022AF5Au, sub_0022AF5A); /* call 0x0022AF5A */

loc_0022B4F0: ;
    eax = MEM32(ebp + -24);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    eax = ebp + -48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B505u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_0022B505: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0022B516; /* je: equal / zero */

loc_0022B511: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B516u); RECOMP_ABI_CALL(0x0022B102u, sub_0022B102); /* call 0x0022B102 */

loc_0022B516: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022B51A
 * Original: 0x0022B51A - 0x0022B59B (129 bytes, 53 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B51A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B51A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    SET_LO8(edx, MEM8(ecx + 0x17));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B53B; /* jne: not equal / not zero */

loc_0022B52E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B53B; /* je: equal / zero */

loc_0022B534: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022B559; /* jne: not equal / not zero */

loc_0022B53B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B54D; /* jne: not equal / not zero */

loc_0022B540: ;
    _fa = (uint32_t)(MEM8(ecx + 0x3F)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x3F), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B54D; /* je: equal / zero */

loc_0022B546: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022B559; /* jne: not equal / not zero */

loc_0022B54D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B555u); RECOMP_ABI_CALL(0x0022AF76u, sub_0022AF76); /* call 0x0022AF76 */

loc_0022B555: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B598; /* je: equal / zero */

loc_0022B559: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0022B55B: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -24;
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
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B571u); RECOMP_ABI_CALL(0x0022AF5Au, sub_0022AF5A); /* call 0x0022AF5A */

loc_0022B571: ;
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, MEM32(ebx + 0x14));
    eax = ebp + -24;
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B587u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_0022B587: ;
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B592u); RECOMP_ABI_CALL(0x0022AF76u, sub_0022AF76); /* call 0x0022AF76 */

loc_0022B592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022B55B; /* jne: not equal / not zero */

loc_0022B596: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0022B598: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022B59B
 * Original: 0x0022B59B - 0x0022B630 (149 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B59B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B59B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 0x10 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022B5B5; /* jne: not equal / not zero */

loc_0022B5B2: ;
    esi = MEM32(ebp + 0xC);

loc_0022B5B5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022B5BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B5B5u); } /* indirect call */
    }

loc_0022B5BB: ;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 0x20 (8-bit) */
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0022B603; /* je: equal / zero */

loc_0022B5C4: ;
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B5CFu); RECOMP_ABI_CALL(0x0022AF76u, sub_0022AF76); /* call 0x0022AF76 */

loc_0022B5CF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0022B5FA; /* je: equal / zero */

loc_0022B5D8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B5DEu); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_0022B5DE: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
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
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B5F1u); RECOMP_ABI_CALL(0x0022AF5Au, sub_0022AF5A); /* call 0x0022AF5A */

loc_0022B5F1: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B5F8u); RECOMP_ABI_CALL(0x0022B102u, sub_0022B102); /* call 0x0022B102 */

loc_0022B5F8: ;
    goto loc_0022B61D;

loc_0022B5FA: ;
    MEM32(ebp + -4) = 0x800700AAu;
    goto loc_0022B60A;

loc_0022B603: ;
    MEM32(ebp + -4) = 0x8007048Fu;

loc_0022B60A: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B61Du); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_0022B61D: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B620u); } /* indirect call */
    }

loc_0022B626: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022B630
 * Original: 0x0022B630 - 0x0022B67E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B630: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -4) = 2;
    SET_LO8(ebx, 0x1F);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022B646u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B640u); } /* indirect call */
    }

loc_0022B646: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x222794) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x222794 (32-bit) */
    edi = MEM32(ebp + 0xC);
    MEM8(ebp + -8) = LO8(eax);
    eax = 0x2227AC;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B67E(); return; } /* je: equal / zero */

loc_0022B65C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B67E(); return; } /* je: equal / zero */

loc_0022B660: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2227A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2227A0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6BB(); return; } /* jne: not equal / not zero */

loc_0022B668: ;
    _fa = (uint32_t)(MEM16(0x222768)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x222768), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B688(); return; } /* je: equal / zero */

loc_0022B671: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x96FC50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x96FC50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022B6BB(); return; /* tail jmp 0x0022B6BB */

}

/**
 * sub_0022B67E
 * Original: 0x0022B67E - 0x0022B688 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B67E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B67E: ;
    _fa = (uint32_t)(MEM16(0x22276C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x22276C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B692(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0022B688(); return; /* fallthrough 0x0022B688 */

}

/**
 * sub_0022B688
 * Original: 0x0022B688 - 0x0022B692 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B688(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B688: ;
    esi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0022B742(); return; /* tail jmp 0x0022B742 */

}

/**
 * sub_0022B692
 * Original: 0x0022B692 - 0x0022B6A7 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B692: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x96FBE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x96FBE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6B5(); return; } /* jne: not equal / not zero */

loc_0022B6A1: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6B1(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0022B6A7(); return; /* fallthrough 0x0022B6A7 */

}

/**
 * sub_0022B6A7
 * Original: 0x0022B6A7 - 0x0022B6B1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6A7: ;
    esi = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0022B742(); return; /* tail jmp 0x0022B742 */

}

/**
 * sub_0022B6B1
 * Original: 0x0022B6B1 - 0x0022B6B5 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6B1: ;
    SET_LO8(ebx, 0xB5);
    g_seh_ebp = ebp; sub_0022B6BB(); return; /* tail jmp 0x0022B6BB */

}

/**
 * sub_0022B6B5
 * Original: 0x0022B6B5 - 0x0022B6BB (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6B5: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6A7(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0022B6BB(); return; /* fallthrough 0x0022B6BB */

}

/**
 * sub_0022B6BB
 * Original: 0x0022B6BB - 0x0022B6E5 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6BB: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6F2(); return; } /* je: equal / zero */

loc_0022B6C2: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebp + -4) = LO8(ecx);

loc_0022B6CA: ;
    edx = ZX8(LO8(ecx));
    edx = ZX16(MEM16(edx * 4 + 0x222774));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6E5(); return; } /* je: equal / zero */

loc_0022B6D9: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    MEM8(ebp + -4) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_0022B6CA; /* jb: below (unsigned <) */

loc_0022B6E3: ;
    g_seh_ebp = ebp; sub_0022B6F2(); return; /* tail jmp 0x0022B6F2 */

}

/**
 * sub_0022B6E5
 * Original: 0x0022B6E5 - 0x0022B6F2 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B6F2(); return; } /* jne: not equal / not zero */

loc_0022B6EE: ;
    MEM8(ebp + -4) = 8;

    g_seh_ebp = ebp; sub_0022B6F2(); return; /* fallthrough 0x0022B6F2 */

}

/**
 * sub_0022B6F2
 * Original: 0x0022B6F2 - 0x0022B705 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B6F2: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B705(); return; } /* je: equal / zero */

loc_0022B6F9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x80070020u;
    g_seh_ebp = ebp; sub_0022B7D4(); return; /* tail jmp 0x0022B7D4 */

}

/**
 * sub_0022B705
 * Original: 0x0022B705 - 0x0022B720 (27 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B705(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B705: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B7B3(); return; } /* je: equal / zero */

loc_0022B70D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_0022B720(); return; } /* jns: not sign (positive) */

loc_0022B711: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0022B71Eu); RECOMP_ABI_CALL(0x0022AD46u, sub_0022AD46); /* call 0x0022AD46 */

loc_0022B71E: ;
    g_seh_ebp = ebp; sub_0022B781(); return; /* tail jmp 0x0022B781 */

}

/**
 * sub_0022B720
 * Original: 0x0022B720 - 0x0022B742 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B720: ;
    SET_LO8(eax, MEM8(edi + 0x96FBDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B752(); return; } /* je: equal / zero */

loc_0022B72A: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x96FBDC) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x96FBD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp + -4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B787(); return; } /* je: equal / zero */

loc_0022B73D: ;
    esi = 0x80070057u;

    g_seh_ebp = ebp; sub_0022B742(); return; /* fallthrough 0x0022B742 */

}

/**
 * sub_0022B742
 * Original: 0x0022B742 - 0x0022B752 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B742(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B742: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B74Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B745u); } /* indirect call */
    }

loc_0022B74B: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0022B7E4(); return; /* tail jmp 0x0022B7E4 */

}

/**
 * sub_0022B752
 * Original: 0x0022B752 - 0x0022B781 (47 bytes, 14 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B752(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B752: ;
    PUSH32(esp, MEM32(ebp + -8));
    SET_LO8(eax, MEM8(ebp + -4));
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    MEM8(edi + 0x96FBDC) = 1;
    MEM8(edi + 0x96FBD8) = LO8(eax);
    PUSH32(esp, 0x0022B76Fu); RECOMP_ABI_CALL(0x0022AD46u, sub_0022AD46); /* call 0x0022AD46 */

loc_0022B76F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022B7A9(); return; } /* jl: less (signed <) */

loc_0022B775: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022B781u); RECOMP_ABI_CALL(0x0022AE55u, sub_0022AE55); /* call 0x0022AE55 */

    g_seh_ebp = ebp; sub_0022B781(); return; /* fallthrough 0x0022B781 */

}

/**
 * sub_0022B781
 * Original: 0x0022B781 - 0x0022B787 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B781(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B781: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022B7A9(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0022B787(); return; /* fallthrough 0x0022B787 */

}

/**
 * sub_0022B787
 * Original: 0x0022B787 - 0x0022B7A9 (34 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B787: ;
    eax = ZX8(MEM8(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, 0x0022B796u); RECOMP_ABI_CALL(0x0022AFB0u, sub_0022AFB0); /* call 0x0022AFB0 */

loc_0022B796: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022B7A9(); return; } /* jl: less (signed <) */

loc_0022B79C: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 0x22;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xC) = 1;
    g_seh_ebp = ebp; sub_0022B7BA(); return; /* tail jmp 0x0022B7BA */

}

/**
 * sub_0022B7A9
 * Original: 0x0022B7A9 - 0x0022B7B3 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7A9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 0x96FBDC) = MEM8(edi + 0x96FBDC) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x96FBDC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022B7BA(); return; /* tail jmp 0x0022B7BA */

}

/**
 * sub_0022B7B3
 * Original: 0x0022B7B3 - 0x0022B7CD (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7B3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x8007048Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B7D4(); return; } /* je: equal / zero */

loc_0022B7BE: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B7CD(); return; } /* je: equal / zero */

loc_0022B7C4: ;
    MEM16(0x22276C) = MEM16(0x22276C) - 1;
    _fa = (uint32_t)(MEM16(0x22276C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022B7D4(); return; /* tail jmp 0x0022B7D4 */

}

/**
 * sub_0022B7BA
 * Original: 0x0022B7BA - 0x0022B7CD (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B7D4(); return; } /* je: equal / zero */

loc_0022B7BE: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022B7CD(); return; } /* je: equal / zero */

loc_0022B7C4: ;
    MEM16(0x22276C) = MEM16(0x22276C) - 1;
    _fa = (uint32_t)(MEM16(0x22276C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022B7D4(); return; /* tail jmp 0x0022B7D4 */

}

/**
 * sub_0022B7CD
 * Original: 0x0022B7CD - 0x0022B7D4 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7CD: ;
    MEM16(0x222768) = MEM16(0x222768) - 1;
    _fa = (uint32_t)(MEM16(0x222768)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0022B7D4(); return; /* fallthrough 0x0022B7D4 */

}

/**
 * sub_0022B7D4
 * Original: 0x0022B7D4 - 0x0022B7E4 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7D4: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B7DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B7D7u); } /* indirect call */
    }

loc_0022B7DD: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    eax = ebx;

    g_seh_ebp = ebp; sub_0022B7E4(); return; /* fallthrough 0x0022B7E4 */

}

/**
 * sub_0022B7E4
 * Original: 0x0022B7E4 - 0x0022B7EB (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B7E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0022B7EB
 * Original: 0x0022B7EB - 0x0022B867 (124 bytes, 43 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B7EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B7EB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x37C) = edi;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    PUSH32(esp, 0x1C);
    eax = esi;
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0022B80E; /* je: equal / zero */

loc_0022B807: ;
    _fb = (uint32_t)(0x96FBE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x96FBE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0022B813;

loc_0022B80E: ;
    _fb = (uint32_t)(0x96FC50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x96FC50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0022B813: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esi;
    MEM8(eax + 0x96FBDC) = MEM8(eax + 0x96FBDC) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x96FBDC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0022B823u); RECOMP_ABI_CALL(0x0022B51Au, sub_0022B51A); /* call 0x0022B51A */

loc_0022B823: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B841; /* je: equal / zero */

loc_0022B829: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022B832u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022B832: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0022B83Au); RECOMP_ABI_CALL(0x002248A8u, sub_002248A8); /* call 0x002248A8 */

loc_0022B83A: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;

loc_0022B841: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B85E; /* je: equal / zero */

loc_0022B848: ;
    SET_LO8(eax, LO8(eax) & 0xF9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xB) = LO8(eax);
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x350;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x0022B85Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B858u); } /* indirect call */
    }

loc_0022B85E: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022B867
 * Original: 0x0022B867 - 0x0022B897 (48 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022B867(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B867: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022B880u); RECOMP_ABI_CALL(0x0022B630u, sub_0022B630); /* call 0x0022B630 */

loc_0022B880: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022B892; /* jl: less (signed <) */

loc_0022B884: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x10) = edx;

loc_0022B892: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0022B897
 * Original: 0x0022B897 - 0x0022B8F2 (91 bytes, 23 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B897(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B897: ;
    MEM8(ecx + 0xB) = MEM8(ecx + 0xB) & 0xDF;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ecx + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B8F1; /* jne: not equal / not zero */

loc_0022B8A2: ;
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0xB) = LO8(eax);
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x360) = 0x1C;
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x361) = 0x4A;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x368) = 0x22B7EB;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x36C) = ecx;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x37C);
    MEM32(eax + 0x370) = edx;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x360;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022B8F1u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022B8F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B8F2
 * Original: 0x0022B8F2 - 0x0022B9B9 (199 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B8F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B8F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022B8FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B8F7u); } /* indirect call */
    }

loc_0022B8FD: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x37C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x37C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B972; /* je: equal / zero */

loc_0022B90C: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x350) = 1;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x352) = 4;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x354) = edi;
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x358;
    MEM32(eax + 0x35C) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x35C);
    MEM32(eax + 0x358) = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B955; /* jne: not equal / not zero */

loc_0022B94E: ;
    ecx = esi;
    PUSH32(esp, 0x0022B955u); RECOMP_ABI_CALL(0x0022B897u, sub_0022B897); /* call 0x0022B897 */

loc_0022B955: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B95Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B957u); } /* indirect call */
    }

loc_0022B95D: ;
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x350;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x0022B970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B96Au); } /* indirect call */
    }

loc_0022B970: ;
    goto loc_0022B97E;

loc_0022B972: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022B97Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B978u); } /* indirect call */
    }

loc_0022B97E: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022B98D; /* je: equal / zero */

loc_0022B984: ;
    MEM16(0x22276C) = MEM16(0x22276C) + 1;
    _fa = (uint32_t)(MEM16(0x22276C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0022B994;

loc_0022B98D: ;
    MEM16(0x222768) = MEM16(0x222768) + 1;
    _fa = (uint32_t)(MEM16(0x222768)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0022B994: ;
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax));
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x0022B99Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B999u); } /* indirect call */
    }

loc_0022B99F: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(0x222770);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(0x222770) = eax;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022B9B9
 * Original: 0x0022B9B9 - 0x0022BA00 (71 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B9B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B9B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0022B9C6u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_0022B9C6: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0xB));
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    MEM8(esi + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0022B9DF; /* je: equal / zero */

loc_0022B9D6: ;
    ecx = esi;
    PUSH32(esp, 0x0022B9DDu); RECOMP_ABI_CALL(0x0022B897u, sub_0022B897); /* call 0x0022B897 */

loc_0022B9DD: ;
    goto loc_0022B9FB;

loc_0022B9DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022B9FB; /* jne: not equal / not zero */

loc_0022B9E3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0022B9F0u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022B9F0: ;
    ecx = edi;
    PUSH32(esp, 0x0022B9F7u); RECOMP_ABI_CALL(0x002248A8u, sub_002248A8); /* call 0x002248A8 */

loc_0022B9F7: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0022B9FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022BA00
 * Original: 0x0022BA00 - 0x0022BA33 (51 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022BA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022BA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = edx + 0xC;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BA23; /* jge: greater or equal (signed >=) */

loc_0022BA1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0022BA2E;

loc_0022BA23: ;
    if (CMP_NE(_fa, _fb)) goto loc_0022BA2C; /* jne: not equal / not zero */

loc_0022BA25: ;
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022BA2Cu); RECOMP_ABI_CALL(0x0022B8F2u, sub_0022B8F2); /* call 0x0022B8F2 */

loc_0022BA2C: ;
    eax = esi;

loc_0022BA2E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022BA33
 * Original: 0x0022BA33 - 0x0022BA63 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BA33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022BA33: ;
    PUSH32(esp, 4);
    eax = 0x96FBE8;
    POP32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022BA3D: ;
    MEM32(eax + -8) = 0x2820A4;
    MEM32(eax + -4) = ecx;
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022BA3D; /* jne: not equal / not zero */

loc_0022BA62: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022BA63
 * Original: 0x0022BA63 - 0x0022BA93 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BA63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022BA63: ;
    PUSH32(esp, 4);
    eax = 0x96FC58;
    POP32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022BA6D: ;
    MEM32(eax + -8) = 0x2820A4;
    MEM32(eax + -4) = ecx;
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022BA6D; /* jne: not equal / not zero */

loc_0022BA92: ;
    esp += 4; return; /* ret */

}
