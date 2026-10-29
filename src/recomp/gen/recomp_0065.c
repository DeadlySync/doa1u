/**
 * DOAU1 - Recompiled code chunk 65
 * Functions: 250 (0x001D3B2F - 0x001D6A61)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D3B2F
 * Original: 0x001D3B2F - 0x001D3B34 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3B2F: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;

    g_seh_ebp = ebp; sub_001D3B34(); return; /* fallthrough 0x001D3B34 */

}

/**
 * sub_001D3B32
 * Original: 0x001D3B32 - 0x001D3B34 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3B32: ;
    ecx = esi;

    g_seh_ebp = ebp; sub_001D3B34(); return; /* fallthrough 0x001D3B34 */

}

/**
 * sub_001D3B34
 * Original: 0x001D3B34 - 0x001D3B41 (13 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3B34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D3B3Au); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001D3B3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D3B41
 * Original: 0x001D3B41 - 0x001D3B6A (41 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3B41: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0xA80;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B67; /* je: equal / zero */

loc_001D3B51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B67; /* je: equal / zero */

loc_001D3B55: ;
    PUSH32(esp, edi);

loc_001D3B56: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D3B60u); RECOMP_ABI_CALL(0x001D2B94u, sub_001D2B94); /* call 0x001D2B94 */

loc_001D3B60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001D3B56; /* jne: not equal / not zero */

loc_001D3B66: ;
    POP32(esp, edi);

loc_001D3B67: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3B6A
 * Original: 0x001D3B6A - 0x001D3BA8 (62 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3B6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3B6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B82; /* je: equal / zero */

loc_001D3B79: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001D3B82: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B8F; /* je: equal / zero */

loc_001D3B89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001D3B8F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100007F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x100007F (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3BA8(); return; } /* jne: not equal / not zero */

loc_001D3B98: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3BA4; /* je: equal / zero */

loc_001D3B9C: ;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3BA4u); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001D3BA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D3C06(); return; /* tail jmp 0x001D3C06 */

}

/**
 * sub_001D3BA8
 * Original: 0x001D3BA8 - 0x001D3BF6 (78 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3BA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3BA8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3BA8u); } /* indirect call */
    }

loc_001D3BAE: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    MEM8(ebp + 0x10) = LO8(eax);
    PUSH32(esp, 0x001D3BBBu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D3BBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3BF6(); return; } /* je: equal / zero */

loc_001D3BBF: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3BF6(); return; } /* je: equal / zero */

loc_001D3BC5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3BF6(); return; } /* jne: not equal / not zero */

loc_001D3BCA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3BDE; /* je: equal / zero */

loc_001D3BD0: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 9);
    esi = eax + 0xC4;
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

loc_001D3BDE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3BF2; /* je: equal / zero */

loc_001D3BE2: ;
    eax = MEM32(eax + 0xC0);
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;

loc_001D3BF2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D3BFB(); return; /* tail jmp 0x001D3BFB */

}

/**
 * sub_001D3BF6
 * Original: 0x001D3BF6 - 0x001D3BFB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3BF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3BF6: ;
    esi = 0x2726;

    g_seh_ebp = ebp; sub_001D3BFB(); return; /* fallthrough 0x001D3BFB */

}

/**
 * sub_001D3BFB
 * Original: 0x001D3BFB - 0x001D3C06 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3BFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3BFB: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D3C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3BFEu); } /* indirect call */
    }

loc_001D3C04: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001D3C06(); return; /* fallthrough 0x001D3C06 */

}

/**
 * sub_001D3C06
 * Original: 0x001D3C06 - 0x001D3C0D (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3C06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D3C0D
 * Original: 0x001D3C0D - 0x001D3C55 (72 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3C0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3C17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3C11u); } /* indirect call */
    }

loc_001D3C17: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D3C24u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D3C24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3C41; /* je: equal / zero */

loc_001D3C28: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D3C41; /* je: equal / zero */

loc_001D3C2D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3C3D; /* je: equal / zero */

loc_001D3C35: ;
    eax = MEM32(eax + 0xB8);
    MEM32(ecx) = eax;

loc_001D3C3D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D3C46;

loc_001D3C41: ;
    esi = 0x2726;

loc_001D3C46: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D3C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3C48u); } /* indirect call */
    }

loc_001D3C4E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D3C55
 * Original: 0x001D3C55 - 0x001D3CA2 (77 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3C55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3C59u); } /* indirect call */
    }

loc_001D3C5F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D3C6Cu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D3C6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3C90; /* je: equal / zero */

loc_001D3C70: ;
    SET_LO8(eax, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3C7B; /* jne: not equal / not zero */

loc_001D3C77: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D3C93;

loc_001D3C7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D3C88; /* jb: below (unsigned <) */

loc_001D3C7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D3C88; /* ja: above (unsigned >) */

loc_001D3C83: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001D3C93;

loc_001D3C88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D3C90; /* jb: below (unsigned <) */

loc_001D3C8C: ;
    PUSH32(esp, 2);
    goto loc_001D3C92;

loc_001D3C90: ;
    PUSH32(esp, 3);

loc_001D3C92: ;
    POP32(esp, esi);

loc_001D3C93: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D3C9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3C95u); } /* indirect call */
    }

loc_001D3C9B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3CA2
 * Original: 0x001D3CA2 - 0x001D3CCB (41 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3CA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3CA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 2);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3CC7u); RECOMP_ABI_CALL(0x001D35CCu, sub_001D35CC); /* call 0x001D35CC */

loc_001D3CC7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D3CCB
 * Original: 0x001D3CCB - 0x001D3D92 (199 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3CCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3CCB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3CE5u); RECOMP_ABI_CALL(0x001D819Au, sub_001D819A); /* call 0x001D819A */

loc_001D3CE5: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = ZX16(MEM16(esi + 4));
    eax = eax + ecx + -12;
    ecx = esi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3CFEu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D3CFE: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3D92(); return; } /* jne: not equal / not zero */

loc_001D3D09: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 0xC) = 8;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = 0x1000000;
    eax = MEM32(ebp + -8);
    MEM16(eax) = 0x20C;
    MEM16(eax + 2) = 0x20C;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3D55u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D3D55: ;
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -8);
    eax = ecx;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebx + 0xA98;
    MEM32(ebp + -48) = ecx;
    ecx = ebx + 0xAA8;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = 0x18;
    ecx = ebx + 0xAC0;
    g_seh_ebp = ebp; sub_001D3ED2(); return; /* tail jmp 0x001D3ED2 */

}

/**
 * sub_001D3D92
 * Original: 0x001D3D92 - 0x001D3E39 (167 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3D92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3D92: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 0x66 (8-bit) */
    edx = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3E46(); return; } /* je: equal / zero */

loc_001D3D9E: ;
    eax = MEM32(ebx + 0x268);
    MEM32(edx + 0xC) = eax;
    SET_LO16(eax, MEM16(ebx + 0x8CE));
    MEM16(edi) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebx + 0xD10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD10), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3E79(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D3DBE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xAF4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3E79(); return; } /* je: equal / zero */

loc_001D3DCA: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -48) = eax;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3DEB; /* je: equal / zero */

loc_001D3DD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3DEB; /* je: equal / zero */

loc_001D3DDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3DEB; /* je: equal / zero */

loc_001D3DE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3E79(); return; } /* jne: not equal / not zero */

loc_001D3DEB: ;
    eax = MEM32(0x22BAE8);
    edx = MEM32(ebx + 0xD18);
    eax = MEM32(eax);
    MEM32(ebp + 8) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = eax;
    if ((_fas >= 0)) goto loc_001D3E05; /* jns: not sign (positive) */

loc_001D3E02: ;
    MEM32(ebp + 8) = eax;

loc_001D3E05: ;
    eax = ZX16(MEM16(esi + 4));
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0xD10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0xD10)); }
    edx = MEM32(ebp + 8);
    edi = MEM32(ebp + -8);
    eax = edx + eax + 1;
    edx = eax;
    _fb = (uint32_t)(MEM32(ebx + 0xD14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + 0xD14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_001D3E39(); return; } /* jns: not sign (positive) */

loc_001D3E31: ;
    MEM32(ebx + 0xD18) = eax;
    g_seh_ebp = ebp; sub_001D3E79(); return; /* tail jmp 0x001D3E79 */

}

/**
 * sub_001D3E39
 * Original: 0x001D3E39 - 0x001D3E46 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3E39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3E39: ;
    eax = MEM32(ebp + -48);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_001D3E79(); return; /* tail jmp 0x001D3E79 */

}

/**
 * sub_001D3E46
 * Original: 0x001D3E46 - 0x001D3E79 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3E46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3E46: ;
    MEM32(edx + 0xC) = 0x1000000;
    MEM16(edi) = 0x20C;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ecx + 0xCE;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = ebx + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -8);
    MEM16(eax + 0xC) = 8;

    g_seh_ebp = ebp; sub_001D3E79(); return; /* fallthrough 0x001D3E79 */

}

/**
 * sub_001D3E79
 * Original: 0x001D3E79 - 0x001D3ED2 (89 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3E79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3E79: ;
    eax = MEM32(ebx + 0x1D8);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -12);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ecx + 0x14);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 0xB8);
    MEM32(edx + 0x10) = eax;
    SET_LO16(eax, MEM16(ecx + 0xBC));
    MEM16(edi + 2) = LO16(eax);
    edx = MEM32(ecx + 8);
    eax = edi + 8;
    MEM32(ebp + 0xC) = eax;
    MEM32(eax) = edx;
    eax = ecx + 0x86;
    MEM32(ebp + -48) = eax;
    eax = ecx + 0x96;
    MEM32(ebp + -40) = eax;
    eax = ZX16(MEM16(ecx + 0xB6));
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xAE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xAE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D3ED2(); return; /* fallthrough 0x001D3ED2 */

}

/**
 * sub_001D3ED2
 * Original: 0x001D3ED2 - 0x001D3FB7 (229 bytes, 90 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3ED2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3ED2: ;
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + -44);
    MEM16(ecx) = LO16(eax);
    eax = MEM32(ebp + -4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(esi + 6) = LO16(eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D3F05u); RECOMP_ABI_CALL(0x001D79E0u, sub_001D79E0); /* call 0x001D79E0 */

loc_001D3F05: ;
    eax = MEM32(ebp + -12);
    MEM8(eax + 9) = 0x11;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001D3F36; /* jbe: below or equal (unsigned <=) */

loc_001D3F1A: ;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edi = MEM32(ebp + 8);

loc_001D3F36: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D3F64; /* jbe: below or equal (unsigned <=) */

loc_001D3F3C: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x001D3F4Du); RECOMP_ABI_CALL(0x001D250Du, sub_001D250D); /* call 0x001D250D */

loc_001D3F4D: ;
    PUSH32(esp, MEM32(ebp + -16));
    eax = ebp + -32;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -36));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D3F64u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D3F64: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + -44);
    eax = ecx + 2;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(edx);
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -52);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -56);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ecx + edx + 0xB;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x001D3FA5u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001D3FA5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D3FB0u); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001D3FB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D3FB7
 * Original: 0x001D3FB7 - 0x001D3FDE (39 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3FB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ecx + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3FDE(); return; } /* je: equal / zero */

loc_001D3FCE: ;
    PUSH32(esp, MEM32(edi + 0xC0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3FD9u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D3FD9: ;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_001D3FE5(); return; /* tail jmp 0x001D3FE5 */

}

/**
 * sub_001D3FDE
 * Original: 0x001D3FDE - 0x001D3FE5 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3FDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3FDE: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001D3FE5(); return; /* fallthrough 0x001D3FE5 */

}

/**
 * sub_001D3FE5
 * Original: 0x001D3FE5 - 0x001D416B (390 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3FE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3FE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4181(); return; } /* je: equal / zero */

loc_001D3FED: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xD4);
    eax = MEM32(eax + 0xD8);
    PUSH32(esp, esi);
    MEM32(ebp + -16) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + 0x20;
    eax = 0x534;
    esi = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ebp + -24) = eax;
    eax = eax + ecx + 4;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    PUSH32(esp, 0x001D4035u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D4035: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D417F(); return; } /* je: equal / zero */

loc_001D4040: ;
    esi = MEM32(eax);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(edi + 0xB8));
    MEM32(ebp + -12) = esi;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D4059u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D4059: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ecx + 0x268);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = edx;
    SET_LO16(ecx, MEM16(ecx + 0x8CE));
    MEM16(eax + 0x14) = LO16(ecx);
    MEM16(eax + 0x16) = 0x20C;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C) = ecx;
    MEM16(esi) = 0x5808;
    MEM16(esi + 2) = 0x20;
    MEM16(esi + 4) = LO16(ecx);
    MEM16(esi + 6) = LO16(ecx);
    eax = MEM32(edi + 0x12C);
    edx = MEM32(eax);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edi + 0x48);
    MEM32(esi + 0x18) = eax;
    edx = ebp + -44;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esi + 0x20;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC0)) >> 32) & 1);
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D40DAu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D40DA: ;
    esi = MEM32(ebp + -16);
    eax = ebx + -4;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(edi + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0x001D4109u); RECOMP_ABI_CALL(0x001EF7F8u, sub_001EF7F8); /* call 0x001EF7F8 */

loc_001D4109: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D417F(); return; } /* je: equal / zero */

loc_001D410D: ;
    edx = MEM32(ebp + -20);
    eax = edi + 0xE0;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + ecx * 8 + 0xE8) = edx;
    edx = MEM32(ebp + -16);
    MEM32(edi + ecx * 8 + 0xEC) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(esi) = 0x5882;
    MEM16(esi + 2) = LO16(eax);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D416B(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D4144: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 2) = LO16(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = 0x5886;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D4166u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D4166: ;
    ecx = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_001D4174(); return; /* tail jmp 0x001D4174 */

}

/**
 * sub_001D416B
 * Original: 0x001D416B - 0x001D4174 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D416B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D416B: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ecx + 4) = MEM16(ecx + 4) + LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D4174(); return; /* fallthrough 0x001D4174 */

}

/**
 * sub_001D4174
 * Original: 0x001D4174 - 0x001D417F (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4174(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4174: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001D417Fu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

    g_seh_ebp = ebp; sub_001D417F(); return; /* fallthrough 0x001D417F */

}

/**
 * sub_001D417F
 * Original: 0x001D417F - 0x001D4181 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D417F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D417F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D4181(); return; /* fallthrough 0x001D4181 */

}

/**
 * sub_001D4181
 * Original: 0x001D4181 - 0x001D4186 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4181: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4186
 * Original: 0x001D4186 - 0x001D41AD (39 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4186: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ecx + 0xAEC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D41AD(); return; } /* je: equal / zero */

loc_001D41A0: ;
    PUSH32(esp, MEM32(edi + 0xC0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D41ABu); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D41AB: ;
    g_seh_ebp = ebp; sub_001D41AF(); return; /* tail jmp 0x001D41AF */

}

/**
 * sub_001D41AD
 * Original: 0x001D41AD - 0x001D41AF (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D41AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D41AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D41AF(); return; /* fallthrough 0x001D41AF */

}

/**
 * sub_001D41AF
 * Original: 0x001D41AF - 0x001D4350 (417 bytes, 130 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D41AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D41AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4365(); return; } /* je: equal / zero */

loc_001D41B7: ;
    ecx = eax + 0xC0;
    MEM32(ebp + -20) = ecx;
    ecx = eax + 0x60;
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 0xD4);
    eax = MEM32(eax + 0xD8);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -24) = ecx;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7C)) >> 32) & 1);
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x534;
    ebx = eax;
    edx = ecx + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(ebp + -32) = eax;
    eax = eax + ecx + 4;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    PUSH32(esp, 0x001D420Eu); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D420E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4364(); return; } /* je: equal / zero */

loc_001D4219: ;
    esi = MEM32(eax);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(edi + 0xB8));
    ebx = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D422Fu); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D422F: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x268);
    MEM32(esi + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax + 0x8CE));
    MEM16(esi + 0x14) = LO16(ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x16) = 0x20C;
    MEM32(esi + 0x1C) = ecx;
    MEM16(ebx) = 0x5802;
    MEM16(ebx + 2) = 0x18;
    MEM16(ebx + 4) = LO16(ecx);
    MEM16(ebx + 6) = LO16(ecx);
    _fa = (uint32_t)(MEM32(eax + 0xAF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAF4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4272; /* jne: not equal / not zero */

loc_001D426C: ;
    MEM16(ebx + 6) = 1;

loc_001D4272: ;
    eax = MEM32(edi + 4);
    esi = MEM32(ebp + -16);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x18) = 0x5880;
    MEM16(ebx + 0x1A) = 0x64;
    edi = ebx + 0x1C;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
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
    esi = ebx + 0x7C;
    PUSH32(esp, 0);
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x001D42BCu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D42BC: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(ebp + 8);
    eax = edi + -4;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0x001D42EEu); RECOMP_ABI_CALL(0x001EF7F8u, sub_001EF7F8); /* call 0x001EF7F8 */

loc_001D42EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4364(); return; } /* je: equal / zero */

loc_001D42F2: ;
    edx = MEM32(ebp + -28);
    eax = ebx + 0xE0;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + ecx * 8 + 0xE8) = edx;
    edx = MEM32(ebp + -24);
    MEM32(ebx + ecx * 8 + 0xEC) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(esi) = 0x5882;
    MEM16(esi + 2) = LO16(eax);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4350(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D4329: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = 0x5886;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D434Bu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D434B: ;
    ecx = MEM32(ebp + -12);
    g_seh_ebp = ebp; sub_001D4359(); return; /* tail jmp 0x001D4359 */

}

/**
 * sub_001D4350
 * Original: 0x001D4350 - 0x001D4359 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4350: ;
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ecx + 4) = MEM16(ecx + 4) + LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D4359(); return; /* fallthrough 0x001D4359 */

}

/**
 * sub_001D4359
 * Original: 0x001D4359 - 0x001D4364 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4359(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4359: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001D4364u); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

    g_seh_ebp = ebp; sub_001D4364(); return; /* fallthrough 0x001D4364 */

}

/**
 * sub_001D4364
 * Original: 0x001D4364 - 0x001D4365 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4364(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4364: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D4365(); return; /* fallthrough 0x001D4365 */

}

/**
 * sub_001D4365
 * Original: 0x001D4365 - 0x001D436B (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4365(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4365: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D436B
 * Original: 0x001D436B - 0x001D4418 (173 bytes, 70 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D436B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D436B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ebx + esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40004);
    PUSH32(esp, 0x7654454E);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4394u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D4394: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4411; /* je: equal / zero */

loc_001D439D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D43B3u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D43B3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D43BAu); RECOMP_ABI_CALL(0x001D829Du, sub_001D829D); /* call 0x001D829D */

loc_001D43BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO16(ecx, MEM16(ebp + 0xC));
    MEM16(eax) = LO16(ecx);
    ecx = esi + ebx + 4;
    MEM16(eax + 2) = LO16(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_001D43E6; /* jbe: below or equal (unsigned <=) */

loc_001D43CD: ;
    esi = MEM32(ebp + 0x10);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 4;
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
    esi = MEM32(ebp + 0x1C);

loc_001D43E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D4401; /* jbe: below or equal (unsigned <=) */

loc_001D43EA: ;
    ecx = esi;
    esi = MEM32(ebp + 0x18);
    edi = eax + ebx + 4;
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

loc_001D4401: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4411u); RECOMP_ABI_CALL(0x001D3CCBu, sub_001D3CCB); /* call 0x001D3CCB */

loc_001D4411: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D4418
 * Original: 0x001D4418 - 0x001D4434 (28 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4418(void)
{

loc_001D4418: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5300);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001D4431u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4431: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D4434
 * Original: 0x001D4434 - 0x001D4482 (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4434: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x7C);
    eax = MEM32(edi + 0x14);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xAF4) (32-bit) */
    MEM32(ebp + 0x68) = eax;
    MEM32(ebp + 0x6C) = esi;
    eax = ebp + -112;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D44FE(); return; } /* jne: not equal / not zero */

loc_001D445F: ;
    ecx = MEM32(esi + 0xD08);
    MEM32(ebp + -116) = ecx;
    ecx = esi + 0xD00;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4502(); return; } /* je: equal / zero */

loc_001D4477: ;
    edx = esi + 0xB00;
    MEM32(ebp + 0x70) = ecx;
    g_seh_ebp = ebp; sub_001D44F8(); return; /* tail jmp 0x001D44F8 */

}

/**
 * sub_001D4482
 * Original: 0x001D4482 - 0x001D44F8 (118 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4482(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4482: ;
    ecx = MEM32(ebp + 0x70);
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D44E9; /* je: equal / zero */

loc_001D448B: ;
    MEM8(eax) = LO8(ecx);
    ebx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D44A8; /* je: equal / zero */

loc_001D44A0: ;
    ebx = MEM32(edx + 0x44);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D44A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D44BB; /* je: equal / zero */

loc_001D44AD: ;
    ebx = MEM32(edx + 0x54);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 0x58);
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D44BB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D44E9; /* je: equal / zero */

loc_001D44C0: ;
    SET_LO8(ecx, MEM8(edx + 0x5C));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(edx + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D44E9; /* jbe: below or equal (unsigned <=) */

loc_001D44CD: ;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    esi = edx + 0x60;
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
    _fb = (uint32_t)(MEM32(edx + 0x5C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + 0x7C);
    esi = MEM32(ebp + 0x6C);

loc_001D44E9: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0xD00;

    g_seh_ebp = ebp; sub_001D44F8(); return; /* fallthrough 0x001D44F8 */

}

/**
 * sub_001D44F8
 * Original: 0x001D44F8 - 0x001D44FE (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D44F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D44F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4482(); return; } /* jb: below (unsigned <) */

loc_001D44FC: ;
    g_seh_ebp = ebp; sub_001D4502(); return; /* tail jmp 0x001D4502 */

}

/**
 * sub_001D44FE
 * Original: 0x001D44FE - 0x001D4502 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D44FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D44FE: ;
    MEM32(ebp + -116) = MEM32(ebp + -116) & 0;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D4502(); return; /* fallthrough 0x001D4502 */

}

/**
 * sub_001D4502
 * Original: 0x001D4502 - 0x001D455A (88 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4502: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = ebp + -120;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5302);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D4520u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4520: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D4550; /* jbe: below or equal (unsigned <=) */

loc_001D4528: ;
    eax = MEM32(esi + 0x1D8);
    MEM32(edi + 0x20) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4550; /* jne: not equal / not zero */

loc_001D4539: ;
    _fa = (uint32_t)(MEM32(esi + 0xD00)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD00), ebx (32-bit) */
    MEM32(esi + 0xD08) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4550; /* je: equal / zero */

loc_001D4547: ;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0xD04) = eax;

loc_001D4550: ;
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
 * sub_001D455A
 * Original: 0x001D455A - 0x001D457F (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D455A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D455A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x538) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x538;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ecx;
    MEM8(esi + 2) = 8;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D457F(); return; } /* je: equal / zero */

loc_001D457A: ;
    SET_LO8(eax, MEM8(ebx + 0x3E));
    g_seh_ebp = ebp; sub_001D4582(); return; /* tail jmp 0x001D4582 */

}

/**
 * sub_001D457F
 * Original: 0x001D457F - 0x001D4582 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D457F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D457F: ;
    SET_LO8(eax, MEM8(ebx + 0x3C));

    g_seh_ebp = ebp; sub_001D4582(); return; /* fallthrough 0x001D4582 */

}

/**
 * sub_001D4582
 * Original: 0x001D4582 - 0x001D4595 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4582(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4582: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM8(esi + 3) = LO8(eax);
    ecx = MEM32(ebx + 0x1D8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4595(); return; } /* je: equal / zero */

loc_001D4590: ;
    SET_LO8(eax, MEM8(ebx + 0x3F));
    g_seh_ebp = ebp; sub_001D4598(); return; /* tail jmp 0x001D4598 */

}

/**
 * sub_001D4595
 * Original: 0x001D4595 - 0x001D4598 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4595(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4595: ;
    SET_LO8(eax, MEM8(ebx + 0x3D));

    g_seh_ebp = ebp; sub_001D4598(); return; /* fallthrough 0x001D4598 */

}

/**
 * sub_001D4598
 * Original: 0x001D4598 - 0x001D464F (183 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4598: ;
    eax = ZX8(LO8(eax));
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D45ACu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D45AC: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = MEM32(ebx + 0xAEC);
    PUSH32(esp, 0x001D45BDu); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D45BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4649; /* je: equal / zero */

loc_001D45C5: ;
    eax = MEM32(eax + 0xD8);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -36;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    ecx = MEM32(ebx + 0xAEC);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -1336;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC0));
    MEM32(ebp + 8) = 0x514;
    PUSH32(esp, 0x001D4606u); RECOMP_ABI_CALL(0x001EF7F8u, sub_001EF7F8); /* call 0x001EF7F8 */

loc_001D4606: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D4649; /* je: equal / zero */

loc_001D460B: ;
    edx = MEM32(ebp + -8);
    eax = esi + 0xE0;
    ecx = MEM32(eax);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + ecx * 8 + 0xE8) = edx;
    edx = MEM32(ebp + -4);
    MEM32(esi + ecx * 8 + 0xEC) = edx;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp + -1336;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5305);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D4649u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4649: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D464F
 * Original: 0x001D464F - 0x001D4666 (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D464F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D464F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x530B);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001D4663u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4663: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D466B
 * Original: 0x001D466B - 0x001D4751 (230 bytes, 81 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D466B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D466B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D474C; /* je: equal / zero */

loc_001D467E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D474C; /* je: equal / zero */

loc_001D4686: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D46A2; /* jb: below (unsigned <) */

loc_001D468A: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D46A2; /* jne: not equal / not zero */

loc_001D4691: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO16(eax, LO16(eax) | 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0x001D46A2u); RECOMP_ABI_CALL(0x001D4418u, sub_001D4418); /* call 0x001D4418 */

loc_001D46A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 4));
    ecx = ebp;
    PUSH32(esp, 0x001D46AEu); RECOMP_ABI_CALL(0x001D0A64u, sub_001D0A64); /* call 0x001D0A64 */

loc_001D46AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 8 (8-bit) */
    MEM8(esi + 2) = 1;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM16(esi) = MEM16(esi) & 0x17;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 3) = 0;
    edi = esi + 0x44;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001D46E7u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D46E7: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x001D46F0u); RECOMP_ABI_CALL(0x001D8343u, sub_001D8343); /* call 0x001D8343 */

loc_001D46F0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D46FD; /* je: equal / zero */

loc_001D46F6: ;
    ecx = ebp;
    PUSH32(esp, 0x001D46FDu); RECOMP_ABI_CALL(0x001D345Du, sub_001D345D); /* call 0x001D345D */

loc_001D46FD: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D4711; /* je: equal / zero */

loc_001D4704: ;
    MEM32(esi + 0xB8) = edi;
    MEM16(esi + 0xBC) = LO16(edi);

loc_001D4711: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D472B; /* je: equal / zero */

loc_001D4715: ;
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x128), edi (32-bit) */
    MEM32(esi + 0xE0) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001D472B; /* jbe: below or equal (unsigned <=) */

loc_001D4723: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001D472Bu); RECOMP_ABI_CALL(0x001DB93Cu, sub_001DB93C); /* call 0x001DB93C */

loc_001D472B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xAF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xAF4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D474A; /* jne: not equal / not zero */

loc_001D4733: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xAF8));
    MEM32(ebp + 0xAF0) = eax;
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D474Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4744u); } /* indirect call */
    }

loc_001D474A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001D474C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D4751
 * Original: 0x001D4751 - 0x001D4771 (32 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4751(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4751: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D476D; /* je: equal / zero */

loc_001D475C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D4766u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D4766: ;
    PUSH32(esp, 0x4C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001D476D: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D4771
 * Original: 0x001D4771 - 0x001D47D5 (100 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4771(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4771: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edi + 0xACC);
    if (CMP_BE(_fa, _fb)) goto loc_001D47D0; /* jbe: below or equal (unsigned <=) */

loc_001D4783: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_001D4786: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D47C6; /* je: equal / zero */

loc_001D478D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4799; /* je: equal / zero */

loc_001D4794: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D47C6; /* je: equal / zero */

loc_001D4799: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D47B5; /* jb: below (unsigned <) */

loc_001D479D: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D47B5; /* jne: not equal / not zero */

loc_001D47A4: ;
    PUSH32(esp, 0);
    SET_LO16(eax, LO16(eax) | 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0x001D47B5u); RECOMP_ABI_CALL(0x001D4418u, sub_001D4418); /* call 0x001D4418 */

loc_001D47B5: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D47C6; /* je: equal / zero */

loc_001D47BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D47C6u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D47C6: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x130;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4786; /* jne: not equal / not zero */

loc_001D47CF: ;
    POP32(esp, ebx);

loc_001D47D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D47D5
 * Original: 0x001D47D5 - 0x001D4846 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D47D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D47D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = ZX8(MEM8(esi + 0xE));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xAD8) = MEM32(esi + 0xAD8) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0xAD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xAD8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xADC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48DA(); return; } /* jb: below (unsigned <) */

loc_001D47FE: ;
    eax = MEM32(esi + 0x1D8);
    MEM32(ebp + -12) = eax;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi + 0xAD0);
    MEM32(esi + 0xAD8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D482A; /* jne: not equal / not zero */

loc_001D4824: ;
    edi = MEM32(esi + 0xACC);

loc_001D482A: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x130);
    _fb = (uint32_t)(MEM32(esi + 0xACC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 0xACC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D4841: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001D4848(); return; /* tail jmp 0x001D4848 */

}

/**
 * sub_001D4846
 * Original: 0x001D4846 - 0x001D4848 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4846(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4846: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D4848(); return; /* fallthrough 0x001D4848 */

}

/**
 * sub_001D4848
 * Original: 0x001D4848 - 0x001D4876 (46 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4848: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4853; /* jne: not equal / not zero */

loc_001D484D: ;
    edi = MEM32(esi + 0xACC);

loc_001D4853: ;
    SET_LO8(eax, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* je: equal / zero */

loc_001D485A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* jb: below (unsigned <) */

loc_001D485E: ;
    ebx = MEM32(ebp + -12);
    eax = ebx;
    _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4876(); return; } /* ja: above (unsigned >) */

loc_001D486B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D4874u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D4874: ;
    g_seh_ebp = ebp; sub_001D48C5(); return; /* tail jmp 0x001D48C5 */

}

/**
 * sub_001D4876
 * Original: 0x001D4876 - 0x001D48AC (54 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4876(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4876: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* ja: above (unsigned >) */

loc_001D4880: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48AC(); return; } /* je: equal / zero */

loc_001D4885: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D48A2; /* jbe: below or equal (unsigned <=) */

loc_001D488A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* jne: not equal / not zero */

loc_001D4892: ;
    _fa = (uint32_t)(MEM32(esi + 0xD08)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD08), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D48A2; /* jne: not equal / not zero */

loc_001D489A: ;
    _fa = (uint32_t)(MEM32(esi + 0xD00)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD00), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* je: equal / zero */

loc_001D48A2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D48AAu); RECOMP_ABI_CALL(0x001D4434u, sub_001D4434); /* call 0x001D4434 */

loc_001D48AA: ;
    g_seh_ebp = ebp; sub_001D48C5(); return; /* tail jmp 0x001D48C5 */

}

/**
 * sub_001D48AC
 * Original: 0x001D48AC - 0x001D48C5 (25 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D48AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D48AC: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D48C5(); return; } /* ja: above (unsigned >) */

loc_001D48B1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5301);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D48C2u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D48C2: ;
    MEM32(edi + 0x20) = ebx;

    g_seh_ebp = ebp; sub_001D48C5(); return; /* fallthrough 0x001D48C5 */

}

/**
 * sub_001D48C5
 * Original: 0x001D48C5 - 0x001D48D4 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D48C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D48C5: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x130;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D4846(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D48D4(); return; /* fallthrough 0x001D48D4 */

}

/**
 * sub_001D48D4
 * Original: 0x001D48D4 - 0x001D48DA (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D48D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D48D4: ;
    MEM32(esi + 0xAD0) = edi;

    g_seh_ebp = ebp; sub_001D48DA(); return; /* fallthrough 0x001D48DA */

}

/**
 * sub_001D48DA
 * Original: 0x001D48DA - 0x001D48DF (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D48DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D48DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001D48DF
 * Original: 0x001D48DF - 0x001D497D (158 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D48DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D48DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAF0), 3 (32-bit) */
    ebx = MEM32(esi + 0xD1C);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4A2A(); return; } /* jne: not equal / not zero */

loc_001D4900: ;
    SET_LO16(eax, MEM16(ebx + 2));
    ecx = 0x11C;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4984(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D490E: ;
    PUSH32(esp, 0x14);
    edx = ebp + -36;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx + 0x11C;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4933u); RECOMP_ABI_CALL(0x001D7C7Fu, sub_001D7C7F); /* call 0x001D7C7F */

loc_001D4933: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BD78));
    edi = ebx + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4946u); RECOMP_ABI_CALL(0x00105A12u, sub_00105A12); /* call 0x00105A12 */

loc_001D4946: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D497D(); return; } /* je: equal / zero */

loc_001D494A: ;
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(0x22BCF4);
    ecx = ebx + 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4962u); RECOMP_ABI_CALL(0x001D24CAu, sub_001D24CA); /* call 0x001D24CA */

loc_001D4962: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D496Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4964u); } /* indirect call */
    }

loc_001D496A: ;
    PUSH32(esp, 0x40);
    edi = ebx + 0x948;
    POP32(esp, ecx);
    esi = ebx + 0x1C;
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
    esi = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_001D4984(); return; /* tail jmp 0x001D4984 */

}

/**
 * sub_001D497D
 * Original: 0x001D497D - 0x001D4984 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D497D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D497D: ;
    MEM8(ebx + 0x948) = 0x53;

    g_seh_ebp = ebp; sub_001D4984(); return; /* fallthrough 0x001D4984 */

}

/**
 * sub_001D4984
 * Original: 0x001D4984 - 0x001D4A12 (142 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4984(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4984: ;
    MEM32(esi + 0xAF0) = 4;
    MEM32(ebx + 0xA48) = MEM32(ebx + 0xA48) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xA48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x11C;
    ecx = 0x200;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4A2A(); return; } /* je: equal / zero */

loc_001D49AB: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x1E3808);
    { uint32_t _icall_target = MEM32(0x22BD8C); PUSH32(esp, 0x001D49BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D49B8u); } /* indirect call */
    }

loc_001D49BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D4A1D(); return; } /* jl: less (signed <) */

loc_001D49C2: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0xA50) = eax;
    eax = MEM32(ebx + 4);
    ecx = 0x800;
    edx = ecx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = ebx + 0xA48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xAF8));
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x22BD88); PUSH32(esp, 0x001D4A01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D49FBu); } /* indirect call */
    }

loc_001D4A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x103;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4A12(); return; } /* jne: not equal / not zero */

loc_001D4A0B: ;
    eax = 0xC000009Au;
    g_seh_ebp = ebp; sub_001D4A24(); return; /* tail jmp 0x001D4A24 */

}

/**
 * sub_001D4A12
 * Original: 0x001D4A12 - 0x001D4A1D (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A12: ;
    ecx = MEM32(ebp + -4);
    edx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD84); PUSH32(esp, 0x001D4A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4A17u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D4A1D(); return; /* fallthrough 0x001D4A1D */

}

/**
 * sub_001D4A1D
 * Original: 0x001D4A1D - 0x001D4A24 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4A2A(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D4A24(); return; /* fallthrough 0x001D4A24 */

}

/**
 * sub_001D4A24
 * Original: 0x001D4A24 - 0x001D4A2A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A24: ;
    MEM32(ebx + 0xA48) = eax;

    g_seh_ebp = ebp; sub_001D4A2A(); return; /* fallthrough 0x001D4A2A */

}

/**
 * sub_001D4A2A
 * Original: 0x001D4A2A - 0x001D4AA1 (119 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A2A: ;
    _fa = (uint32_t)(MEM32(esi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAF0), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B44(); return; } /* jne: not equal / not zero */

loc_001D4A37: ;
    eax = MEM32(ebx + 0xA48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B44(); return; } /* je: equal / zero */

loc_001D4A48: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D4AA1(); return; } /* jl: less (signed <) */

loc_001D4A4E: ;
    SET_LO16(eax, MEM16(ebx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x800 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D4A7D; /* jae: above or equal (unsigned >=) */

loc_001D4A58: ;
    PUSH32(esp, 0x14);
    edx = ebx + 0x920;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ZX16(LO16(eax));
    ecx = 0x800;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = eax + ebx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4A7Du); RECOMP_ABI_CALL(0x001D7C7Fu, sub_001D7C7F); /* call 0x001D7C7F */

loc_001D4A7D: ;
    SET_LO16(eax, MEM16(ebx + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7EC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7EC (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4AAE(); return; } /* ja: above (unsigned >) */

loc_001D4A87: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, 5);
    esi = eax + ebx + 0x11C;
    edi = ebx + 0x934;
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
    esi = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_001D4AAE(); return; /* tail jmp 0x001D4AAE */

}

/**
 * sub_001D4AA1
 * Original: 0x001D4AA1 - 0x001D4AAE (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4AA1: ;
    MEM8(ebx + 0x920) = 0x45;
    MEM32(ebx + 0x921) = eax;

    g_seh_ebp = ebp; sub_001D4AAE(); return; /* fallthrough 0x001D4AAE */

}

/**
 * sub_001D4AAE
 * Original: 0x001D4AAE - 0x001D4AE6 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4AAE: ;
    edi = ebx + 0xA50;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4AC3; /* je: equal / zero */

loc_001D4ABA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D4AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4ABAu); } /* indirect call */
    }

loc_001D4AC0: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D4AC3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D4AC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4AC3u); } /* indirect call */
    }

loc_001D4AC9: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(esi + 0xAF4);
    MEM32(esi + 0xAF0) = 5;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4AE6(); return; } /* je: equal / zero */

loc_001D4AE1: ;
    SET_LO8(ecx, MEM8(esi + 0x3E));
    g_seh_ebp = ebp; sub_001D4AE9(); return; /* tail jmp 0x001D4AE9 */

}

/**
 * sub_001D4AE6
 * Original: 0x001D4AE6 - 0x001D4AE9 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4AE6: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));

    g_seh_ebp = ebp; sub_001D4AE9(); return; /* fallthrough 0x001D4AE9 */

}

/**
 * sub_001D4AE9
 * Original: 0x001D4AE9 - 0x001D4B02 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4AE9: ;
    MEM8(eax + 3) = LO8(ecx);
    ecx = MEM32(esi + 0xAF4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 4 (8-bit) */
    edi = MEM32(esi + 0x1D8);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B02(); return; } /* je: equal / zero */

loc_001D4AFD: ;
    SET_LO8(eax, MEM8(esi + 0x3F));
    g_seh_ebp = ebp; sub_001D4B05(); return; /* tail jmp 0x001D4B05 */

}

/**
 * sub_001D4B02
 * Original: 0x001D4B02 - 0x001D4B05 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B02: ;
    SET_LO8(eax, MEM8(esi + 0x3D));

    g_seh_ebp = ebp; sub_001D4B05(); return; /* fallthrough 0x001D4B05 */

}

/**
 * sub_001D4B05
 * Original: 0x001D4B05 - 0x001D4B44 (63 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B05: ;
    eax = ZX8(LO8(eax));
    edx = edi + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D4B19u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D4B19: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x128);
    _fb = (uint32_t)(0x920) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x920;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x530A);
    PUSH32(esp, MEM32(esi + 0xAF4));
    ecx = esi;
    PUSH32(esp, 0x001D4B3Bu); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4B3B: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D4B44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4B3Eu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D4B44(); return; /* fallthrough 0x001D4B44 */

}

/**
 * sub_001D4B44
 * Original: 0x001D4B44 - 0x001D4B76 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B44: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D4B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4B44u); } /* indirect call */
    }

loc_001D4B4A: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B7D(); return; } /* je: equal / zero */

loc_001D4B53: ;
    eax = MEM32(esi + 0xAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B76(); return; } /* je: equal / zero */

loc_001D4B5D: ;
    _fa = (uint32_t)(MEM32(esi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAF0), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4B76(); return; } /* jb: below (unsigned <) */

loc_001D4B66: ;
    PUSH32(esp, 5);
    esi = eax + 0xC4;
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
    esi = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_001D4B7D(); return; /* tail jmp 0x001D4B7D */

}

/**
 * sub_001D4B76
 * Original: 0x001D4B76 - 0x001D4B7D (7 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

    g_seh_ebp = ebp; sub_001D4B7D(); return; /* fallthrough 0x001D4B7D */

}

/**
 * sub_001D4B7D
 * Original: 0x001D4B7D - 0x001D4BBA (61 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B7D: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4B94; /* je: equal / zero */

loc_001D4B84: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x8CC));
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;

loc_001D4B94: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BA3; /* je: equal / zero */

loc_001D4B9B: ;
    ecx = MEM32(esi + 0xD0C);
    MEM32(eax) = ecx;

loc_001D4BA3: ;
    esi = MEM32(esi + 0xAF0);
    SET_LO8(ecx, LO8(edx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D4BB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4BABu); } /* indirect call */
    }

loc_001D4BB1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D4BBA
 * Original: 0x001D4BBA - 0x001D4CAC (242 bytes, 84 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4BBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4BBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D4BCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4BC5u); } /* indirect call */
    }

loc_001D4BCB: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM8(ebp + -8) = LO8(eax);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4CAC(); return; } /* jae: above or equal (unsigned >=) */

loc_001D4BDA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4CAC(); return; } /* ja: above (unsigned >) */

loc_001D4BE4: ;
    ecx = MEM32(ebp + 0xC);
    eax = edx + 0x16;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), ecx (32-bit) */
    edx = edx + esi + 0xD00;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C08; /* je: equal / zero */

loc_001D4BFB: ;
    MEM32(eax + 0x44) = ecx;
    MEM8(edx) = MEM8(edx) | 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xD04) = MEM32(esi + 0xD04) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xD04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D4C08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -4);
    esi = eax + 0x54;
    POP32(esp, ecx);
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D4C34; /* je: equal / zero */

loc_001D4C1C: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ecx);
    MEM32(eax + 0x54) = esi;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x58) = ecx;
    MEM8(edx) = MEM8(edx) | 2;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0xD04) = MEM32(ebx + 0xD04) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xD04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D4C34: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x5C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C4E; /* jne: not equal / not zero */

loc_001D4C3C: ;
    edi = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -4);
    esi = eax + 0x60;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001D4C73; /* je: equal / zero */

loc_001D4C4B: ;
    ecx = MEM32(ebp + 0x14);

loc_001D4C4E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x5C) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001D4C69; /* jbe: below or equal (unsigned <=) */

loc_001D4C55: ;
    esi = MEM32(ebp + 0x18);
    edi = eax + 0x60;
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

loc_001D4C69: ;
    MEM8(edx) = MEM8(edx) | 4;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0xD04) = MEM32(ebx + 0xD04) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xD04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D4C73: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4CA5; /* je: equal / zero */

loc_001D4C7A: ;
    eax = MEM32(ebx + 0xAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4CA5; /* je: equal / zero */

loc_001D4C84: ;
    _fa = (uint32_t)(MEM32(ebx + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xAF0), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D4CA5; /* jb: below (unsigned <) */

loc_001D4C8D: ;
    _fa = (uint32_t)(MEM32(ebx + 0xD08)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD08), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C9D; /* jne: not equal / not zero */

loc_001D4C95: ;
    _fa = (uint32_t)(MEM32(ebx + 0xD00)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD00), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4CA5; /* je: equal / zero */

loc_001D4C9D: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4CA5u); RECOMP_ABI_CALL(0x001D4434u, sub_001D4434); /* call 0x001D4434 */

loc_001D4CA5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001D4CAE(); return; /* tail jmp 0x001D4CAE */

}

/**
 * sub_001D4CAC
 * Original: 0x001D4CAC - 0x001D4CAE (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4CAC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D4CAE(); return; /* fallthrough 0x001D4CAE */

}

/**
 * sub_001D4CAE
 * Original: 0x001D4CAE - 0x001D4CBE (16 bytes, 6 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4CAE: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D4CB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4CB1u); } /* indirect call */
    }

loc_001D4CB7: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D4CBE
 * Original: 0x001D4CBE - 0x001D4CE2 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4CBE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAF0), 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4D3D(); return; } /* jne: not equal / not zero */

loc_001D4CD2: ;
    edi = MEM32(esi + 0x1D8);
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x19;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x103;
    g_seh_ebp = ebp; sub_001D4D0D(); return; /* tail jmp 0x001D4D0D */

}

/**
 * sub_001D4CE2
 * Original: 0x001D4CE2 - 0x001D4D0D (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4CE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D8), edi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4D1B(); return; } /* ja: above (unsigned >) */

loc_001D4CEA: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(esi + 0xAF8));
    MEM32(esp + 0x2C) = 0xFFFE7960u;
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x001D4D0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4D07u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D4D0D(); return; /* fallthrough 0x001D4D0D */

}

/**
 * sub_001D4D0D
 * Original: 0x001D4D0D - 0x001D4D1B (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4D0D: ;
    eax = MEM32(esi + 0xD1C);
    _fa = (uint32_t)(MEM32(eax + 0xA48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4CE2(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D4D1B(); return; /* fallthrough 0x001D4D1B */

}

/**
 * sub_001D4D1B
 * Original: 0x001D4D1B - 0x001D4D3D (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4D1B: ;
    eax = MEM32(esi + 0xD1C);
    ecx = MEM32(eax + 0xA50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4D3D(); return; } /* je: equal / zero */

loc_001D4D2B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D4D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4D2Bu); } /* indirect call */
    }

loc_001D4D31: ;
    eax = MEM32(esi + 0xD1C);
    MEM32(eax + 0xA50) = ebp;

    g_seh_ebp = ebp; sub_001D4D3D(); return; /* fallthrough 0x001D4D3D */

}

/**
 * sub_001D4D3D
 * Original: 0x001D4D3D - 0x001D4DF3 (182 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4D3D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D4D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4D3Du); } /* indirect call */
    }

loc_001D4D43: ;
    edi = esi + 0xAF8;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM8(esp + 0x18) = LO8(eax);
    MEM32(esi + 0xAF0) = ebp;
    MEM32(esi + 0xAF4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D67; /* je: equal / zero */

loc_001D4D5F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D4D65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4D5Fu); } /* indirect call */
    }

loc_001D4D65: ;
    MEM32(edi) = ebp;

loc_001D4D67: ;
    ebx = esi + 0xB48;
    MEM32(esp + 0x14) = 4;

loc_001D4D75: ;
    edi = ebx;
    MEM32(esp + 0x10) = 3;

loc_001D4D7F: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D8B; /* je: equal / zero */

loc_001D4D85: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D4D8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4D85u); } /* indirect call */
    }

loc_001D4D8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4D7F; /* jne: not equal / not zero */

loc_001D4D94: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4D75; /* jne: not equal / not zero */

loc_001D4DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = esi + 0xB00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esi + 0xD1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0xD00) = ebp;
    MEM32(esi + 0xD04) = ebp;
    MEM32(esi + 0xD08) = ebp;
    MEM32(esi + 0xD0C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4DD8; /* je: equal / zero */

loc_001D4DD1: ;
    ecx = 0x295;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001D4DD8: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001D4DE1u); RECOMP_ABI_CALL(0x001D4771u, sub_001D4771); /* call 0x001D4771 */

loc_001D4DE1: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D4DEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4DE5u); } /* indirect call */
    }

loc_001D4DEB: ;
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
 * sub_001D4DF3
 * Original: 0x001D4DF3 - 0x001D4E43 (80 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4DF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4DF3: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D4E3B; /* je: equal / zero */

loc_001D4DFF: ;
    PUSH32(esp, edi);
    edi = 0x800000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D4E3A; /* jne: not equal / not zero */

loc_001D4E09: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D4E10u); RECOMP_ABI_CALL(0x001D4771u, sub_001D4771); /* call 0x001D4771 */

loc_001D4E10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001D4E1Du); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001D4E1D: ;
    ecx = esi;
    PUSH32(esp, 0x001D4E24u); RECOMP_ABI_CALL(0x001DFA1Du, sub_001DFA1D); /* call 0x001DFA1D */

loc_001D4E24: ;
    ecx = esi;
    PUSH32(esp, 0x001D4E2Bu); RECOMP_ABI_CALL(0x001D8FBCu, sub_001D8FBC); /* call 0x001D8FBC */

loc_001D4E2B: ;
    ecx = esi;
    PUSH32(esp, 0x001D4E32u); RECOMP_ABI_CALL(0x001DD4D7u, sub_001DD4D7); /* call 0x001DD4D7 */

loc_001D4E32: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D4E3Au); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D4E3A: ;
    POP32(esp, edi);

loc_001D4E3B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001DF220(); return; /* tail jmp 0x001DF220 */

}

/**
 * sub_001D4E43
 * Original: 0x001D4E43 - 0x001D4EE3 (160 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4E43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4E43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) >> 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edi;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001D4E6C; /* je: equal / zero */

loc_001D4E5F: ;
    _fa = (uint32_t)(MEM32(edi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xAF0), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D518B(); return; } /* jb: below (unsigned <) */

loc_001D4E6C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    eax = 0x98;
    if (CMP_NE(_fa, _fb)) goto loc_001D4E7B; /* jne: not equal / not zero */

loc_001D4E78: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D4E7B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4E93u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D4E93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D518B(); return; } /* je: equal / zero */

loc_001D4E9E: ;
    ebx = MEM32(eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4EB0u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D4EB0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4FF6(); return; } /* je: equal / zero */

loc_001D4EB9: ;
    eax = MEM32(edi + 0x268);
    MEM32(ebx + 0xC) = eax;
    SET_LO16(eax, MEM16(edi + 0x8CE));
    MEM16(ebx + 0x14) = LO16(eax);
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4EE3(); return; } /* je: equal / zero */

loc_001D4ED7: ;
    MEM32(ebx + 0x10) = eax;
    SET_LO16(eax, MEM16(esi + 0xBC));
    g_seh_ebp = ebp; sub_001D4F12(); return; /* tail jmp 0x001D4F12 */

}

/**
 * sub_001D4EE3
 * Original: 0x001D4EE3 - 0x001D4F08 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4EE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4EE3: ;
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(edi + 0xAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xD8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D4F08(); return; } /* jne: not equal / not zero */

loc_001D4EF7: ;
    eax = MEM32(esi + 0xC4);
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x16) = 0x20C;
    g_seh_ebp = ebp; sub_001D4F16(); return; /* tail jmp 0x001D4F16 */

}

/**
 * sub_001D4F08
 * Original: 0x001D4F08 - 0x001D4F12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4F08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4F08: ;
    MEM32(ebx + 0x10) = eax;
    SET_LO16(eax, MEM16(esi + 0xCC));

    g_seh_ebp = ebp; sub_001D4F12(); return; /* fallthrough 0x001D4F12 */

}

/**
 * sub_001D4F12
 * Original: 0x001D4F12 - 0x001D4FF6 (228 bytes, 62 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4F12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4F12: ;
    MEM16(ebx + 0x16) = LO16(eax);
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jne: not equal / not zero */

loc_001D4F20: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x3C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x3C) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jae: above or equal (unsigned >=) */

loc_001D4F2C: ;
    ecx = MEM32(edi + 0xAF4);
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xD8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* je: equal / zero */

loc_001D4F44: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jne: not equal / not zero */

loc_001D4F4E: ;
    MEM16(ebp + -52) = MEM16(ebp + -52) & 0;
    _fa = (uint32_t)(MEM16(ebp + -52)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC0);
    MEM16(ebp + -56) = 0x5804;
    MEM16(ebp + -54) = 0x2E;
    edx = MEM32(eax);
    MEM32(ebp + -48) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -44) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebp + -32) = edx;
    edx = MEM32(esi + 0x44);
    MEM32(ebp + -40) = edx;
    edx = MEM32(esi + 0x48);
    MEM32(ebp + -36) = edx;
    edx = MEM32(ecx + 0xD8);
    MEM32(ebp + -28) = edx;
    edx = edi + 0x91E;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4FA0; /* je: equal / zero */

loc_001D4F97: ;
    _fa = (uint32_t)(MEM8(edi + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x8CD), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D4FA6; /* jne: not equal / not zero */

loc_001D4FA0: ;
    edx = ecx + 0xDC;

loc_001D4FA6: ;
    SET_LO16(ecx, MEM16(edx));
    PUSH32(esp, 0xC);
    MEM16(ebp + -24) = LO16(ecx);
    ecx = ebp + -22;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = ebp + -10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    ecx = ebp + -56;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM16(ebp + -50) = 1;
    PUSH32(esp, 0x001D4FD0u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001D4FD0: ;
    eax = ZX16(MEM16(ebp + -54));
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x5304);
    PUSH32(esp, MEM32(edi + 0xAF4));
    ecx = edi;
    PUSH32(esp, 0x001D4FF4u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4FF4: ;
    g_seh_ebp = ebp; sub_001D5039(); return; /* tail jmp 0x001D5039 */

}

/**
 * sub_001D4F16
 * Original: 0x001D4F16 - 0x001D4FF6 (224 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4F16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4F16: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jne: not equal / not zero */

loc_001D4F20: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x3C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x3C) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jae: above or equal (unsigned >=) */

loc_001D4F2C: ;
    ecx = MEM32(edi + 0xAF4);
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xD8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* je: equal / zero */

loc_001D4F44: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5039(); return; } /* jne: not equal / not zero */

loc_001D4F4E: ;
    MEM16(ebp + -52) = MEM16(ebp + -52) & 0;
    _fa = (uint32_t)(MEM16(ebp + -52)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC0);
    MEM16(ebp + -56) = 0x5804;
    MEM16(ebp + -54) = 0x2E;
    edx = MEM32(eax);
    MEM32(ebp + -48) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -44) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebp + -32) = edx;
    edx = MEM32(esi + 0x44);
    MEM32(ebp + -40) = edx;
    edx = MEM32(esi + 0x48);
    MEM32(ebp + -36) = edx;
    edx = MEM32(ecx + 0xD8);
    MEM32(ebp + -28) = edx;
    edx = edi + 0x91E;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4FA0; /* je: equal / zero */

loc_001D4F97: ;
    _fa = (uint32_t)(MEM8(edi + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x8CD), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D4FA6; /* jne: not equal / not zero */

loc_001D4FA0: ;
    edx = ecx + 0xDC;

loc_001D4FA6: ;
    SET_LO16(ecx, MEM16(edx));
    PUSH32(esp, 0xC);
    MEM16(ebp + -24) = LO16(ecx);
    ecx = ebp + -22;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = ebp + -10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    ecx = ebp + -56;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM16(ebp + -50) = 1;
    PUSH32(esp, 0x001D4FD0u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001D4FD0: ;
    eax = ZX16(MEM16(ebp + -54));
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x5304);
    PUSH32(esp, MEM32(edi + 0xAF4));
    ecx = edi;
    PUSH32(esp, 0x001D4FF4u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D4FF4: ;
    g_seh_ebp = ebp; sub_001D5039(); return; /* tail jmp 0x001D5039 */

}

/**
 * sub_001D4FF6
 * Original: 0x001D4FF6 - 0x001D50BD (199 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4FF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4FF6: ;
    ecx = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0xB) = MEM8(ecx + 0xB) | 4;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x001D5002u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D5002: ;
    _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xCE)) >> 32) & 1);
    esi = esi + 0xCE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1E0)) >> 32) & 1);
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM16(eax + 0xC) = 8;
    eax = 0x1000000;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x14) = 0x20C;
    MEM16(ebx + 0x16) = 0x20C;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* logical op clears CF */
    MEM16(ebx + 4) = MEM16(ebx + 4) & LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebx + 2) = 0x80;
    eax = MEM32(edx);
    MEM32(ebx + 8) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + -4);
    eax = edx + 0xAE0;
    ecx = MEM32(eax);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x2C) = ecx;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D50BD(); return; } /* jne: not equal / not zero */

loc_001D508B: ;
    MEM16(ebx) = 0x5800;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x1C) = eax;
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001D50ADu); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001D50AD: ;
    PUSH32(esp, 9);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC4)) >> 32) & 1);
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x5C;
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
    g_seh_ebp = ebp; sub_001D50FF(); return; /* tail jmp 0x001D50FF */

}

/**
 * sub_001D5039
 * Original: 0x001D5039 - 0x001D50BD (132 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5039: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* logical op clears CF */
    MEM16(ebx + 4) = MEM16(ebx + 4) & LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebx + 2) = 0x80;
    eax = MEM32(edx);
    MEM32(ebx + 8) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + -4);
    eax = edx + 0xAE0;
    ecx = MEM32(eax);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x2C) = ecx;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D50BD(); return; } /* jne: not equal / not zero */

loc_001D508B: ;
    MEM16(ebx) = 0x5800;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x1C) = eax;
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001D50ADu); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001D50AD: ;
    PUSH32(esp, 9);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC4)) >> 32) & 1);
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x5C;
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
    g_seh_ebp = ebp; sub_001D50FF(); return; /* tail jmp 0x001D50FF */

}

/**
 * sub_001D50BD
 * Original: 0x001D50BD - 0x001D50FF (66 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D50BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D50BD: ;
    MEM16(ebx) = 0x5801;
    eax = MEM32(esi + 8);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(esi + 0x4C);
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 9);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, ecx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x38;
    eax = ebx + 0x5C;
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
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001D50FFu); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

    g_seh_ebp = ebp; sub_001D50FF(); return; /* fallthrough 0x001D50FF */

}

/**
 * sub_001D50FF
 * Original: 0x001D50FF - 0x001D5139 (58 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D50FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D50FF: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 8);
    esi = ebx + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D510Du); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D510D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x48);
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x18);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D5127u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D5127: ;
    edx = ZX16(MEM16(ebx + 2));
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5139(); return; } /* je: equal / zero */

loc_001D5135: ;
    edx = ebx;
    g_seh_ebp = ebp; sub_001D5155(); return; /* tail jmp 0x001D5155 */

}

/**
 * sub_001D5139
 * Original: 0x001D5139 - 0x001D5155 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5139(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5139: ;
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + 4;
    POP32(esp, ecx);
    MEM16(edx) = 0x5880;
    MEM16(edx + 2) = 0x64;
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
    esi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001D5155(); return; /* fallthrough 0x001D5155 */

}

/**
 * sub_001D5155
 * Original: 0x001D5155 - 0x001D518B (54 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5155(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5155: ;
    eax = ZX16(MEM16(edx + 2));
    PUSH32(esp, 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 4;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM16(eax) = 0x5881;
    MEM16(eax + 2) = 0x18;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D517Fu); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001D517F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001D518Bu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

    g_seh_ebp = ebp; sub_001D518B(); return; /* fallthrough 0x001D518B */

}

/**
 * sub_001D518B
 * Original: 0x001D518B - 0x001D5192 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D518B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D518B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5192
 * Original: 0x001D5192 - 0x001D51C5 (51 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5192(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5192: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D51A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D519Fu); } /* indirect call */
    }

loc_001D51A5: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    MEM8(ebp + -12) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D51B2u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D51B2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D51C5(); return; } /* jne: not equal / not zero */

loc_001D51BB: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001D5245(); return; /* tail jmp 0x001D5245 */

}

/**
 * sub_001D51C5
 * Original: 0x001D51C5 - 0x001D520A (69 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D51C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D51C5: ;
    PUSH32(esp, ebx);
    ebx = edi + 0xF0;
    PUSH32(esp, MEM32(ebx));
    ecx = esi;
    PUSH32(esp, 0x001D51D5u); RECOMP_ABI_CALL(0x001DAD06u, sub_001DAD06); /* call 0x001DAD06 */

loc_001D51D5: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX8(MEM8(esi + 0xE));
    eax = esi + 0xAD4;
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ZX16(MEM16(eax));
    eax = MEM32(esi + 0xACC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xF4);
    _fb = (uint32_t)(MEM32(esi + 0xAC8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 0xAC8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, 0x3D);
    POP32(esp, ecx);
    esi = ebx;
    MEM32(ebp + 8) = eax;
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
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5242(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D5208: ;
    esi = edx;

    g_seh_ebp = ebp; sub_001D520A(); return; /* fallthrough 0x001D520A */

}

/**
 * sub_001D520A
 * Original: 0x001D520A - 0x001D522D (35 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D520A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D520A: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5237(); return; } /* je: equal / zero */

loc_001D5210: ;
    ecx = MEM32(eax + 0xC0);
    edx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D522D(); return; } /* jne: not equal / not zero */

loc_001D521D: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D5228u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D5228: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001D5237(); return; /* tail jmp 0x001D5237 */

}

/**
 * sub_001D522D
 * Original: 0x001D522D - 0x001D5237 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D522D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D522D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5237(); return; } /* jne: not equal / not zero */

loc_001D5231: ;
    MEM32(eax + 0xC0) = edx;

    g_seh_ebp = ebp; sub_001D5237(); return; /* fallthrough 0x001D5237 */

}

/**
 * sub_001D5237
 * Original: 0x001D5237 - 0x001D5242 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5237(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5237: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D520A(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D5242(); return; /* fallthrough 0x001D5242 */

}

/**
 * sub_001D5242
 * Original: 0x001D5242 - 0x001D5245 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5242(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5242: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D5245(); return; /* fallthrough 0x001D5245 */

}

/**
 * sub_001D5245
 * Original: 0x001D5245 - 0x001D5256 (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5245(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5245: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D524Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5248u); } /* indirect call */
    }

loc_001D524E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5256
 * Original: 0x001D5256 - 0x001D528A (52 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5256: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D5260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D525Au); } /* indirect call */
    }

loc_001D5260: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D526Du); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D526D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5290(); return; } /* je: equal / zero */

loc_001D5271: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xAF4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5290(); return; } /* je: equal / zero */

loc_001D5279: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D528A(); return; } /* jne: not equal / not zero */

loc_001D527E: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D5288u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D5288: ;
    g_seh_ebp = ebp; sub_001D52A1(); return; /* tail jmp 0x001D52A1 */

}

/**
 * sub_001D528A
 * Original: 0x001D528A - 0x001D5290 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D528A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D528A: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5297(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D5290(); return; /* fallthrough 0x001D5290 */

}

/**
 * sub_001D5290
 * Original: 0x001D5290 - 0x001D5297 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5290: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001D52A3(); return; /* tail jmp 0x001D52A3 */

}

/**
 * sub_001D5297
 * Original: 0x001D5297 - 0x001D52A1 (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5297(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5297: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D52A1u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

    g_seh_ebp = ebp; sub_001D52A1(); return; /* fallthrough 0x001D52A1 */

}

/**
 * sub_001D52A1
 * Original: 0x001D52A1 - 0x001D52B2 (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D52A1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D52A1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D52ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D52A5u); } /* indirect call */
    }

loc_001D52AB: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D52A3
 * Original: 0x001D52A3 - 0x001D52B2 (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D52A3(void)
{

loc_001D52A3: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D52ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D52A5u); } /* indirect call */
    }

loc_001D52AB: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D52B2
 * Original: 0x001D52B2 - 0x001D52E2 (48 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D52B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D52B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D52BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D52B7u); } /* indirect call */
    }

loc_001D52BD: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001D52CE; /* jne: not equal / not zero */

loc_001D52C7: ;
    ecx = esi;
    PUSH32(esp, 0x001D52CEu); RECOMP_ABI_CALL(0x001D4CBEu, sub_001D4CBE); /* call 0x001D4CBE */

loc_001D52CE: ;
    SET_LO8(ecx, LO8(ebx));
    MEM32(esi + 0xAEC) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D52DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D52D6u); } /* indirect call */
    }

loc_001D52DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D52E2
 * Original: 0x001D52E2 - 0x001D53A3 (193 bytes, 65 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D52E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D52E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D52EAu); RECOMP_ABI_CALL(0x001D4DF3u, sub_001D4DF3); /* call 0x001D4DF3 */

loc_001D52EA: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D538F; /* je: equal / zero */

loc_001D52F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D52FEu); RECOMP_ABI_CALL(0x001DBFB0u, sub_001DBFB0); /* call 0x001DBFB0 */

loc_001D52FE: ;
    ecx = esi;
    PUSH32(esp, 0x001D5305u); RECOMP_ABI_CALL(0x001D3B41u, sub_001D3B41); /* call 0x001D3B41 */

loc_001D5305: ;
    ecx = esi;
    PUSH32(esp, 0x001D530Cu); RECOMP_ABI_CALL(0x001D2B64u, sub_001D2B64); /* call 0x001D2B64 */

loc_001D530C: ;
    ecx = MEM32(esi + 0xAC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = MEM32(0x22BCD0);
    if (CMP_EQ(_fa, _fb)) goto loc_001D5356; /* je: equal / zero */

loc_001D531C: ;
    eax = ZX16(MEM16(esi + 0xAD4));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx + ecx + -244;
    if (CMP_BE(_fa, _fb)) goto loc_001D5349; /* jbe: below or equal (unsigned <=) */

loc_001D5336: ;
    ebx = eax;

loc_001D5338: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5340u); RECOMP_ABI_CALL(0x001D5192u, sub_001D5192); /* call 0x001D5192 */

loc_001D5340: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0xF4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5338; /* jne: not equal / not zero */

loc_001D5349: ;
    eax = MEM32(esi + 0xAC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5356; /* je: equal / zero */

loc_001D5353: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x001D5356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5354u); } /* indirect call */
    }

loc_001D5356: ;
    eax = MEM32(esi + 0xACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D538C; /* je: equal / zero */

loc_001D5360: ;
    edi = eax;
    eax = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D537F; /* jbe: below or equal (unsigned <=) */

loc_001D536A: ;
    ebx = eax;

loc_001D536C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5376u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D5376: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x130;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D536C; /* jne: not equal / not zero */

loc_001D537F: ;
    eax = MEM32(esi + 0xACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D538C; /* je: equal / zero */

loc_001D5389: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x001D538Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D538Au); } /* indirect call */
    }

loc_001D538C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D538F: ;
    PUSH32(esp, 0x1000000);
    ecx = esi;
    PUSH32(esp, 0x001D539Bu); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D539B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001DF39C(); return; /* tail jmp 0x001DF39C */

}

/**
 * sub_001D53A3
 * Original: 0x001D53A3 - 0x001D53E4 (65 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D53A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D53A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x2E (16-bit) */
    ebx = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5541(); return; } /* jb: below (unsigned <) */

loc_001D53C0: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x5805) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x5805 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D53E4(); return; } /* jne: not equal / not zero */

loc_001D53C7: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D53E4(); return; } /* je: equal / zero */

loc_001D53CD: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D53DFu); RECOMP_ABI_CALL(0x001DB58Eu, sub_001DB58E); /* call 0x001DB58E */

loc_001D53DF: ;
    g_seh_ebp = ebp; sub_001D5541(); return; /* tail jmp 0x001D5541 */

}

/**
 * sub_001D53E4
 * Original: 0x001D53E4 - 0x001D54EE (266 bytes, 90 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D53E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D53E4: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D53EFu); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D53EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5541(); return; } /* je: equal / zero */

loc_001D53F7: ;
    PUSH32(esp, 0xC);
    ecx = esi + 0x22;
    PUSH32(esp, ecx);
    ecx = ZX16(LO16(edi));
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi + 0x2E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x001D5419u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D5419: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5541(); return; } /* je: equal / zero */

loc_001D5421: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5804) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5804 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D54EE(); return; } /* jne: not equal / not zero */

loc_001D542E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    ecx = ebx;
    PUSH32(esp, 0x001D544Cu); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D544C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5541(); return; } /* je: equal / zero */

loc_001D5459: ;
    ecx = edi;
    PUSH32(esp, 0x001D5460u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D5460: ;
    edi = MEM32(edi);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(esi + 0x1C));
    ebx = edi + 0x20;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001D5475u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D5475: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x268);
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(eax + 0x8CE));
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + 0x10) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x001D54A2u); RECOMP_ABI_CALL(0x001D81AAu, sub_001D81AA); /* call 0x001D81AA */

loc_001D54A2: ;
    ecx = ZX16(MEM16(esi + 2));
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx;
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
    PUSH32(esp, 0xC);
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
    MEM16(ebx + 4) = MEM16(ebx + 4) & 0;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = ebx + 0x22;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 2));
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM16(ebx) = 0x5805;
    PUSH32(esp, 0x001D54DFu); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001D54DF: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001D54ECu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001D54EC: ;
    g_seh_ebp = ebp; sub_001D5541(); return; /* tail jmp 0x001D5541 */

}

/**
 * sub_001D54EE
 * Original: 0x001D54EE - 0x001D5548 (90 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D54EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D54EE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5805) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5805 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5541; /* jne: not equal / not zero */

loc_001D54F4: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5541; /* je: equal / zero */

loc_001D54FA: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = ebx;
    PUSH32(esp, 0x001D5504u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D5504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5541; /* je: equal / zero */

loc_001D5508: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5541; /* jne: not equal / not zero */

loc_001D550E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5541; /* je: equal / zero */

loc_001D5513: ;
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = eax + 0x44;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001D5541; /* jne: not equal / not zero */

loc_001D5522: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0xB8) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    PUSH32(esp, 1);
    MEM16(eax + 0xBC) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D5541u); RECOMP_ABI_CALL(0x001D4E43u, sub_001D4E43); /* call 0x001D4E43 */

loc_001D5541: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D5541
 * Original: 0x001D5541 - 0x001D5548 (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5541(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5541: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D5548
 * Original: 0x001D5548 - 0x001D5564 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5548: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D55A6(); return; } /* jne: not equal / not zero */

loc_001D5556: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    MEM8(esi + 2) = 3;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5564(); return; } /* je: equal / zero */

loc_001D555F: ;
    SET_LO8(eax, MEM8(edi + 0x3E));
    g_seh_ebp = ebp; sub_001D5567(); return; /* tail jmp 0x001D5567 */

}

/**
 * sub_001D5564
 * Original: 0x001D5564 - 0x001D5567 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5564: ;
    SET_LO8(eax, MEM8(edi + 0x3C));

    g_seh_ebp = ebp; sub_001D5567(); return; /* fallthrough 0x001D5567 */

}

/**
 * sub_001D5567
 * Original: 0x001D5567 - 0x001D558F (40 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5567(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5567: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0x001D5572u); RECOMP_ABI_CALL(0x001D302Cu, sub_001D302C); /* call 0x001D302C */

loc_001D5572: ;
    PUSH32(esp, 8);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D557Fu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D557F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    ecx = MEM32(edi + 0x1D8);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D558F(); return; } /* je: equal / zero */

loc_001D558A: ;
    SET_LO8(eax, MEM8(edi + 0x3F));
    g_seh_ebp = ebp; sub_001D5592(); return; /* tail jmp 0x001D5592 */

}

/**
 * sub_001D558F
 * Original: 0x001D558F - 0x001D5592 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D558F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D558F: ;
    SET_LO8(eax, MEM8(edi + 0x3D));

    g_seh_ebp = ebp; sub_001D5592(); return; /* fallthrough 0x001D5592 */

}

/**
 * sub_001D5592
 * Original: 0x001D5592 - 0x001D55A6 (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5592(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5592: ;
    eax = ZX8(LO8(eax));
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D55A6u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

    g_seh_ebp = ebp; sub_001D55A6(); return; /* fallthrough 0x001D55A6 */

}

/**
 * sub_001D55A6
 * Original: 0x001D55A6 - 0x001D55B7 (17 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D55A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D55A6: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D55B7(); return; } /* je: equal / zero */

loc_001D55AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D55B5u); RECOMP_ABI_CALL(0x001D4186u, sub_001D4186); /* call 0x001D4186 */

loc_001D55B5: ;
    g_seh_ebp = ebp; sub_001D55CB(); return; /* tail jmp 0x001D55CB */

}

/**
 * sub_001D55B7
 * Original: 0x001D55B7 - 0x001D55C3 (12 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D55B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D55B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D55C3(); return; } /* je: equal / zero */

loc_001D55BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D55C1u); RECOMP_ABI_CALL(0x001D3FB7u, sub_001D3FB7); /* call 0x001D3FB7 */

loc_001D55C1: ;
    g_seh_ebp = ebp; sub_001D55CB(); return; /* tail jmp 0x001D55CB */

}

/**
 * sub_001D55C3
 * Original: 0x001D55C3 - 0x001D55D0 (13 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D55C3(void)
{

loc_001D55C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D55CBu); RECOMP_ABI_CALL(0x001D4E43u, sub_001D4E43); /* call 0x001D4E43 */

loc_001D55CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D55CB
 * Original: 0x001D55CB - 0x001D55D0 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D55CB(void)
{

loc_001D55CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D55D0
 * Original: 0x001D55D0 - 0x001D5628 (88 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D55D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D55D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D55DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D55D4u); } /* indirect call */
    }

loc_001D55DA: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D55E7u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D55E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D55FE; /* je: equal / zero */

loc_001D55EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xAF4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5617; /* je: equal / zero */

loc_001D55F3: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5609; /* jne: not equal / not zero */

loc_001D55F9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D5605; /* jne: not equal / not zero */

loc_001D55FE: ;
    esi = 0x2726;
    goto loc_001D5619;

loc_001D5605: ;
    MEM8(eax + 2) = 2;

loc_001D5609: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5617; /* jne: not equal / not zero */

loc_001D560F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D5617u); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D5617: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D5619: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D5621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D561Bu); } /* indirect call */
    }

loc_001D5621: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5628
 * Original: 0x001D5628 - 0x001D5649 (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5628(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5628: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5639; /* jne: not equal / not zero */

loc_001D5633: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D5639u); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D5639: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x2C;
    PUSH32(esp, 0x001D5645u); RECOMP_ABI_CALL(0x001D7AD7u, sub_001D7AD7); /* call 0x001D7AD7 */

loc_001D5645: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5649
 * Original: 0x001D5649 - 0x001D56D3 (138 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5649(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5649: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + -49));
    _fb = (uint32_t)(0xFFFFFFCCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFCCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D5665; /* jne: not equal / not zero */

loc_001D565B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D5663u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D5663: ;
    goto loc_001D56CE;

loc_001D5665: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    MEM8(esi + 3) = LO8(eax);
    ecx = MEM32(edi + 0x1D8);
    if (TEST_Z(_fa, _fb)) goto loc_001D567A; /* je: equal / zero */

loc_001D5675: ;
    SET_LO8(eax, MEM8(edi + 0x3F));
    goto loc_001D567D;

loc_001D567A: ;
    SET_LO8(eax, MEM8(edi + 0x3D));

loc_001D567D: ;
    eax = ZX8(LO8(eax));
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D5691u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D5691: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001D56A2; /* jne: not equal / not zero */

loc_001D569A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D56A0u); RECOMP_ABI_CALL(0x001D455Au, sub_001D455A); /* call 0x001D455A */

loc_001D56A0: ;
    goto loc_001D56CE;

loc_001D56A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D56C8; /* jne: not equal / not zero */

loc_001D56A6: ;
    eax = MEM32(edi + 0xD1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x128);
    _fb = (uint32_t)(0x920) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x920;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x530A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D56C6u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D56C6: ;
    goto loc_001D56CE;

loc_001D56C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D56CEu); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D56CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D56D3
 * Original: 0x001D56D3 - 0x001D5715 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D56D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D56D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D56E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D56DCu); } /* indirect call */
    }

loc_001D56E2: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    MEM32(esi + 0xD18) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5715(); return; } /* je: equal / zero */

loc_001D56F9: ;
    eax = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D570Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5706u); } /* indirect call */
    }

loc_001D570C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5715(); return; } /* jne: not equal / not zero */

loc_001D5710: ;
    edi = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_001D5717(); return; /* tail jmp 0x001D5717 */

}

/**
 * sub_001D5715
 * Original: 0x001D5715 - 0x001D5717 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5715(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5715: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D5717(); return; /* fallthrough 0x001D5717 */

}

/**
 * sub_001D5717
 * Original: 0x001D5717 - 0x001D5758 (65 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5717: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0xAF8) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D57AE(); return; } /* je: equal / zero */

loc_001D5725: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D579A(); return; } /* je: equal / zero */

loc_001D572A: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0x001D5734u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D5734: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xAF4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5787(); return; } /* je: equal / zero */

loc_001D573E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5787(); return; } /* je: equal / zero */

loc_001D5743: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D576E(); return; } /* je: equal / zero */

loc_001D574A: ;
    eax = esi + 0xB00;
    edx = eax + 0x200;
    g_seh_ebp = ebp; sub_001D576A(); return; /* tail jmp 0x001D576A */

}

/**
 * sub_001D5758
 * Original: 0x001D5758 - 0x001D576A (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5758(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5758: ;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D576A(); return; /* fallthrough 0x001D576A */

}

/**
 * sub_001D576A
 * Original: 0x001D576A - 0x001D576E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D576A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D576A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5758(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001D576E(); return; /* fallthrough 0x001D576E */

}

/**
 * sub_001D576E
 * Original: 0x001D576E - 0x001D5787 (25 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D576E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D576E: ;
    PUSH32(esp, MEM32(esi + 0xAF4));
    ecx = esi;
    MEM32(esi + 0xAF0) = 2;
    PUSH32(esp, 0x001D5785u); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D5785: ;
    g_seh_ebp = ebp; sub_001D57AE(); return; /* tail jmp 0x001D57AE */

}

/**
 * sub_001D5787
 * Original: 0x001D5787 - 0x001D579A (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5787: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi + 0xAF4) = ebx;
    MEM32(esi + 0xAF0) = eax;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001D57A7(); return; /* tail jmp 0x001D57A7 */

}

/**
 * sub_001D579A
 * Original: 0x001D579A - 0x001D57AE (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D579A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D579A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0xAF0) = 6;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D57AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D57A8u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D57AE(); return; /* fallthrough 0x001D57AE */

}

/**
 * sub_001D57A7
 * Original: 0x001D57A7 - 0x001D57AE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D57A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D57A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D57AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D57A8u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D57AE(); return; /* fallthrough 0x001D57AE */

}

/**
 * sub_001D57AE
 * Original: 0x001D57AE - 0x001D57BE (16 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D57AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D57AE: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D57B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D57B1u); } /* indirect call */
    }

loc_001D57B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D57BE
 * Original: 0x001D57BE - 0x001D57DB (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D57BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D57BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D57D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D57CBu); } /* indirect call */
    }

loc_001D57D1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM8(ebp + -20) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D57E2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D57DB(); return; /* fallthrough 0x001D57DB */

}

/**
 * sub_001D57DB
 * Original: 0x001D57DB - 0x001D57E2 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D57DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D57DB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D5908(); return; /* tail jmp 0x001D5908 */

}

/**
 * sub_001D57E2
 * Original: 0x001D57E2 - 0x001D5812 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D57E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D57E2: ;
    eax = ebx + 0xAF0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D57DB(); return; } /* jne: not equal / not zero */

loc_001D57ED: ;
    PUSH32(esp, edi);
    esi = 0x80;
    MEM32(eax) = 7;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    edi = ebp + -532;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = ebp + -16;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = ebp + -532;
    MEM32(ebp + -12) = edi;

    g_seh_ebp = ebp; sub_001D5812(); return; /* fallthrough 0x001D5812 */

}

/**
 * sub_001D5812
 * Original: 0x001D5812 - 0x001D581E (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5812(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5812: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0xB00;
    g_seh_ebp = ebp; sub_001D5848(); return; /* tail jmp 0x001D5848 */

}

/**
 * sub_001D581E
 * Original: 0x001D581E - 0x001D5848 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D581E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D581E: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001D5840; /* je: equal / zero */

loc_001D5827: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + edx * 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5840; /* jne: not equal / not zero */

loc_001D5834: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 8 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + edx * 8 + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5857(); return; } /* je: equal / zero */

loc_001D5840: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D5848(); return; /* fallthrough 0x001D5848 */

}

/**
 * sub_001D5848
 * Original: 0x001D5848 - 0x001D5857 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5848: ;
    ecx = ebx + 0xD00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D581E(); return; } /* jb: below (unsigned <) */

loc_001D5855: ;
    g_seh_ebp = ebp; sub_001D587F(); return; /* tail jmp 0x001D587F */

}

/**
 * sub_001D5857
 * Original: 0x001D5857 - 0x001D587F (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5857(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5857: ;
    eax = MEM32(ebp + -8);
    SET_LO8(eax, MEM8(ebx + eax + 0xD00));
    esi = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
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
    edi = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    MEM8(ebp + edx + -16) = LO8(eax);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + -12);
    esi = 0x80;

    g_seh_ebp = ebp; sub_001D587F(); return; /* fallthrough 0x001D587F */

}

/**
 * sub_001D587F
 * Original: 0x001D587F - 0x001D58C6 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D587F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D587F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + edx * 8);
    eax = MEM32(eax + edx * 8 + 4);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5812(); return; } /* jb: below (unsigned <) */

loc_001D589D: ;
    eax = MEM32(ebp + -16);
    ecx = esi;
    MEM32(ebx + 0xD00) = eax;
    eax = ZX8(MEM8(ebx + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebp + -532;
    edi = ebx + 0xB00;
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
    esi = MEM32(ebx + 0xACC);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D58FD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D58C4: ;
    edi = eax;

    g_seh_ebp = ebp; sub_001D58C6(); return; /* fallthrough 0x001D58C6 */

}

/**
 * sub_001D58C6
 * Original: 0x001D58C6 - 0x001D58EE (40 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D58C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D58C6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D58F4(); return; } /* je: equal / zero */

loc_001D58CB: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D58F4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D58D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D58EE(); return; } /* jne: not equal / not zero */

loc_001D58D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D58E0u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D58E0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(esi + 2) = 2;
    PUSH32(esp, 0x001D58ECu); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D58EC: ;
    g_seh_ebp = ebp; sub_001D58F4(); return; /* tail jmp 0x001D58F4 */

}

/**
 * sub_001D58EE
 * Original: 0x001D58EE - 0x001D58F4 (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D58EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D58EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D58F4u); RECOMP_ABI_CALL(0x001D455Au, sub_001D455A); /* call 0x001D455A */

    g_seh_ebp = ebp; sub_001D58F4(); return; /* fallthrough 0x001D58F4 */

}

/**
 * sub_001D58F4
 * Original: 0x001D58F4 - 0x001D58FD (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D58F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D58F4: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x130;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D58C6(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D58FD(); return; /* fallthrough 0x001D58FD */

}

/**
 * sub_001D58FD
 * Original: 0x001D58FD - 0x001D5908 (11 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D58FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D58FD: ;
    ecx = ebx;
    PUSH32(esp, 0x001D5904u); RECOMP_ABI_CALL(0x001D345Du, sub_001D345D); /* call 0x001D345D */

loc_001D5904: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D5908(); return; /* fallthrough 0x001D5908 */

}

/**
 * sub_001D5908
 * Original: 0x001D5908 - 0x001D5919 (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5908: ;
    SET_LO8(ecx, MEM8(ebp + -20));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D5911u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D590Bu); } /* indirect call */
    }

loc_001D5911: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5919
 * Original: 0x001D5919 - 0x001D5957 (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5919: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D592Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5924u); } /* indirect call */
    }

loc_001D592A: ;
    MEM8(ebp + -12) = LO8(eax);
    eax = MEM32(esi + 0xD20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D59DD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D593D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D59B4(); return; } /* jne: not equal / not zero */

loc_001D5942: ;
    edi = MEM32(esi + 0xD2C);
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D59A8(); return; } /* jb: below (unsigned <) */

loc_001D594E: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5957(); return; } /* je: equal / zero */

loc_001D5952: ;
    SET_LO8(eax, MEM8(esi + 0x3F));
    g_seh_ebp = ebp; sub_001D595A(); return; /* tail jmp 0x001D595A */

}

/**
 * sub_001D5957
 * Original: 0x001D5957 - 0x001D595A (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5957(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5957: ;
    SET_LO8(eax, MEM8(esi + 0x3D));

    g_seh_ebp = ebp; sub_001D595A(); return; /* fallthrough 0x001D595A */

}

/**
 * sub_001D595A
 * Original: 0x001D595A - 0x001D5996 (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D595A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D595A: ;
    ecx = MEM32(esi + 0x1D8);
    eax = ZX8(LO8(eax));
    ebx = ecx;
    _fb = (uint32_t)(MEM32(esi + 0xD24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0xD24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D59D2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D5972: ;
    eax = MEM32(esi + 0xD28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5996(); return; } /* jne: not equal / not zero */

loc_001D597C: ;
    MEM32(esi + 0xD20) = 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B11(); return; } /* je: equal / zero */

loc_001D598F: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001D5B08(); return; /* tail jmp 0x001D5B08 */

}

/**
 * sub_001D5986
 * Original: 0x001D5986 - 0x001D5996 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5986(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5986: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B11(); return; } /* je: equal / zero */

loc_001D598F: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001D5B08(); return; /* tail jmp 0x001D5B08 */

}

/**
 * sub_001D5996
 * Original: 0x001D5996 - 0x001D59A8 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5996(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5996: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xD28) = eax;
    MEM32(esi + 0xD24) = ecx;
    g_seh_ebp = ebp; sub_001D5B4F(); return; /* tail jmp 0x001D5B4F */

}

/**
 * sub_001D59A8
 * Original: 0x001D59A8 - 0x001D59B4 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D59A8: ;
    MEM32(esi + 0xD20) = 1;
    g_seh_ebp = ebp; sub_001D5986(); return; /* tail jmp 0x001D5986 */

}

/**
 * sub_001D59B4
 * Original: 0x001D59B4 - 0x001D59DD (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D59B4: ;
    edi = esi + 0xD2C;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D59D0; /* je: equal / zero */

loc_001D59C0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D59D0; /* je: equal / zero */

loc_001D59C5: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D59CEu); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D59CE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D59D0: ;
    MEM32(edi) = edx;
    esi = MEM32(esi + 0xD20);
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D59D2
 * Original: 0x001D59D2 - 0x001D59DD (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D59D2: ;
    esi = MEM32(esi + 0xD20);
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D59DD
 * Original: 0x001D59DD - 0x001D59FB (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D59DD: ;
    ebx = MEM32(esi + 0xAF4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A64(); return; } /* jne: not equal / not zero */

loc_001D59E7: ;
    edi = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    ebx = MEM32(esi + 0xACC);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A60(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001D59FB(); return; /* fallthrough 0x001D59FB */

}

/**
 * sub_001D59FB
 * Original: 0x001D59FB - 0x001D5A2D (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D59FB: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* je: equal / zero */

loc_001D5A02: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* je: equal / zero */

loc_001D5A07: ;
    ecx = MEM32(ebx + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* je: equal / zero */

loc_001D5A12: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* je: equal / zero */

loc_001D5A17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A64(); return; } /* jae: above or equal (unsigned >=) */

loc_001D5A1B: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A2D(); return; } /* jne: not equal / not zero */

loc_001D5A20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A2D(); return; } /* jb: below (unsigned <) */

loc_001D5A24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A2D(); return; } /* ja: above (unsigned >) */

loc_001D5A28: ;
    MEM32(ebp + -8) = ebx;
    g_seh_ebp = ebp; sub_001D5A39(); return; /* tail jmp 0x001D5A39 */

}

/**
 * sub_001D5A2D
 * Original: 0x001D5A2D - 0x001D5A39 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A2D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* jne: not equal / not zero */

loc_001D5A32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A39(); return; } /* jne: not equal / not zero */

loc_001D5A36: ;
    MEM32(ebp + -4) = ebx;

    g_seh_ebp = ebp; sub_001D5A39(); return; /* fallthrough 0x001D5A39 */

}

/**
 * sub_001D5A39
 * Original: 0x001D5A39 - 0x001D5A4F (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A39: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x130;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D59FB(); return; } /* jne: not equal / not zero */

loc_001D5A42: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A4F(); return; } /* je: equal / zero */

loc_001D5A47: ;
    PUSH32(esp, 4);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D5A47
 * Original: 0x001D5A47 - 0x001D5A4F (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A47: ;
    PUSH32(esp, 4);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D5A49
 * Original: 0x001D5A49 - 0x001D5A4F (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A49: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D5A4F
 * Original: 0x001D5A4F - 0x001D5A60 (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A4F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A60(); return; } /* je: equal / zero */

loc_001D5A54: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0x001D5A5Eu); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D5A5E: ;
    g_seh_ebp = ebp; sub_001D5A47(); return; /* tail jmp 0x001D5A47 */

}

/**
 * sub_001D5A60
 * Original: 0x001D5A60 - 0x001D5A64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A60: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_001D5A49(); return; /* tail jmp 0x001D5A49 */

}

/**
 * sub_001D5A64
 * Original: 0x001D5A64 - 0x001D5A79 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A64: ;
    eax = MEM32(ebx + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x268) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A79(); return; } /* jne: not equal / not zero */

loc_001D5A72: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D5A79
 * Original: 0x001D5A79 - 0x001D5A9B (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A79: ;
    _fa = (uint32_t)(MEM16(esi + 0x91E)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x91E), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A9B(); return; } /* je: equal / zero */

loc_001D5A82: ;
    _fa = (uint32_t)(MEM8(esi + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x8CD), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A9B(); return; } /* je: equal / zero */

loc_001D5A8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xD20) = eax;
    esi = eax;
    g_seh_ebp = ebp; sub_001D5BA2(); return; /* tail jmp 0x001D5BA2 */

}

/**
 * sub_001D5A9B
 * Original: 0x001D5A9B - 0x001D5B08 (109 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5A9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5A9B: ;
    edi = MEM32(esi + 0xD2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5AD6; /* jne: not equal / not zero */

loc_001D5AA5: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0x001D5AAFu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D5AAF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B9F(); return; } /* je: equal / zero */

loc_001D5AB9: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B9F(); return; } /* je: equal / zero */

loc_001D5AC2: ;
    eax = MEM32(edi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xB8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B9F(); return; } /* je: equal / zero */

loc_001D5AD4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D5AD6: ;
    SET_LO8(eax, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B5C(); return; } /* jb: below (unsigned <) */

loc_001D5ADD: ;
    SET_LO16(eax, MEM16(edi + 0xDC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0xDC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx + 0xDC) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B1C(); return; } /* je: equal / zero */

loc_001D5AED: ;
    eax = MEM32(esi + 0xD2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0xD20) = 3;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B11(); return; } /* je: equal / zero */

loc_001D5B01: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B11(); return; } /* je: equal / zero */

loc_001D5B06: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D5B08(); return; /* fallthrough 0x001D5B08 */

}

/**
 * sub_001D5B08
 * Original: 0x001D5B08 - 0x001D5B11 (9 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B08: ;
    ecx = esi;
    PUSH32(esp, 0x001D5B0Fu); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D5B0F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D5B11(); return; /* fallthrough 0x001D5B11 */

}

/**
 * sub_001D5B11
 * Original: 0x001D5B11 - 0x001D5B1C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B11: ;
    MEM32(esi + 0xD2C) = edx;
    g_seh_ebp = ebp; sub_001D59D2(); return; /* tail jmp 0x001D59D2 */

}

/**
 * sub_001D5B1C
 * Original: 0x001D5B1C - 0x001D5B30 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B1C: ;
    MEM32(esi + 0xD20) = 4;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B30(); return; } /* je: equal / zero */

loc_001D5B2B: ;
    SET_LO8(eax, MEM8(esi + 0x3E));
    g_seh_ebp = ebp; sub_001D5B33(); return; /* tail jmp 0x001D5B33 */

}

/**
 * sub_001D5B30
 * Original: 0x001D5B30 - 0x001D5B33 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B30: ;
    SET_LO8(eax, MEM8(esi + 0x3C));

    g_seh_ebp = ebp; sub_001D5B33(); return; /* fallthrough 0x001D5B33 */

}

/**
 * sub_001D5B33
 * Original: 0x001D5B33 - 0x001D5B4F (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B33: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xD28) = eax;
    eax = MEM32(esi + 0x1D8);
    MEM32(esi + 0xD24) = eax;
    MEM32(esi + 0xD2C) = edi;

    g_seh_ebp = ebp; sub_001D5B4F(); return; /* fallthrough 0x001D5B4F */

}

/**
 * sub_001D5B4F
 * Original: 0x001D5B4F - 0x001D5B5C (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B4F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5B57u); RECOMP_ABI_CALL(0x001D464Fu, sub_001D464F); /* call 0x001D464F */

loc_001D5B57: ;
    g_seh_ebp = ebp; sub_001D59D2(); return; /* tail jmp 0x001D59D2 */

}

/**
 * sub_001D5B5C
 * Original: 0x001D5B5C - 0x001D5B7F (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D5B68; /* jb: below (unsigned <) */

loc_001D5B60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5A47(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D5B68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5B7F(); return; } /* jne: not equal / not zero */

loc_001D5B6C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5B74u); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001D5B74: ;
    MEM32(esi + 0xD2C) = edi;
    g_seh_ebp = ebp; sub_001D5A47(); return; /* tail jmp 0x001D5A47 */

}

/**
 * sub_001D5B7F
 * Original: 0x001D5B7F - 0x001D5B9F (32 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B7F: ;
    eax = MEM32(esi + 0xD2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5B99; /* je: equal / zero */

loc_001D5B89: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5B99; /* je: equal / zero */

loc_001D5B8E: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D5B97u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D5B97: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D5B99: ;
    MEM32(esi + 0xD2C) = edx;

    g_seh_ebp = ebp; sub_001D5B9F(); return; /* fallthrough 0x001D5B9F */

}

/**
 * sub_001D5B9F
 * Original: 0x001D5B9F - 0x001D5BA2 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B9F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D5BA2(); return; /* fallthrough 0x001D5BA2 */

}

/**
 * sub_001D5BA2
 * Original: 0x001D5BA2 - 0x001D5BB4 (18 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5BA2: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D5BABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5BA5u); } /* indirect call */
    }

loc_001D5BAB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5BB4
 * Original: 0x001D5BB4 - 0x001D5BE7 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5BB4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C43(); return; } /* je: equal / zero */

loc_001D5BC7: ;
    edx = MEM32(esi + 0x268);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C43(); return; } /* je: equal / zero */

loc_001D5BD1: ;
    ebx = MEM32(edi + 8);
    SET_LO8(ebx, LO8(ebx) & 7);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C28(); return; } /* jb: below (unsigned <) */

loc_001D5BDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5BE7(); return; } /* jne: not equal / not zero */

loc_001D5BE1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_seh_ebp = ebp; sub_001D5C05(); return; /* tail jmp 0x001D5C05 */

}

/**
 * sub_001D5BE7
 * Original: 0x001D5BE7 - 0x001D5C05 (30 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5BE7: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D5BEFu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D5BEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C33(); return; } /* je: equal / zero */

loc_001D5BF3: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C33(); return; } /* je: equal / zero */

loc_001D5BFB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C0F(); return; } /* jb: below (unsigned <) */

loc_001D5C00: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D5C05(); return; /* fallthrough 0x001D5C05 */

}

/**
 * sub_001D5C05
 * Original: 0x001D5C05 - 0x001D5C0F (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C05: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5C0Du); RECOMP_ABI_CALL(0x001D3CCBu, sub_001D3CCB); /* call 0x001D3CCB */

loc_001D5C0D: ;
    g_seh_ebp = ebp; sub_001D5C52(); return; /* tail jmp 0x001D5C52 */

}

/**
 * sub_001D5C0F
 * Original: 0x001D5C0F - 0x001D5C28 (25 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C0F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5C1D; /* je: equal / zero */

loc_001D5C14: ;
    _fa = (uint32_t)(MEM32(esi + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAF0), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C33(); return; } /* jb: below (unsigned <) */

loc_001D5C1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D5C26u); RECOMP_ABI_CALL(0x001D5628u, sub_001D5628); /* call 0x001D5628 */

loc_001D5C26: ;
    g_seh_ebp = ebp; sub_001D5C52(); return; /* tail jmp 0x001D5C52 */

}

/**
 * sub_001D5C28
 * Original: 0x001D5C28 - 0x001D5C33 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C28: ;
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5C33(); return; } /* je: equal / zero */

loc_001D5C2E: ;
    MEM32(eax + 0xC) = edx;
    g_seh_ebp = ebp; sub_001D5C46(); return; /* tail jmp 0x001D5C46 */

}

/**
 * sub_001D5C33
 * Original: 0x001D5C33 - 0x001D5C43 (16 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C33: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5C41u); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001D5C41: ;
    g_seh_ebp = ebp; sub_001D5C52(); return; /* tail jmp 0x001D5C52 */

}

/**
 * sub_001D5C43
 * Original: 0x001D5C43 - 0x001D5C58 (21 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C43(void)
{

loc_001D5C43: ;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D5C52u); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001D5C52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5C46
 * Original: 0x001D5C46 - 0x001D5C58 (18 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C46(void)
{

loc_001D5C46: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D5C52u); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001D5C52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5C52
 * Original: 0x001D5C52 - 0x001D5C58 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C52(void)
{

loc_001D5C52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5C58
 * Original: 0x001D5C58 - 0x001D5C90 (56 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5C58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001D5C58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5C6Du); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001D5C6D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D5C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5C6Du); } /* indirect call */
    }

loc_001D5C73: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5C82u); RECOMP_ABI_CALL(0x001D5BB4u, sub_001D5BB4); /* call 0x001D5BB4 */

loc_001D5C82: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D5C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5C84u); } /* indirect call */
    }

loc_001D5C8A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D5C90
 * Original: 0x001D5C90 - 0x001D5CE7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0xE));
    ecx = MEM32(esi + 0xACC);
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0x130;
    if (CMP_BE(_fa, _fb)) goto loc_001D5CB9; /* jbe: below or equal (unsigned <=) */

loc_001D5CAC: ;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5CB7; /* je: equal / zero */

loc_001D5CB2: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5CAC; /* jne: not equal / not zero */

loc_001D5CB7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_001D5CB9: ;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5CF1(); return; } /* jne: not equal / not zero */

loc_001D5CBB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D5CDF; /* jbe: below or equal (unsigned <=) */

loc_001D5CC1: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5CDA; /* jne: not equal / not zero */

loc_001D5CC7: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5CDA; /* je: equal / zero */

loc_001D5CCC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5CD8; /* je: equal / zero */

loc_001D5CD0: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D5CDA; /* jae: above or equal (unsigned >=) */

loc_001D5CD8: ;
    edi = ecx;

loc_001D5CDA: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5CC1; /* jne: not equal / not zero */

loc_001D5CDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5CE7(); return; } /* jne: not equal / not zero */

loc_001D5CE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D5D4A(); return; /* tail jmp 0x001D5D4A */

}

/**
 * sub_001D5CE7
 * Original: 0x001D5CE7 - 0x001D5CF1 (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5CE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5CE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D5CF1u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

    g_seh_ebp = ebp; sub_001D5CF1(); return; /* fallthrough 0x001D5CF1 */

}

/**
 * sub_001D5CF1
 * Original: 0x001D5CF1 - 0x001D5D4A (89 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5CF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5CF1: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x40) = 0x1D5649;
    MEM16(esi + 0xAD6) = MEM16(esi + 0xAD6) + 1;
    _fa = (uint32_t)(MEM16(esi + 0xAD6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 0xAD6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xAD6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5D1A; /* jne: not equal / not zero */

loc_001D5D11: ;
    MEM16(esi + 0xAD6) = 1;

loc_001D5D1A: ;
    eax = edi;
    _fb = (uint32_t)(MEM32(esi + 0xACC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0xACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(ecx, MEM16(esi + 0xAD6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MEM8(edi + 2) = 2;
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(edi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x001D5D48u); RECOMP_ABI_CALL(0x001D302Cu, sub_001D302C); /* call 0x001D302C */

loc_001D5D48: ;
    eax = edi;

    g_seh_ebp = ebp; sub_001D5D4A(); return; /* fallthrough 0x001D5D4A */

}

/**
 * sub_001D5D4A
 * Original: 0x001D5D4A - 0x001D5D4E (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5D4A(void)
{

loc_001D5D4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D5D4E
 * Original: 0x001D5D4E - 0x001D5DBB (109 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5D4E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5D4E: ;
    PUSH32(esp, 0x001D5D53u); RECOMP_ABI_CALL(0x001D5C90u, sub_001D5C90); /* call 0x001D5C90 */

loc_001D5D53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5DB8; /* je: equal / zero */

loc_001D5D57: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    MEM16(eax) = 1;
    edi = eax + 0xC4;
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
    edi = MEM32(esp + 0x10);
    ecx = eax + 0xB8;
    esi = eax + 0xBC;
    MEM32(eax + 0xC0) = edi;
    MEM16(eax + 0x84) = 8;
    MEM16(eax + 0xB6) = 8;
    MEM32(ecx) = 0x1000000;
    MEM16(esi) = 0x20C;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(edx, LO8(edx) & 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5DB6; /* jne: not equal / not zero */

loc_001D5DAA: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi) = MEM16(esi) & 0;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax) = 2;

loc_001D5DB6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001D5DB8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5DBB
 * Original: 0x001D5DBB - 0x001D5DFB (64 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5DBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5DBB: ;
    PUSH32(esp, 0x001D5DC0u); RECOMP_ABI_CALL(0x001D5C90u, sub_001D5C90); /* call 0x001D5C90 */

loc_001D5DC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5DF8; /* je: equal / zero */

loc_001D5DC4: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC0) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax) = 4;
    MEM16(eax + 0x84) = 0x18;
    MEM16(eax + 0xB6) = 0x18;
    MEM32(eax + 0xB8) = ecx;
    MEM16(eax + 0xBC) = 0x20C;

loc_001D5DF8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5DFB
 * Original: 0x001D5DFB - 0x001D5E4A (79 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5DFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5DFB: ;
    PUSH32(esp, 0x001D5E00u); RECOMP_ABI_CALL(0x001D5C90u, sub_001D5C90); /* call 0x001D5C90 */

loc_001D5E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5E47; /* je: equal / zero */

loc_001D5E04: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC0) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax) = 0x20;
    MEM16(eax + 0x84) = 0x18;
    MEM16(eax + 0xB6) = 0x18;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xB8) = edx;
    SET_LO16(ecx, MEM16(ecx + 8));
    MEM16(eax + 0xBC) = LO16(ecx);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x12C) = ecx;

loc_001D5E47: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D5E4A
 * Original: 0x001D5E4A - 0x001D5E57 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E4A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D5E68(); return; /* tail jmp 0x001D5E68 */

}

/**
 * sub_001D5E57
 * Original: 0x001D5E57 - 0x001D5E68 (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E57: ;
    ecx = esi;
    PUSH32(esp, 0x001D5E5Eu); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001D5E5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D5E68u); RECOMP_ABI_CALL(0x001D5BB4u, sub_001D5BB4); /* call 0x001D5BB4 */

    g_seh_ebp = ebp; sub_001D5E68(); return; /* fallthrough 0x001D5E68 */

}

/**
 * sub_001D5E68
 * Original: 0x001D5E68 - 0x001D5E72 (10 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E68: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5E57(); return; } /* jne: not equal / not zero */

loc_001D5E6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5E72
 * Original: 0x001D5E72 - 0x001D5EAA (56 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    ebx = ecx;
    MEM8(esi + 2) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_001D5E9B; /* je: equal / zero */

loc_001D5E86: ;
    PUSH32(esp, 0x001D5E8Bu); RECOMP_ABI_CALL(0x001D345Du, sub_001D345D); /* call 0x001D345D */

loc_001D5E8B: ;
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x128), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D5E9B; /* jbe: below or equal (unsigned <=) */

loc_001D5E93: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D5E9Bu); RECOMP_ABI_CALL(0x001DB93Cu, sub_001DB93C); /* call 0x001DB93C */

loc_001D5E9B: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5EAA(); return; } /* je: equal / zero */

loc_001D5EA0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D5EA8u); RECOMP_ABI_CALL(0x001D5E4Au, sub_001D5E4A); /* call 0x001D5E4A */

loc_001D5EA8: ;
    g_seh_ebp = ebp; sub_001D5EC1(); return; /* tail jmp 0x001D5EC1 */

}

/**
 * sub_001D5EAA
 * Original: 0x001D5EAA - 0x001D5EC7 (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5EAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5EAA: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5EC1; /* je: equal / zero */

loc_001D5EB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5301);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D5EC1u); RECOMP_ABI_CALL(0x001D436Bu, sub_001D436B); /* call 0x001D436B */

loc_001D5EC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5EC1
 * Original: 0x001D5EC1 - 0x001D5EC7 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5EC1(void)
{

loc_001D5EC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D5EC7
 * Original: 0x001D5EC7 - 0x001D5F3B (116 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5EC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5EC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 2), 0x80 (16-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C7(); return; } /* jb: below (unsigned <) */

loc_001D5EE0: ;
    eax = ebx + 8;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) & 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x80 (8-bit) */
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_001D5F02; /* jne: not equal / not zero */

loc_001D5EF6: ;
    _fa = (uint32_t)(MEM32(ecx + 0xAF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xAF4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C6(); return; } /* je: equal / zero */

loc_001D5F02: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x5800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x5800 (16-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D5F3B(); return; } /* jne: not equal / not zero */

loc_001D5F0D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5F13u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D5F13: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F20: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D5F36: ;
    g_seh_ebp = ebp; sub_001D5FE4(); return; /* tail jmp 0x001D5FE4 */

}

/**
 * sub_001D5F3B
 * Original: 0x001D5F3B - 0x001D5FE4 (169 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5F3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5F3B: ;
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0x001D5F43u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D5F43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F4E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F57: ;
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F61: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5F6A: ;
    ecx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xEC) (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jl: less (signed <) */

loc_001D5F79: ;
    if (CMP_G(_fas, _fbs)) goto loc_001D5F8A; /* jg: greater (signed >) */

loc_001D5F7B: ;
    ecx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xE8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D5F8A: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5F9B; /* je: equal / zero */

loc_001D5F92: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D5F9B: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x18;
    esi = eax + 0x44;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D5FAE: ;
    eax = MEM32(eax + 0xC0);
    edi = MEM32(ebp + -12);
    PUSH32(esp, 2);
    esi = eax;
    MEM32(ebp + -16) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D5FC9: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D5FD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D5FDF: ;
    edi = MEM32(ebp + -16);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D5FE4(); return; /* fallthrough 0x001D5FE4 */

}

/**
 * sub_001D5FE4
 * Original: 0x001D5FE4 - 0x001D60EC (264 bytes, 89 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5FE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5FE4: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0x80 (8-bit) */
    MEM32(ebp + -24) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001D6022; /* je: equal / zero */

loc_001D5FED: ;
    PUSH32(esp, 0x5880);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D5FFBu); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D5FFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D6006: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0x64 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D6011: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D601Au); RECOMP_ABI_CALL(0x001D7DDBu, sub_001D7DDB); /* call 0x001D7DDB */

loc_001D601A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D6022: ;
    PUSH32(esp, 0x5881);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D6030u); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D6030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D6038: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0x18 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D6043: ;
    ecx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D6053: ;
    PUSH32(esp, 0x14);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi + 8;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, 0x001D606Du); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D606D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D6075: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x48);
    esi = ebx + 0x38;
    PUSH32(esp, esi);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0x001D6092u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D6092: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D609Eu); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001D609E: ;
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5800 (16-bit) */
    edi = ebx + 0x5C;
    if (CMP_EQ(_fa, _fb)) goto loc_001D60AC; /* je: equal / zero */

loc_001D60AA: ;
    edi = esi;

loc_001D60AC: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = ebp + -68;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x18) = edi;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D60DE; /* je: equal / zero */

loc_001D60BB: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 0xE0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D60C7: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, 3);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esi = ebp + -58;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D60DE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5800 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D60EC(); return; } /* jne: not equal / not zero */

loc_001D60E4: ;
    esi = MEM32(ebp + -28);
    MEM32(ebp + 0x18) = esi;
    g_seh_ebp = ebp; sub_001D60F4(); return; /* tail jmp 0x001D60F4 */

}

/**
 * sub_001D60EC
 * Original: 0x001D60EC - 0x001D60F4 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D60EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D60EC: ;
    eax = ebx + 0x5C;
    MEM32(ebp + 0x18) = eax;
    esi = eax;

    g_seh_ebp = ebp; sub_001D60F4(); return; /* fallthrough 0x001D60F4 */

}

/**
 * sub_001D60F4
 * Original: 0x001D60F4 - 0x001D624E (346 bytes, 111 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D60F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D60F4: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0xE0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D611B; /* jne: not equal / not zero */

loc_001D60FC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x001D6104u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D6104: ;
    edi = esi + 0xA;
    PUSH32(esp, 3);
    esi = eax + 6;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        _cf = (MEM16(esi) < MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jne: not equal / not zero */

loc_001D6118: ;
    esi = MEM32(ebp + 0x18);

loc_001D611B: ;
    eax = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D615C; /* jne: not equal / not zero */

loc_001D6126: ;
    eax = MEM32(esi);
    ecx = ebp + 0x18;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0x001D6133u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D6133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D613B: ;
    eax = MEM32(esi + 4);
    ecx = ebp + 0x18;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0x001D6149u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D6149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D6151: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D615C: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x5800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x5800 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6320(); return; } /* jne: not equal / not zero */

loc_001D6167: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x001D6175u); RECOMP_ABI_CALL(0x001D2EACu, sub_001D2EAC); /* call 0x001D2EAC */

loc_001D6175: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6216; /* je: equal / zero */

loc_001D6182: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xEC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jl: less (signed <) */

loc_001D6191: ;
    if (CMP_G(_fas, _fbs)) goto loc_001D61A2; /* jg: greater (signed >) */

loc_001D6193: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xE8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D61A2: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D61CA; /* jne: not equal / not zero */

loc_001D61A8: ;
    esi = MEM32(ebp + -8);
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1E0)) >> 32) & 1);
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = eax + 0x42;
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
    if ((_flags != 0)) goto loc_001D61C2; /* je: equal / zero */

loc_001D61BD: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001D61C2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* jg: greater (signed >) */

loc_001D61CA: ;
    SET_LO8(ecx, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D61FC; /* je: equal / zero */

loc_001D61D2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D61FC; /* je: equal / zero */

loc_001D61D7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D61EB; /* jne: not equal / not zero */

loc_001D61DC: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 0x18;
    esi = ebx + 0x44;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D61FC; /* je: equal / zero */

loc_001D61EB: ;
    ecx = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx) = MEM8(ebx) | 8;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D61F9u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D61F9: ;
    eax = MEM32(ebp + 0x14);

loc_001D61FC: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D6212; /* jne: not equal / not zero */

loc_001D6202: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D620Du); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D620D: ;
    eax = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D6212: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D624E(); return; } /* jne: not equal / not zero */

loc_001D6216: ;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x38)) >> 32) & 1);
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D6226u); RECOMP_ABI_CALL(0x001D5D4Eu, sub_001D5D4E); /* call 0x001D5D4E */

loc_001D6226: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D63C5(); return; } /* je: equal / zero */

loc_001D6230: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D62DD(); return; } /* je: equal / zero */

loc_001D623D: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(ebp + -8);
    MEM8(ebx + 2) = 4;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6253(); return; } /* je: equal / zero */

loc_001D6249: ;
    SET_LO8(ecx, MEM8(edx + 0x3E));
    g_seh_ebp = ebp; sub_001D6256(); return; /* tail jmp 0x001D6256 */

}

/**
 * sub_001D6233
 * Original: 0x001D6233 - 0x001D624E (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6233: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D62DD(); return; } /* je: equal / zero */

loc_001D623D: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    edx = MEM32(ebp + -8);
    MEM8(ebx + 2) = 4;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6253(); return; } /* je: equal / zero */

loc_001D6249: ;
    SET_LO8(ecx, MEM8(edx + 0x3E));
    g_seh_ebp = ebp; sub_001D6256(); return; /* tail jmp 0x001D6256 */

}

/**
 * sub_001D624E
 * Original: 0x001D624E - 0x001D6253 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D624E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D624E: ;
    edi = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D6233(); return; /* tail jmp 0x001D6233 */

}

/**
 * sub_001D6253
 * Original: 0x001D6253 - 0x001D6256 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6253: ;
    SET_LO8(ecx, MEM8(edx + 0x3C));

    g_seh_ebp = ebp; sub_001D6256(); return; /* fallthrough 0x001D6256 */

}

/**
 * sub_001D6256
 * Original: 0x001D6256 - 0x001D62C3 (109 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6256: ;
    MEM8(ebx + 3) = LO8(ecx);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = edx;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x001D6267u); RECOMP_ABI_CALL(0x001D302Cu, sub_001D302C); /* call 0x001D302C */

loc_001D6267: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x18);
    esi = MEM32(ebp + -8);
    MEM32(ebx + 0x44) = ecx;
    eax = MEM32(eax + 0x1C);
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 8);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D6286u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D6286: ;
    eax = MEM32(ebp + -24);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = edi + 0x90;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -32));
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D62B3u); RECOMP_ABI_CALL(0x001D305Eu, sub_001D305E); /* call 0x001D305E */

loc_001D62B3: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esi + 0x1D8);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D62C3(); return; } /* je: equal / zero */

loc_001D62BE: ;
    SET_LO8(ecx, MEM8(esi + 0x3F));
    g_seh_ebp = ebp; sub_001D62C6(); return; /* tail jmp 0x001D62C6 */

}

/**
 * sub_001D62C3
 * Original: 0x001D62C3 - 0x001D62C6 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D62C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D62C3: ;
    SET_LO8(ecx, MEM8(esi + 0x3D));

    g_seh_ebp = ebp; sub_001D62C6(); return; /* fallthrough 0x001D62C6 */

}

/**
 * sub_001D62C6
 * Original: 0x001D62C6 - 0x001D62DD (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D62C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D62C6: ;
    ecx = ZX8(LO8(ecx));
    eax = eax + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D62DAu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D62DA: ;
    eax = MEM32(ebp + 0x14);

    g_seh_ebp = ebp; sub_001D62DD(); return; /* fallthrough 0x001D62DD */

}

/**
 * sub_001D62DD
 * Original: 0x001D62DD - 0x001D6320 (67 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D62DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D62DD: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 2 (8-bit) */
    ecx = MEM32(eax + 0x28);
    MEM32(ebx + 0xE8) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebx + 0xEC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001D6310; /* je: equal / zero */

loc_001D62F4: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6310; /* je: equal / zero */

loc_001D62FB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6310; /* je: equal / zero */

loc_001D6303: ;
    MEM32(ebx + 0xB8) = ecx;
    MEM16(ebx + 0xBC) = LO16(eax);

loc_001D6310: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D631Bu); RECOMP_ABI_CALL(0x001D4E43u, sub_001D4E43); /* call 0x001D4E43 */

loc_001D631B: ;
    g_seh_ebp = ebp; sub_001D63C5(); return; /* tail jmp 0x001D63C5 */

}

/**
 * sub_001D6320
 * Original: 0x001D6320 - 0x001D63C6 (166 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6320: ;
    ecx = MEM32(ebx + 0x28);
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(eax + 0xE8) = ecx;
    ecx = MEM32(ebx + 0x2C);
    MEM32(eax + 0xEC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001D634E; /* je: equal / zero */

loc_001D633A: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0xB8) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0xBC) = LO16(ecx);

loc_001D634E: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D6363; /* jne: not equal / not zero */

loc_001D6354: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x20;
    esi = eax + 0x4C;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D63BA; /* je: equal / zero */

loc_001D6363: ;
    ecx = MEM32(ebx + 0x20);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ebx + 0x24);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(ebx + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -24);
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -16);
    PUSH32(esp, edx);
    edx = ecx + 0x90;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -32));
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D63A6u); RECOMP_ABI_CALL(0x001D305Eu, sub_001D305E); /* call 0x001D305E */

loc_001D63A6: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D63B7u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D63B7: ;
    eax = MEM32(ebp + -20);

loc_001D63BA: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D63C5u); RECOMP_ABI_CALL(0x001D5E72u, sub_001D5E72); /* call 0x001D5E72 */

loc_001D63C5: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D63C6(); return; /* fallthrough 0x001D63C6 */

}

/**
 * sub_001D63C5
 * Original: 0x001D63C5 - 0x001D63C6 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D63C5: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D63C6(); return; /* fallthrough 0x001D63C6 */

}

/**
 * sub_001D63C6
 * Original: 0x001D63C6 - 0x001D63C7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D63C6: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D63C7(); return; /* fallthrough 0x001D63C7 */

}

/**
 * sub_001D63C7
 * Original: 0x001D63C7 - 0x001D63CC (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D63C7: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D63CC
 * Original: 0x001D63CC - 0x001D64B2 (230 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D63CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D63CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0x40 (16-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66C0(); return; } /* jb: below (unsigned <) */

loc_001D63E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D63EDu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D63ED: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BF(); return; } /* je: equal / zero */

loc_001D63F7: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BF(); return; } /* je: equal / zero */

loc_001D6400: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BF(); return; } /* jne: not equal / not zero */

loc_001D640A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = ebx + 0x44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D641E: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D642F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D6437: ;
    PUSH32(esp, 0x5880);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6445u); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D6445: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D644D: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0x64 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D6458: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6464u); RECOMP_ABI_CALL(0x001D7DDBu, sub_001D7DDB); /* call 0x001D7DDB */

loc_001D6464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D646C: ;
    PUSH32(esp, 0x5883);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D647Au); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D647A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D6484: ;
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D6495: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D64B2(); return; } /* je: equal / zero */

loc_001D64A2: ;
    PUSH32(esp, MEM32(ebx + 0xC0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D64ADu); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D64AD: ;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001D64B6(); return; /* tail jmp 0x001D64B6 */

}

/**
 * sub_001D64B2
 * Original: 0x001D64B2 - 0x001D64B6 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D64B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D64B2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D64B6(); return; /* fallthrough 0x001D64B6 */

}

/**
 * sub_001D64B6
 * Original: 0x001D64B6 - 0x001D6549 (147 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D64B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D64B6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D64C0: ;
    eax = MEM32(ebx + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D64CE; /* jb: below (unsigned <) */

loc_001D64CB: ;
    PUSH32(esp, 8);
    POP32(esp, eax);

loc_001D64CE: ;
    ecx = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx + 0xE8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0x001D64FCu); RECOMP_ABI_CALL(0x001EF81Fu, sub_001EF81F); /* call 0x001EF81F */

loc_001D64FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D6504: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0x14);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x001D6525u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D6525: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D652D: ;
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6549(); return; } /* je: equal / zero */

loc_001D6535: ;
    MEM16(ebx + 0xB6) = 8;
    MEM16(ebx + 0x84) = 8;
    g_seh_ebp = ebp; sub_001D6563(); return; /* tail jmp 0x001D6563 */

}

/**
 * sub_001D6549
 * Original: 0x001D6549 - 0x001D6563 (26 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6549(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6549: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D6551: ;
    MEM16(ebx + 0xB6) = 0x18;
    MEM16(ebx + 0x84) = 0x18;

    g_seh_ebp = ebp; sub_001D6563(); return; /* fallthrough 0x001D6563 */

}

/**
 * sub_001D6563
 * Original: 0x001D6563 - 0x001D6694 (305 bytes, 104 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6563(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6563: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -12));
    esi = ebx + 0x4C;
    MEM32(esi) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D6590u); RECOMP_ABI_CALL(0x001D305Eu, sub_001D305E); /* call 0x001D305E */

loc_001D6590: ;
    PUSH32(esp, 0x20);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D65AAu); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D65AA: ;
    _fa = (uint32_t)(MEM16(edi + 0x3E)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x3E), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* jne: not equal / not zero */

loc_001D65B5: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(ebp + -16);
    MEM32(ebx + 8) = eax;
    eax = ZX16(MEM16(edi + 0x3C));
    eax = eax + eax * 4;
    MEM32(ebx + 0x24) = eax;
    eax = ZX16(MEM16(edi + 0x3A));
    eax = eax + eax * 4;
    MEM32(ebx + 0x28) = eax;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebx + 0xC4;
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
    esi = MEM32(ebp + 0x14);
    eax = MEM32(esi + 0x34);
    edi = MEM32(ebp + -4);
    MEM32(ebx + 0xD8) = eax;
    SET_LO16(eax, MEM16(esi + 0x38));
    MEM16(ebx + 0xDC) = LO16(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D6604u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D6604: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66AE(); return; } /* jne: not equal / not zero */

loc_001D6610: ;
    PUSH32(esp, 0x5887);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D661Eu); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D661E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6694(); return; } /* je: equal / zero */

loc_001D6624: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x11C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x11C (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6694(); return; } /* jb: below (unsigned <) */

loc_001D662E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x91C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x91C (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6694(); return; } /* ja: above (unsigned >) */

loc_001D6634: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6694(); return; } /* jne: not equal / not zero */

loc_001D663E: ;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001D6656u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D6656: ;
    ecx = ZX16(MEM16(esi + 2));
    edi = MEM32(edi + 0xD1C);
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
    PUSH32(esp, 3);
    POP32(esp, edx);
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
    esi = MEM32(ebp + -4);
    edi = MEM32(esi + 0xD1C);
    PUSH32(esp, 0x4B);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x91C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x91C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xAF0) = edx;
    MEM8(ebx + 2) = 5;
    edi = esi;
    g_seh_ebp = ebp; sub_001D669E(); return; /* tail jmp 0x001D669E */

}

/**
 * sub_001D6694
 * Original: 0x001D6694 - 0x001D669E (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6694: ;
    MEM32(edi + 0xAF0) = 6;

    g_seh_ebp = ebp; sub_001D669E(); return; /* fallthrough 0x001D669E */

}

/**
 * sub_001D669E
 * Original: 0x001D669E - 0x001D66AE (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D669E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D669E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi + 0xAF8));
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D66AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D66A8u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D66AE(); return; /* fallthrough 0x001D66AE */

}

/**
 * sub_001D66AE
 * Original: 0x001D66AE - 0x001D66BE (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D66AE: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D66BE(); return; } /* je: equal / zero */

loc_001D66B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001D66BEu); RECOMP_ABI_CALL(0x001D5E72u, sub_001D5E72); /* call 0x001D5E72 */

    g_seh_ebp = ebp; sub_001D66BE(); return; /* fallthrough 0x001D66BE */

}

/**
 * sub_001D66BE
 * Original: 0x001D66BE - 0x001D66BF (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D66BE: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D66BF(); return; /* fallthrough 0x001D66BF */

}

/**
 * sub_001D66BF
 * Original: 0x001D66BF - 0x001D66C0 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D66BF: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D66C0(); return; /* fallthrough 0x001D66C0 */

}

/**
 * sub_001D66C0
 * Original: 0x001D66C0 - 0x001D66C5 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D66C0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D66C5
 * Original: 0x001D66C5 - 0x001D6776 (177 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D66C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D66C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0x24 (16-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68AB(); return; } /* jb: below (unsigned <) */

loc_001D66DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D66E6u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D66E6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68AA(); return; } /* je: equal / zero */

loc_001D66F0: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68AA(); return; } /* je: equal / zero */

loc_001D66F9: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68AA(); return; } /* jne: not equal / not zero */

loc_001D6703: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = ebx + 0x44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* jne: not equal / not zero */

loc_001D6717: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D6728: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* jne: not equal / not zero */

loc_001D6730: ;
    PUSH32(esp, 0x5883);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D673Eu); RECOMP_ABI_CALL(0x001D7DB1u, sub_001D7DB1); /* call 0x001D7DB1 */

loc_001D673E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D6748: ;
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* jne: not equal / not zero */

loc_001D6759: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6776(); return; } /* je: equal / zero */

loc_001D6766: ;
    PUSH32(esp, MEM32(ebx + 0xC0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6771u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D6771: ;
    MEM32(ebp + 0x14) = eax;
    g_seh_ebp = ebp; sub_001D677A(); return; /* tail jmp 0x001D677A */

}

/**
 * sub_001D6776
 * Original: 0x001D6776 - 0x001D677A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6776(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6776: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D677A(); return; /* fallthrough 0x001D677A */

}

/**
 * sub_001D677A
 * Original: 0x001D677A - 0x001D6818 (158 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D677A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D677A: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x5883) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x5883 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* jne: not equal / not zero */

loc_001D6785: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D678F: ;
    eax = MEM32(ebx + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D679D; /* jb: below (unsigned <) */

loc_001D679A: ;
    PUSH32(esp, 8);
    POP32(esp, eax);

loc_001D679D: ;
    ecx = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx + 0xE8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0x001D67CBu); RECOMP_ABI_CALL(0x001EF81Fu, sub_001EF81F); /* call 0x001EF81F */

loc_001D67CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D67D3: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0x14);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x001D67F4u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D67F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D67FC: ;
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6818(); return; } /* je: equal / zero */

loc_001D6804: ;
    MEM16(ebx + 0xB6) = 8;
    MEM16(ebx + 0x84) = 8;
    g_seh_ebp = ebp; sub_001D6832(); return; /* tail jmp 0x001D6832 */

}

/**
 * sub_001D6818
 * Original: 0x001D6818 - 0x001D6832 (26 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6818(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6818: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D68A9(); return; } /* je: equal / zero */

loc_001D6820: ;
    MEM16(ebx + 0xB6) = 0x18;
    MEM16(ebx + 0x84) = 0x18;

    g_seh_ebp = ebp; sub_001D6832(); return; /* fallthrough 0x001D6832 */

}

/**
 * sub_001D6832
 * Original: 0x001D6832 - 0x001D68A9 (119 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6832(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6832: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    MEM32(ebx + 0x4C) = eax;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebx + 0x50) = eax;
    eax = MEM32(ebx + 0x12C);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D685Au); RECOMP_ABI_CALL(0x001D2403u, sub_001D2403); /* call 0x001D2403 */

loc_001D685A: ;
    eax = MEM32(edi + 0xC);
    MEM32(ebx + 8) = eax;
    eax = ZX16(MEM16(edi + 0x22));
    eax = eax + eax * 4;
    MEM32(ebx + 0x24) = eax;
    eax = ZX16(MEM16(edi + 0x20));
    ecx = MEM32(ebp + -4);
    eax = eax + eax * 4;
    MEM32(ebx + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0xC4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebx + 0xD8) = MEM32(ebx + 0xD8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx + 0xDC) = MEM16(ebx + 0xDC) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0xDC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D689Eu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D689E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D68A9u); RECOMP_ABI_CALL(0x001D5E72u, sub_001D5E72); /* call 0x001D5E72 */

    g_seh_ebp = ebp; sub_001D68A9(); return; /* fallthrough 0x001D68A9 */

}

/**
 * sub_001D68A9
 * Original: 0x001D68A9 - 0x001D68AA (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D68A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D68A9: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D68AA(); return; /* fallthrough 0x001D68AA */

}

/**
 * sub_001D68AA
 * Original: 0x001D68AA - 0x001D68AB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D68AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D68AA: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D68AB(); return; /* fallthrough 0x001D68AB */

}

/**
 * sub_001D68AB
 * Original: 0x001D68AB - 0x001D68B0 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D68AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D68AB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D68B0
 * Original: 0x001D68B0 - 0x001D68E4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D68B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D68B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax + 0xA;
    esi = ebx + 0x1E0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    MEM32(ebp + -4) = ebx;
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D68E4(); return; } /* jne: not equal / not zero */

loc_001D68D4: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x100007F;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D69CA(); return; /* tail jmp 0x001D69CA */

}

/**
 * sub_001D68E4
 * Original: 0x001D68E4 - 0x001D6901 (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D68E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D68E4: ;
    esi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6901(); return; } /* jne: not equal / not zero */

loc_001D68F1: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6901(); return; } /* jne: not equal / not zero */

loc_001D68F7: ;
    eax = 0x2726;
    g_seh_ebp = ebp; sub_001D69CA(); return; /* tail jmp 0x001D69CA */

}

/**
 * sub_001D6901
 * Original: 0x001D6901 - 0x001D6923 (34 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6901: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D6907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6901u); } /* indirect call */
    }

loc_001D6907: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(ebp + -8) = LO8(eax);
    PUSH32(esp, 0x001D6912u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D6912: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6923(); return; } /* jne: not equal / not zero */

loc_001D6919: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001D69BF(); return; /* tail jmp 0x001D69BF */

}

/**
 * sub_001D6923
 * Original: 0x001D6923 - 0x001D69A3 (128 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6923(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6923: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D692Eu); RECOMP_ABI_CALL(0x001D2EACu, sub_001D2EAC); /* call 0x001D2EAC */

loc_001D692E: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6988; /* je: equal / zero */

loc_001D693E: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 2 (8-bit) */
    eax = MEM32(ebx + 0xE8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0xEC);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001D6971; /* je: equal / zero */

loc_001D6955: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = ebx + 0xC4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D6971; /* je: equal / zero */

loc_001D6967: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D6971u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D6971: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6984; /* jne: not equal / not zero */

loc_001D6977: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D6982u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001D6982: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D6984: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D69B5(); return; } /* jne: not equal / not zero */

loc_001D6988: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D6996u); RECOMP_ABI_CALL(0x001D5D4Eu, sub_001D5D4E); /* call 0x001D5D4E */

loc_001D6996: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D69A3(); return; } /* jne: not equal / not zero */

loc_001D699C: ;
    esi = 0x2776;
    g_seh_ebp = ebp; sub_001D69BF(); return; /* tail jmp 0x001D69BF */

}

/**
 * sub_001D69A3
 * Original: 0x001D69A3 - 0x001D69B5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D69A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D69A3: ;
    eax = MEM32(ebp + -16);
    MEM32(ebx + 0xE8) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebx + 0xEC) = eax;

    g_seh_ebp = ebp; sub_001D69B5(); return; /* fallthrough 0x001D69B5 */

}

/**
 * sub_001D69B5
 * Original: 0x001D69B5 - 0x001D69BF (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D69B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D69B5: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D69BF(); return; /* fallthrough 0x001D69BF */

}

/**
 * sub_001D69BF
 * Original: 0x001D69BF - 0x001D69CA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D69BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D69BF: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D69C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D69C2u); } /* indirect call */
    }

loc_001D69C8: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001D69CA(); return; /* fallthrough 0x001D69CA */

}

/**
 * sub_001D69CA
 * Original: 0x001D69CA - 0x001D69D1 (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D69CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D69CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D69D1
 * Original: 0x001D69D1 - 0x001D6A0B (58 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D69D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D69D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D69DFu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D69DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A5C(); return; } /* je: equal / zero */

loc_001D69E3: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x268) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A5C(); return; } /* je: equal / zero */

loc_001D69EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D69F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D69EFu); } /* indirect call */
    }

loc_001D69F5: ;
    ecx = MEM32(esi + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A0B(); return; } /* je: equal / zero */

loc_001D6A01: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6A09u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D6A09: ;
    g_seh_ebp = ebp; sub_001D6A0D(); return; /* tail jmp 0x001D6A0D */

}

/**
 * sub_001D6A0B
 * Original: 0x001D6A0B - 0x001D6A0D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D6A0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D6A0D(); return; /* fallthrough 0x001D6A0D */

}

/**
 * sub_001D6A0D
 * Original: 0x001D6A0D - 0x001D6A3B (46 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A55(); return; } /* je: equal / zero */

loc_001D6A11: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D6A1Fu); RECOMP_ABI_CALL(0x001D2F02u, sub_001D2F02); /* call 0x001D2F02 */

loc_001D6A1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A3B(); return; } /* jne: not equal / not zero */

loc_001D6A23: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D6A30u); RECOMP_ABI_CALL(0x001D5DBBu, sub_001D5DBB); /* call 0x001D5DBB */

loc_001D6A30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6A3B(); return; } /* jne: not equal / not zero */

loc_001D6A34: ;
    esi = 0x2776;
    g_seh_ebp = ebp; sub_001D6A48(); return; /* tail jmp 0x001D6A48 */

}

/**
 * sub_001D6A3B
 * Original: 0x001D6A3B - 0x001D6A48 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A3B: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D6A48(); return; /* fallthrough 0x001D6A48 */

}

/**
 * sub_001D6A48
 * Original: 0x001D6A48 - 0x001D6A55 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A48: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D6A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6A4Au); } /* indirect call */
    }

loc_001D6A50: ;
    eax = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001D6A61(); return; /* tail jmp 0x001D6A61 */

}

/**
 * sub_001D6A55
 * Original: 0x001D6A55 - 0x001D6A5C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A55: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001D6A48(); return; /* tail jmp 0x001D6A48 */

}

/**
 * sub_001D6A5C
 * Original: 0x001D6A5C - 0x001D6A66 (10 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A5C: ;
    eax = 0x2726;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D6A61
 * Original: 0x001D6A61 - 0x001D6A66 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6A61: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
