/**
 * DOAU1 - Recompiled code chunk 63
 * Functions: 250 (0x001CF98D - 0x001D1712)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CF98D
 * Original: 0x001CF98D - 0x001CF992 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF98D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF98D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF992
 * Original: 0x001CF992 - 0x001CF9D9 (71 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF992(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF992: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x001CF99Eu); RECOMP_ABI_CALL(0x001D2858u, sub_001D2858); /* call 0x001D2858 */

loc_001CF99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF9D5; /* jl: less (signed <) */

loc_001CF9A2: ;
    PUSH32(esp, 0x2000000);
    ecx = esi;
    PUSH32(esp, 0x001CF9AEu); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001CF9AE: ;
    eax = esi + 0xD38;
    MEM32(esi + 0xD3C) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xD40;
    MEM32(esi + 0xD44) = eax;
    MEM32(eax) = eax;
    MEM16(esi + 0xD36) = 0x400;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CF9D5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF9D9
 * Original: 0x001CF9D9 - 0x001CFA0D (52 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF9D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF9D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0xC;
    MEM32(ebp + -8) = edi;

loc_001CF9E7: ;
    esi = MEM32(edi);
    eax = esi;
    eax = eax & MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = esi;
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF9E7; /* jne: not equal / not zero */

loc_001CFA07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CFA3D
 * Original: 0x001CFA3D - 0x001CFA68 (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFA3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFA3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA62; /* je: equal / zero */

loc_001CFA46: ;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001CFA59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFA53u); } /* indirect call */
    }

loc_001CFA59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFA62; /* jne: not equal / not zero */

loc_001CFA5D: ;
    eax = MEM32(ebp + 8);
    goto loc_001CFA64;

loc_001CFA62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CFA64: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFA68
 * Original: 0x001CFA68 - 0x001CFAAB (67 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFA68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CFA68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CFA82u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001CFA82: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -8) = eax;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ebp + -8;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = edx;
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x001CFAA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFA9Bu); } /* indirect call */
    }

loc_001CFAA1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CFABA
 * Original: 0x001CFABA - 0x001CFACB (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFABA(void)
{

loc_001CFABA: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001CFAC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFABDu); } /* indirect call */
    }

loc_001CFAC3: ;
    MEM8(esi) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFE8D
 * Original: 0x001CFE8D - 0x001CFEA9 (28 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFE8D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax + 8) = 0x2D636F73;
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFEA9(); return; } /* je: equal / zero */

loc_001CFEA2: ;
    PUSH32(esp, 0x001CFEA7u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001CFEA7: ;
    g_seh_ebp = ebp; sub_001CFEAF(); return; /* tail jmp 0x001CFEAF */

}

/**
 * sub_001CFEA9
 * Original: 0x001CFEA9 - 0x001CFEAF (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFEA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFEA9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001CFEAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFEA9u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001CFEAF(); return; /* fallthrough 0x001CFEAF */

}

/**
 * sub_001CFEAF
 * Original: 0x001CFEAF - 0x001CFEBA (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFEAF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFEAF: ;
    MEM16(esi + 0xD34) = MEM16(esi + 0xD34) - 1;
    _fa = (uint32_t)(MEM16(esi + 0xD34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFEBA
 * Original: 0x001CFEBA - 0x001CFECB (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFEBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFEBA: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001CFECB(); return; } /* jne: not equal / not zero */

loc_001CFEC3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFEC9u); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

loc_001CFEC9: ;
    g_seh_ebp = ebp; sub_001CFED2(); return; /* tail jmp 0x001CFED2 */

}

/**
 * sub_001CFECB
 * Original: 0x001CFECB - 0x001CFED2 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFECB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFECB: ;
    MEM32(eax + 0x10) = 0x1D816B;

    g_seh_ebp = ebp; sub_001CFED2(); return; /* fallthrough 0x001CFED2 */

}

/**
 * sub_001CFED2
 * Original: 0x001CFED2 - 0x001CFED5 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFED2(void)
{

loc_001CFED2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFED5
 * Original: 0x001CFED5 - 0x001CFEE3 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFED5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFED5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = ebx + 0x24;
    g_seh_ebp = ebp; sub_001CFEF7(); return; /* tail jmp 0x001CFEF7 */

}

/**
 * sub_001CFEE3
 * Original: 0x001CFEE3 - 0x001CFEF7 (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFEE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFEE3: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CFEF7u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

    g_seh_ebp = ebp; sub_001CFEF7(); return; /* fallthrough 0x001CFEF7 */

}

/**
 * sub_001CFEF7
 * Original: 0x001CFEF7 - 0x001CFF05 (14 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFEF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFEF7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFEE3(); return; } /* jne: not equal / not zero */

loc_001CFEFB: ;
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFF05
 * Original: 0x001CFF05 - 0x001CFF25 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF05: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFF16; /* je: equal / zero */

loc_001CFF0C: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFF25(); return; } /* ja: above (unsigned >) */

loc_001CFF16: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001CFF20u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CFF20: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001CFF9E(); return; /* tail jmp 0x001CFF9E */

}

/**
 * sub_001CFF25
 * Original: 0x001CFF25 - 0x001CFF3A (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF25: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001CFF2Fu); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001CFF2F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFF3A(); return; } /* jne: not equal / not zero */

loc_001CFF35: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001CFF9D(); return; /* tail jmp 0x001CFF9D */

}

/**
 * sub_001CFF35
 * Original: 0x001CFF35 - 0x001CFF3A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF35: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001CFF9D(); return; /* tail jmp 0x001CFF9D */

}

/**
 * sub_001CFF3A
 * Original: 0x001CFF3A - 0x001CFF4A (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF3A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001CFF4E(); return; } /* je: equal / zero */

loc_001CFF43: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001CFF4A(); return; } /* je: equal / zero */

loc_001CFF46: ;
    PUSH32(esp, 0x18);
    g_seh_ebp = ebp; sub_001CFF50(); return; /* tail jmp 0x001CFF50 */

}

/**
 * sub_001CFF4A
 * Original: 0x001CFF4A - 0x001CFF4E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF4A: ;
    PUSH32(esp, 8);
    g_seh_ebp = ebp; sub_001CFF50(); return; /* tail jmp 0x001CFF50 */

}

/**
 * sub_001CFF4E
 * Original: 0x001CFF4E - 0x001CFF50 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF4E: ;
    PUSH32(esp, 0x10);

    g_seh_ebp = ebp; sub_001CFF50(); return; /* fallthrough 0x001CFF50 */

}

/**
 * sub_001CFF50
 * Original: 0x001CFF50 - 0x001CFF63 (19 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF50: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFF63(); return; } /* jne: not equal / not zero */

loc_001CFF58: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001CFF61u); RECOMP_ABI_CALL(0x001E27A5u, sub_001E27A5); /* call 0x001E27A5 */

loc_001CFF61: ;
    g_seh_ebp = ebp; sub_001CFF79(); return; /* tail jmp 0x001CFF79 */

}

/**
 * sub_001CFF63
 * Original: 0x001CFF63 - 0x001CFF6E (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFF6E(); return; } /* jne: not equal / not zero */

loc_001CFF67: ;
    eax = 0x2749;
    g_seh_ebp = ebp; sub_001CFF88(); return; /* tail jmp 0x001CFF88 */

}

/**
 * sub_001CFF6E
 * Original: 0x001CFF6E - 0x001CFF79 (11 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001CFF79u); RECOMP_ABI_CALL(0x001E18F7u, sub_001E18F7); /* call 0x001E18F7 */

    g_seh_ebp = ebp; sub_001CFF79(); return; /* fallthrough 0x001CFF79 */

}

/**
 * sub_001CFF79
 * Original: 0x001CFF79 - 0x001CFF81 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001CFF81(); return; } /* jl: less (signed <) */

loc_001CFF7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001CFF88(); return; /* tail jmp 0x001CFF88 */

}

/**
 * sub_001CFF81
 * Original: 0x001CFF81 - 0x001CFF88 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001CFF88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFF82u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001CFF88(); return; /* fallthrough 0x001CFF88 */

}

/**
 * sub_001CFF88
 * Original: 0x001CFF88 - 0x001CFF9B (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFF9B(); return; } /* je: equal / zero */

loc_001CFF93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFF99u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CFF99: ;
    g_seh_ebp = ebp; sub_001CFF35(); return; /* tail jmp 0x001CFF35 */

}

/**
 * sub_001CFF9B
 * Original: 0x001CFF9B - 0x001CFF9D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CFF9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CFF9D(); return; /* fallthrough 0x001CFF9D */

}

/**
 * sub_001CFF9D
 * Original: 0x001CFF9D - 0x001CFF9E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF9D: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001CFF9E(); return; /* fallthrough 0x001CFF9E */

}

/**
 * sub_001CFF9E
 * Original: 0x001CFF9E - 0x001CFFA2 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF9E(void)
{

loc_001CFF9E: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CFFA2
 * Original: 0x001CFFA2 - 0x001CFFC7 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFFA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFFA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFB5; /* je: equal / zero */

loc_001CFFAC: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), LO16(ebx) (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFFC7(); return; } /* ja: above (unsigned >) */

loc_001CFFB5: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CFFBFu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CFFBF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0066(); return; /* tail jmp 0x001D0066 */

}

/**
 * sub_001CFFC7
 * Original: 0x001CFFC7 - 0x001CFFDE (23 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001CFFD0u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001CFFD0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFFDE(); return; } /* jne: not equal / not zero */

loc_001CFFD6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0065(); return; /* tail jmp 0x001D0065 */

}

/**
 * sub_001CFFD6
 * Original: 0x001CFFD6 - 0x001CFFDE (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFD6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0065(); return; /* tail jmp 0x001D0065 */

}

/**
 * sub_001CFFDE
 * Original: 0x001CFFDE - 0x001CFFF7 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFDE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8004667Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x8004667Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D002E(); return; } /* je: equal / zero */

loc_001CFFE7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4004667F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x4004667F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CFFF7(); return; } /* je: equal / zero */

loc_001CFFF0: ;
    ebx = 0x273A;
    g_seh_ebp = ebp; sub_001D004D(); return; /* tail jmp 0x001D004D */

}

/**
 * sub_001CFFF0
 * Original: 0x001CFFF0 - 0x001CFFF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFF0: ;
    ebx = 0x273A;
    g_seh_ebp = ebp; sub_001D004D(); return; /* tail jmp 0x001D004D */

}

/**
 * sub_001CFFF7
 * Original: 0x001CFFF7 - 0x001D0011 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001CFFFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFFF8u); } /* indirect call */
    }

loc_001CFFFE: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D001B(); return; } /* jne: not equal / not zero */

loc_001D0004: ;
    edx = esi + 0x24;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0011(); return; } /* jne: not equal / not zero */

loc_001D000D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D001E(); return; /* tail jmp 0x001D001E */

}

/**
 * sub_001CFFFE
 * Original: 0x001CFFFE - 0x001D0011 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFFE: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D001B(); return; } /* jne: not equal / not zero */

loc_001D0004: ;
    edx = esi + 0x24;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0011(); return; } /* jne: not equal / not zero */

loc_001D000D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D001E(); return; /* tail jmp 0x001D001E */

}

/**
 * sub_001D0011
 * Original: 0x001D0011 - 0x001D001B (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0011(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0011: ;
    edx = MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D001E(); return; } /* jne: not equal / not zero */

loc_001D0018: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D001E(); return; /* tail jmp 0x001D001E */

}

/**
 * sub_001D0014
 * Original: 0x001D0014 - 0x001D001B (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0014: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D001E(); return; } /* jne: not equal / not zero */

loc_001D0018: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D001E(); return; /* tail jmp 0x001D001E */

}

/**
 * sub_001D001B
 * Original: 0x001D001B - 0x001D001E (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D001B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D001B: ;
    edx = MEM32(esi + 0x2C);

    g_seh_ebp = ebp; sub_001D001E(); return; /* fallthrough 0x001D001E */

}

/**
 * sub_001D001C
 * Original: 0x001D001C - 0x001D002E (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D001C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D001C: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x8B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x8B));
    SET_LO8(eax, LO8(eax) - 0x8B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(MEM8(ecx + -3634671)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx + -3634671) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ecx + -3634671)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x22BC50) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001D004D(); return; /* tail jmp 0x001D004D */

}

/**
 * sub_001D001E
 * Original: 0x001D001E - 0x001D002E (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D001E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D001E: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D002Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0025u); } /* indirect call */
    }

loc_001D002B: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001D004D(); return; /* tail jmp 0x001D004D */

}

/**
 * sub_001D002E
 * Original: 0x001D002E - 0x001D004D (31 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D002E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D002E: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = 0x40000;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFBFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D004Du); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

    g_seh_ebp = ebp; sub_001D004D(); return; /* fallthrough 0x001D004D */

}

/**
 * sub_001D004D
 * Original: 0x001D004D - 0x001D0063 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D004D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D004D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0063(); return; } /* je: equal / zero */

loc_001D0058: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D005Eu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D005E: ;
    g_seh_ebp = ebp; sub_001CFFD6(); return; /* tail jmp 0x001CFFD6 */

}

/**
 * sub_001D0063
 * Original: 0x001D0063 - 0x001D0065 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D0063(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0063: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D0065(); return; /* fallthrough 0x001D0065 */

}

/**
 * sub_001D0065
 * Original: 0x001D0065 - 0x001D0066 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0065(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0065: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D0066(); return; /* fallthrough 0x001D0066 */

}

/**
 * sub_001D0066
 * Original: 0x001D0066 - 0x001D006B (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0066(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0066: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D006B
 * Original: 0x001D006B - 0x001D007F (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D006B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D006B: ;
    eax = ZX8(MEM8(ecx + 0x32));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D007F(); return; } /* jle: less or equal (signed <=) */

loc_001D007B: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001D0086(); return; /* tail jmp 0x001D0086 */

}

/**
 * sub_001D007F
 * Original: 0x001D007F - 0x001D0086 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D007F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D007F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0086(); return; } /* jg: greater (signed >) */

loc_001D0083: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D0086(); return; /* fallthrough 0x001D0086 */

}

/**
 * sub_001D0086
 * Original: 0x001D0086 - 0x001D0099 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0086(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0086: ;
    eax = ZX8(MEM8(ecx + 0x33));
    edx = MEM32(esp + 0x10);
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0099(); return; } /* jle: less or equal (signed <=) */

loc_001D0095: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001D009F(); return; /* tail jmp 0x001D009F */

}

/**
 * sub_001D0099
 * Original: 0x001D0099 - 0x001D009F (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0099(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0099: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D009F(); return; } /* jg: greater (signed >) */

loc_001D009D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D009F(); return; /* fallthrough 0x001D009F */

}

/**
 * sub_001D009F
 * Original: 0x001D009F - 0x001D00C0 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D009F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D009F: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xC), 2 (8-bit) */
    MEM32(ecx + 0x58) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D00C0(); return; } /* je: equal / zero */

loc_001D00AE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x7C), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D00C0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D00B4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x5C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D00C0(); return; } /* jge: greater or equal (signed >=) */

loc_001D00B9: ;
    eax = 0x80072726u;
    g_seh_ebp = ebp; sub_001D00C3(); return; /* tail jmp 0x001D00C3 */

}

/**
 * sub_001D00C0
 * Original: 0x001D00C0 - 0x001D00C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D00C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D00C0: ;
    MEM32(ecx + 0x5C) = edx;

    g_seh_ebp = ebp; sub_001D00C3(); return; /* fallthrough 0x001D00C3 */

}

/**
 * sub_001D00C3
 * Original: 0x001D00C3 - 0x001D00C7 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D00C3(void)
{

loc_001D00C3: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D00C7
 * Original: 0x001D00C7 - 0x001D0253 (396 bytes, 139 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D00C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_001D01AF = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D00C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D012F; /* je: equal / zero */

loc_001D00CF: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001D012F; /* jbe: below or equal (unsigned <=) */

loc_001D00D9: ;
    PUSH32(esp, MEM32(ebp + 8));
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D00E5u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D00E5: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0248; /* je: equal / zero */

loc_001D00EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    ecx = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0204; /* je: equal / zero */

loc_001D011A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0139; /* je: equal / zero */

loc_001D0123: ;
    MEM32(ebp + -4) = 0x2726;
    goto loc_001D0230;

loc_001D012F: ;
    PUSH32(esp, 0x276D);
    goto loc_001D0243;

loc_001D0139: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001D01CD; /* jg: greater (signed >) */

loc_001D0149: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001D01B4; /* je: equal / zero */

loc_001D014B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF7Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D01A0; /* je: equal / zero */

loc_001D0152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0198; /* je: equal / zero */

loc_001D0157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0187; /* je: equal / zero */

loc_001D015C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D017C; /* je: equal / zero */

loc_001D0160: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D0211; /* jne: not equal / not zero */

loc_001D0169: ;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D0211; /* jne: not equal / not zero */

loc_001D0174: ;
    if (0x11) _cf = (int)(((eax) >> ((0x11) - 1)) & 1);
    eax = eax >> 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001D021D;

loc_001D017C: ;
    eax = MEM32(edx + 0xC);
    if (0x13) _cf = (int)(((eax) >> ((0x13) - 1)) & 1);
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001D021D;

loc_001D0187: ;
    _fa = (uint32_t)(MEM8(edx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xC), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0211; /* je: equal / zero */

loc_001D0191: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x7C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    _jf_001D01AF = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_001D01AF;

loc_001D0198: ;
    eax = MEM32(edx + 0xC);
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001D021D;

loc_001D01A0: ;
    _fa = (uint32_t)(MEM8(edx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xC), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0211; /* je: equal / zero */

loc_001D01A6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x80), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    _jf_001D01AF = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_001D01AF: ;
    SET_LO8(eax, _jf_001D01AF /* sete */);
    goto loc_001D021F;

loc_001D01B4: ;
    _fa = (uint32_t)(MEM8(edx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xC), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0211; /* je: equal / zero */

loc_001D01BA: ;
    eax = MEM32(edx + 0x80);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    MEM32(esi) = 4;
    goto loc_001D0230;

loc_001D01CD: ;
    _fb = (uint32_t)(0x1001) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1001));
    eax = eax - 0x1001;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D01FF; /* je: equal / zero */

loc_001D01D4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D01FA; /* je: equal / zero */

loc_001D01D7: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D01F5; /* je: equal / zero */

loc_001D01DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D01F0; /* je: equal / zero */

loc_001D01DF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0211; /* jne: not equal / not zero */

loc_001D01E3: ;
    eax = MEM32(edx + 0xC);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001D021F;

loc_001D01F0: ;
    eax = MEM32(edx + 0x54);
    goto loc_001D021F;

loc_001D01F5: ;
    eax = MEM32(edx + 0x50);
    goto loc_001D021F;

loc_001D01FA: ;
    eax = MEM32(edx + 0x5C);
    goto loc_001D021F;

loc_001D01FF: ;
    eax = MEM32(edx + 0x58);
    goto loc_001D021F;

loc_001D0204: ;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0211; /* je: equal / zero */

loc_001D020B: ;
    ecx = MEM32(ebp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D021A; /* je: equal / zero */

loc_001D0211: ;
    MEM32(ebp + -4) = 0x273A;
    goto loc_001D0230;

loc_001D021A: ;
    if (0x15) _cf = (int)(((eax) >> ((0x15) - 1)) & 1);
    eax = eax >> 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001D021D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D021F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(ebp + 0x14);
    if (CMP_AE(_fa, _fb)) goto loc_001D022C; /* jae: above or equal (unsigned >=) */

loc_001D0226: ;
    MEM8(ecx) = LO8(eax);
    MEM32(esi) = ebx;
    goto loc_001D0230;

loc_001D022C: ;
    MEM32(ecx) = eax;
    MEM32(esi) = edi;

loc_001D0230: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 8) = 0x2B434F53;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D024D; /* je: equal / zero */

loc_001D0240: ;
    PUSH32(esp, MEM32(ebp + -4));

loc_001D0243: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0248u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0248: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D024F;

loc_001D024D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D024F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D0253
 * Original: 0x001D0253 - 0x001D02CA (119 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D0253(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0253: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0261; /* je: equal / zero */

loc_001D0257: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D0268; /* ja: above (unsigned >) */

loc_001D0261: ;
    PUSH32(esp, 0x276D);
    goto loc_001D02BB;

loc_001D0268: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x001D0271u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0271: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D02C0; /* je: equal / zero */

loc_001D0277: ;
    _fa = (uint32_t)(MEM8(edx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xC), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D0284; /* jne: not equal / not zero */

loc_001D027D: ;
    eax = 0x2726;
    goto loc_001D02AF;

loc_001D0284: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(ecx) = 2;
    SET_LO16(eax, MEM16(edx + 0x4A));
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 2) = LO16(eax);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001D02AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D02C5; /* je: equal / zero */

loc_001D02BA: ;
    PUSH32(esp, eax);

loc_001D02BB: ;
    PUSH32(esp, 0x001D02C0u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D02C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D02C7;

loc_001D02C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D02C7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D02CA
 * Original: 0x001D02CA - 0x001D0342 (120 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D02CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D02CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D02D8; /* je: equal / zero */

loc_001D02CE: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D02DF; /* ja: above (unsigned >) */

loc_001D02D8: ;
    PUSH32(esp, 0x276D);
    goto loc_001D0333;

loc_001D02DF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x001D02E8u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D02E8: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0338; /* je: equal / zero */

loc_001D02EE: ;
    _fa = (uint32_t)(MEM8(edx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xC), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D02FB; /* jne: not equal / not zero */

loc_001D02F4: ;
    eax = 0x2749;
    goto loc_001D0327;

loc_001D02FB: ;
    ecx = MEM32(esp + 8);
    MEM16(ecx) = 2;
    SET_LO16(eax, MEM16(edx + 0x48));
    MEM16(ecx + 2) = LO16(eax);
    eax = MEM32(edx + 0x44);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001D0327: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D033D; /* je: equal / zero */

loc_001D0332: ;
    PUSH32(esp, eax);

loc_001D0333: ;
    PUSH32(esp, 0x001D0338u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0338: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D033F;

loc_001D033D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D033F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0342
 * Original: 0x001D0342 - 0x001D0357 (21 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0342(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0342: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0357(); return; } /* je: equal / zero */

loc_001D0353: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0366(); return; /* tail jmp 0x001D0366 */

}

/**
 * sub_001D0357
 * Original: 0x001D0357 - 0x001D0366 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0357(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0357: ;
    SET_LO8(eax, MEM8(edi + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE8 (8-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0366(); return; } /* jb: below (unsigned <) */

loc_001D0361: ;
    esi = 0xE8;

    g_seh_ebp = ebp; sub_001D0366(); return; /* fallthrough 0x001D0366 */

}

/**
 * sub_001D0366
 * Original: 0x001D0366 - 0x001D0443 (221 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0366: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D036Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0366u); } /* indirect call */
    }

loc_001D036C: ;
    MEM8(ebp + -8) = LO8(eax);
    edx = edi + 0xD38;
    ecx = MEM32(edx);
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D0381: ;
    ecx = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D03B9; /* jle: less or equal (signed <=) */

loc_001D038B: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(edi + 0xD36));
    SET_LO16(ecx, LO16(esi));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    MEM16(ebp + 0xC) = LO16(edx);
    edx = esi + 1;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x4E7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x4E7 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(edi + 0xD36) = LO16(edx);
    if (CMP_BE(_fa, _fb)) goto loc_001D03B9; /* jbe: below or equal (unsigned <=) */

loc_001D03B0: ;
    MEM16(edi + 0xD36) = 0x400;

loc_001D03B9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0443(); return; } /* je: equal / zero */

loc_001D03C3: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0407; /* je: equal / zero */

loc_001D03CB: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    if (1) _cf = (int)(((ebx) >> ((1) - 1)) & 1);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ebx = ~ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D0407; /* jne: not equal / not zero */

loc_001D03E2: ;
    SET_LO16(ecx, MEM16(esi + 0x4A));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebp + 0xC) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D0407; /* jne: not equal / not zero */

loc_001D03EC: ;
    ecx = 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D041D; /* jne: not equal / not zero */

loc_001D03F5: ;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D041D; /* jne: not equal / not zero */

loc_001D03FF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x80000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D041D; /* je: equal / zero */

loc_001D0407: ;
    esi = MEM32(esi);
    edx = esi;
    ecx = edi + 0xD38;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edx;
    if ((_fa != 0)) goto loc_001D03C3; /* jne: not equal / not zero */

loc_001D041D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0443(); return; } /* je: equal / zero */

loc_001D0421: ;
    esi = MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_001D0381; /* jg: greater (signed >) */

loc_001D042C: ;
    esi = 0x80072740u;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D043Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0434u); } /* indirect call */
    }

loc_001D043A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0431
 * Original: 0x001D0431 - 0x001D0443 (18 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0431(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0431: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D043Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0434u); } /* indirect call */
    }

loc_001D043A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0443
 * Original: 0x001D0443 - 0x001D045B (24 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0443(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0443: ;
    ecx = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(ebp + 0xC));
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM16(ecx + 0x4A) = LO16(eax);
    PUSH32(esp, 0x001D0457u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D0457: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0431(); return; /* tail jmp 0x001D0431 */

}

/**
 * sub_001D045B
 * Original: 0x001D045B - 0x001D04DE (131 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D045B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D045B: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D046C; /* je: equal / zero */

loc_001D0462: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D047B; /* ja: above (unsigned >) */

loc_001D046C: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001D0476u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0476: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D04DA;

loc_001D047B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001D0485u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0485: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0490; /* jne: not equal / not zero */

loc_001D048B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D04D9;

loc_001D0490: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D049E; /* je: equal / zero */

loc_001D0497: ;
    eax = 0x2748;
    goto loc_001D04C4;

loc_001D049E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D04A9; /* jne: not equal / not zero */

loc_001D04A2: ;
    eax = 0x2726;
    goto loc_001D04C4;

loc_001D04A9: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D04B5u); RECOMP_ABI_CALL(0x001E0A79u, sub_001E0A79); /* call 0x001E0A79 */

loc_001D04B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D04BD; /* jl: less (signed <) */

loc_001D04B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D04C4;

loc_001D04BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D04C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D04BEu); } /* indirect call */
    }

loc_001D04C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D04D7; /* je: equal / zero */

loc_001D04CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D04D5u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D04D5: ;
    goto loc_001D048B;

loc_001D04D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D04D9: ;
    POP32(esp, esi);

loc_001D04DA: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D04DE
 * Original: 0x001D04DE - 0x001D04F7 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D04DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D04DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D04F7(); return; } /* je: equal / zero */

loc_001D04EB: ;
    eax = MEM32(edx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_001D04FE(); return; /* tail jmp 0x001D04FE */

}

/**
 * sub_001D04F7
 * Original: 0x001D04F7 - 0x001D04FE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D04F7: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_001D04FE(); return; /* fallthrough 0x001D04FE */

}

/**
 * sub_001D04FE
 * Original: 0x001D04FE - 0x001D052D (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D04FE: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D05B3(); return; } /* jle: less or equal (signed <=) */

loc_001D050D: ;
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + 0x10) = eax;
    ecx = edx + 4;
    eax = eax + eax * 4;
    MEM32(ebp + 0xC) = 0xFFFFFFF8u;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edi;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ecx;
    esi = edi + eax * 4 + 8;

    g_seh_ebp = ebp; sub_001D052D(); return; /* fallthrough 0x001D052D */

}

/**
 * sub_001D052D
 * Original: 0x001D052D - 0x001D057F (82 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D052D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D052D: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + -4) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esi) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    MEM32(esi + -8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D055D; /* jle: less or equal (signed <=) */

loc_001D0549: ;
    MEM32(ebp + -4) = edi;

loc_001D054C: ;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D055D; /* je: equal / zero */

loc_001D0553: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x14;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D054C; /* jl: less (signed <) */

loc_001D055D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D057F(); return; } /* jne: not equal / not zero */

loc_001D0562: ;
    ebx = ecx + edi;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    MEM32(ebx + 0x10) = ecx;
    PUSH32(esp, 0x001D0571u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0571: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0597(); return; } /* jne: not equal / not zero */

loc_001D0578: ;
    PUSH32(esp, 0x001D057Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001D057D: ;
    g_seh_ebp = ebp; sub_001D05B5(); return; /* tail jmp 0x001D05B5 */

}

/**
 * sub_001D057F
 * Original: 0x001D057F - 0x001D0597 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D057F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D057F: ;
    eax = edx + edx * 4;
    edx = MEM32(ebp + 0x14);
    eax = edi + eax * 4;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;

    g_seh_ebp = ebp; sub_001D0597(); return; /* fallthrough 0x001D0597 */

}

/**
 * sub_001D0597
 * Original: 0x001D0597 - 0x001D05B3 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0597(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0597: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D052D(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001D05B3(); return; /* fallthrough 0x001D05B3 */

}

/**
 * sub_001D05B3
 * Original: 0x001D05B3 - 0x001D05B5 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D05B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D05B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D05B5(); return; /* fallthrough 0x001D05B5 */

}

/**
 * sub_001D05B5
 * Original: 0x001D05B5 - 0x001D05BC (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D05B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D05B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D05BC
 * Original: 0x001D05BC - 0x001D05FA (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D05BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D05BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D05C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D05C3u); } /* indirect call */
    }

loc_001D05C9: ;
    edi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D066B(); return; } /* je: equal / zero */

loc_001D05DA: ;
    _fa = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x40), 0 (32-bit) */
    ebx = 0x100;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D05FA(); return; } /* jge: greater or equal (signed >=) */

loc_001D05E5: ;
    ecx = 0x10000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D05F3; /* jne: not equal / not zero */

loc_001D05EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D05FA(); return; } /* jne: not equal / not zero */

loc_001D05F3: ;
    esi = ecx;
    g_seh_ebp = ebp; sub_001D06AF(); return; /* tail jmp 0x001D06AF */

}

/**
 * sub_001D05FA
 * Original: 0x001D05FA - 0x001D066B (113 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D05FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D05FA: ;
    ecx = edi;
    PUSH32(esp, 0x001D0601u); RECOMP_ABI_CALL(0x001E0DA1u, sub_001E0DA1); /* call 0x001E0DA1 */

loc_001D0601: ;
    esi = MEM32(edi + 0x2C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + 0x7C)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x7C), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF7800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8800)) >> 32) & 1);
    ecx = ecx + 0x8800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(edi + 0xC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D068C(); return; } /* je: equal / zero */

loc_001D063B: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x58) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D0649; /* jae: above or equal (unsigned >=) */

loc_001D0643: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D0649: ;
    eax = 0x4000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D068C(); return; } /* je: equal / zero */

loc_001D0653: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D068C(); return; } /* jne: not equal / not zero */

loc_001D0657: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D068C(); return; } /* jl: less (signed <) */

loc_001D065F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x001D0669u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D0669: ;
    g_seh_ebp = ebp; sub_001D068C(); return; /* tail jmp 0x001D068C */

}

/**
 * sub_001D066B
 * Original: 0x001D066B - 0x001D06AF (68 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D066B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D066B: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x58) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi + 0x24;
    ecx = MEM32(eax);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D06AF(); return; } /* jne: not equal / not zero */

loc_001D0693: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D06AF(); return; } /* je: equal / zero */

loc_001D0699: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    PUSH32(esp, 0x001D06ABu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D06AB: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D06AF(); return; /* fallthrough 0x001D06AF */

}

/**
 * sub_001D068C
 * Original: 0x001D068C - 0x001D06AF (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D068C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D068C: ;
    eax = MEM32(ebp + 0xC);
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D06AF(); return; } /* jne: not equal / not zero */

loc_001D0693: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D06AF(); return; } /* je: equal / zero */

loc_001D0699: ;
    eax = eax & 0x1F800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    PUSH32(esp, 0x001D06ABu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D06AB: ;
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D06AF(); return; /* fallthrough 0x001D06AF */

}

/**
 * sub_001D06AF
 * Original: 0x001D06AF - 0x001D06C1 (18 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D06AF: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D06B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D06B2u); } /* indirect call */
    }

loc_001D06B8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D06C1
 * Original: 0x001D06C1 - 0x001D06D3 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D06C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D06D3(); return; } /* je: equal / zero */

loc_001D06CC: ;
    eax = 0x80072733u;
    g_seh_ebp = ebp; sub_001D0732(); return; /* tail jmp 0x001D0732 */

}

/**
 * sub_001D06D3
 * Original: 0x001D06D3 - 0x001D06E5 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D06D3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D06E5(); return; } /* jne: not equal / not zero */

loc_001D06DE: ;
    eax = 0x80072733u;
    g_seh_ebp = ebp; sub_001D0731(); return; /* tail jmp 0x001D0731 */

}

/**
 * sub_001D06E5
 * Original: 0x001D06E5 - 0x001D06F0 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D06E5: ;
    ecx = ebx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D06F0(); return; } /* jne: not equal / not zero */

loc_001D06EC: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001D0711(); return; /* tail jmp 0x001D0711 */

}

/**
 * sub_001D06F0
 * Original: 0x001D06F0 - 0x001D0708 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D06F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6354454E);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D06FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D06F7u); } /* indirect call */
    }

loc_001D06FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0708(); return; } /* jne: not equal / not zero */

loc_001D0701: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_001D0731(); return; /* tail jmp 0x001D0731 */

}

/**
 * sub_001D0708
 * Original: 0x001D0708 - 0x001D0711 (9 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0708: ;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
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
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D0711(); return; /* fallthrough 0x001D0711 */

}

/**
 * sub_001D0711
 * Original: 0x001D0711 - 0x001D0731 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0711(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0711: ;
    MEM32(ebx + 0x20) = eax;
    ecx = eax + 4;
    edx = MEM32(ecx);
    MEM32(edx + 8) = MEM32(edx + 8) & 0;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    eax = 0x800703E5u;
    MEM32(ecx + 0xC) = eax;

    g_seh_ebp = ebp; sub_001D0731(); return; /* fallthrough 0x001D0731 */

}

/**
 * sub_001D0731
 * Original: 0x001D0731 - 0x001D0732 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0731(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0731: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D0732(); return; /* fallthrough 0x001D0732 */

}

/**
 * sub_001D0732
 * Original: 0x001D0732 - 0x001D0736 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0732(void)
{

loc_001D0732: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0736
 * Original: 0x001D0736 - 0x001D0757 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0736(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0736: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D0741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D073Bu); } /* indirect call */
    }

loc_001D0741: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0757(); return; } /* je: equal / zero */

loc_001D074D: ;
    esi = 0x80072733u;
    g_seh_ebp = ebp; sub_001D07F2(); return; /* tail jmp 0x001D07F2 */

}

/**
 * sub_001D0757
 * Original: 0x001D0757 - 0x001D0766 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0757(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0757: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0766(); return; } /* jae: above or equal (unsigned >=) */

loc_001D075F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D07F2(); return; /* tail jmp 0x001D07F2 */

}

/**
 * sub_001D0766
 * Original: 0x001D0766 - 0x001D0792 (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0766: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0xC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx * 8 + 0x18;
    PUSH32(esp, 0x6454454E);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D0787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0781u); } /* indirect call */
    }

loc_001D0787: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0792(); return; } /* jne: not equal / not zero */

loc_001D078B: ;
    esi = 0x80072747u;
    g_seh_ebp = ebp; sub_001D07F1(); return; /* tail jmp 0x001D07F1 */

}

/**
 * sub_001D0792
 * Original: 0x001D0792 - 0x001D07F1 (95 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0792(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0792: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = ebx;
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
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), edx (32-bit) */
    edi = eax + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_001D07B9; /* je: equal / zero */

loc_001D07A9: ;
    MEM32(eax + 0x14) = edi;
    esi = MEM32(ebx + 0x14);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D07B9: ;
    MEM32(eax + 8) = edi;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 8);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = eax + 4;
    esi = MEM32(ecx);
    MEM32(esi + 8) = edx;
    esi = MEM32(ecx);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx);
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    eax = 0x800703E5u;
    esi = eax;
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D07F1(); return; /* fallthrough 0x001D07F1 */

}

/**
 * sub_001D07F1
 * Original: 0x001D07F1 - 0x001D07F2 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D07F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D07F1: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D07F2(); return; /* fallthrough 0x001D07F2 */

}

/**
 * sub_001D07F2
 * Original: 0x001D07F2 - 0x001D0802 (16 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D07F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D07F2: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D07FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D07F5u); } /* indirect call */
    }

loc_001D07FB: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0802
 * Original: 0x001D0802 - 0x001D0811 (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0802(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0802: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0812(); return; /* tail jmp 0x001D0812 */

}

/**
 * sub_001D0811
 * Original: 0x001D0811 - 0x001D0812 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0811(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0811: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D0812(); return; /* fallthrough 0x001D0812 */

}

/**
 * sub_001D0812
 * Original: 0x001D0812 - 0x001D085E (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0812(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0812: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0811(); return; } /* je: equal / zero */

loc_001D0817: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08E0(); return; } /* jae: above or equal (unsigned >=) */

loc_001D0820: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08EA(); return; } /* je: equal / zero */

loc_001D082A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08A7(); return; } /* jne: not equal / not zero */

loc_001D0831: ;
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D083E; /* je: equal / zero */

loc_001D0839: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x58 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0891(); return; } /* jne: not equal / not zero */

loc_001D083E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D085E(); return; } /* jb: below (unsigned <) */

loc_001D0849: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D085E(); return; } /* ja: above (unsigned >) */

loc_001D084E: ;
    _fb = (uint32_t)(0xFFFFFFD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ecx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D0888(); return; /* tail jmp 0x001D0888 */

}

/**
 * sub_001D0842
 * Original: 0x001D0842 - 0x001D085E (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0842(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0842: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D085E(); return; } /* jb: below (unsigned <) */

loc_001D0849: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D085E(); return; } /* ja: above (unsigned >) */

loc_001D084E: ;
    _fb = (uint32_t)(0xFFFFFFD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ecx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D0888(); return; /* tail jmp 0x001D0888 */

}

/**
 * sub_001D085E
 * Original: 0x001D085E - 0x001D0874 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D085E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D085E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0874(); return; } /* jb: below (unsigned <) */

loc_001D0863: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x66 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0874(); return; } /* ja: above (unsigned >) */

loc_001D0868: ;
    ecx = ZX8(LO8(ecx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + ecx + -87;
    g_seh_ebp = ebp; sub_001D0888(); return; /* tail jmp 0x001D0888 */

}

/**
 * sub_001D086B
 * Original: 0x001D086B - 0x001D0874 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D086B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D086B: ;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + ecx + -87;
    g_seh_ebp = ebp; sub_001D0888(); return; /* tail jmp 0x001D0888 */

}

/**
 * sub_001D0874
 * Original: 0x001D0874 - 0x001D0888 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0874(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0874: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D088B(); return; } /* jb: below (unsigned <) */

loc_001D0879: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x46 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D088B(); return; } /* ja: above (unsigned >) */

loc_001D087E: ;
    ecx = ZX8(LO8(ecx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + ecx + -55;

    g_seh_ebp = ebp; sub_001D0888(); return; /* fallthrough 0x001D0888 */

}

/**
 * sub_001D0888
 * Original: 0x001D0888 - 0x001D088B (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0888(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0888: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D0842(); return; /* tail jmp 0x001D0842 */

}

/**
 * sub_001D088B
 * Original: 0x001D088B - 0x001D0891 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D088B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D088B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08E5(); return; } /* je: equal / zero */

loc_001D088F: ;
    g_seh_ebp = ebp; sub_001D08CB(); return; /* tail jmp 0x001D08CB */

}

/**
 * sub_001D0891
 * Original: 0x001D0891 - 0x001D08A7 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0891(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0891: ;
    ecx = ZX8(LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx + esi * 8 + -48;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08CB(); return; } /* jb: below (unsigned <) */

loc_001D08A0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x37) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x37 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D0891; /* jbe: below or equal (unsigned <=) */

loc_001D08A5: ;
    g_seh_ebp = ebp; sub_001D08CB(); return; /* tail jmp 0x001D08CB */

}

/**
 * sub_001D08A7
 * Original: 0x001D08A7 - 0x001D08CA (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08A7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x31 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08E0(); return; } /* jb: below (unsigned <) */

loc_001D08AC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08E0(); return; } /* ja: above (unsigned >) */

loc_001D08B1: ;
    ecx = ZX8(LO8(ecx));
    edx = esi + esi * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx + edx * 2 + -48;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08CB(); return; } /* jb: below (unsigned <) */

loc_001D08C3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D08B1; /* jbe: below or equal (unsigned <=) */

loc_001D08C8: ;
    g_seh_ebp = ebp; sub_001D08CB(); return; /* tail jmp 0x001D08CB */

}

/**
 * sub_001D08CA
 * Original: 0x001D08CA - 0x001D08CB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08CA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D08CB(); return; /* fallthrough 0x001D08CB */

}

/**
 * sub_001D08CB
 * Original: 0x001D08CB - 0x001D08E0 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08CB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08CA(); return; } /* je: equal / zero */

loc_001D08D0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D08D6; /* jne: not equal / not zero */

loc_001D08D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D08D6: ;
    MEM32(ebp + edi * 4 + -16) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D0812(); return; /* tail jmp 0x001D0812 */

}

/**
 * sub_001D08D0
 * Original: 0x001D08D0 - 0x001D08E0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08D0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D08D6; /* jne: not equal / not zero */

loc_001D08D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D08D6: ;
    MEM32(ebp + edi * 4 + -16) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D0812(); return; /* tail jmp 0x001D0812 */

}

/**
 * sub_001D08E0
 * Original: 0x001D08E0 - 0x001D08E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08E0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D08EA(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D08E5(); return; /* fallthrough 0x001D08E5 */

}

/**
 * sub_001D08E5
 * Original: 0x001D08E5 - 0x001D08EA (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08E5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0959(); return; /* tail jmp 0x001D0959 */

}

/**
 * sub_001D08EA
 * Original: 0x001D08EA - 0x001D08FC (18 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08EA: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0954(); return; } /* je: equal / zero */

loc_001D08EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0944(); return; } /* je: equal / zero */

loc_001D08F2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0924(); return; } /* je: equal / zero */

loc_001D08F5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D08FC(); return; } /* je: equal / zero */

loc_001D08F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0957(); return; /* tail jmp 0x001D0957 */

}

/**
 * sub_001D08FC
 * Original: 0x001D08FC - 0x001D0924 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D08FC: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0xFF;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -8);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -4);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0957(); return; /* tail jmp 0x001D0957 */

}

/**
 * sub_001D0924
 * Original: 0x001D0924 - 0x001D0944 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0924(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0924: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -8);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0957(); return; /* tail jmp 0x001D0957 */

}

/**
 * sub_001D0940
 * Original: 0x001D0940 - 0x001D0944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0940: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0957(); return; /* tail jmp 0x001D0957 */

}

/**
 * sub_001D0944
 * Original: 0x001D0944 - 0x001D0954 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0944(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0944: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_001D0940(); return; /* tail jmp 0x001D0940 */

}

/**
 * sub_001D0954
 * Original: 0x001D0954 - 0x001D0957 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0954(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0954: ;
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_001D0957(); return; /* fallthrough 0x001D0957 */

}

/**
 * sub_001D0957
 * Original: 0x001D0957 - 0x001D0959 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0957(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0957: ;
    eax = BSWAP32(eax); /* bswap */

    g_seh_ebp = ebp; sub_001D0959(); return; /* fallthrough 0x001D0959 */

}

/**
 * sub_001D0959
 * Original: 0x001D0959 - 0x001D095F (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0959(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0959: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D095F
 * Original: 0x001D095F - 0x001D0968 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D095F(void)
{

loc_001D095F: ;
    eax = MEM32(esp + 4);
    eax = BSWAP32(eax); /* bswap */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0968
 * Original: 0x001D0968 - 0x001D0977 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0968(void)
{

loc_001D0968: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0977
 * Original: 0x001D0977 - 0x001D0980 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0977(void)
{

loc_001D0977: ;
    eax = MEM32(esp + 4);
    eax = BSWAP32(eax); /* bswap */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0980
 * Original: 0x001D0980 - 0x001D098F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0980(void)
{

loc_001D0980: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D098F
 * Original: 0x001D098F - 0x001D09B3 (36 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D098F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D098F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D09A4u); RECOMP_ABI_CALL(0x001D05BCu, sub_001D05BC); /* call 0x001D05BC */

loc_001D09A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A05(); return; } /* jne: not equal / not zero */

loc_001D09AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D09B3(); return; } /* je: equal / zero */

loc_001D09AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0A0C(); return; /* tail jmp 0x001D0A0C */

}

/**
 * sub_001D09B3
 * Original: 0x001D09B3 - 0x001D0A05 (82 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D09B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D09B3: ;
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D09C7u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D09C7: ;
    MEM32(ebp + -8) = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ebp + -8;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edx;
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x001D09E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D09E1u); } /* indirect call */
    }

loc_001D09E7: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x8007274Cu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001D0A01u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D0A01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0A0A(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001D0A05(); return; /* fallthrough 0x001D0A05 */

}

/**
 * sub_001D0A05
 * Original: 0x001D0A05 - 0x001D0A0A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A05: ;
    eax = MEM32(edi + 0x40);
    g_seh_ebp = ebp; sub_001D0A0C(); return; /* tail jmp 0x001D0A0C */

}

/**
 * sub_001D0A0A
 * Original: 0x001D0A0A - 0x001D0A0C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A0A: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001D0A0C(); return; /* fallthrough 0x001D0A0C */

}

/**
 * sub_001D0A0C
 * Original: 0x001D0A0C - 0x001D0A12 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0A12
 * Original: 0x001D0A12 - 0x001D0A2C (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A12: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A60(); return; } /* je: equal / zero */

loc_001D0A1D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A2C(); return; } /* jne: not equal / not zero */

loc_001D0A27: ;
    MEM32(edi + 0x30) = eax;
    g_seh_ebp = ebp; sub_001D0A34(); return; /* tail jmp 0x001D0A34 */

}

/**
 * sub_001D0A2C
 * Original: 0x001D0A2C - 0x001D0A34 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A2C: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A34(); return; } /* jne: not equal / not zero */

loc_001D0A31: ;
    MEM32(edi + 0x20) = eax;

    g_seh_ebp = ebp; sub_001D0A34(); return; /* fallthrough 0x001D0A34 */

}

/**
 * sub_001D0A34
 * Original: 0x001D0A34 - 0x001D0A60 (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A34: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D0A49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0A43u); } /* indirect call */
    }

loc_001D0A49: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A60(); return; } /* je: equal / zero */

loc_001D0A53: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D0A59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0A53u); } /* indirect call */
    }

loc_001D0A59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001D0A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0A5Au); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D0A60(); return; /* fallthrough 0x001D0A60 */

}

/**
 * sub_001D0A60
 * Original: 0x001D0A60 - 0x001D0A64 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A60(void)
{

loc_001D0A60: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0A64
 * Original: 0x001D0A64 - 0x001D0A8D (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A64: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0ADE(); return; } /* je: equal / zero */

loc_001D0A70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0ADE(); return; } /* jne: not equal / not zero */

loc_001D0A77: ;
    PUSH32(esp, edi);
    edi = ebx + 0xD38;
    ecx = MEM32(edi);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0ADD(); return; } /* je: equal / zero */

loc_001D0A8C: ;
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_001D0A8D(); return; /* fallthrough 0x001D0A8D */

}

/**
 * sub_001D0A8D
 * Original: 0x001D0A8D - 0x001D0A95 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A95(); return; } /* je: equal / zero */

loc_001D0A91: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_001D0A97(); return; /* tail jmp 0x001D0A97 */

}

/**
 * sub_001D0A95
 * Original: 0x001D0A95 - 0x001D0A97 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A95: ;
    ecx = MEM32(edi);

    g_seh_ebp = ebp; sub_001D0A97(); return; /* fallthrough 0x001D0A97 */

}

/**
 * sub_001D0A97
 * Original: 0x001D0A97 - 0x001D0ADD (70 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A97: ;
    esi = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0AD6; /* je: equal / zero */

loc_001D0AA7: ;
    _fa = (uint32_t)(MEM8(eax + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x7C), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001D0AD6; /* jbe: below or equal (unsigned <=) */

loc_001D0AAD: ;
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AD6; /* je: equal / zero */

loc_001D0AB4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AC9; /* je: equal / zero */

loc_001D0ABA: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0AD6; /* jne: not equal / not zero */

loc_001D0AC1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AC9; /* je: equal / zero */

loc_001D0AC5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AD6; /* je: equal / zero */

loc_001D0AC9: ;
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D0AD6u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001D0AD6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0A8D(); return; } /* jne: not equal / not zero */

loc_001D0ADC: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D0ADD(); return; /* fallthrough 0x001D0ADD */

}

/**
 * sub_001D0ADD
 * Original: 0x001D0ADD - 0x001D0ADE (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0ADD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0ADD: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D0ADE(); return; /* fallthrough 0x001D0ADE */

}

/**
 * sub_001D0ADE
 * Original: 0x001D0ADE - 0x001D0AE2 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0ADE(void)
{

loc_001D0ADE: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0B05
 * Original: 0x001D0B05 - 0x001D0B41 (60 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0B05: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x80072777u;
    if (CMP_GE(_fas, _fbs)) goto loc_001D0B1C; /* jge: greater or equal (signed >=) */

loc_001D0B1A: ;
    edi = eax;

loc_001D0B1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0B28u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D0B28: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0B34u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D0B34: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D0B3Cu); RECOMP_ABI_CALL(0x001CFED5u, sub_001CFED5); /* call 0x001CFED5 */

loc_001D0B3C: ;
    edi = esi + 0x34;
    g_seh_ebp = ebp; sub_001D0B58(); return; /* tail jmp 0x001D0B58 */

}

/**
 * sub_001D0B41
 * Original: 0x001D0B41 - 0x001D0B58 (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0B41: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D0B58u); RECOMP_ABI_CALL(0x001CFEBAu, sub_001CFEBA); /* call 0x001CFEBA */

    g_seh_ebp = ebp; sub_001D0B58(); return; /* fallthrough 0x001D0B58 */

}

/**
 * sub_001D0B58
 * Original: 0x001D0B58 - 0x001D0B79 (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0B58: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0B41(); return; } /* jne: not equal / not zero */

loc_001D0B5C: ;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B73; /* je: equal / zero */

loc_001D0B67: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D0B6Fu); RECOMP_ABI_CALL(0x001D2294u, sub_001D2294); /* call 0x001D2294 */

loc_001D0B6F: ;
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D0B73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0B79
 * Original: 0x001D0B79 - 0x001D0BAA (49 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0B79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0B79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0BAA(); return; } /* je: equal / zero */

loc_001D0B85: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0BAA(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D0B8F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0B9Cu); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0B9C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0BBC(); return; } /* jne: not equal / not zero */

loc_001D0BA2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0DAF(); return; /* tail jmp 0x001D0DAF */

}

/**
 * sub_001D0BA2
 * Original: 0x001D0BA2 - 0x001D0BAA (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BA2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0DAF(); return; /* tail jmp 0x001D0DAF */

}

/**
 * sub_001D0BAA
 * Original: 0x001D0BAA - 0x001D0BBC (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BAA: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001D0BB4u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0BB4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0DB0(); return; /* tail jmp 0x001D0DB0 */

}

/**
 * sub_001D0BBC
 * Original: 0x001D0BBC - 0x001D0BCC (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BBC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0BCC(); return; } /* jge: greater or equal (signed >=) */

loc_001D0BC7: ;
    esi = ZX8(MEM8(ebx));
    g_seh_ebp = ebp; sub_001D0BCE(); return; /* tail jmp 0x001D0BCE */

}

/**
 * sub_001D0BCC
 * Original: 0x001D0BCC - 0x001D0BCE (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BCC: ;
    esi = MEM32(ebx);

    g_seh_ebp = ebp; sub_001D0BCE(); return; /* fallthrough 0x001D0BCE */

}

/**
 * sub_001D0BCE
 * Original: 0x001D0BCE - 0x001D0C4D (127 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BCE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0D62(); return; } /* je: equal / zero */

loc_001D0BD8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0D59(); return; } /* jne: not equal / not zero */

loc_001D0BE5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D0BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0BE5u); } /* indirect call */
    }

loc_001D0BEB: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(edx, LO8(eax));
    eax = 0x1001;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(ebp + 0x14) = LO8(edx);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0CD4(); return; } /* jg: greater (signed >) */

loc_001D0C00: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CCE(); return; } /* je: equal / zero */

loc_001D0C06: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFF7Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CB5(); return; } /* je: equal / zero */

loc_001D0C12: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C90(); return; } /* je: equal / zero */

loc_001D0C17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C6F(); return; } /* je: equal / zero */

loc_001D0C1C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C4D(); return; } /* je: equal / zero */

loc_001D0C21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CEC(); return; } /* jne: not equal / not zero */

loc_001D0C2D: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CEC(); return; } /* je: equal / zero */

loc_001D0C37: ;
    eax = MEM32(ebx);
    MEM32(edi + 0x80) = eax;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D0C48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0C42u); } /* indirect call */
    }

loc_001D0C48: ;
    g_seh_ebp = ebp; sub_001D0D91(); return; /* tail jmp 0x001D0D91 */

}

/**
 * sub_001D0C3F
 * Original: 0x001D0C3F - 0x001D0C4D (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0C3F: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D0C48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0C42u); } /* indirect call */
    }

loc_001D0C48: ;
    g_seh_ebp = ebp; sub_001D0D91(); return; /* tail jmp 0x001D0D91 */

}

/**
 * sub_001D0C4D
 * Original: 0x001D0C4D - 0x001D0C6F (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0C4D: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CEC(); return; } /* jne: not equal / not zero */

loc_001D0C57: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = 0x20000;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFDFFFFu);
    g_seh_ebp = ebp; sub_001D0D1C(); return; /* tail jmp 0x001D0D1C */

}

/**
 * sub_001D0C6F
 * Original: 0x001D0C6F - 0x001D0C90 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0C6F: ;
    eax = 0x80000;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D0C7D; /* je: equal / zero */

loc_001D0C79: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C9E(); return; } /* jne: not equal / not zero */

loc_001D0C7D: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFF7FFFFu);
    g_seh_ebp = ebp; sub_001D0D1C(); return; /* tail jmp 0x001D0D1C */

}

/**
 * sub_001D0C90
 * Original: 0x001D0C90 - 0x001D0C9E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0C90: ;
    eax = 0x100000;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CA5(); return; } /* je: equal / zero */

loc_001D0C9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CA5(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D0C9E(); return; /* fallthrough 0x001D0C9E */

}

/**
 * sub_001D0C9E
 * Original: 0x001D0C9E - 0x001D0CA5 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0C9E: ;
    SET_LO8(ecx, LO8(edx));
    g_seh_ebp = ebp; sub_001D0D53(); return; /* tail jmp 0x001D0D53 */

}

/**
 * sub_001D0CA5
 * Original: 0x001D0CA5 - 0x001D0CB5 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CA5: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFEFFFFFu);
    g_seh_ebp = ebp; sub_001D0D1C(); return; /* tail jmp 0x001D0D1C */

}

/**
 * sub_001D0CB5
 * Original: 0x001D0CB5 - 0x001D0CCE (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CB5: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CEC(); return; } /* je: equal / zero */

loc_001D0CBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM16(edi + 0x80) = LO16(eax);
    g_seh_ebp = ebp; sub_001D0C3F(); return; /* tail jmp 0x001D0C3F */

}

/**
 * sub_001D0CCE
 * Original: 0x001D0CCE - 0x001D0CD4 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CCE: ;
    PUSH32(esp, MEM32(edi + 0x5C));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_001D0D3C(); return; /* tail jmp 0x001D0D3C */

}

/**
 * sub_001D0CD4
 * Original: 0x001D0CD4 - 0x001D0CEC (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CD4: ;
    _fb = (uint32_t)(0x1002) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1002;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0D38(); return; } /* je: equal / zero */

loc_001D0CDC: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0D30(); return; } /* je: equal / zero */

loc_001D0CE1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0D28(); return; } /* je: equal / zero */

loc_001D0CE4: ;
    _fb = (uint32_t)(0x2FFB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2FFB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0CF6(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D0CEC(); return; /* fallthrough 0x001D0CEC */

}

/**
 * sub_001D0CEC
 * Original: 0x001D0CEC - 0x001D0CF6 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CEC: ;
    SET_LO8(ecx, LO8(edx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D0CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0CEEu); } /* indirect call */
    }

loc_001D0CF4: ;
    g_seh_ebp = ebp; sub_001D0D6E(); return; /* tail jmp 0x001D0D6E */

}

/**
 * sub_001D0CF6
 * Original: 0x001D0CF6 - 0x001D0D1C (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CF6: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0CEC(); return; } /* jne: not equal / not zero */

loc_001D0CFC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C3F(); return; } /* jne: not equal / not zero */

loc_001D0D06: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xAEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xAEC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0C3F(); return; } /* jne: not equal / not zero */

loc_001D0D15: ;
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 0xFFFFFFFFu);

    g_seh_ebp = ebp; sub_001D0D1C(); return; /* fallthrough 0x001D0D1C */

}

/**
 * sub_001D0D1C
 * Original: 0x001D0D1C - 0x001D0D28 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D1C: ;
    ecx = edi;
    PUSH32(esp, 0x001D0D23u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D0D23: ;
    g_seh_ebp = ebp; sub_001D0C3F(); return; /* tail jmp 0x001D0C3F */

}

/**
 * sub_001D0D28
 * Original: 0x001D0D28 - 0x001D0D30 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D28: ;
    MEM32(edi + 0x54) = esi;
    g_seh_ebp = ebp; sub_001D0C3F(); return; /* tail jmp 0x001D0C3F */

}

/**
 * sub_001D0D30
 * Original: 0x001D0D30 - 0x001D0D38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D30: ;
    MEM32(edi + 0x50) = esi;
    g_seh_ebp = ebp; sub_001D0C3F(); return; /* tail jmp 0x001D0C3F */

}

/**
 * sub_001D0D38
 * Original: 0x001D0D38 - 0x001D0D3C (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D38: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + 0x58));

    g_seh_ebp = ebp; sub_001D0D3C(); return; /* fallthrough 0x001D0D3C */

}

/**
 * sub_001D0D3C
 * Original: 0x001D0D3C - 0x001D0D53 (23 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D3C: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D0D45u); RECOMP_ABI_CALL(0x001D006Bu, sub_001D006B); /* call 0x001D006B */

loc_001D0D45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0C3F(); return; } /* jge: greater or equal (signed >=) */

loc_001D0D50: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));

    g_seh_ebp = ebp; sub_001D0D53(); return; /* fallthrough 0x001D0D53 */

}

/**
 * sub_001D0D53
 * Original: 0x001D0D53 - 0x001D0D59 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D53: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D0D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0D53u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D0D59(); return; /* fallthrough 0x001D0D59 */

}

/**
 * sub_001D0D59
 * Original: 0x001D0D59 - 0x001D0D62 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D59: ;
    MEM32(ebp + -4) = 0x2726;
    g_seh_ebp = ebp; sub_001D0D91(); return; /* tail jmp 0x001D0D91 */

}

/**
 * sub_001D0D62
 * Original: 0x001D0D62 - 0x001D0D77 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D62: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0D6E; /* je: equal / zero */

loc_001D0D68: ;
    eax = MEM32(ebp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D0D77(); return; } /* je: equal / zero */

loc_001D0D6E: ;
    MEM32(ebp + -4) = 0x273A;
    g_seh_ebp = ebp; sub_001D0D91(); return; /* tail jmp 0x001D0D91 */

}

/**
 * sub_001D0D6E
 * Original: 0x001D0D6E - 0x001D0D77 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D6E: ;
    MEM32(ebp + -4) = 0x273A;
    g_seh_ebp = ebp; sub_001D0D91(); return; /* tail jmp 0x001D0D91 */

}

/**
 * sub_001D0D77
 * Original: 0x001D0D77 - 0x001D0D91 (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D77: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = 0x200000;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFDFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x001D0D91u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

    g_seh_ebp = ebp; sub_001D0D91(); return; /* fallthrough 0x001D0D91 */

}

/**
 * sub_001D0D91
 * Original: 0x001D0D91 - 0x001D0DAD (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0D91: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    MEM32(edi + 8) = 0x2B434F53;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0DAD(); return; } /* je: equal / zero */

loc_001D0DA0: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001D0DA8u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0DA8: ;
    g_seh_ebp = ebp; sub_001D0BA2(); return; /* tail jmp 0x001D0BA2 */

}

/**
 * sub_001D0DAD
 * Original: 0x001D0DAD - 0x001D0DAF (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D0DAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D0DAF(); return; /* fallthrough 0x001D0DAF */

}

/**
 * sub_001D0DAF
 * Original: 0x001D0DAF - 0x001D0DB4 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DAF: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D0DB0
 * Original: 0x001D0DB0 - 0x001D0DB4 (4 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DB0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D0DB4
 * Original: 0x001D0DB4 - 0x001D0DCD (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0DC6; /* je: equal / zero */

loc_001D0DBC: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0DCD(); return; } /* ja: above (unsigned >) */

loc_001D0DC6: ;
    PUSH32(esp, 0x276D);
    g_seh_ebp = ebp; sub_001D0E27(); return; /* tail jmp 0x001D0E27 */

}

/**
 * sub_001D0DCD
 * Original: 0x001D0DCD - 0x001D0DE9 (28 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DCD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001D0DD6u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0DD6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E2C(); return; } /* je: equal / zero */

loc_001D0DDC: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0DE9(); return; } /* je: equal / zero */

loc_001D0DE2: ;
    eax = 0x2726;
    g_seh_ebp = ebp; sub_001D0E1B(); return; /* tail jmp 0x001D0E1B */

}

/**
 * sub_001D0DE9
 * Original: 0x001D0DE9 - 0x001D0DFA (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DE9: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0DFA(); return; } /* je: equal / zero */

loc_001D0DF3: ;
    eax = 0x2741;
    g_seh_ebp = ebp; sub_001D0E1B(); return; /* tail jmp 0x001D0E1B */

}

/**
 * sub_001D0DFA
 * Original: 0x001D0DFA - 0x001D0E14 (26 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DFA: ;
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(ecx + 2));
    eax = esp;
    MEM16(eax) = LO16(ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D0E0Cu); RECOMP_ABI_CALL(0x001D0342u, sub_001D0342); /* call 0x001D0342 */

loc_001D0E0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0E14(); return; } /* jl: less (signed <) */

loc_001D0E10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0E1B(); return; /* tail jmp 0x001D0E1B */

}

/**
 * sub_001D0E14
 * Original: 0x001D0E14 - 0x001D0E1B (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D0E1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0E15u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D0E1B(); return; /* fallthrough 0x001D0E1B */

}

/**
 * sub_001D0E1B
 * Original: 0x001D0E1B - 0x001D0E27 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E31(); return; } /* je: equal / zero */

loc_001D0E26: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D0E27(); return; /* fallthrough 0x001D0E27 */

}

/**
 * sub_001D0E27
 * Original: 0x001D0E27 - 0x001D0E2C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E27: ;
    PUSH32(esp, 0x001D0E2Cu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

    g_seh_ebp = ebp; sub_001D0E2C(); return; /* fallthrough 0x001D0E2C */

}

/**
 * sub_001D0E2C
 * Original: 0x001D0E2C - 0x001D0E31 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E2C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0E33(); return; /* tail jmp 0x001D0E33 */

}

/**
 * sub_001D0E31
 * Original: 0x001D0E31 - 0x001D0E33 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D0E31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D0E33(); return; /* fallthrough 0x001D0E33 */

}

/**
 * sub_001D0E33
 * Original: 0x001D0E33 - 0x001D0E38 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E33(void)
{

loc_001D0E33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0E38
 * Original: 0x001D0E38 - 0x001D0E5E (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0E38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0E38: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E4C; /* je: equal / zero */

loc_001D0E42: ;
    _fa = (uint32_t)(MEM16(ebx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E5E(); return; } /* ja: above (unsigned >) */

loc_001D0E4C: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E56u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0E56: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0F2E(); return; /* tail jmp 0x001D0F2E */

}

/**
 * sub_001D0E5E
 * Original: 0x001D0E5E - 0x001D0E75 (23 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D0E67u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0E67: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E75(); return; } /* jne: not equal / not zero */

loc_001D0E6D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0F2D(); return; /* tail jmp 0x001D0F2D */

}

/**
 * sub_001D0E6D
 * Original: 0x001D0E6D - 0x001D0E75 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E6D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D0F2D(); return; /* tail jmp 0x001D0F2D */

}

/**
 * sub_001D0E75
 * Original: 0x001D0E75 - 0x001D0E87 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E75: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E87(); return; } /* je: equal / zero */

loc_001D0E7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0E87(); return; } /* je: equal / zero */

loc_001D0E80: ;
    eax = 0x2748;
    g_seh_ebp = ebp; sub_001D0EAF(); return; /* tail jmp 0x001D0EAF */

}

/**
 * sub_001D0E87
 * Original: 0x001D0E87 - 0x001D0EAF (40 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E87: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    SET_LO16(eax, MEM16(eax + 2));
    PUSH32(esp, edi);
    ecx = ebx;
    MEM16(ebp + 8) = LO16(eax);
    PUSH32(esp, 0x001D0E9Eu); RECOMP_ABI_CALL(0x001D3195u, sub_001D3195); /* call 0x001D3195 */

loc_001D0E9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0EC2(); return; } /* je: equal / zero */

loc_001D0EA2: ;
    edi = 0x80072751u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D0EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0EA8u); } /* indirect call */
    }

loc_001D0EAE: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D0EAF(); return; /* fallthrough 0x001D0EAF */

}

/**
 * sub_001D0EA7
 * Original: 0x001D0EA7 - 0x001D0EAF (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0EA7: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D0EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0EA8u); } /* indirect call */
    }

loc_001D0EAE: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D0EAF(); return; /* fallthrough 0x001D0EAF */

}

/**
 * sub_001D0EAE
 * Original: 0x001D0EAE - 0x001D0EAF (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0EAE: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D0EAF(); return; /* fallthrough 0x001D0EAF */

}

/**
 * sub_001D0EAF
 * Original: 0x001D0EAF - 0x001D0EC2 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0EAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0F2B(); return; } /* je: equal / zero */

loc_001D0EBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D0EC0u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0EC0: ;
    g_seh_ebp = ebp; sub_001D0E6D(); return; /* tail jmp 0x001D0E6D */

}

/**
 * sub_001D0EC2
 * Original: 0x001D0EC2 - 0x001D0ED9 (23 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0EC2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    ecx = ebx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0ED9(); return; } /* jne: not equal / not zero */

loc_001D0ECB: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0ED5u); RECOMP_ABI_CALL(0x001E2B32u, sub_001E2B32); /* call 0x001E2B32 */

loc_001D0ED5: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001D0F23(); return; /* tail jmp 0x001D0F23 */

}

/**
 * sub_001D0ED9
 * Original: 0x001D0ED9 - 0x001D0EF9 (32 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0ED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0ED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D0EF9(); return; } /* je: equal / zero */

loc_001D0EE7: ;
    PUSH32(esp, 0x001D0EECu); RECOMP_ABI_CALL(0x001E218Au, sub_001E218A); /* call 0x001E218A */

loc_001D0EEC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0EA7(); return; } /* jl: less (signed <) */

loc_001D0EF2: ;
    edi = 0x80072733u;
    g_seh_ebp = ebp; sub_001D0EA7(); return; /* tail jmp 0x001D0EA7 */

}

/**
 * sub_001D0EF9
 * Original: 0x001D0EF9 - 0x001D0F23 (42 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0EF9: ;
    PUSH32(esp, 0x001D0EFEu); RECOMP_ABI_CALL(0x001E218Au, sub_001E218A); /* call 0x001E218A */

loc_001D0EFE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0EA7(); return; } /* jl: less (signed <) */

loc_001D0F04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D0F13u); RECOMP_ABI_CALL(0x001D098Fu, sub_001D098F); /* call 0x001D098F */

loc_001D0F13: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001D0F23u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

    g_seh_ebp = ebp; sub_001D0F23(); return; /* fallthrough 0x001D0F23 */

}

/**
 * sub_001D0F23
 * Original: 0x001D0F23 - 0x001D0F2B (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0F23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D0EA7(); return; } /* jl: less (signed <) */

loc_001D0F27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D0EAE(); return; /* tail jmp 0x001D0EAE */

}

/**
 * sub_001D0F2B
 * Original: 0x001D0F2B - 0x001D0F2D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D0F2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0F2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D0F2D(); return; /* fallthrough 0x001D0F2D */

}

/**
 * sub_001D0F2D
 * Original: 0x001D0F2D - 0x001D0F2E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0F2D: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D0F2E(); return; /* fallthrough 0x001D0F2E */

}

/**
 * sub_001D0F2E
 * Original: 0x001D0F2E - 0x001D0F33 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0F2E: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0F33
 * Original: 0x001D0F33 - 0x001D1046 (275 bytes, 89 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0F33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F49; /* je: equal / zero */

loc_001D0F40: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), LO16(esi) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D0F5B; /* ja: above (unsigned >) */

loc_001D0F49: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0F53u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D0F53: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D1040;

loc_001D0F5B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0F64u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D0F64: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F72; /* jne: not equal / not zero */

loc_001D0F6A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D103F;

loc_001D0F72: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D101C; /* je: equal / zero */

loc_001D0F7C: ;
    _fa = (uint32_t)(MEM8(ebx + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x7C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D101C; /* jne: not equal / not zero */

loc_001D0F86: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D0F8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0F86u); } /* indirect call */
    }

loc_001D0F8C: ;
    ecx = ebx;
    MEM8(ebp + 8) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0F96u); RECOMP_ABI_CALL(0x001E0DD0u, sub_001E0DD0); /* call 0x001E0DD0 */

loc_001D0F96: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D0FA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0F9Bu); } /* indirect call */
    }

loc_001D0FA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0FC1; /* jne: not equal / not zero */

loc_001D0FA5: ;
    _fa = (uint32_t)(MEM8(ebx + 0xE)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xE), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D0FC7; /* jne: not equal / not zero */

loc_001D0FAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0FB9u); RECOMP_ABI_CALL(0x001D098Fu, sub_001D098F); /* call 0x001D098F */

loc_001D0FB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F86; /* je: equal / zero */

loc_001D0FBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0FD0; /* jl: less (signed <) */

loc_001D0FC1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001D0FDA;

loc_001D0FC7: ;
    MEM32(ebp + 8) = 0x2733;
    goto loc_001D1023;

loc_001D0FD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D0FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0FD1u); } /* indirect call */
    }

loc_001D0FD7: ;
    MEM32(ebp + 8) = eax;

loc_001D0FDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1023; /* je: equal / zero */

loc_001D0FDE: ;
    PUSH32(esp, 0x400000);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0FECu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D0FEC: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1023; /* je: equal / zero */

loc_001D0FF3: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1023; /* je: equal / zero */

loc_001D0FFA: ;
    MEM16(ecx) = 2;
    SET_LO16(eax, MEM16(esi + 0x48));
    MEM16(ecx + 2) = LO16(eax);
    eax = MEM32(esi + 0x44);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edx) = 0x10;
    goto loc_001D1023;

loc_001D101C: ;
    MEM32(ebp + 8) = 0x2726;

loc_001D1023: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebx + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D103D; /* je: equal / zero */

loc_001D1030: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1038u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1038: ;
    goto loc_001D0F6A;

loc_001D103D: ;
    eax = esi;

loc_001D103F: ;
    POP32(esp, ebx);

loc_001D1040: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D1046
 * Original: 0x001D1046 - 0x001D1080 (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1046: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = ebp + -136;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D106E; /* je: equal / zero */

loc_001D1065: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), LO16(edi) (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1080(); return; } /* ja: above (unsigned >) */

loc_001D106E: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1078u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1078: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D13C8(); return; /* tail jmp 0x001D13C8 */

}

/**
 * sub_001D1080
 * Original: 0x001D1080 - 0x001D1096 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1080: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, esi);
    ecx = 0xFFFF;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1096(); return; } /* je: equal / zero */

loc_001D108D: ;
    esi = MEM32(eax);
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = esi;
    g_seh_ebp = ebp; sub_001D109B(); return; /* tail jmp 0x001D109B */

}

/**
 * sub_001D1096
 * Original: 0x001D1096 - 0x001D109B (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1096(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1096: ;
    MEM32(ebp + -8) = edi;
    esi = edi;

    g_seh_ebp = ebp; sub_001D109B(); return; /* fallthrough 0x001D109B */

}

/**
 * sub_001D109B
 * Original: 0x001D109B - 0x001D10A8 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D109B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D109B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D10A8(); return; } /* je: equal / zero */

loc_001D10A2: ;
    eax = MEM32(eax);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D10AA(); return; /* tail jmp 0x001D10AA */

}

/**
 * sub_001D10A8
 * Original: 0x001D10A8 - 0x001D10AA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D10A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D10AA(); return; /* fallthrough 0x001D10AA */

}

/**
 * sub_001D10AA
 * Original: 0x001D10AA - 0x001D10BD (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10AA: ;
    edx = eax + esi;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -32) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D10BD(); return; } /* je: equal / zero */

loc_001D10B7: ;
    eax = MEM32(eax);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D10BF(); return; /* tail jmp 0x001D10BF */

}

/**
 * sub_001D10BD
 * Original: 0x001D10BD - 0x001D10BF (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D10BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D10BF(); return; /* fallthrough 0x001D10BF */

}

/**
 * sub_001D10BF
 * Original: 0x001D10BF - 0x001D10DA (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10BF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D10DA(); return; } /* jne: not equal / not zero */

loc_001D10C8: ;
    PUSH32(esp, 0x2726);
    PUSH32(esp, 0x001D10D2u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D10D2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D13C7(); return; /* tail jmp 0x001D13C7 */

}

/**
 * sub_001D10DA
 * Original: 0x001D10DA - 0x001D10F8 (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D10F8(); return; } /* jne: not equal / not zero */

loc_001D10E0: ;
    eax = ebp + -36;
    MEM32(ebp + -12) = eax;
    eax = ebp + -64;
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -64;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_seh_ebp = ebp; sub_001D1150(); return; /* tail jmp 0x001D1150 */

}

/**
 * sub_001D10F8
 * Original: 0x001D10F8 - 0x001D1150 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10F8: ;
    ebx = MEM32(0x22BCD4);
    esi = eax + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6854454E);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001D110Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D110Au); } /* indirect call */
    }

loc_001D110C: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -28) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1127; /* je: equal / zero */

loc_001D1115: ;
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001D1127: ;
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6854454E);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edx;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001D1138u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1136u); } /* indirect call */
    }

loc_001D1138: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1330(); return; } /* je: equal / zero */

loc_001D1145: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1330(); return; } /* je: equal / zero */

loc_001D114D: ;
    esi = MEM32(ebp + -8);

    g_seh_ebp = ebp; sub_001D1150(); return; /* fallthrough 0x001D1150 */

}

/**
 * sub_001D1150
 * Original: 0x001D1150 - 0x001D12A7 (343 bytes, 121 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1150: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x1A800);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001D1165u); RECOMP_ABI_CALL(0x001D04DEu, sub_001D04DE); /* call 0x001D04DE */

loc_001D1165: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1339(); return; } /* jne: not equal / not zero */

loc_001D116F: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x5000);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x001D1183u); RECOMP_ABI_CALL(0x001D04DEu, sub_001D04DE); /* call 0x001D04DE */

loc_001D1183: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1339(); return; } /* jne: not equal / not zero */

loc_001D118D: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x001D11A3u); RECOMP_ABI_CALL(0x001D04DEu, sub_001D04DE); /* call 0x001D04DE */

loc_001D11A3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1339(); return; } /* jne: not equal / not zero */

loc_001D11AD: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D12A7(); return; } /* je: equal / zero */

loc_001D11B8: ;
    eax = ebp + -44;
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFF0BDC0u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D11CFu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D11CF: ;
    ecx = eax;
    eax = MEM32(esi + 4);
    edi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xA);
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D11E5u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D11E5: ;
    MEM32(ebp + -44) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -40) = edx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* je: equal / zero */

loc_001D11F3: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & ebx;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001D1234; /* jle: less or equal (signed <=) */

loc_001D11FD: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1203: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esi + -4);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1226; /* je: equal / zero */

loc_001D120C: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1218u); RECOMP_ABI_CALL(0x001D05BCu, sub_001D05BC); /* call 0x001D05BC */

loc_001D1218: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D1234; /* jne: not equal / not zero */

loc_001D121C: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ebx * 4) = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1226: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001D1203; /* jl: less (signed <) */

loc_001D1234: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* jne: not equal / not zero */

loc_001D123C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001D1276; /* jle: less or equal (signed <=) */

loc_001D1241: ;
    esi = ebx + ebx * 2;
    PUSH32(esp, 0x6854454E);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D1253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D124Du); } /* indirect call */
    }

loc_001D1253: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D126B; /* je: equal / zero */

loc_001D1259: ;
    ecx = esi;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001D126B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1334(); return; } /* je: equal / zero */

loc_001D1276: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BD68); PUSH32(esp, 0x001D128Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1288u); } /* indirect call */
    }

loc_001D128E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001D1296; /* jl: less (signed <) */

loc_001D1292: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* jl: less (signed <) */

loc_001D1296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* je: equal / zero */

loc_001D129D: ;
    ebx = 0x271E;
    g_seh_ebp = ebp; sub_001D1339(); return; /* tail jmp 0x001D1339 */

}

/**
 * sub_001D11F3
 * Original: 0x001D11F3 - 0x001D12A7 (180 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D11F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D11F3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & ebx;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1234; /* jle: less or equal (signed <=) */

loc_001D11FD: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1203: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + -4);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1226; /* je: equal / zero */

loc_001D120C: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1218u); RECOMP_ABI_CALL(0x001D05BCu, sub_001D05BC); /* call 0x001D05BC */

loc_001D1218: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1234; /* jne: not equal / not zero */

loc_001D121C: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ebx * 4) = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1226: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1203; /* jl: less (signed <) */

loc_001D1234: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* jne: not equal / not zero */

loc_001D123C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1276; /* jle: less or equal (signed <=) */

loc_001D1241: ;
    esi = ebx + ebx * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6854454E);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D1253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D124Du); } /* indirect call */
    }

loc_001D1253: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D126B; /* je: equal / zero */

loc_001D1259: ;
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001D126B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1334(); return; } /* je: equal / zero */

loc_001D1276: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BD68); PUSH32(esp, 0x001D128Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1288u); } /* indirect call */
    }

loc_001D128E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1296; /* jl: less (signed <) */

loc_001D1292: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* jl: less (signed <) */

loc_001D1296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D12B0(); return; } /* je: equal / zero */

loc_001D129D: ;
    ebx = 0x271E;
    g_seh_ebp = ebp; sub_001D1339(); return; /* tail jmp 0x001D1339 */

}

/**
 * sub_001D12A7
 * Original: 0x001D12A7 - 0x001D12B0 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D12A7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D11F3(); return; /* tail jmp 0x001D11F3 */

}

/**
 * sub_001D12B0
 * Original: 0x001D12B0 - 0x001D1330 (128 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D12B0: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D12BB; /* je: equal / zero */

loc_001D12B9: ;
    MEM32(eax) = ecx;

loc_001D12BB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D12C4; /* je: equal / zero */

loc_001D12C2: ;
    MEM32(eax) = ecx;

loc_001D12C4: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D12CD; /* je: equal / zero */

loc_001D12CB: ;
    MEM32(eax) = ecx;

loc_001D12CD: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(ebp + -24) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D132C; /* jle: less or equal (signed <=) */

loc_001D12D7: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D12DD: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x001D12EDu); RECOMP_ABI_CALL(0x001D05BCu, sub_001D05BC); /* call 0x001D05BC */

loc_001D12ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1326; /* je: equal / zero */

loc_001D12F1: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D130D; /* jbe: below or equal (unsigned <=) */

loc_001D12FB: ;
    edi = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1301: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D130D; /* je: equal / zero */

loc_001D1305: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D1301; /* jb: below (unsigned <) */

loc_001D130D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1323; /* jne: not equal / not zero */

loc_001D1311: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D1323; /* jae: above or equal (unsigned >=) */

loc_001D1316: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    MEM32(eax + edx * 4 + 4) = ecx;
    eax = MEM32(esi);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1323: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1326: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D12DD; /* jne: not equal / not zero */

loc_001D132C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1339(); return; /* tail jmp 0x001D1339 */

}

/**
 * sub_001D1330
 * Original: 0x001D1330 - 0x001D1334 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1330: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D1334(); return; /* fallthrough 0x001D1334 */

}

/**
 * sub_001D1334
 * Original: 0x001D1334 - 0x001D1339 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1334: ;
    ebx = 0x2747;

    g_seh_ebp = ebp; sub_001D1339(); return; /* fallthrough 0x001D1339 */

}

/**
 * sub_001D1339
 * Original: 0x001D1339 - 0x001D13C3 (138 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1339: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1372; /* jle: less or equal (signed <=) */

loc_001D1340: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_001D1349: ;
    edi = MEM32(esi + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D136A; /* je: equal / zero */

loc_001D1350: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D136A; /* je: equal / zero */

loc_001D1355: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    PUSH32(esp, 0x001D1363u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D1363: ;
    MEM32(edi + 8) = 0x2B434F53;

loc_001D136A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1349; /* jne: not equal / not zero */

loc_001D1372: ;
    esi = MEM32(0x22BCD0);
    eax = ebp + -136;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D138E; /* je: equal / zero */

loc_001D1383: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D138E; /* je: equal / zero */

loc_001D1389: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D138Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D138Cu); } /* indirect call */
    }

loc_001D138E: ;
    eax = ebp + -64;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D13A1; /* je: equal / zero */

loc_001D1396: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D13A1; /* je: equal / zero */

loc_001D139C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D13A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D139Fu); } /* indirect call */
    }

loc_001D13A1: ;
    eax = ebp + -36;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D13B4; /* je: equal / zero */

loc_001D13A9: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D13B4; /* je: equal / zero */

loc_001D13AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D13B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D13B2u); } /* indirect call */
    }

loc_001D13B4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D13C3(); return; } /* je: equal / zero */

loc_001D13B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D13BEu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D13BE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D13C6(); return; /* tail jmp 0x001D13C6 */

}

/**
 * sub_001D13C3
 * Original: 0x001D13C3 - 0x001D13C6 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D13C3: ;
    eax = MEM32(ebp + -24);

    g_seh_ebp = ebp; sub_001D13C6(); return; /* fallthrough 0x001D13C6 */

}

/**
 * sub_001D13C6
 * Original: 0x001D13C6 - 0x001D13C7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D13C6: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D13C7(); return; /* fallthrough 0x001D13C7 */

}

/**
 * sub_001D13C7
 * Original: 0x001D13C7 - 0x001D13C8 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D13C7: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D13C8(); return; /* fallthrough 0x001D13C8 */

}

/**
 * sub_001D13C8
 * Original: 0x001D13C8 - 0x001D13CD (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D13C8: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D13CD
 * Original: 0x001D13CD - 0x001D13EB (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D13CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D13CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D13E1; /* je: equal / zero */

loc_001D13D7: ;
    _fa = (uint32_t)(MEM16(ebx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D13EB(); return; } /* ja: above (unsigned >) */

loc_001D13E1: ;
    PUSH32(esp, 0x276D);
    g_seh_ebp = ebp; sub_001D1490(); return; /* tail jmp 0x001D1490 */

}

/**
 * sub_001D13EB
 * Original: 0x001D13EB - 0x001D1471 (134 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D13EB: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D13F3u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D13F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1495(); return; } /* je: equal / zero */

loc_001D13FE: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0x800703E5u;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D1452; /* jne: not equal / not zero */

loc_001D140D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1452; /* je: equal / zero */

loc_001D1413: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001D141Du); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001D141D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D1423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D141Du); } /* indirect call */
    }

loc_001D1423: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + 0xC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D1449; /* jne: not equal / not zero */

loc_001D142B: ;
    eax = MEM32(esi + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8D889;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80072777u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80072777u)) >> 32) & 1);
    eax = eax + 0x80072777u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D1449u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D1449: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D1452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D144Cu); } /* indirect call */
    }

loc_001D1452: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1471(); return; } /* je: equal / zero */

loc_001D1459: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1478(); return; } /* jl: less (signed <) */

loc_001D145D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D147F(); return; /* tail jmp 0x001D147F */

}

/**
 * sub_001D1471
 * Original: 0x001D1471 - 0x001D1478 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1471(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1471: ;
    eax = 0x3E4;
    g_seh_ebp = ebp; sub_001D147F(); return; /* tail jmp 0x001D147F */

}

/**
 * sub_001D1478
 * Original: 0x001D1478 - 0x001D147F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1478: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D147Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1479u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D147F(); return; /* fallthrough 0x001D147F */

}

/**
 * sub_001D147F
 * Original: 0x001D147F - 0x001D1490 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D147F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D147F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = 0x2B434F53;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1499(); return; } /* je: equal / zero */

loc_001D148F: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D1490(); return; /* fallthrough 0x001D1490 */

}

/**
 * sub_001D1490
 * Original: 0x001D1490 - 0x001D1495 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1490: ;
    PUSH32(esp, 0x001D1495u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

    g_seh_ebp = ebp; sub_001D1495(); return; /* fallthrough 0x001D1495 */

}

/**
 * sub_001D1495
 * Original: 0x001D1495 - 0x001D1499 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1495(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1495: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D149C(); return; /* tail jmp 0x001D149C */

}

/**
 * sub_001D1499
 * Original: 0x001D1499 - 0x001D149C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1499: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D149C(); return; /* fallthrough 0x001D149C */

}

/**
 * sub_001D149C
 * Original: 0x001D149C - 0x001D14A1 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D149C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D149C: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D14A1
 * Original: 0x001D14A1 - 0x001D14C1 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D14A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D14A1: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D14B2; /* je: equal / zero */

loc_001D14A8: ;
    _fa = (uint32_t)(MEM16(ebp + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D14C1(); return; } /* ja: above (unsigned >) */

loc_001D14B2: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001D14BCu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D14BC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1511(); return; /* tail jmp 0x001D1511 */

}

/**
 * sub_001D14C1
 * Original: 0x001D14C1 - 0x001D14D6 (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D14C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001D14CBu); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D14CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D14D6(); return; } /* jne: not equal / not zero */

loc_001D14D1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1510(); return; /* tail jmp 0x001D1510 */

}

/**
 * sub_001D14D6
 * Original: 0x001D14D6 - 0x001D1510 (58 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D14D6: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D14DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D14D8u); } /* indirect call */
    }

loc_001D14DE: ;
    edi = 0x80072777u;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = ebp;
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D14F1u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D14F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D14FDu); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D14FD: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D1505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D14FFu); } /* indirect call */
    }

loc_001D1505: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0x2B434F53;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D1510(); return; /* fallthrough 0x001D1510 */

}

/**
 * sub_001D1510
 * Original: 0x001D1510 - 0x001D1511 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1510: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D1511(); return; /* fallthrough 0x001D1511 */

}

/**
 * sub_001D1511
 * Original: 0x001D1511 - 0x001D1515 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1511(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1511: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1515
 * Original: 0x001D1515 - 0x001D1537 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1515(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1515: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1537(); return; } /* je: equal / zero */

loc_001D1529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1545(); return; } /* jne: not equal / not zero */

loc_001D152D: ;
    eax = 0x80072749u;
    g_seh_ebp = ebp; sub_001D16CC(); return; /* tail jmp 0x001D16CC */

}

/**
 * sub_001D1537
 * Original: 0x001D1537 - 0x001D1545 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1537(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1537: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1545(); return; } /* jne: not equal / not zero */

loc_001D153B: ;
    eax = 0x80072726u;
    g_seh_ebp = ebp; sub_001D16CC(); return; /* tail jmp 0x001D16CC */

}

/**
 * sub_001D1545
 * Original: 0x001D1545 - 0x001D1560 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1545(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1545: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1560(); return; } /* je: equal / zero */

loc_001D1549: ;
    ebx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ebx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D16CC(); return; } /* jl: less (signed <) */

loc_001D1556: ;
    eax = 0x8007274Au;
    g_seh_ebp = ebp; sub_001D16CC(); return; /* tail jmp 0x001D16CC */

}

/**
 * sub_001D1560
 * Original: 0x001D1560 - 0x001D158F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1560: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15A1(); return; } /* je: equal / zero */

loc_001D156E: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D158F(); return; } /* je: equal / zero */

loc_001D1575: ;
    ecx = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D1586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1580u); } /* indirect call */
    }

loc_001D1586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D158F(); return; } /* jne: not equal / not zero */

loc_001D158A: ;
    eax = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_001D1591(); return; /* tail jmp 0x001D1591 */

}

/**
 * sub_001D158F
 * Original: 0x001D158F - 0x001D1591 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D158F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D158F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1591(); return; /* fallthrough 0x001D1591 */

}

/**
 * sub_001D1591
 * Original: 0x001D1591 - 0x001D15A1 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1591(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1591: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15A4(); return; } /* jne: not equal / not zero */

loc_001D1597: ;
    eax = 0x8007277Bu;
    g_seh_ebp = ebp; sub_001D16CB(); return; /* tail jmp 0x001D16CB */

}

/**
 * sub_001D15A1
 * Original: 0x001D15A1 - 0x001D15A4 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15A1: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D15A4(); return; /* fallthrough 0x001D15A4 */

}

/**
 * sub_001D15A4
 * Original: 0x001D15A4 - 0x001D15BF (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15A4: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D15BF(); return; } /* jne: not equal / not zero */

loc_001D15B1: ;
    eax = ebx + 0x24;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    g_seh_ebp = ebp; sub_001D15C7(); return; /* tail jmp 0x001D15C7 */

}

/**
 * sub_001D15BF
 * Original: 0x001D15BF - 0x001D15C7 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

    g_seh_ebp = ebp; sub_001D15C7(); return; /* fallthrough 0x001D15C7 */

}

/**
 * sub_001D15C7
 * Original: 0x001D15C7 - 0x001D15ED (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15FC(); return; } /* je: equal / zero */

loc_001D15CB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15FC(); return; } /* jne: not equal / not zero */

loc_001D15D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15ED(); return; } /* je: equal / zero */

loc_001D15D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15E3; /* je: equal / zero */

loc_001D15DD: ;
    _fa = (uint32_t)(MEM8(ebx + 0x7C)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x7C), 7 (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D15FC(); return; } /* jae: above or equal (unsigned >=) */

loc_001D15E3: ;
    eax = 0x80072733u;
    g_seh_ebp = ebp; sub_001D16CA(); return; /* tail jmp 0x001D16CA */

}

/**
 * sub_001D15ED
 * Original: 0x001D15ED - 0x001D15FC (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15ED: ;
    eax = ebp + -32;
    MEM32(edi + 4) = eax;
    eax = ebx + 0x10;
    MEM32(edi) = eax;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D15FC(); return; /* fallthrough 0x001D15FC */

}

/**
 * sub_001D15FC
 * Original: 0x001D15FC - 0x001D160E (18 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15FC: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xC), 2 (8-bit) */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D160E(); return; } /* jne: not equal / not zero */

loc_001D1607: ;
    PUSH32(esp, 0x001D160Cu); RECOMP_ABI_CALL(0x001E2809u, sub_001E2809); /* call 0x001E2809 */

loc_001D160C: ;
    g_seh_ebp = ebp; sub_001D1613(); return; /* tail jmp 0x001D1613 */

}

/**
 * sub_001D160E
 * Original: 0x001D160E - 0x001D1613 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D160E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D160E: ;
    PUSH32(esp, 0x001D1613u); RECOMP_ABI_CALL(0x001E136Au, sub_001E136A); /* call 0x001E136A */

    g_seh_ebp = ebp; sub_001D1613(); return; /* fallthrough 0x001D1613 */

}

/**
 * sub_001D1613
 * Original: 0x001D1613 - 0x001D169C (137 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1613: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800703E5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x800703E5u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D169C(); return; } /* jne: not equal / not zero */

loc_001D161D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D16C8(); return; } /* jne: not equal / not zero */

loc_001D1627: ;
    esi = MEM32(ebx + 0x54);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D163Bu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D163B: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -12) = eax;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ebp + -12;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(edi));
    MEM32(ebp + -8) = edx;
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x001D1659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1653u); } /* indirect call */
    }

loc_001D1659: ;
    esi = 0x800703E5u;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D1689; /* jne: not equal / not zero */

loc_001D1663: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D1669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1663u); } /* indirect call */
    }

loc_001D1669: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + 8) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D1680; /* jne: not equal / not zero */

loc_001D1671: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8007274Cu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1680u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001D1680: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D1689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1683u); } /* indirect call */
    }

loc_001D1689: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -28);
    esi = MEM32(ebp + -20);
    MEM32(edi + 8) = eax;
    g_seh_ebp = ebp; sub_001D16C8(); return; /* tail jmp 0x001D16C8 */

}

/**
 * sub_001D169C
 * Original: 0x001D169C - 0x001D16CC (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D169C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D169C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D16C8; /* je: equal / zero */

loc_001D16A3: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi + 0xC);
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = esi;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D16C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D16BAu); } /* indirect call */
    }

loc_001D16C0: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D16C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D16C2u); } /* indirect call */
    }

loc_001D16C8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D16CC(); return; /* fallthrough 0x001D16CC */

}

/**
 * sub_001D16C8
 * Original: 0x001D16C8 - 0x001D16CC (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16C8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D16CC(); return; /* fallthrough 0x001D16CC */

}

/**
 * sub_001D16CA
 * Original: 0x001D16CA - 0x001D16CC (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16CA: ;
    POP32(esp, esi);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D16CC(); return; /* fallthrough 0x001D16CC */

}

/**
 * sub_001D16CB
 * Original: 0x001D16CB - 0x001D16CC (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16CB: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D16CC(); return; /* fallthrough 0x001D16CC */

}

/**
 * sub_001D16CC
 * Original: 0x001D16CC - 0x001D16D1 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16CC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D16D1
 * Original: 0x001D16D1 - 0x001D16F7 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D16D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D16D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D16F7(); return; } /* jne: not equal / not zero */

loc_001D16E7: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D16F7(); return; } /* jne: not equal / not zero */

loc_001D16ED: ;
    eax = 0x80072749u;
    g_seh_ebp = ebp; sub_001D17E4(); return; /* tail jmp 0x001D17E4 */

}

/**
 * sub_001D16F7
 * Original: 0x001D16F7 - 0x001D1712 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1712(); return; } /* je: equal / zero */

loc_001D16FB: ;
    esi = MEM32(esi + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D17E4(); return; } /* jl: less (signed <) */

loc_001D1708: ;
    eax = 0x8007274Au;
    g_seh_ebp = ebp; sub_001D17E4(); return; /* tail jmp 0x001D17E4 */

}

/**
 * sub_001D1712
 * Original: 0x001D1712 - 0x001D173E (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1712: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1750(); return; } /* je: equal / zero */

loc_001D171D: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D173E(); return; } /* je: equal / zero */

loc_001D1724: ;
    ecx = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D1735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D172Fu); } /* indirect call */
    }

loc_001D1735: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D173E(); return; } /* jne: not equal / not zero */

loc_001D1739: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001D1740(); return; /* tail jmp 0x001D1740 */

}
