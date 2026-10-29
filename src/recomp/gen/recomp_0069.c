/**
 * DOAU1 - Recompiled code chunk 69
 * Functions: 250 (0x001DFCAF - 0x001E29D5)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001DFCAF
 * Original: 0x001DFCAF - 0x001DFCBA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFCAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFCAF: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D4CBE(); return; /* tail jmp 0x001D4CBE */

}

/**
 * sub_001DFCBA
 * Original: 0x001DFCBA - 0x001DFCC5 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFCBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFCBA: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D3820(); return; /* tail jmp 0x001D3820 */

}

/**
 * sub_001DFCC5
 * Original: 0x001DFCC5 - 0x001DFCD0 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFCC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFCC5: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D254D(); return; /* tail jmp 0x001D254D */

}

/**
 * sub_001DFCDB
 * Original: 0x001DFCDB - 0x001DFD05 (42 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFCDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DFCDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DFCFB; /* je: equal / zero */

loc_001DFCF0: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx))) >> 32) & 1);
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DFCF0; /* jne: not equal / not zero */

loc_001DFCFB: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DFD17
 * Original: 0x001DFD17 - 0x001DFD35 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFD17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFD17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DFD2E; /* je: equal / zero */

loc_001DFD26: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFD35(); return; } /* jb: below (unsigned <) */

loc_001DFD2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DFDCA(); return; /* tail jmp 0x001DFDCA */

}

/**
 * sub_001DFD35
 * Original: 0x001DFD35 - 0x001DFD6E (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFD35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFD35: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = 0x200;
    PUSH32(esp, esi);
    eax = ebp + -528;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x001DFD66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFD60u); } /* indirect call */
    }

loc_001DFD66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001DFD6E(); return; } /* jge: greater or equal (signed >=) */

loc_001DFD6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DFDC8(); return; /* tail jmp 0x001DFDC8 */

}

/**
 * sub_001DFD6E
 * Original: 0x001DFD6E - 0x001DFDC5 (87 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFD6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFD6E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -24);
    PUSH32(esp, esi);
    eax = ebp + -528;
    PUSH32(esp, eax);
    MEM32(ebp + -24) = edi;
    PUSH32(esp, 0x001DFD82u); RECOMP_ABI_CALL(0x001DFCDBu, sub_001DFCDB); /* call 0x001DFCDB */

loc_001DFD82: ;
    _fa = (uint32_t)(MEM32(ebp + -528)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x79132568) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -528), 0x79132568 (32-bit) */
    eax = ~eax;
    MEM32(ebp + -24) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDC5(); return; } /* jne: not equal / not zero */

loc_001DFD93: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA550000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xAA550000u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDC5(); return; } /* jne: not equal / not zero */

loc_001DFD9C: ;
    _fa = (uint32_t)(MEM32(ebp + -524)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -524), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDC5(); return; } /* jb: below (unsigned <) */

loc_001DFDA5: ;
    _fa = (uint32_t)(MEM32(ebp + -520)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -520), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDC5(); return; } /* jb: below (unsigned <) */

loc_001DFDAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDC5(); return; } /* jne: not equal / not zero */

loc_001DFDB2: ;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    esi = ebp + -516;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001DFDC7(); return; /* tail jmp 0x001DFDC7 */

}

/**
 * sub_001DFDC5
 * Original: 0x001DFDC5 - 0x001DFDC7 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DFDC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DFDC7(); return; /* fallthrough 0x001DFDC7 */

}

/**
 * sub_001DFDC7
 * Original: 0x001DFDC7 - 0x001DFDC8 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFDC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDC7: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DFDC8(); return; /* fallthrough 0x001DFDC8 */

}

/**
 * sub_001DFDC8
 * Original: 0x001DFDC8 - 0x001DFDCA (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFDC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDC8: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DFDCA(); return; /* fallthrough 0x001DFDCA */

}

/**
 * sub_001DFDCA
 * Original: 0x001DFDCA - 0x001DFDCE (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFDCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDCA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DFDCE
 * Original: 0x001DFDCE - 0x001DFDDD (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFDCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFDCE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDE4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DFDDD(); return; /* fallthrough 0x001DFDDD */

}

/**
 * sub_001DFDDD
 * Original: 0x001DFDDD - 0x001DFDE4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFDDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DFE6D(); return; /* tail jmp 0x001DFE6D */

}

/**
 * sub_001DFDE4
 * Original: 0x001DFDE4 - 0x001DFE6D (137 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFDE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFDE4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFDDD(); return; } /* jae: above or equal (unsigned >=) */

loc_001DFDEC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7B);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    MEM32(ebp + -524) = eax;
    MEM32(ebp + -520) = eax;
    MEM32(ebp + -528) = 0x79132568;
    MEM32(ebp + -20) = 0xAA550000u;
    edi = ebp + -516;
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
    esi = 0x200;
    PUSH32(esp, esi);
    eax = ebp + -528;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -24) = ebx;
    PUSH32(esp, 0x001DFE40u); RECOMP_ABI_CALL(0x001DFCDBu, sub_001DFCDB); /* call 0x001DFCDB */

loc_001DFE40: ;
    eax = ~eax;
    MEM32(ebp + -24) = eax;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -528;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x001DFE61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFE5Bu); } /* indirect call */
    }

loc_001DFE61: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;

    g_seh_ebp = ebp; sub_001DFE6D(); return; /* fallthrough 0x001DFE6D */

}

/**
 * sub_001DFE6D
 * Original: 0x001DFE6D - 0x001DFE71 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFE6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFE6D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DFE71
 * Original: 0x001DFE71 - 0x001DFE8D (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFE71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFE71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9701A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFE8D(); return; } /* je: equal / zero */

loc_001DFE85: ;
    ebx = MEM32(eax + 0xD48);
    g_seh_ebp = ebp; sub_001DFE94(); return; /* tail jmp 0x001DFE94 */

}

/**
 * sub_001DFE8D
 * Original: 0x001DFE8D - 0x001DFE94 (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFE8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFE8D: ;
    PUSH32(esp, 0x001DFE92u); RECOMP_ABI_CALL(0x001DFBCDu, sub_001DFBCD); /* call 0x001DFBCD */

loc_001DFE92: ;
    ebx = eax;

    g_seh_ebp = ebp; sub_001DFE94(); return; /* fallthrough 0x001DFE94 */

}

/**
 * sub_001DFE94
 * Original: 0x001DFE94 - 0x001DFF07 (115 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFE94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFE94: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    PUSH32(esp, 0x14);
    eax = ebp + -452;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -432;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    edi = ebp + -492;
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
    MEM32(ebp + -432) = 0x58425632;
    MEM32(ebp + -4) = 0x58424350;
    PUSH32(esp, 0x001DFED9u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DFED9: ;
    PUSH32(esp, 0x1EC);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DFEEDu); RECOMP_ABI_CALL(0x001DFDCEu, sub_001DFDCE); /* call 0x001DFDCE */

loc_001DFEED: ;
    _fa = (uint32_t)(MEM32(0x9701A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9701A0), 0 (32-bit) */
    esi = eax;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001DFEFF; /* jne: not equal / not zero */

loc_001DFEF9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DFEFFu); RECOMP_ABI_CALL(0x001DFC1Bu, sub_001DFC1B); /* call 0x001DFC1B */

loc_001DFEFF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DFF13
 * Original: 0x001DFF13 - 0x001DFF1E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFF13: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D56D3(); return; /* tail jmp 0x001D56D3 */

}

/**
 * sub_001DFF1E
 * Original: 0x001DFF1E - 0x001DFF29 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFF1E: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D5919(); return; /* tail jmp 0x001D5919 */

}

/**
 * sub_001DFF29
 * Original: 0x001DFF29 - 0x001DFF3F (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFF29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFF29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x9701A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFF3F(); return; } /* je: equal / zero */

loc_001DFF37: ;
    eax = MEM32(eax + 0xD48);
    g_seh_ebp = ebp; sub_001DFF44(); return; /* tail jmp 0x001DFF44 */

}

/**
 * sub_001DFF3F
 * Original: 0x001DFF3F - 0x001DFF44 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFF3F: ;
    PUSH32(esp, 0x001DFF44u); RECOMP_ABI_CALL(0x001DFBCDu, sub_001DFBCD); /* call 0x001DFBCD */

    g_seh_ebp = ebp; sub_001DFF44(); return; /* fallthrough 0x001DFF44 */

}

/**
 * sub_001DFF44
 * Original: 0x001DFF44 - 0x001DFFC3 (127 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFF44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x1EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x001DFF5Au); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001DFF5A: ;
    PUSH32(esp, 0x14);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B0);
    ebx = esi + 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BB9C));
    MEM32(ebp + -8) = 0x58425632;
    PUSH32(esp, 0x001DFF83u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001DFF83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DFFA9; /* jne: not equal / not zero */

loc_001DFF87: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6C);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(ebx) = 0x58425632;
    MEM32(esi + 0x1E8) = 0x58424350;
    PUSH32(esp, 0x001DFFA8u); RECOMP_ABI_CALL(0x001DFE71u, sub_001DFE71); /* call 0x001DFE71 */

loc_001DFFA8: ;
    POP32(esp, edi);

loc_001DFFA9: ;
    _fa = (uint32_t)(MEM32(0x9701A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9701A0), 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001DFFBC; /* jne: not equal / not zero */

loc_001DFFB4: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001DFFBCu); RECOMP_ABI_CALL(0x001DFC1Bu, sub_001DFC1B); /* call 0x001DFC1B */

loc_001DFFBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DFFC3
 * Original: 0x001DFFC3 - 0x001E0028 (101 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: standard_frame
 */
void sub_001DFFC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFFC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0026; /* je: equal / zero */

loc_001DFFD6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DFFE7; /* jne: not equal / not zero */

loc_001DFFDC: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DFFE3u); RECOMP_ABI_CALL(0x001DC310u, sub_001DC310); /* call 0x001DC310 */

loc_001DFFE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0026; /* je: equal / zero */

loc_001DFFE7: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DFFF3u); RECOMP_ABI_CALL(0x001DFF29u, sub_001DFF29); /* call 0x001DFF29 */

loc_001DFFF3: ;
    ecx = MEM32(0x9701A0);
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0005u); RECOMP_ABI_CALL(0x001DC310u, sub_001DC310); /* call 0x001DC310 */

loc_001E0005: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E001A; /* je: equal / zero */

loc_001E000B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -88;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM16(ebp + -82) = MEM16(ebp + -82) & 0;
    _fa = (uint32_t)(MEM16(ebp + -82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, edi);

loc_001E001A: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0026u); RECOMP_ABI_CALL(0x001DFE71u, sub_001DFE71); /* call 0x001DFE71 */

loc_001E0026: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E0028(); return; /* fallthrough 0x001E0028 */

}

/**
 * sub_001E0028
 * Original: 0x001E0028 - 0x001E002D (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0028: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E002D
 * Original: 0x001E002D - 0x001E007B (78 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E002D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E002D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x9701A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9701A0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0074; /* je: equal / zero */

loc_001E003F: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E004Bu); RECOMP_ABI_CALL(0x001DFF29u, sub_001DFF29); /* call 0x001DFF29 */

loc_001E004B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0074; /* je: equal / zero */

loc_001E004F: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(0x9701A0);
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0064u); RECOMP_ABI_CALL(0x001DC45Bu, sub_001DC45B); /* call 0x001DC45B */

loc_001E0064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0074; /* je: equal / zero */

loc_001E0068: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0074u); RECOMP_ABI_CALL(0x001DFE71u, sub_001DFE71); /* call 0x001DFE71 */

loc_001E0074: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0085
 * Original: 0x001E0085 - 0x001E00BC (55 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0085(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0085: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9701A0);
    _fa = (uint32_t)(MEM8(eax + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x8C8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E00BA; /* jne: not equal / not zero */

loc_001E009C: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E00A8u); RECOMP_ABI_CALL(0x001DFF29u, sub_001DFF29); /* call 0x001DFF29 */

loc_001E00A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E00BA; /* je: equal / zero */

loc_001E00AC: ;
    PUSH32(esp, 0);
    eax = ebp + -492;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E00BAu); RECOMP_ABI_CALL(0x001CEEADu, sub_001CEEAD); /* call 0x001CEEAD */

loc_001E00BA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001E00BC
 * Original: 0x001E00BC - 0x001E00F2 (54 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E00BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E00BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x9701A0);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E00DAu); RECOMP_ABI_CALL(0x001D48DFu, sub_001D48DF); /* call 0x001D48DF */

loc_001E00DA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E00EB; /* je: equal / zero */

loc_001E00E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E00EBu); RECOMP_ABI_CALL(0x001DFFC3u, sub_001DFFC3); /* call 0x001DFFC3 */

loc_001E00EB: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E00F2
 * Original: 0x001E00F2 - 0x001E0104 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E00F2(void)
{

loc_001E00F2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BDA0); PUSH32(esp, 0x001E00F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E00F2u); } /* indirect call */
    }

loc_001E00F8: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0104
 * Original: 0x001E0104 - 0x001E0133 (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0104(void)
{

loc_001E0104: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BDA4); PUSH32(esp, 0x001E010Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E0106u); } /* indirect call */
    }

loc_001E010C: ;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, MEM32(eax + 4));
    edi = edx;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x001E0125u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001E0125: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E012Eu); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_001E012E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0143
 * Original: 0x001E0143 - 0x001E0172 (47 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0143(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0143: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E016F; /* jb: below (unsigned <) */

loc_001E014E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = edx;
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 4) = MEM32(eax + 4) - edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E016F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0172
 * Original: 0x001E0172 - 0x001E018D (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0172: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E018D
 * Original: 0x001E018D - 0x001E01BD (48 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E018D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E018D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;

loc_001E019A: ;
    esi = MEM32(edi);
    eax = esi;
    eax = eax | MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -12) = esi;
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
    if (CMP_NE(_fa, _fb)) goto loc_001E019A; /* jne: not equal / not zero */

loc_001E01B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E01EA
 * Original: 0x001E01EA - 0x001E033A (336 bytes, 114 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E01EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E01EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 4);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0220u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0220: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001E022Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E0224u); } /* indirect call */
    }

loc_001E022A: ;
    PUSH32(esp, 8);
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0238u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0238: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0241u); RECOMP_ABI_CALL(0x001E00F2u, sub_001E00F2); /* call 0x001E00F2 */

loc_001E0241: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 4);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0258u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0258: ;
    eax = ebp + -88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB1C); PUSH32(esp, 0x001E0262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E025Cu); } /* indirect call */
    }

loc_001E0262: ;
    eax = MEM32(ebp + -80);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 2);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0276u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0276: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 2);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E028Au); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E028A: ;
    SET_LO8(eax, MEM8(ebp + -71));
    MEM8(ebp + 0xB) = LO8(eax);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E029Eu); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E029E: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E39D4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E02B4u); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_001E02B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E02D4; /* je: equal / zero */

loc_001E02B8: ;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E02C6u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E02C6: ;
    PUSH32(esp, 8);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E02D4u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E02D4: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -344;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E02F2u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_001E02F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E0308; /* jl: less (signed <) */

loc_001E02F6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -344;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0308u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0308: ;
    eax = MEM32(0x22BDAC);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 4));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E031Cu); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E031C: ;
    eax = MEM32(0x22BDA8);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 4));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0330u); RECOMP_ABI_CALL(0x001E0143u, sub_001E0143); /* call 0x001E0143 */

loc_001E0330: ;
    eax = esi;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E034B
 * Original: 0x001E034B - 0x001E036D (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E034B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E034B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = eax + 0xC4;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_001E036D(); return; } /* jns: not sign (positive) */

loc_001E0369: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_001E0370(); return; /* tail jmp 0x001E0370 */

}

/**
 * sub_001E036D
 * Original: 0x001E036D - 0x001E0370 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E036D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E036D: ;
    ecx = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001E0370(); return; /* fallthrough 0x001E0370 */

}

/**
 * sub_001E0370
 * Original: 0x001E0370 - 0x001E039D (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0370: ;
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + 0x10);
    esi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001E0382; /* jg: greater (signed >) */

loc_001E0380: ;
    eax = ecx;

loc_001E0382: ;
    esi = MEM32(ebp + 0x18);
    MEM32(esi) = eax;
    edx = MEM32(edx);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001E039D(); return; } /* js: sign (negative) */

loc_001E0390: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E0399; /* jne: not equal / not zero */

loc_001E0394: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E039D(); return; } /* je: equal / zero */

loc_001E0399: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E03A0(); return; /* tail jmp 0x001E03A0 */

}

/**
 * sub_001E039D
 * Original: 0x001E039D - 0x001E03A0 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E039D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E039D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001E03A0(); return; /* fallthrough 0x001E03A0 */

}

/**
 * sub_001E03A0
 * Original: 0x001E03A0 - 0x001E03A4 (4 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E03A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E03A0: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E03A4
 * Original: 0x001E03A4 - 0x001E03BB (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E03A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E03A4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi) = 0x200;
    g_seh_ebp = ebp; sub_001E0406(); return; /* tail jmp 0x001E0406 */

}

/**
 * sub_001E03BB
 * Original: 0x001E03BB - 0x001E03CA (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E03BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E03BB: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E040A(); return; } /* je: equal / zero */

loc_001E03C1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E03CA(); return; } /* jne: not equal / not zero */

loc_001E03C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001E0406(); return; /* tail jmp 0x001E0406 */

}

/**
 * sub_001E03CA
 * Original: 0x001E03CA - 0x001E0406 (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E03CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E03CA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0413(); return; } /* jb: below (unsigned <) */

loc_001E03CF: ;
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0413(); return; } /* jb: below (unsigned <) */

loc_001E03D7: ;
    edi = ZX8(LO8(edx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0413(); return; } /* ja: above (unsigned >) */

loc_001E03DE: ;
    ecx = ZX8(LO8(ecx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E0402; /* jne: not equal / not zero */

loc_001E03E5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0413(); return; } /* jne: not equal / not zero */

loc_001E03EA: ;
    edx = ZX8(MEM8(eax + 3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 2));
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001E0402; /* jae: above or equal (unsigned >=) */

loc_001E03FC: ;
    MEM32(esi) = 0x200;

loc_001E0402: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001E0406(); return; /* fallthrough 0x001E0406 */

}

/**
 * sub_001E0406
 * Original: 0x001E0406 - 0x001E040A (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0406: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E03BB(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E040A(); return; /* fallthrough 0x001E040A */

}

/**
 * sub_001E040A
 * Original: 0x001E040A - 0x001E0413 (9 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E040A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E040A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E040D
 * Original: 0x001E040D - 0x001E0413 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E040D(void)
{

loc_001E040D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E0413
 * Original: 0x001E0413 - 0x001E0417 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0413(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0413: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E040D(); return; /* tail jmp 0x001E040D */

}

/**
 * sub_001E0417
 * Original: 0x001E0417 - 0x001E043B (36 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0417(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0417: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x64;
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x68);
    MEM32(edi) = esi;
    MEM32(esi + 4) = edi;
    MEM32(edx + 0x60) = MEM32(edx + 0x60) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(edx + 0x68) = eax;
    MEM32(eax) = eax;
    MEM8(ecx + 0x7D) = MEM8(ecx + 0x7D) - 1;
    _fa = (uint32_t)(MEM8(ecx + 0x7D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E043B
 * Original: 0x001E043B - 0x001E0453 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E043B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E043B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0453(); return; } /* jne: not equal / not zero */

loc_001E0443: ;
    eax = ecx + 0x24;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    g_seh_ebp = ebp; sub_001E0460(); return; /* tail jmp 0x001E0460 */

}

/**
 * sub_001E0453
 * Original: 0x001E0453 - 0x001E0460 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0453(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0453: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);

    g_seh_ebp = ebp; sub_001E0460(); return; /* fallthrough 0x001E0460 */

}

/**
 * sub_001E0460
 * Original: 0x001E0460 - 0x001E0468 (8 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0460(void)
{

loc_001E0460: ;
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E071F
 * Original: 0x001E071F - 0x001E073A (27 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E071F(void)
{

loc_001E071F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0x001E0732u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0732: ;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0748
 * Original: 0x001E0748 - 0x001E076E (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0748: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(MEM32(eax + 0xAC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0x7C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x7C), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E076E(); return; } /* jb: below (unsigned <) */

loc_001E075E: ;
    edx = MEM32(eax + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E076E(); return; } /* jle: less or equal (signed <=) */

loc_001E076A: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_001E0774(); return; /* tail jmp 0x001E0774 */

}

/**
 * sub_001E076E
 * Original: 0x001E076E - 0x001E0774 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E076E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E076E: ;
    eax = MEM32(eax + 0xA0);

    g_seh_ebp = ebp; sub_001E0774(); return; /* fallthrough 0x001E0774 */

}

/**
 * sub_001E0774
 * Original: 0x001E0774 - 0x001E0777 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0774(void)
{

loc_001E0774: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0777
 * Original: 0x001E0777 - 0x001E07A9 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0777(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0777: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0xC8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC4) = MEM32(eax + 0xC4) + esi;
    _fa = (uint32_t)(MEM32(eax + 0xC4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E07A9(); return; } /* jb: below (unsigned <) */

loc_001E07A1: ;
    MEM32(eax + 0xC8) = ecx;
    g_seh_ebp = ebp; sub_001E07B1(); return; /* tail jmp 0x001E07B1 */

}

/**
 * sub_001E07A9
 * Original: 0x001E07A9 - 0x001E07B1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E07A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E07A9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC8) = edx;

    g_seh_ebp = ebp; sub_001E07B1(); return; /* fallthrough 0x001E07B1 */

}

/**
 * sub_001E07B1
 * Original: 0x001E07B1 - 0x001E07B6 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E07B1(void)
{

loc_001E07B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E07B6
 * Original: 0x001E07B6 - 0x001E081E (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E07B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E07B6: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1D8);
    PUSH32(esp, esi);
    esi = eax + 0xE4;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E081E(); return; } /* je: equal / zero */

loc_001E07D7: ;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xD4) = MEM32(eax + 0xD4) + edx;
    _fa = (uint32_t)(MEM32(eax + 0xD4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001E07F5; /* jg: greater (signed >) */

loc_001E07EF: ;
    MEM32(eax + 0xD4) = edi;

loc_001E07F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E07FB; /* jge: greater or equal (signed >=) */

loc_001E07F9: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_001E07FB: ;
    esi = MEM32(eax + 0xD8);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0xD8) = edx;
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E0846(); return; } /* jg: greater (signed >) */

loc_001E0816: ;
    MEM32(eax + 0xD8) = edi;
    g_seh_ebp = ebp; sub_001E0846(); return; /* tail jmp 0x001E0846 */

}

/**
 * sub_001E081E
 * Original: 0x001E081E - 0x001E0833 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E081E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E081E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0833(); return; } /* jne: not equal / not zero */

loc_001E0822: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xD8) = edi;
    MEM32(eax + 0xD4) = edi;
    g_seh_ebp = ebp; sub_001E0846(); return; /* tail jmp 0x001E0846 */

}

/**
 * sub_001E0833
 * Original: 0x001E0833 - 0x001E0846 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0833(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0833: ;
    esi = edx;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xD4) = esi;
    MEM32(eax + 0xD8) = edx;

    g_seh_ebp = ebp; sub_001E0846(); return; /* fallthrough 0x001E0846 */

}

/**
 * sub_001E0846
 * Original: 0x001E0846 - 0x001E0871 (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0846(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0846: ;
    edx = MEM32(eax + 0xD4);
    esi = MEM32(eax + 0xD8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 0xDC;
    MEM32(esi) = edx;
    eax = ZX8(MEM8(ecx + 0x39));
    eax = eax + eax * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E086C; /* jae: above or equal (unsigned >=) */

loc_001E086A: ;
    MEM32(esi) = eax;

loc_001E086C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0871
 * Original: 0x001E0871 - 0x001E08AF (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0871(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E0871: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x24)) >> 32) & 1);
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E088A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E0893; /* je: equal / zero */

loc_001E0890: ;
    ecx = MEM32(eax + 4);

loc_001E0893: ;
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001E08AB; /* je: equal / zero */

loc_001E089F: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E088A; /* jne: not equal / not zero */

loc_001E08A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E08AF(); return; } /* jne: not equal / not zero */

loc_001E08AB: ;
    ecx = MEM32(ebx);
    g_seh_ebp = ebp; sub_001E08B1(); return; /* tail jmp 0x001E08B1 */

}

/**
 * sub_001E08AF
 * Original: 0x001E08AF - 0x001E08B1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E08AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E08AF: ;
    ecx = MEM32(eax);

    g_seh_ebp = ebp; sub_001E08B1(); return; /* fallthrough 0x001E08B1 */

}

/**
 * sub_001E08B1
 * Original: 0x001E08B1 - 0x001E0923 (114 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E08B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E08B1: ;
    edi = MEM32(ebp + 0x10);
    esi = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esi + 0xC)));
    edx = edx - MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001E08D5; /* jle: less or equal (signed <=) */

loc_001E08CD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edi + 8)) < (uint32_t)(edx));
    MEM32(edi + 8) = MEM32(edi + 8) - edx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0xC) = ecx;

loc_001E08D5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E08DFu); RECOMP_ABI_CALL(0x001E043Bu, sub_001E043B); /* call 0x001E043B */

loc_001E08DF: ;
    edx = MEM32(edi + 8);
    MEM32(ebp + 0xC) = edx;

loc_001E08E5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E0907; /* jne: not equal / not zero */

loc_001E08F2: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    esi = MEM32(esi);
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    if ((_fa != 0)) goto loc_001E08E5; /* jne: not equal / not zero */

loc_001E0907: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_001E091C; /* jbe: below or equal (unsigned <=) */

loc_001E090F: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 0x88)) + (uint64_t)(0x20000)) >> 32) & 1);
    MEM32(eax + 0x88) = MEM32(eax + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E091C: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E0923
 * Original: 0x001E0923 - 0x001E096B (72 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0923(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E0923: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x24;
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E09AE(); return; } /* je: equal / zero */

loc_001E0942: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edx + 0xC)));
    eax = eax - MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_001E09AE(); return; } /* jns: not sign (positive) */

loc_001E094A: ;
    edx = MEM32(edx + 4);
    eax = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    if ((_fa == 0)) goto loc_001E0967; /* je: equal / zero */

loc_001E095B: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edx + 0xC)));
    eax = eax - MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001E094A; /* js: sign (negative) */

loc_001E0963: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E096B(); return; } /* jne: not equal / not zero */

loc_001E0967: ;
    edi = MEM32(esi);
    g_seh_ebp = ebp; sub_001E096D(); return; /* tail jmp 0x001E096D */

}

/**
 * sub_001E096B
 * Original: 0x001E096B - 0x001E096D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E096B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E096B: ;
    edi = MEM32(edx);

    g_seh_ebp = ebp; sub_001E096D(); return; /* fallthrough 0x001E096D */

}

/**
 * sub_001E096D
 * Original: 0x001E096D - 0x001E099B (46 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E096D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E096D: ;
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(eax + 8);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(eax + 0xC)));
    ebx = ebx - MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E09A5(); return; } /* jle: less or equal (signed <=) */

loc_001E0989: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E099B(); return; } /* jb: below (unsigned <) */

loc_001E0990: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E0999u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001E0999: ;
    g_seh_ebp = ebp; sub_001E09BE(); return; /* tail jmp 0x001E09BE */

}

/**
 * sub_001E099B
 * Original: 0x001E099B - 0x001E09A5 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E099B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E099B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = esi;

    g_seh_ebp = ebp; sub_001E09A5(); return; /* fallthrough 0x001E09A5 */

}

/**
 * sub_001E09A5
 * Original: 0x001E09A5 - 0x001E09AE (9 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E09A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E09A5: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E09ACu); RECOMP_ABI_CALL(0x001E043Bu, sub_001E043B); /* call 0x001E043B */

loc_001E09AC: ;
    g_seh_ebp = ebp; sub_001E09BE(); return; /* tail jmp 0x001E09BE */

}

/**
 * sub_001E09AE
 * Original: 0x001E09AE - 0x001E09BE (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E09AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E09AE: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;

    g_seh_ebp = ebp; sub_001E09BE(); return; /* fallthrough 0x001E09BE */

}

/**
 * sub_001E09BE
 * Original: 0x001E09BE - 0x001E09C5 (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E09BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E09BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E09C5
 * Original: 0x001E09C5 - 0x001E0A2D (104 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E09C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E09C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001E09DE; /* jae: above or equal (unsigned >=) */

loc_001E09DB: ;
    ebx = MEM32(ebp + 0x14);

loc_001E09DE: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    ecx = ebx;
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
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 8) = MEM32(ecx + 8) + ebx;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ebx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - ebx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_001E0A0C; /* je: equal / zero */

loc_001E0A06: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x28 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E0A1A; /* je: equal / zero */

loc_001E0A0C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0A1Au); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E0A1A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0A26u); RECOMP_ABI_CALL(0x001E0777u, sub_001E0777); /* call 0x001E0777 */

loc_001E0A26: ;
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E0A2D
 * Original: 0x001E0A2D - 0x001E0A79 (76 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0A2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E0A2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ZX8(MEM8(edi + 0x7D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001E0A74; /* jbe: below or equal (unsigned <=) */

loc_001E0A41: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0x64;

loc_001E0A46: ;
    eax = MEM32(edi + 0x68);
    esi = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFF9Cu)) >> 32) & 1);
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0A5Eu); RECOMP_ABI_CALL(0x001E0417u, sub_001E0417); /* call 0x001E0417 */

loc_001E0A5E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0A69u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E0A69: ;
    eax = ZX8(MEM8(edi + 0x7D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E0A46; /* ja: above (unsigned >) */

loc_001E0A72: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E0A74: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0A79
 * Original: 0x001E0A79 - 0x001E0ADC (99 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0A79(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0A79: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001E0A8E; /* jbe: below or equal (unsigned <=) */

loc_001E0A87: ;
    eax = 0x80072748u;
    goto loc_001E0AD7;

loc_001E0A8E: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E0A95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E0A8Fu); } /* indirect call */
    }

loc_001E0A95: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E0AA2; /* jge: greater or equal (signed >=) */

loc_001E0A9E: ;
    esi = eax;
    goto loc_001E0ACC;

loc_001E0AA2: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM8(esi + 0x7C) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_001E0AB4; /* jge: greater or equal (signed >=) */

loc_001E0AAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E0ABE;

loc_001E0AB4: ;
    ecx = ZX8(MEM8(edi + 0x31));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001E0ABE; /* jle: less or equal (signed <=) */

loc_001E0ABC: ;
    eax = ecx;

loc_001E0ABE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x7E) = LO8(eax);
    PUSH32(esp, 0x001E0ACAu); RECOMP_ABI_CALL(0x001E0A2Du, sub_001E0A2D); /* call 0x001E0A2D */

loc_001E0ACA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E0ACC: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E0AD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E0ACEu); } /* indirect call */
    }

loc_001E0AD4: ;
    eax = esi;
    POP32(esp, ebx);

loc_001E0AD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0ADC
 * Original: 0x001E0ADC - 0x001E0AF3 (23 bytes, 10 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0ADC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0ADC: ;
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
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    MEM8(ebp + -1) = 0;
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001E0AF3(); return; /* fallthrough 0x001E0AF3 */

}

/**
 * sub_001E0AF3
 * Original: 0x001E0AF3 - 0x001E0B62 (111 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0AF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0AF3: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    edx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001E0B15; /* jb: below (unsigned <) */

loc_001E0B12: ;
    MEM32(ebp + 0xC) = edx;

loc_001E0B15: ;
    esi = ZX16(MEM16(eax + 0x10));
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebx + 0x10);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
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
    edi = MEM32(ebp + 8);
    esi = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edi + 0x2C)) < (uint32_t)(esi));
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) - esi;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x10)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + esi;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x14)) < (uint32_t)(esi));
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - esi;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(eax + 0x12));
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -1) = MEM8(ebp + -1) | LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0B62(); return; } /* jne: not equal / not zero */

loc_001E0B4D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E0B60u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001E0B60: ;
    g_seh_ebp = ebp; sub_001E0B6B(); return; /* tail jmp 0x001E0B6B */

}

/**
 * sub_001E0B62
 * Original: 0x001E0B62 - 0x001E0B6B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0B62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0B62: ;
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x10) = MEM16(eax + 0x10) + LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 8) = ecx;

    g_seh_ebp = ebp; sub_001E0B6B(); return; /* fallthrough 0x001E0B6B */

}

/**
 * sub_001E0B6B
 * Original: 0x001E0B6B - 0x001E0B8F (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0B6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0B6B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0B7B; /* je: equal / zero */

loc_001E0B71: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0AF3(); return; } /* jne: not equal / not zero */

loc_001E0B7B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -1), 0x28 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001E0B87; /* je: equal / zero */

loc_001E0B83: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E0B87: ;
    eax = MEM32(ebp + -8);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0B8F
 * Original: 0x001E0B8F - 0x001E0BB7 (40 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0B8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0B8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0BB7(); return; } /* je: equal / zero */

loc_001E0B9B: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0BB7(); return; } /* jne: not equal / not zero */

loc_001E0BA1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0BACu); RECOMP_ABI_CALL(0x001D8255u, sub_001D8255); /* call 0x001D8255 */

loc_001E0BAC: ;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001E0BCC(); return; /* tail jmp 0x001E0BCC */

}

/**
 * sub_001E0BB7
 * Original: 0x001E0BB7 - 0x001E0BCC (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0BB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0BB7: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 2;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0BCC(); return; } /* je: equal / zero */

loc_001E0BC2: ;
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0BCC(); return; } /* je: equal / zero */

loc_001E0BC8: ;
    MEM8(ebp + 0x1B) = MEM8(ebp + 0x1B) | 0x10;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E0BCC(); return; /* fallthrough 0x001E0BCC */

}

/**
 * sub_001E0BCC
 * Original: 0x001E0BCC - 0x001E0C00 (52 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0BCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0BCC: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x6D54454E);
    PUSH32(esp, 0x001E0BE6u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001E0BE6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0BF9; /* je: equal / zero */

loc_001E0BEC: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x001E0BF9u); RECOMP_ABI_CALL(0x001D81AAu, sub_001D81AA); /* call 0x001D81AA */

loc_001E0BF9: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001E0C00
 * Original: 0x001E0C00 - 0x001E0C12 (18 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0C00: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E0C0F; /* jne: not equal / not zero */

loc_001E0C09: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E0C0Fu); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

loc_001E0C0F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0C12
 * Original: 0x001E0C12 - 0x001E0CDC (202 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0C12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E0C12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_001E0CBB; /* jg: greater (signed >) */

loc_001E0C2E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0C51; /* je: equal / zero */

loc_001E0C3B: ;
    eax = MEM32(edi + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E0C51; /* jb: below (unsigned <) */

loc_001E0C44: ;
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0C4Du); RECOMP_ABI_CALL(0x001D31DEu, sub_001D31DE); /* call 0x001D31DE */

loc_001E0C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0CBB; /* je: equal / zero */

loc_001E0C51: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0C58u); RECOMP_ABI_CALL(0x001D85CDu, sub_001D85CD); /* call 0x001D85CD */

loc_001E0C58: ;
    ebx = eax;
    SET_LO8(eax, MEM8(edi + 0x33));
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(3)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (2) _cf = (int)(((LO8(eax)) >> (8 - (2))) & 1);
    SET_LO8(eax, LO8(eax) << 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 8) = LO8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0C7Cu); RECOMP_ABI_CALL(0x001D81AAu, sub_001D81AA); /* call 0x001D81AA */

loc_001E0C7C: ;
    eax = MEM32(edi + 0x28);
    eax = BSWAP32(eax); /* bswap */
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0xC4);
    eax = BSWAP32(eax); /* bswap */
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x32));
    MEM8(ebx + 9) = LO8(eax);
    SET_LO16(eax, MEM16(esi + 0xC8));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    MEM16(ebx + 0xA) = LO16(ecx);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0CB8u); RECOMP_ABI_CALL(0x001D5C58u, sub_001D5C58); /* call 0x001D5C58 */

loc_001E0CB8: ;
    ebx = MEM32(ebp + -4);

loc_001E0CBB: ;
    eax = esi + 0x34;
    ecx = MEM32(eax);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0D2C(); return; } /* jne: not equal / not zero */

loc_001E0CD1: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0CDC(); return; } /* je: equal / zero */

loc_001E0CD7: ;
    SET_LO8(eax, MEM8(ebx + 0x3B));
    g_seh_ebp = ebp; sub_001E0CDF(); return; /* tail jmp 0x001E0CDF */

}

/**
 * sub_001E0CDC
 * Original: 0x001E0CDC - 0x001E0CDF (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0CDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0CDC: ;
    SET_LO8(eax, MEM8(ebx + 0x39));

    g_seh_ebp = ebp; sub_001E0CDF(); return; /* fallthrough 0x001E0CDF */

}

/**
 * sub_001E0CDF
 * Original: 0x001E0CDF - 0x001E0D2C (77 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0CDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0CDF: ;
    SET_LO8(ecx, MEM8(edi + 0x30));
    eax = ZX8(LO8(eax));
    edx = eax + eax * 4;
    eax = MEM32(esi + 0xDC);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x90) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001E0D00; /* jae: above or equal (unsigned >=) */

loc_001E0CFA: ;
    MEM32(esi + 0x90) = edx;

loc_001E0D00: ;
    eax = ZX8(MEM8(ebx + 0x3A));
    eax = eax + eax * 4;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E0D15; /* jbe: below or equal (unsigned <=) */

loc_001E0D0F: ;
    MEM32(esi + 0x90) = eax;

loc_001E0D15: ;
    PUSH32(esp, MEM32(esi + 0x90));
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E0D26u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E0D26: ;
    MEM32(esi + 0x90) = eax;

    g_seh_ebp = ebp; sub_001E0D2C(); return; /* fallthrough 0x001E0D2C */

}

/**
 * sub_001E0D2C
 * Original: 0x001E0D2C - 0x001E0D37 (11 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0D2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0D2C: ;
    MEM16(edi + 0x30) = MEM16(edi + 0x30) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E0D37
 * Original: 0x001E0D37 - 0x001E0DA1 (106 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0D37(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0D37: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x7D) = MEM8(esi + 0x7D) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x7D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(edi + 0x60) = esi;
    eax = esi + 0x64;
    edx = MEM32(eax + 4);
    ecx = edi + 0x64;
    MEM32(ecx) = eax;
    MEM32(edi + 0x68) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0x3E0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFC1FFDFu);
    ecx = edi;
    PUSH32(esp, 0x001E0D70u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0D70: ;
    SET_LO16(eax, MEM16(esi + 0x4A));
    MEM16(edi + 0x4A) = LO16(eax);
    eax = MEM32(esi + 0x50);
    MEM32(edi + 0x50) = eax;
    eax = MEM32(esi + 0x54);
    MEM32(edi + 0x54) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(edi + 0x58) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(edi + 0x5C) = eax;
    eax = MEM32(esi + 0x80);
    MEM32(edi + 0x80) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0DA1
 * Original: 0x001E0DA1 - 0x001E0DD0 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0DA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E0DA1: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x64)) >> 32) & 1);
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFF9Cu)) >> 32) & 1);
    edx = edx + 0xFFFFFF9Cu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001E0DCF; /* je: equal / zero */

loc_001E0DB5: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001E0DCF; /* jne: not equal / not zero */

loc_001E0DBB: ;
    eax = MEM32(eax + 0x64);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFF9Cu)) >> 32) & 1);
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    if ((_fa != 0)) goto loc_001E0DB5; /* jne: not equal / not zero */

loc_001E0DCF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E0DD0
 * Original: 0x001E0DD0 - 0x001E0DEC (28 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001E0DD9u); RECOMP_ABI_CALL(0x001E0DA1u, sub_001E0DA1); /* call 0x001E0DA1 */

loc_001E0DD9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0DE7; /* je: equal / zero */

loc_001E0DDF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001E0DE7u); RECOMP_ABI_CALL(0x001E0417u, sub_001E0417); /* call 0x001E0417 */

loc_001E0DE7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E0E06
 * Original: 0x001E0E06 - 0x001E0E6C (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0E06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0E06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0F4E(); return; } /* jne: not equal / not zero */

loc_001E0E1A: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0F4E(); return; } /* jne: not equal / not zero */

loc_001E0E24: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = ebx + 0xD40;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80072746u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80072746u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E0E54; /* jne: not equal / not zero */

loc_001E0E4B: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 4 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E0E54; /* jae: above or equal (unsigned >=) */

loc_001E0E51: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E0E54: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 4 (8-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0E6C(); return; } /* jae: above or equal (unsigned >=) */

loc_001E0E5D: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x18 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0E6C(); return; } /* jne: not equal / not zero */

loc_001E0E63: ;
    MEM32(ebp + 8) = 1;
    g_seh_ebp = ebp; sub_001E0E70(); return; /* tail jmp 0x001E0E70 */

}

/**
 * sub_001E0E6C
 * Original: 0x001E0E6C - 0x001E0E70 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0E6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0E6C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001E0E70(); return; /* fallthrough 0x001E0E70 */

}

/**
 * sub_001E0E70
 * Original: 0x001E0E70 - 0x001E0F4E (222 bytes, 62 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0E70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001E0E7Cu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0E7C: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x7C) = 0;
    edi = esi + 0x88;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001E0E9Au); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001E0E9A: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x36)));
    MEM16(esi + 0x82) = LO16(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x200;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM16(esi + 0x80) = LO16(ecx);
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0xD4) = ecx;
    eax = 0xFFFF;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    eax = ZX8(MEM8(ebx + 0x38));
    eax = eax + eax * 4;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;
    eax = esi + 0x64;
    MEM32(esi + 0x68) = eax;
    MEM32(eax) = eax;
    MEM32(edi + 8) = MEM32(edi + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(edi) = ecx;
    PUSH32(esp, 0xFFFFF9FFu);
    ecx = esi;
    MEM32(edi + 0xC) = 0x1E167A;
    PUSH32(esp, 0x001E0F12u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0F12: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC), 0x1F800 (32-bit) */
    MEM8(esi + 0x7F) = 0;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001E0F2E; /* je: equal / zero */

loc_001E0F20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001E0F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E0F28u); } /* indirect call */
    }

loc_001E0F2E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E0F36u); RECOMP_ABI_CALL(0x001D0B05u, sub_001D0B05); /* call 0x001D0B05 */

loc_001E0F36: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0F4A; /* je: equal / zero */

loc_001E0F3C: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001E0F4Au); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0F4A: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001E0F5A(); return; /* tail jmp 0x001E0F5A */

}

/**
 * sub_001E0F4E
 * Original: 0x001E0F4E - 0x001E0F60 (18 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0F4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0F4E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E0F58u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E0F58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0F5A
 * Original: 0x001E0F5A - 0x001E0F60 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0F5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0F5A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E0F60
 * Original: 0x001E0F60 - 0x001E0F71 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x7D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x7E)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x7E) (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E0F71(); return; } /* jb: below (unsigned <) */

loc_001E0F6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E0FA0(); return; /* tail jmp 0x001E0FA0 */

}

/**
 * sub_001E0F71
 * Original: 0x001E0F71 - 0x001E0FA4 (51 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0F71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0F71: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001E0F7Bu); RECOMP_ABI_CALL(0x001D1D82u, sub_001D1D82); /* call 0x001D1D82 */

loc_001E0F7B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E0F9F; /* je: equal / zero */

loc_001E0F81: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001E0F89u); RECOMP_ABI_CALL(0x001E0D37u, sub_001E0D37); /* call 0x001E0D37 */

loc_001E0F89: ;
    eax = 0x2000000;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E0F9D; /* je: equal / zero */

loc_001E0F93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x001E0F9Du); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E0F9D: ;
    eax = edi;

loc_001E0F9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0FA0
 * Original: 0x001E0FA0 - 0x001E0FA4 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0FA0(void)
{

loc_001E0FA0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E0FA4
 * Original: 0x001E0FA4 - 0x001E1009 (101 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E0FA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E0FA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40000);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0FC7u); RECOMP_ABI_CALL(0x001E0B8Fu, sub_001E0B8F); /* call 0x001E0B8F */

loc_001E0FC7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1002; /* je: equal / zero */

loc_001E0FCD: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E0FD4u); RECOMP_ABI_CALL(0x001D85CDu, sub_001D85CD); /* call 0x001D85CD */

loc_001E0FD4: ;
    ecx = MEM32(ebp + 0x18);
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x1C);
    ecx = BSWAP32(ecx); /* bswap */
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x20));
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) | 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 9) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM8(eax + 8) = 0x50;
    MEM16(eax + 0xA) = LO16(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1002u); RECOMP_ABI_CALL(0x001D5C58u, sub_001D5C58); /* call 0x001D5C58 */

loc_001E1002: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001E1009
 * Original: 0x001E1009 - 0x001E103E (53 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1009(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E1009: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esi + 0xC4));
    edi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E101Fu); RECOMP_ABI_CALL(0x001E0748u, sub_001E0748); /* call 0x001E0748 */

loc_001E101F: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1039u); RECOMP_ABI_CALL(0x001E0FA4u, sub_001E0FA4); /* call 0x001E0FA4 */

loc_001E1039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E103E
 * Original: 0x001E103E - 0x001E10C5 (135 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E103E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E103E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x48));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40000);
    ebp = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1069u); RECOMP_ABI_CALL(0x001E0B8Fu, sub_001E0B8F); /* call 0x001E0B8F */

loc_001E1069: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E10BE; /* je: equal / zero */

loc_001E106F: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001E1077u); RECOMP_ABI_CALL(0x001E0748u, sub_001E0748); /* call 0x001E0748 */

loc_001E1077: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x001E1087u); RECOMP_ABI_CALL(0x001D85CDu, sub_001D85CD); /* call 0x001D85CD */

loc_001E1087: ;
    edi = BSWAP32(edi); /* bswap */
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0xC4);
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 9) = 0x10;
    MEM8(eax + 8) = 0x50;
    SET_LO16(ecx, MEM16(esi + 0xC8));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = ebp;
    MEM16(eax + 0xA) = LO16(edx);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E10BEu); RECOMP_ABI_CALL(0x001D5C58u, sub_001D5C58); /* call 0x001D5C58 */

loc_001E10BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E10C5
 * Original: 0x001E10C5 - 0x001E1112 (77 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E10C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E10C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi + 0x34;
    ebx = ecx;
    ecx = MEM32(eax);
    esi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xB0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E111D(); return; } /* ja: above (unsigned >) */

loc_001E10EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = edi;
    PUSH32(esp, 0x001E10F9u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E10F9: ;
    _fa = (uint32_t)(MEM16(esi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x30), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1112(); return; } /* je: equal / zero */

loc_001E1100: ;
    _cf = 0; /* logical op clears CF */
    MEM16(esi + 0x30) = MEM16(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x30)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001E1110u); RECOMP_ABI_CALL(0x001E0C12u, sub_001E0C12); /* call 0x001E0C12 */

loc_001E1110: ;
    g_seh_ebp = ebp; sub_001E1119(); return; /* tail jmp 0x001E1119 */

}

/**
 * sub_001E1112
 * Original: 0x001E1112 - 0x001E1119 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1112(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1112: ;
    MEM32(edi + 0x90) = MEM32(edi + 0x90) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001E1119(); return; /* fallthrough 0x001E1119 */

}

/**
 * sub_001E1119
 * Original: 0x001E1119 - 0x001E111D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1119: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E1120(); return; /* tail jmp 0x001E1120 */

}

/**
 * sub_001E111D
 * Original: 0x001E111D - 0x001E1120 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E111D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E111D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001E1120(); return; /* fallthrough 0x001E1120 */

}

/**
 * sub_001E1120
 * Original: 0x001E1120 - 0x001E1126 (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1120(void)
{

loc_001E1120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E1126
 * Original: 0x001E1126 - 0x001E1194 (110 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1126(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E1126: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x9C)));
    eax = eax - MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, edi);
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = esi + 0xB8;
    MEM32(edx) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001E1154; /* jae: above or equal (unsigned >=) */

loc_001E1152: ;
    MEM32(edx) = edi;

loc_001E1154: ;
    eax = ecx + ecx * 2;
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edx))) >> 32) & 1);
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM32(esi + 0xB4) = eax;
    PUSH32(esp, 0x001E116Du); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E116D: ;
    eax = esi + 0x34;
    ecx = MEM32(eax);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(esi + 0x7F) = 0;
    PUSH32(esp, 0x001E118Eu); RECOMP_ABI_CALL(0x001E0C12u, sub_001E0C12); /* call 0x001E0C12 */

loc_001E118E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E1194
 * Original: 0x001E1194 - 0x001E11FE (106 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1194: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = esi + 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1258(); return; } /* jne: not equal / not zero */

loc_001E11AE: ;
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x88) = MEM32(esi + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x80 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x22BC5C);
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001E11D2; /* je: equal / zero */

loc_001E11C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001E11D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E11D0u); } /* indirect call */
    }

loc_001E11D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E11DFu); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E11DF: ;
    eax = ZX8(MEM8(esi + 0x7C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1257(); return; } /* jb: below (unsigned <) */

loc_001E11E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1243(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E11ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E11FE(); return; } /* je: equal / zero */

loc_001E11F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E120B(); return; } /* je: equal / zero */

loc_001E11F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1257(); return; } /* jne: not equal / not zero */

loc_001E11FC: ;
    g_seh_ebp = ebp; sub_001E120F(); return; /* tail jmp 0x001E120F */

}

/**
 * sub_001E11FE
 * Original: 0x001E11FE - 0x001E120B (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E11FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E11FE: ;
    eax = esi + 0x34;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E120B(); return; } /* jne: not equal / not zero */

loc_001E1205: ;
    MEM8(esi + 0x7C) = 7;
    g_seh_ebp = ebp; sub_001E1257(); return; /* tail jmp 0x001E1257 */

}

/**
 * sub_001E120B
 * Original: 0x001E120B - 0x001E120F (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E120B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E120B: ;
    MEM8(esi + 0x7C) = 8;

    g_seh_ebp = ebp; sub_001E120F(); return; /* fallthrough 0x001E120F */

}

/**
 * sub_001E120F
 * Original: 0x001E120F - 0x001E1243 (52 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E120F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E120F: ;
    eax = ZX8(MEM8(edi + 0x34));
    edx = MEM32(esi + 0x94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x1D8);
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_001E122D; /* je: equal / zero */

loc_001E1229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1257(); return; } /* jae: above or equal (unsigned >=) */

loc_001E122D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001E123Bu); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E123B: ;
    MEM32(esi + 0x94) = eax;
    g_seh_ebp = ebp; sub_001E1257(); return; /* tail jmp 0x001E1257 */

}

/**
 * sub_001E1243
 * Original: 0x001E1243 - 0x001E1258 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1243: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E1253; /* je: equal / zero */

loc_001E1249: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001E1253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1251u); } /* indirect call */
    }

loc_001E1253: ;
    MEM8(esi + 0x7C) = 9;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E1258(); return; /* fallthrough 0x001E1258 */

}

/**
 * sub_001E1257
 * Original: 0x001E1257 - 0x001E1258 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1257(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1257: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E1258(); return; /* fallthrough 0x001E1258 */

}

/**
 * sub_001E1258
 * Original: 0x001E1258 - 0x001E125D (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1258(void)
{

loc_001E1258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E125D
 * Original: 0x001E125D - 0x001E136A (269 bytes, 97 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E125D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E125D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x34;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx + 4);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = BSWAP32(eax); /* bswap */
    MEM32(esi + 0x9C) = eax;
    SET_LO16(ecx, MEM16(edx + 0xA));
    SET_HI8(ebx, LO8(ecx));
    SET_LO8(ebx, HI8(ecx));
    ecx = ZX16(LO16(ebx));
    MEM32(esi + 0xB0) = ecx;
    ecx = MEM32(edx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E12BE; /* je: equal / zero */

loc_001E12B5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E12BEu); RECOMP_ABI_CALL(0x001E07B6u, sub_001E07B6); /* call 0x001E07B6 */

loc_001E12BE: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    MEM32(edx) = eax;
    PUSH32(esp, edi);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E12D2u); RECOMP_ABI_CALL(0x001CFEBAu, sub_001CFEBA); /* call 0x001CFEBA */

loc_001E12D2: ;
    ecx = MEM32(esi + 0xCC);
    eax = esi + 0xBC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001E12F0; /* jbe: below or equal (unsigned <=) */

loc_001E12EE: ;
    MEM32(eax) = ecx;

loc_001E12F0: ;
    eax = MEM32(eax);
    edx = MEM32(esi + 0xB0);
    ecx = eax + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xB4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001E1307; /* jbe: below or equal (unsigned <=) */

loc_001E1305: ;
    ecx = edx;

loc_001E1307: ;
    MEM32(esi + 0xB8) = ecx;
    ecx = MEM32(esi + 0x58);
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001E1318; /* jae: above or equal (unsigned >=) */

loc_001E1316: ;
    eax = ecx;

loc_001E1318: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + 0xD0;
    MEM32(ecx) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001E1329; /* jae: above or equal (unsigned >=) */

loc_001E1327: ;
    MEM32(ecx) = ebx;

loc_001E1329: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM8(esi + 0x7C) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1338u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1338: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(0x22BC5C);
    if (TEST_Z(_fa, _fb)) goto loc_001E134D; /* je: equal / zero */

loc_001E1344: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001E134Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E134Bu); } /* indirect call */
    }

loc_001E134D: ;
    esi = MEM32(esi + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1363; /* je: equal / zero */

loc_001E1354: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001E1363; /* je: equal / zero */

loc_001E135A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001E1363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1361u); } /* indirect call */
    }

loc_001E1363: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E136A
 * Original: 0x001E136A - 0x001E13E7 (125 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E136A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E136A: ;
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
    MEM32(ebp + -4) = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E137Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1375u); } /* indirect call */
    }

loc_001E137B: ;
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(esi + 0x48));
    edx = MEM32(esi + 0x44);
    MEM8(ebp + -8) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E139F; /* je: equal / zero */

loc_001E1392: ;
    edi = MEM32(eax + 0x18);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0x18);
    MEM16(edx + 2) = LO16(ecx);

loc_001E139F: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx) = ebx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E13E7(); return; } /* je: equal / zero */

loc_001E13A9: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E13B6u); RECOMP_ABI_CALL(0x001E0ADCu, sub_001E0ADC); /* call 0x001E0ADC */

loc_001E13B6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    edi = esi + 0xC8;
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E13CEu); RECOMP_ABI_CALL(0x001E0777u, sub_001E0777); /* call 0x001E0777 */

loc_001E13CE: ;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1409(); return; } /* jae: above or equal (unsigned >=) */

loc_001E13D8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1409(); return; } /* jb: below (unsigned <) */

loc_001E13DC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E13E5u); RECOMP_ABI_CALL(0x001E103Eu, sub_001E103E); /* call 0x001E103E */

loc_001E13E5: ;
    g_seh_ebp = ebp; sub_001E1409(); return; /* tail jmp 0x001E1409 */

}

/**
 * sub_001E13E7
 * Original: 0x001E13E7 - 0x001E13F2 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E13E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E13E7: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E13F2(); return; } /* jb: below (unsigned <) */

loc_001E13ED: ;
    MEM32(ebp + 8) = ebx;
    g_seh_ebp = ebp; sub_001E1409(); return; /* tail jmp 0x001E1409 */

}

/**
 * sub_001E13F2
 * Original: 0x001E13F2 - 0x001E1409 (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E13F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E13F2: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E1409(); return; } /* jl: less (signed <) */

loc_001E13FC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1406u); RECOMP_ABI_CALL(0x001D06C1u, sub_001D06C1); /* call 0x001D06C1 */

loc_001E1406: ;
    MEM32(ebp + 8) = eax;

    g_seh_ebp = ebp; sub_001E1409(); return; /* fallthrough 0x001E1409 */

}

/**
 * sub_001E1409
 * Original: 0x001E1409 - 0x001E141C (19 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1409: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E1412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E140Cu); } /* indirect call */
    }

loc_001E1412: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E141C
 * Original: 0x001E141C - 0x001E14D0 (180 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E141C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E141C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x84);
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E1463; /* je: equal / zero */

loc_001E1432: ;
    eax = MEM32(esi + 0xB0);
    _fb = (uint32_t)(MEM32(esi + 0xAC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0xAC))) >> 32) & 1);
    eax = eax + MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0xB4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001E1456; /* jle: less or equal (signed <=) */

loc_001E1454: ;
    eax = ecx;

loc_001E1456: ;
    ecx = MEM32(esi + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E14D0(); return; } /* jg: greater (signed >) */

loc_001E1463: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = esi;
    PUSH32(esp, 0x001E1471u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1471: ;
    eax = esi + 0xE4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E148D; /* jne: not equal / not zero */

loc_001E147C: ;
    ecx = MEM32(ebx + 0x1D8);
    MEM32(eax) = ecx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0xE0) = eax;

loc_001E148D: ;
    eax = MEM32(ebx + 0x1D8);
    MEM32(edi + 0x34) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x30), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E14A9u); RECOMP_ABI_CALL(0x001E0C12u, sub_001E0C12); /* call 0x001E0C12 */

loc_001E14A9: ;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0xA0) = eax;
    edi = MEM32(edi + 0x14);
    eax = esi + 0x34;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edi = edi + 0xFFFFFFECu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x84) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001E150D(); return; /* tail jmp 0x001E150D */

}

/**
 * sub_001E14D0
 * Original: 0x001E14D0 - 0x001E1513 (67 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E14D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E14D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x9C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E150B; /* jne: not equal / not zero */

loc_001E14D8: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001E14E6u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E14E6: ;
    eax = ZX8(MEM8(ebx + 0x3B));
    ecx = MEM32(esi + 0xDC);
    eax = eax + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E14F9; /* jbe: below or equal (unsigned <=) */

loc_001E14F7: ;
    eax = ecx;

loc_001E14F9: ;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E1505u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E1505: ;
    MEM32(esi + 0x90) = eax;

loc_001E150B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E150D
 * Original: 0x001E150D - 0x001E1513 (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E150D(void)
{

loc_001E150D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E1513
 * Original: 0x001E1513 - 0x001E154B (56 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E1513(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E1513: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = esi + 0x34;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E15D9(); return; } /* je: equal / zero */

loc_001E152D: ;
    SET_LO16(eax, ZX8(MEM8(ecx + 0x37)));
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFECu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x30), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E154B(); return; } /* jb: below (unsigned <) */

loc_001E153B: ;
    PUSH32(esp, 0x8007274Cu);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1546u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E1546: ;
    g_seh_ebp = ebp; sub_001E15DB(); return; /* tail jmp 0x001E15DB */

}

/**
 * sub_001E154B
 * Original: 0x001E154B - 0x001E1588 (61 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E154B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E154B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xE4) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1588(); return; } /* je: equal / zero */

loc_001E1559: ;
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x30), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E15C8(); return; } /* jne: not equal / not zero */

loc_001E155F: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1567u); RECOMP_ABI_CALL(0x001E0C12u, sub_001E0C12); /* call 0x001E0C12 */

loc_001E1567: ;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0xA0) = eax;
    edi = MEM32(edi + 0x14);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edi = edi + 0xFFFFFFECu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x84) = eax;
    g_seh_ebp = ebp; sub_001E15D9(); return; /* tail jmp 0x001E15D9 */

}

/**
 * sub_001E1588
 * Original: 0x001E1588 - 0x001E15C8 (64 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1588: ;
    eax = MEM32(esi + 0xA0);
    _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0xBC);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = esi + 0xB8;
    MEM32(edx) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001E15AD; /* jae: above or equal (unsigned >=) */

loc_001E15AB: ;
    MEM32(edx) = ebx;

loc_001E15AD: ;
    PUSH32(esp, 0);
    MEM32(esi + 0xB4) = ecx;
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0x001E15C1u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E15C1: ;
    ecx = MEM32(ebp + -4);
    MEM8(esi + 0x7F) = 0;

    g_seh_ebp = ebp; sub_001E15C8(); return; /* fallthrough 0x001E15C8 */

}

/**
 * sub_001E15C8
 * Original: 0x001E15C8 - 0x001E15E2 (26 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E15C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E15C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x30), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E15D9u); RECOMP_ABI_CALL(0x001E0C12u, sub_001E0C12); /* call 0x001E0C12 */

loc_001E15D9: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E15D9
 * Original: 0x001E15D9 - 0x001E15E2 (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E15D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E15D9: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E15DB
 * Original: 0x001E15DB - 0x001E15E2 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E15DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E15DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E15E2
 * Original: 0x001E15E2 - 0x001E162E (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E15E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E15E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x30) = MEM16(eax + 0x30) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0x14)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0x14);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = 1;
    MEM8(eax + 0x32) = LO8(ebx);
    MEM8(eax + 0x33) = LO8(ecx);
    esi = MEM32(edx + 0xA4);
    PUSH32(esp, edi);
    MEM32(eax + 0x28) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E162E(); return; } /* je: equal / zero */

loc_001E162B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001E1639(); return; /* tail jmp 0x001E1639 */

}

/**
 * sub_001E162E
 * Original: 0x001E162E - 0x001E1639 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E162E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E162E: ;
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(eax + 0x28);
    MEM32(eax + 0x20) = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001E1639(); return; /* fallthrough 0x001E1639 */

}

/**
 * sub_001E1639
 * Original: 0x001E1639 - 0x001E167A (65 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1639(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1639: ;
    MEM32(eax + 0x2C) = esi;
    ecx = esi;
    MEM32(edx + 0xA4) = ecx;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx + 0x3C) = MEM32(edx + 0x3C) + ecx;
    _fa = (uint32_t)(MEM32(edx + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + 0x34;
    ebx = MEM32(esi + 4);
    edi = eax + 0x14;
    MEM32(edi) = esi;
    MEM32(eax + 0x18) = ebx;
    MEM32(ebx) = edi;
    MEM32(esi + 4) = edi;
    esi = edx + 0x84;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1673; /* jne: not equal / not zero */

loc_001E1668: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x001E1673u); RECOMP_ABI_CALL(0x001E141Cu, sub_001E141C); /* call 0x001E141C */

loc_001E1673: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E167A
 * Original: 0x001E167A - 0x001E1757 (221 bytes, 82 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E167A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E167A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xFFFFFF94u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFF94u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1D8);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E16A0; /* je: equal / zero */

loc_001E169A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E16A0u); RECOMP_ABI_CALL(0x001E103Eu, sub_001E103E); /* call 0x001E103E */

loc_001E16A0: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E16CA; /* je: equal / zero */

loc_001E16AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E16CA; /* jb: below (unsigned <) */

loc_001E16AE: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8007274Cu);
    PUSH32(esp, esi);
    MEM32(esi + 0x8C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E16C2u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E16C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1750; /* je: equal / zero */

loc_001E16CA: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E16EB; /* je: equal / zero */

loc_001E16D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E16EB; /* jb: below (unsigned <) */

loc_001E16D8: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    MEM32(esi + 0x90) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E16E7u); RECOMP_ABI_CALL(0x001E1513u, sub_001E1513); /* call 0x001E1513 */

loc_001E16E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1750; /* je: equal / zero */

loc_001E16EB: ;
    eax = esi + 0x94;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E170A; /* je: equal / zero */

loc_001E16F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E170A; /* jb: below (unsigned <) */

loc_001E16FB: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1708u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E1708: ;
    goto loc_001E1750;

loc_001E170A: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1716; /* je: equal / zero */

loc_001E1712: ;
    ecx = edi;
    goto loc_001E1719;

loc_001E1716: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001E1719: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E1729; /* jbe: below or equal (unsigned <=) */

loc_001E1723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E1729; /* jae: above or equal (unsigned >=) */

loc_001E1727: ;
    ecx = eax;

loc_001E1729: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E1739; /* jbe: below or equal (unsigned <=) */

loc_001E1733: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E1739; /* jae: above or equal (unsigned >=) */

loc_001E1737: ;
    ecx = eax;

loc_001E1739: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E1743; /* jbe: below or equal (unsigned <=) */

loc_001E173D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E1743; /* jae: above or equal (unsigned >=) */

loc_001E1741: ;
    ecx = edx;

loc_001E1743: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1750u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001E1750: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E1757
 * Original: 0x001E1757 - 0x001E17DE (135 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1757(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1757: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi + 0x34;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E177E; /* je: equal / zero */

loc_001E1769: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001E177Eu); RECOMP_ABI_CALL(0x001CFEBAu, sub_001CFEBA); /* call 0x001CFEBA */

loc_001E177E: ;
    eax = MEM32(esi + 0x98);
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x9C) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x1E0C00);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0x38);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E17C6u); RECOMP_ABI_CALL(0x001E0B8Fu, sub_001E0B8F); /* call 0x001E0B8F */

loc_001E17C6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E17DE(); return; } /* jne: not equal / not zero */

loc_001E17CC: ;
    ebx = 0x80072747u;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001E17DAu); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E17DA: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_001E1834(); return; /* tail jmp 0x001E1834 */

}

/**
 * sub_001E17DE
 * Original: 0x001E17DE - 0x001E183A (92 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E17DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E17DE: ;
    ecx = ebx;
    PUSH32(esp, 0x001E17E5u); RECOMP_ABI_CALL(0x001D829Du, sub_001D829D); /* call 0x001D829D */

loc_001E17E5: ;
    MEM8(eax) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 4;
    ecx = esi + 0xCC;
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax + 1) = LO8(ecx);
    eax = ZX8(MEM8(edi + 0x35));
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001E1812u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E1812: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    MEM32(esi + 0x8C) = eax;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1832u); RECOMP_ABI_CALL(0x001E15E2u, sub_001E15E2); /* call 0x001E15E2 */

loc_001E1832: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E1834
 * Original: 0x001E1834 - 0x001E183A (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1834(void)
{

loc_001E1834: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E183A
 * Original: 0x001E183A - 0x001E186F (53 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E183A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E183A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1E0C00);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x48));
    PUSH32(esp, 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1864u); RECOMP_ABI_CALL(0x001E0B8Fu, sub_001E0B8F); /* call 0x001E0B8F */

loc_001E1864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E186F(); return; } /* jne: not equal / not zero */

loc_001E1868: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_001E187E(); return; /* tail jmp 0x001E187E */

}

/**
 * sub_001E186F
 * Original: 0x001E186F - 0x001E1883 (20 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E186F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E186F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001E187Cu); RECOMP_ABI_CALL(0x001E15E2u, sub_001E15E2); /* call 0x001E15E2 */

loc_001E187C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E187E
 * Original: 0x001E187E - 0x001E1883 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E187E(void)
{

loc_001E187E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E1883
 * Original: 0x001E1883 - 0x001E18DA (87 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E1883(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E1883: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1898u); RECOMP_ABI_CALL(0x001E03A4u, sub_001E03A4); /* call 0x001E03A4 */

loc_001E1898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E18F2(); return; } /* je: equal / zero */

loc_001E189C: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    eax = BSWAP32(eax); /* bswap */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 0xC0) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0xBC) = eax;
    _fa = (uint32_t)(MEM8(ecx + 9)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 9), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E18DA(); return; } /* je: equal / zero */

loc_001E18C3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E18CCu); RECOMP_ABI_CALL(0x001E125Du, sub_001E125D); /* call 0x001E125D */

loc_001E18CC: ;
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x88) = MEM32(esi + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E18E8(); return; /* tail jmp 0x001E18E8 */

}

/**
 * sub_001E18DA
 * Original: 0x001E18DA - 0x001E18F2 (24 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E18DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E18DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x7C) = 3;
    PUSH32(esp, 0x001E18E8u); RECOMP_ABI_CALL(0x001E1757u, sub_001E1757); /* call 0x001E1757 */

loc_001E18E8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;

    g_seh_ebp = ebp; sub_001E18F2(); return; /* fallthrough 0x001E18F2 */

}

/**
 * sub_001E18E8
 * Original: 0x001E18E8 - 0x001E18F2 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E18E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E18E8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;

    g_seh_ebp = ebp; sub_001E18F2(); return; /* fallthrough 0x001E18F2 */

}

/**
 * sub_001E18F2
 * Original: 0x001E18F2 - 0x001E18F7 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E18F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E18F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E18F7
 * Original: 0x001E18F7 - 0x001E1953 (92 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E18F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E18F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E1908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1902u); } /* indirect call */
    }

loc_001E1908: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1968(); return; } /* je: equal / zero */

loc_001E1914: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1968(); return; } /* jne: not equal / not zero */

loc_001E191A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1925u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1925: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1953(); return; } /* je: equal / zero */

loc_001E192A: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1932u); RECOMP_ABI_CALL(0x001E1009u, sub_001E1009); /* call 0x001E1009 */

loc_001E1932: ;
    edi = MEM32(ebp + 0x10);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = 0x80072746u;
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FF8D8BA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E194Fu); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E194F: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001E1968(); return; /* tail jmp 0x001E1968 */

}

/**
 * sub_001E1953
 * Original: 0x001E1953 - 0x001E1968 (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1953(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1953: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1968(); return; } /* je: equal / zero */

loc_001E195A: ;
    PUSH32(esp, 0x8007274Au);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E1968u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

    g_seh_ebp = ebp; sub_001E1968(); return; /* fallthrough 0x001E1968 */

}

/**
 * sub_001E1968
 * Original: 0x001E1968 - 0x001E19BB (83 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1968(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1968: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E19D4(); return; } /* je: equal / zero */

loc_001E196E: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E19D4(); return; } /* jne: not equal / not zero */

loc_001E1974: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1989; /* je: equal / zero */

loc_001E197B: ;
    PUSH32(esp, 0x8007274Au);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E1989u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E1989: ;
    eax = ZX8(MEM8(esi + 0x7C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E19CF(); return; } /* jb: below (unsigned <) */

loc_001E1992: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E19BB(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E1997: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E19CF(); return; } /* jne: not equal / not zero */

loc_001E199C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E19A4u); RECOMP_ABI_CALL(0x001E183Au, sub_001E183A); /* call 0x001E183A */

loc_001E19A4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E19D4(); return; } /* jl: less (signed <) */

loc_001E19AA: ;
    MEM8(esi + 0x7C) = 0xA;
    PUSH32(esp, 8);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001E19B9u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E19B9: ;
    g_seh_ebp = ebp; sub_001E19D4(); return; /* tail jmp 0x001E19D4 */

}

/**
 * sub_001E19AE
 * Original: 0x001E19AE - 0x001E19BB (13 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E19AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E19AE: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001E19B9u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E19B9: ;
    g_seh_ebp = ebp; sub_001E19D4(); return; /* tail jmp 0x001E19D4 */

}

/**
 * sub_001E19BB
 * Original: 0x001E19BB - 0x001E19CF (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E19BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E19BB: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E19C3u); RECOMP_ABI_CALL(0x001E183Au, sub_001E183A); /* call 0x001E183A */

loc_001E19C3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E19D4(); return; } /* jl: less (signed <) */

loc_001E19C9: ;
    MEM8(esi + 0x7C) = 5;
    g_seh_ebp = ebp; sub_001E19AE(); return; /* tail jmp 0x001E19AE */

}

/**
 * sub_001E19CF
 * Original: 0x001E19CF - 0x001E19D4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E19CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E19CF: ;
    edi = 0x80072749u;

    g_seh_ebp = ebp; sub_001E19D4(); return; /* fallthrough 0x001E19D4 */

}

/**
 * sub_001E19D4
 * Original: 0x001E19D4 - 0x001E19F4 (32 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E19D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E19D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFF7Fu);
    ecx = esi;
    PUSH32(esp, 0x001E19E2u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E19E2: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E19EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E19E5u); } /* indirect call */
    }

loc_001E19EB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E19F4
 * Original: 0x001E19F4 - 0x001E1A49 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E19F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E19F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x58);
    edx = MEM32(ebx + 0xBC);
    _fb = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -40) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001E1A28; /* ja: above (unsigned >) */

loc_001E1A26: ;
    eax = edx;

loc_001E1A28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E1A34; /* jbe: below or equal (unsigned <=) */

loc_001E1A2C: ;
    MEM32(ebp + -16) = edx;
    MEM32(ecx + 0x10) = edx;
    esi = edx;

loc_001E1A34: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    MEM32(ebp + 8) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1B7B(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E1A47: ;
    g_seh_ebp = ebp; sub_001E1A4C(); return; /* tail jmp 0x001E1A4C */

}

/**
 * sub_001E1A49
 * Original: 0x001E1A49 - 0x001E1A4C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1A49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1A49: ;
    edx = MEM32(ebp + -40);

    g_seh_ebp = ebp; sub_001E1A4C(); return; /* fallthrough 0x001E1A4C */

}

/**
 * sub_001E1A4C
 * Original: 0x001E1A4C - 0x001E1ABB (111 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1A4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1A4C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001E1A56; /* jb: below (unsigned <) */

loc_001E1A53: ;
    MEM32(ebp + -8) = esi;

loc_001E1A56: ;
    PUSH32(esp, 0x1E0C00);
    ecx = MEM32(ebp + -28);
    PUSH32(esp, 0x38);
    PUSH32(esp, MEM32(ebp + -8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x48));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1A7Du); RECOMP_ABI_CALL(0x001E0B8Fu, sub_001E0B8F); /* call 0x001E0B8F */

loc_001E1A7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1B59(); return; } /* je: equal / zero */

loc_001E1A88: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0x001E1A95u); RECOMP_ABI_CALL(0x001D829Du, sub_001D829D); /* call 0x001D829D */

loc_001E1A95: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1ABB(); return; } /* ja: above (unsigned >) */

loc_001E1AA0: ;
    esi = MEM32(ebp + -4);
    edi = eax;
    eax = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    g_seh_ebp = ebp; sub_001E1B11(); return; /* tail jmp 0x001E1B11 */

}

/**
 * sub_001E1ABB
 * Original: 0x001E1ABB - 0x001E1AC4 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1ABB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1ABB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1B17(); return; } /* je: equal / zero */

loc_001E1AC2: ;
    g_seh_ebp = ebp; sub_001E1AC7(); return; /* tail jmp 0x001E1AC7 */

}

/**
 * sub_001E1AC4
 * Original: 0x001E1AC4 - 0x001E1AC7 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1AC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1AC4: ;
    edi = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_001E1AC7(); return; /* fallthrough 0x001E1AC7 */

}

/**
 * sub_001E1AC7
 * Original: 0x001E1AC7 - 0x001E1B11 (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1AC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1AC7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1AE2; /* jne: not equal / not zero */

loc_001E1ACD: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E1ACD; /* je: equal / zero */

loc_001E1ADF: ;
    MEM32(ebp + -20) = edi;

loc_001E1AE2: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E1AED; /* jae: above or equal (unsigned >=) */

loc_001E1AEA: ;
    edx = MEM32(ebp + -12);

loc_001E1AED: ;
    esi = MEM32(ebp + -4);
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + edx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - edx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - edx;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E1AC4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E1B11(); return; /* fallthrough 0x001E1B11 */

}

/**
 * sub_001E1B11
 * Original: 0x001E1B11 - 0x001E1B17 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1B11: ;
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_001E1B17(); return; /* fallthrough 0x001E1B17 */

}

/**
 * sub_001E1B17
 * Original: 0x001E1B17 - 0x001E1B59 (66 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1B17: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E1B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1B17u); } /* indirect call */
    }

loc_001E1B1D: ;
    ecx = MEM32(ebp + -28);
    MEM8(ebp + -36) = LO8(eax);
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E1B6A(); return; } /* jl: less (signed <) */

loc_001E1B2D: ;
    PUSH32(esp, MEM32(ebp + -8));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 8 + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1B46u); RECOMP_ABI_CALL(0x001E15E2u, sub_001E15E2); /* call 0x001E15E2 */

loc_001E1B46: ;
    SET_LO8(ecx, MEM8(ebp + -36));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E1B4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1B49u); } /* indirect call */
    }

loc_001E1B4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1A49(); return; } /* ja: above (unsigned >) */

loc_001E1B57: ;
    g_seh_ebp = ebp; sub_001E1B7B(); return; /* tail jmp 0x001E1B7B */

}

/**
 * sub_001E1B59
 * Original: 0x001E1B59 - 0x001E1B6A (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1B59: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - esi;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E1B7B(); return; } /* jne: not equal / not zero */

loc_001E1B61: ;
    MEM32(ebp + -24) = 0x80072747u;
    g_seh_ebp = ebp; sub_001E1B7B(); return; /* tail jmp 0x001E1B7B */

}

/**
 * sub_001E1B6A
 * Original: 0x001E1B6A - 0x001E1B7B (17 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1B6A: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x001E1B72u); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

loc_001E1B72: ;
    SET_LO8(ecx, MEM8(ebp + -36));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E1B7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1B75u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001E1B7B(); return; /* fallthrough 0x001E1B7B */

}

/**
 * sub_001E1B7B
 * Original: 0x001E1B7B - 0x001E1B93 (24 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1B7B: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0x001E1B89u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1B89: ;
    eax = MEM32(ebp + -24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E1B93
 * Original: 0x001E1B93 - 0x001E1C43 (176 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E1B93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E1B93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x9C)));
    eax = eax - MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001E1C2A; /* jle: less or equal (signed <=) */

loc_001E1BB4: ;
    _fa = (uint32_t)(MEM32(esi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x9C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001E1BD5; /* je: equal / zero */

loc_001E1BC3: ;
    eax = edi;
    _fb = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0xE0)));
    eax = eax - MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001E1BD5; /* jle: less or equal (signed <=) */

loc_001E1BCF: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1BD5u); RECOMP_ABI_CALL(0x001E07B6u, sub_001E07B6); /* call 0x001E07B6 */

loc_001E1BD5: ;
    ebx = esi + 0x34;
    ecx = MEM32(ebx);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001E1C2A; /* je: equal / zero */

loc_001E1BE9: ;
    _fa = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x30), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1C2A; /* je: equal / zero */

loc_001E1BF0: ;
    ecx = edi;
    _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax + 0x2C)));
    ecx = ecx - MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001E1C2A; /* js: sign (negative) */

loc_001E1BF7: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edi = MEM32(eax + 0x14);
    MEM32(ecx) = edx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x3C)) < (uint32_t)(ecx));
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - ecx;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E1C15u); RECOMP_ABI_CALL(0x001CFEBAu, sub_001CFEBA); /* call 0x001CFEBA */

loc_001E1C15: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edi = edi + 0xFFFFFFECu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 0xC);
    if ((_fa != 0)) goto loc_001E1BE9; /* jne: not equal / not zero */

loc_001E1C2A: ;
    ebx = MEM32(esi + 0xC);
    if (0xA) _cf = (int)(((ebx) >> ((0xA) - 1)) & 1);
    ebx = ebx >> 0xA;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E1C64(); return; } /* je: equal / zero */

loc_001E1C35: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1C43(); return; } /* je: equal / zero */

loc_001E1C3B: ;
    eax = MEM32(esi + 0xB8);
    g_seh_ebp = ebp; sub_001E1CA6(); return; /* tail jmp 0x001E1CA6 */

}

/**
 * sub_001E1C43
 * Original: 0x001E1C43 - 0x001E1C64 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1C43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1C43: ;
    eax = MEM32(esi + 0xBC);
    ecx = esi + 0xB4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D81(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E1C60: ;
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001E1CAC(); return; /* tail jmp 0x001E1CAC */

}

/**
 * sub_001E1C64
 * Original: 0x001E1C64 - 0x001E1C82 (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1C64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1C64: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xB8) (32-bit) */
    eax = MEM32(esi + 0xBC);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1C82(); return; } /* jae: above or equal (unsigned >=) */

loc_001E1C78: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB4) = ecx;
    g_seh_ebp = ebp; sub_001E1C9D(); return; /* tail jmp 0x001E1C9D */

}

/**
 * sub_001E1C82
 * Original: 0x001E1C82 - 0x001E1C9D (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1C82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1C82: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E1C91; /* jae: above or equal (unsigned >=) */

loc_001E1C8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E1C91: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xB4) = MEM32(esi + 0xB4) + eax;
    _fa = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xB4);

    g_seh_ebp = ebp; sub_001E1C9D(); return; /* fallthrough 0x001E1C9D */

}

/**
 * sub_001E1C9D
 * Original: 0x001E1C9D - 0x001E1CA6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1C9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1C9D: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1CAC(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001E1CA6(); return; /* fallthrough 0x001E1CA6 */

}

/**
 * sub_001E1CA6
 * Original: 0x001E1CA6 - 0x001E1D1F (121 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1CA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1CA6: ;
    MEM32(esi + 0xB4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D81(); return; } /* je: equal / zero */

loc_001E1CB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = esi;
    PUSH32(esp, 0x001E1CC4u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1CC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0x001E1CD2u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1CD2: ;
    eax = MEM32(esi + 0x9C);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x90) = MEM32(esi + 0x90) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA0) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0x7F) = 0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D33(); return; } /* je: equal / zero */

loc_001E1CEB: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0x34);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D1F(); return; } /* ja: above (unsigned >) */

loc_001E1D15: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0x001E1D1Du); RECOMP_ABI_CALL(0x001E1513u, sub_001E1513); /* call 0x001E1513 */

loc_001E1D1D: ;
    g_seh_ebp = ebp; sub_001E1D33(); return; /* tail jmp 0x001E1D33 */

}

/**
 * sub_001E1CAC
 * Original: 0x001E1CAC - 0x001E1D1F (115 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1CAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1CAC: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D81(); return; } /* je: equal / zero */

loc_001E1CB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = esi;
    PUSH32(esp, 0x001E1CC4u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1CC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0x001E1CD2u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E1CD2: ;
    eax = MEM32(esi + 0x9C);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x90) = MEM32(esi + 0x90) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA0) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0x7F) = 0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D33(); return; } /* je: equal / zero */

loc_001E1CEB: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0x34);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D1F(); return; } /* ja: above (unsigned >) */

loc_001E1D15: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0x001E1D1Du); RECOMP_ABI_CALL(0x001E1513u, sub_001E1513); /* call 0x001E1513 */

loc_001E1D1D: ;
    g_seh_ebp = ebp; sub_001E1D33(); return; /* tail jmp 0x001E1D33 */

}

/**
 * sub_001E1D1F
 * Original: 0x001E1D1F - 0x001E1D33 (20 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1D1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1D1F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001E1D2Du); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E1D2D: ;
    MEM32(esi + 0x90) = eax;

    g_seh_ebp = ebp; sub_001E1D33(); return; /* fallthrough 0x001E1D33 */

}

/**
 * sub_001E1D33
 * Original: 0x001E1D33 - 0x001E1D6B (56 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1D33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1D33: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* jae: above or equal (unsigned >=) */

loc_001E1D3F: ;
    ebx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1D6B(); return; } /* je: equal / zero */

loc_001E1D46: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x40000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1D55u); RECOMP_ABI_CALL(0x001E19F4u, sub_001E19F4); /* call 0x001E19F4 */

loc_001E1D55: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1D69u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E1D69: ;
    g_seh_ebp = ebp; sub_001E1DE0(); return; /* tail jmp 0x001E1DE0 */

}

/**
 * sub_001E1D6B
 * Original: 0x001E1D6B - 0x001E1D81 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1D6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1D6B: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* je: equal / zero */

loc_001E1D71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001E1D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E1D79u); } /* indirect call */
    }

loc_001E1D7F: ;
    g_seh_ebp = ebp; sub_001E1DE0(); return; /* tail jmp 0x001E1DE0 */

}

/**
 * sub_001E1D81
 * Original: 0x001E1D81 - 0x001E1DBC (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1D81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1D81: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DBC(); return; } /* je: equal / zero */

loc_001E1D89: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(eax + 0x28)));
    edi = edi - MEM32(eax + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* js: sign (negative) */

loc_001E1DA0: ;
    edx = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx + 0x37));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x30));
    edi = ZX16(LO16(ecx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* jl: less (signed <) */

loc_001E1DB5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + 0x30) = LO16(ecx);
    g_seh_ebp = ebp; sub_001E1DE0(); return; /* tail jmp 0x001E1DE0 */

}

/**
 * sub_001E1DBC
 * Original: 0x001E1DBC - 0x001E1DE0 (36 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1DBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1DBC: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* je: equal / zero */

loc_001E1DCA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* jne: not equal / not zero */

loc_001E1DCE: ;
    MEM8(esi + 0x7F) = MEM8(esi + 0x7F) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x7F)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x7F)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7F), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1DE0(); return; } /* jb: below (unsigned <) */

loc_001E1DD7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1DE0u); RECOMP_ABI_CALL(0x001E1126u, sub_001E1126); /* call 0x001E1126 */

    g_seh_ebp = ebp; sub_001E1DE0(); return; /* fallthrough 0x001E1DE0 */

}

/**
 * sub_001E1DE0
 * Original: 0x001E1DE0 - 0x001E1E10 (48 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1DE0: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E1DF3; /* je: equal / zero */

loc_001E1DE6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1DEFu); RECOMP_ABI_CALL(0x001E10C5u, sub_001E10C5); /* call 0x001E10C5 */

loc_001E1DEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1E09; /* jne: not equal / not zero */

loc_001E1DF3: ;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1E09; /* je: equal / zero */

loc_001E1DFC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E1E05u); RECOMP_ABI_CALL(0x001E141Cu, sub_001E141C); /* call 0x001E141C */

loc_001E1E05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1DF3; /* jne: not equal / not zero */

loc_001E1E09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E1E10
 * Original: 0x001E1E10 - 0x001E1E60 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E1E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E1E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 9), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edi = BSWAP32(edi); /* bswap */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F1D(); return; } /* je: equal / zero */

loc_001E1E32: ;
    esi = MEM32(eax + 4);
    esi = BSWAP32(esi); /* bswap */
    ecx = esi;
    _fb = (uint32_t)(MEM32(ebx + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001E1F1D(); return; } /* js: sign (negative) */

loc_001E1E45: ;
    ecx = esi;
    _fb = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E1E60(); return; } /* jle: less or equal (signed <=) */

loc_001E1E51: ;
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(ebx + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E20EC(); return; /* tail jmp 0x001E20EC */

}

/**
 * sub_001E1E60
 * Original: 0x001E1E60 - 0x001E1ED6 (118 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1E60: ;
    ecx = MEM32(ebx + 0xA8);
    edx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001E1E7C; /* js: sign (negative) */

loc_001E1E6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1E99; /* jne: not equal / not zero */

loc_001E1E70: ;
    ecx = MEM32(ebx + 0xAC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001E1E99; /* jg: greater (signed >) */

loc_001E1E7C: ;
    SET_LO16(eax, MEM16(eax + 0xA));
    SET_HI8(ecx, LO8(eax));
    MEM32(ebx + 0xA8) = edi;
    MEM32(ebx + 0xAC) = esi;
    SET_LO8(ecx, HI8(eax));
    eax = ZX16(LO16(ecx));
    MEM32(ebx + 0xB0) = eax;

loc_001E1E99: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1EA3u); RECOMP_ABI_CALL(0x001E1B93u, sub_001E1B93); /* call 0x001E1B93 */

loc_001E1EA3: ;
    SET_LO8(eax, MEM8(ebx + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F1A(); return; } /* jb: below (unsigned <) */

loc_001E1EAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F1A(); return; } /* je: equal / zero */

loc_001E1EAE: ;
    ecx = ebx + 0x34;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F1A(); return; } /* jne: not equal / not zero */

loc_001E1EB5: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E1F16(); return; } /* je: equal / zero */

loc_001E1EBD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E1ED6(); return; } /* je: equal / zero */

loc_001E1EC1: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E1F1A(); return; } /* jne: not equal / not zero */

loc_001E1EC6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1ED1u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E1ED1: ;
    g_seh_ebp = ebp; sub_001E1FB1(); return; /* tail jmp 0x001E1FB1 */

}

/**
 * sub_001E1ED6
 * Original: 0x001E1ED6 - 0x001E1F16 (64 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1ED6: ;
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebx + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(ebx + 0x7C) = 8;
    eax = ZX8(MEM8(ecx + 0x34));
    edx = MEM32(ecx + 0x1D8);
    eax = eax + eax * 4;
    eax = edx + eax * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_001E1EFF; /* je: equal / zero */

loc_001E1EF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1FB1(); return; } /* jae: above or equal (unsigned >=) */

loc_001E1EFF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E1F0Bu); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E1F0B: ;
    MEM32(ebx + 0x94) = eax;
    g_seh_ebp = ebp; sub_001E1FB1(); return; /* tail jmp 0x001E1FB1 */

}

/**
 * sub_001E1F16
 * Original: 0x001E1F16 - 0x001E1F1A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1F16: ;
    MEM8(ebx + 0x7C) = 6;

    g_seh_ebp = ebp; sub_001E1F1A(); return; /* fallthrough 0x001E1F1A */

}

/**
 * sub_001E1F1A
 * Original: 0x001E1F1A - 0x001E1F1D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1F1A: ;
    eax = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001E1F1D(); return; /* fallthrough 0x001E1F1D */

}

/**
 * sub_001E1F1D
 * Original: 0x001E1F1D - 0x001E1F78 (91 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1F1D: ;
    _fa = (uint32_t)(MEM8(ebx + 0x7C)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x7C), 7 (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20EC(); return; } /* jae: above or equal (unsigned >=) */

loc_001E1F27: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20EC(); return; } /* je: equal / zero */

loc_001E1F32: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + esi;
    _fa = (uint32_t)(MEM32(ebx + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E1F48; /* jne: not equal / not zero */

loc_001E1F40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0xC8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F94(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E1F48: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1F5Eu); RECOMP_ABI_CALL(0x001E034Bu, sub_001E034B); /* call 0x001E034B */

loc_001E1F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1F78(); return; } /* jne: not equal / not zero */

loc_001E1F62: ;
    eax = MEM32(ebx + 0x88);
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x88) = eax;
    g_seh_ebp = ebp; sub_001E20EC(); return; /* tail jmp 0x001E20EC */

}

/**
 * sub_001E1F78
 * Original: 0x001E1F78 - 0x001E1F94 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1F78: ;
    ecx = MEM32(ebp + 0x14);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = eax;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = ecx;
    edi = ecx;

    g_seh_ebp = ebp; sub_001E1F94(); return; /* fallthrough 0x001E1F94 */

}

/**
 * sub_001E1F94
 * Original: 0x001E1F94 - 0x001E1FB1 (29 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1F94: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xC), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E1FB8(); return; } /* je: equal / zero */

loc_001E1F9A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1FA3u); RECOMP_ABI_CALL(0x001E1009u, sub_001E1009); /* call 0x001E1009 */

loc_001E1FA3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1FB1u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

    g_seh_ebp = ebp; sub_001E1FB1(); return; /* fallthrough 0x001E1FB1 */

}

/**
 * sub_001E1FB1
 * Original: 0x001E1FB1 - 0x001E1FB8 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1FB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1FB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E20EE(); return; /* tail jmp 0x001E20EE */

}

/**
 * sub_001E1FB8
 * Original: 0x001E1FB8 - 0x001E206F (183 bytes, 64 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1FB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E1FB8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E1FF4; /* je: equal / zero */

loc_001E1FBE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E1FF4; /* jne: not equal / not zero */

loc_001E1FC6: ;
    ecx = ebx + 0x24;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E1FF4; /* jne: not equal / not zero */

loc_001E1FCD: ;
    eax = ZX8(MEM8(eax + 9));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E1FDFu); RECOMP_ABI_CALL(0x001E09C5u, sub_001E09C5); /* call 0x001E09C5 */

loc_001E1FDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20EC(); return; } /* je: equal / zero */

loc_001E1FE7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + -8) = edi;

loc_001E1FF4: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x6254454E);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E2005u); RECOMP_ABI_CALL(0x001D7ECCu, sub_001D7ECC); /* call 0x001D7ECC */

loc_001E2005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20EC(); return; } /* je: equal / zero */

loc_001E200D: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    MEM16(eax + 0x10) = 0x14;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x12) = LO8(ecx);
    ecx = esi;
    edx = ecx;
    MEM32(eax + 8) = esi;
    esi = MEM32(ebp + 0x10);
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 0x14;
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
    esi = MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0xC4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20D7(); return; } /* jne: not equal / not zero */

loc_001E2049: ;
    edi = MEM32(ebx + 0x28);
    edx = ebx + 0x24;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E206F(); return; } /* je: equal / zero */

loc_001E205B: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E206F(); return; } /* je: equal / zero */

loc_001E2060: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E206Bu); RECOMP_ABI_CALL(0x001E0871u, sub_001E0871); /* call 0x001E0871 */

loc_001E206B: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001E207F(); return; /* tail jmp 0x001E207F */

}

/**
 * sub_001E206F
 * Original: 0x001E206F - 0x001E207F (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E206F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E206F: ;
    ecx = MEM32(edx + 4);
    esi = MEM32(ebp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;

    g_seh_ebp = ebp; sub_001E207F(); return; /* fallthrough 0x001E207F */

}

/**
 * sub_001E207F
 * Original: 0x001E207F - 0x001E20C1 (66 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E207F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E207F: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + esi;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E208Cu); RECOMP_ABI_CALL(0x001E0777u, sub_001E0777); /* call 0x001E0777 */

loc_001E208C: ;
    esi = MEM32(ebx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20C1(); return; } /* je: equal / zero */

loc_001E2093: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E20A0u); RECOMP_ABI_CALL(0x001E0ADCu, sub_001E0ADC); /* call 0x001E0ADC */

loc_001E20A0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 8) = MEM32(edi + 8) + eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E20B5; /* jne: not equal / not zero */

loc_001E20AA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E20B5u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E20B5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E20BFu); RECOMP_ABI_CALL(0x001E0777u, sub_001E0777); /* call 0x001E0777 */

loc_001E20BF: ;
    g_seh_ebp = ebp; sub_001E20EC(); return; /* tail jmp 0x001E20EC */

}

/**
 * sub_001E20C1
 * Original: 0x001E20C1 - 0x001E20D7 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E20C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E20C1: ;
    _fa = (uint32_t)(MEM8(ebx + 0xD)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xD), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E20EC(); return; } /* je: equal / zero */

loc_001E20C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001E20D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E20CFu); } /* indirect call */
    }

loc_001E20D5: ;
    g_seh_ebp = ebp; sub_001E20EC(); return; /* tail jmp 0x001E20EC */

}

/**
 * sub_001E20D7
 * Original: 0x001E20D7 - 0x001E20F5 (30 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E20D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E20D7: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(ebx + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E20ECu); RECOMP_ABI_CALL(0x001E0923u, sub_001E0923); /* call 0x001E0923 */

loc_001E20EC: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E20EC
 * Original: 0x001E20EC - 0x001E20F5 (9 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E20EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E20EC: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E20EE
 * Original: 0x001E20EE - 0x001E20F5 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E20EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E20EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E20F5
 * Original: 0x001E20F5 - 0x001E213F (74 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E20F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E20F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E215C(); return; } /* jne: not equal / not zero */

loc_001E2106: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E215C(); return; } /* jb: below (unsigned <) */

loc_001E210C: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E211E; /* je: equal / zero */

loc_001E2115: ;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x82), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E215C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E211E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E2129u); RECOMP_ABI_CALL(0x001E18F7u, sub_001E18F7); /* call 0x001E18F7 */

loc_001E2129: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E215C(); return; } /* jl: less (signed <) */

loc_001E212D: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E213F(); return; } /* je: equal / zero */

loc_001E2136: ;
    eax = ZX16(MEM16(esi + 0x82));
    g_seh_ebp = ebp; sub_001E2143(); return; /* tail jmp 0x001E2143 */

}

/**
 * sub_001E213F
 * Original: 0x001E213F - 0x001E2143 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E213F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E213F: ;
    eax = ZX8(MEM8(ebx + 0x36));

    g_seh_ebp = ebp; sub_001E2143(); return; /* fallthrough 0x001E2143 */

}

/**
 * sub_001E2143
 * Original: 0x001E2143 - 0x001E215C (25 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2143(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2143: ;
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E2152u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001E2152: ;
    MEM32(esi + 0x94) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E2184(); return; /* tail jmp 0x001E2184 */

}

/**
 * sub_001E215C
 * Original: 0x001E215C - 0x001E216B (15 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E215C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E215C: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E216B(); return; } /* je: equal / zero */

loc_001E2163: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E2169u); RECOMP_ABI_CALL(0x001E0417u, sub_001E0417); /* call 0x001E0417 */

loc_001E2169: ;
    g_seh_ebp = ebp; sub_001E2174(); return; /* tail jmp 0x001E2174 */

}

/**
 * sub_001E216B
 * Original: 0x001E216B - 0x001E2174 (9 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E216B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E216B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E2174u); RECOMP_ABI_CALL(0x001E0A2Du, sub_001E0A2D); /* call 0x001E0A2D */

    g_seh_ebp = ebp; sub_001E2174(); return; /* fallthrough 0x001E2174 */

}

/**
 * sub_001E2174
 * Original: 0x001E2174 - 0x001E218A (22 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2174(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E2174: ;
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E2181u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001E2181: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E2184
 * Original: 0x001E2184 - 0x001E218A (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2184(void)
{

loc_001E2184: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E218A
 * Original: 0x001E218A - 0x001E21E6 (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E218A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E218A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C7(); return; } /* je: equal / zero */

loc_001E21A0: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C7(); return; } /* je: equal / zero */

loc_001E21AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C7(); return; } /* je: equal / zero */

loc_001E21B4: ;
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0xF0);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C7(); return; } /* je: equal / zero */

loc_001E21C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E21D3; /* jne: not equal / not zero */

loc_001E21C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100007F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100007F (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C7(); return; } /* jne: not equal / not zero */

loc_001E21D3: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E21E6(); return; } /* jne: not equal / not zero */

loc_001E21DC: ;
    eax = 0x80072726u;
    g_seh_ebp = ebp; sub_001E23CC(); return; /* tail jmp 0x001E23CC */

}

/**
 * sub_001E21E6
 * Original: 0x001E21E6 - 0x001E22B1 (203 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E21E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E21E6: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E2202; /* jne: not equal / not zero */

loc_001E21EC: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM16(eax) = LO16(ebx);
    PUSH32(esp, 0x001E21FAu); RECOMP_ABI_CALL(0x001D0342u, sub_001D0342); /* call 0x001D0342 */

loc_001E21FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E23CC(); return; } /* jl: less (signed <) */

loc_001E2202: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E2208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E2202u); } /* indirect call */
    }

loc_001E2208: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x80 (8-bit) */
    MEM8(ebp + 8) = LO8(eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E22B1(); return; } /* je: equal / zero */

loc_001E2215: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    SET_LO16(eax, ZX8(MEM8(edi + 0x36)));
    MEM16(esi + 0x82) = LO16(eax);
    eax = 0x200;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM16(esi + 0x80) = LO16(ebx);
    MEM32(esi + 0x84) = ebx;
    eax = 0xFFFF;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xD4) = ebx;
    eax = ZX8(MEM8(edi + 0x38));
    eax = eax + eax * 4;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;
    eax = esi + 0x64;
    MEM32(esi + 0x68) = eax;
    MEM32(eax) = eax;
    MEM32(esi + 0x74) = MEM32(esi + 0x74) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFE0667u);
    ecx = esi;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x78) = 0x1E167A;
    PUSH32(esp, 0x001E2296u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E2296: ;
    eax = edi + 0xD38;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x40) = ebx;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    g_seh_ebp = ebp; sub_001E22BC(); return; /* tail jmp 0x001E22BC */

}

/**
 * sub_001E22B1
 * Original: 0x001E22B1 - 0x001E22BC (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E22B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E22B1: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2350(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001E22BC(); return; /* fallthrough 0x001E22BC */

}

/**
 * sub_001E22BC
 * Original: 0x001E22BC - 0x001E22D1 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E22BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E22BC: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E22D1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E22C2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E22D1(); return; } /* jne: not equal / not zero */

loc_001E22C7: ;
    esi = 0x80072735u;
    g_seh_ebp = ebp; sub_001E2352(); return; /* tail jmp 0x001E2352 */

}

/**
 * sub_001E22D1
 * Original: 0x001E22D1 - 0x001E2350 (127 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E22D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E22D1: ;
    ecx = edi + 0xD38;
    edx = MEM32(ecx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E2361(); return; } /* jne: not equal / not zero */

loc_001E22E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E22EE; /* jne: not equal / not zero */

loc_001E22EA: ;
    MEM8(esi + 0x7C) = 2;

loc_001E22EE: ;
    eax = MEM32(esi + 0x5C);
    ecx = 0x518;
    _fb = (uint32_t)(0x517) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x517)) >> 32) & 1);
    eax = eax + 0x517;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0xCC) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x518);
    MEM32(esi + 0x5C) = eax;
    ecx = ZX8(MEM8(edi + 0x33));
    if (0xA) _cf = (int)(((ecx) >> (32 - (0xA))) & 1);
    ecx = ecx << 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E231C; /* jbe: below or equal (unsigned <=) */

loc_001E2319: ;
    MEM32(esi + 0x5C) = ecx;

loc_001E231C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x44) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(esi + 0x48) = LO16(eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E2333u); RECOMP_ABI_CALL(0x001E00F2u, sub_001E00F2); /* call 0x001E00F2 */

loc_001E2333: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x98) = eax;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x001E2350u); RECOMP_ABI_CALL(0x001E1757u, sub_001E1757); /* call 0x001E1757 */

    g_seh_ebp = ebp; sub_001E2350(); return; /* fallthrough 0x001E2350 */

}

/**
 * sub_001E22E5
 * Original: 0x001E22E5 - 0x001E2350 (107 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E22E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E22E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E22EE; /* jne: not equal / not zero */

loc_001E22EA: ;
    MEM8(esi + 0x7C) = 2;

loc_001E22EE: ;
    eax = MEM32(esi + 0x5C);
    ecx = 0x518;
    _fb = (uint32_t)(0x517) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x517;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0xCC) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x518);
    MEM32(esi + 0x5C) = eax;
    ecx = ZX8(MEM8(edi + 0x33));
    ecx = ecx << 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E231C; /* jbe: below or equal (unsigned <=) */

loc_001E2319: ;
    MEM32(esi + 0x5C) = ecx;

loc_001E231C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x44) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(esi + 0x48) = LO16(eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E2333u); RECOMP_ABI_CALL(0x001E00F2u, sub_001E00F2); /* call 0x001E00F2 */

loc_001E2333: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x98) = eax;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x001E2350u); RECOMP_ABI_CALL(0x001E1757u, sub_001E1757); /* call 0x001E1757 */

    g_seh_ebp = ebp; sub_001E2350(); return; /* fallthrough 0x001E2350 */

}

/**
 * sub_001E2350
 * Original: 0x001E2350 - 0x001E2352 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2350: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001E2352(); return; /* fallthrough 0x001E2352 */

}

/**
 * sub_001E2352
 * Original: 0x001E2352 - 0x001E235F (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2352(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2352: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E235Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E2355u); } /* indirect call */
    }

loc_001E235B: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001E23CC(); return; /* tail jmp 0x001E23CC */

}

/**
 * sub_001E235F
 * Original: 0x001E235F - 0x001E2361 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E235F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E235F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E2361(); return; /* fallthrough 0x001E2361 */

}

/**
 * sub_001E2361
 * Original: 0x001E2361 - 0x001E2369 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2361(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2369(); return; } /* je: equal / zero */

loc_001E2365: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_001E236F(); return; /* tail jmp 0x001E236F */

}

/**
 * sub_001E2369
 * Original: 0x001E2369 - 0x001E236F (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2369(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2369: ;
    ecx = MEM32(edi + 0xD38);

    g_seh_ebp = ebp; sub_001E236F(); return; /* fallthrough 0x001E236F */

}

/**
 * sub_001E236F
 * Original: 0x001E236F - 0x001E23C0 (81 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E236F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E236F: ;
    ebx = ecx;
    edx = edi + 0xD38;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001E23B5; /* je: equal / zero */

loc_001E2387: ;
    SET_LO16(edx, MEM16(eax + 0x4A));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x4A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi + 0x4A) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E23B5; /* jne: not equal / not zero */

loc_001E2391: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E23B5; /* jne: not equal / not zero */

loc_001E2399: ;
    SET_LO16(edx, MEM16(ebp + 0x10));
    _fa = (uint32_t)(MEM16(eax + 0x48)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x48), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E23B5; /* jne: not equal / not zero */

loc_001E23A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E23C0(); return; } /* je: equal / zero */

loc_001E23AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001E23B5u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E23B5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E235F(); return; } /* jne: not equal / not zero */

loc_001E23BB: ;
    g_seh_ebp = ebp; sub_001E22E5(); return; /* tail jmp 0x001E22E5 */

}

/**
 * sub_001E23C0
 * Original: 0x001E23C0 - 0x001E23C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E23C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E23C0: ;
    esi = 0x80072740u;
    g_seh_ebp = ebp; sub_001E2352(); return; /* tail jmp 0x001E2352 */

}

/**
 * sub_001E23C7
 * Original: 0x001E23C7 - 0x001E23CC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E23C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E23C7: ;
    eax = 0x80072741u;

    g_seh_ebp = ebp; sub_001E23CC(); return; /* fallthrough 0x001E23CC */

}

/**
 * sub_001E23CC
 * Original: 0x001E23CC - 0x001E23D3 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E23CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E23CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E23D3
 * Original: 0x001E23D3 - 0x001E246A (151 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E23D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E23D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E23E8u); RECOMP_ABI_CALL(0x001E03A4u, sub_001E03A4); /* call 0x001E03A4 */

loc_001E23E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E248B(); return; } /* je: equal / zero */

loc_001E23F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E23FBu); RECOMP_ABI_CALL(0x001E0F60u, sub_001E0F60); /* call 0x001E0F60 */

loc_001E23FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2487(); return; } /* je: equal / zero */

loc_001E2405: ;
    eax = MEM32(ebp + 0xC);
    MEM8(esi + 0x7C) = 3;
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    MEM32(esi + 0xC0) = eax;
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x400000);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM32(esi + 0xBC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E2435u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E2435: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E2445u); RECOMP_ABI_CALL(0x001E218Au, sub_001E218A); /* call 0x001E218A */

loc_001E2445: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFBFFFFFu);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E2455u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E2455: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2474(); return; } /* jge: greater or equal (signed >=) */

loc_001E245A: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x80 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E246A(); return; } /* je: equal / zero */

loc_001E2462: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E2468u); RECOMP_ABI_CALL(0x001CFE8Du, sub_001CFE8D); /* call 0x001CFE8D */

loc_001E2468: ;
    g_seh_ebp = ebp; sub_001E2487(); return; /* tail jmp 0x001E2487 */

}

/**
 * sub_001E246A
 * Original: 0x001E246A - 0x001E2474 (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E246A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E246A: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E2472u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001E2472: ;
    g_seh_ebp = ebp; sub_001E2487(); return; /* tail jmp 0x001E2487 */

}

/**
 * sub_001E2474
 * Original: 0x001E2474 - 0x001E2487 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2474(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2474: ;
    eax = edi + 0xD38;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;

    g_seh_ebp = ebp; sub_001E2487(); return; /* fallthrough 0x001E2487 */

}

/**
 * sub_001E2487
 * Original: 0x001E2487 - 0x001E248B (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001E248B(); return; /* fallthrough 0x001E248B */

}

/**
 * sub_001E248B
 * Original: 0x001E248B - 0x001E2490 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E248B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E248B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E2490
 * Original: 0x001E2490 - 0x001E2573 (227 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E2490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E2490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 8));
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 9));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E24CAu); RECOMP_ABI_CALL(0x001D17EAu, sub_001D17EA); /* call 0x001D17EA */

loc_001E24CA: ;
    edi = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E24F6; /* jae: above or equal (unsigned >=) */

loc_001E24DC: ;
    ecx = 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E24F6; /* jne: not equal / not zero */

loc_001E24E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277B(); return; } /* je: equal / zero */

loc_001E24ED: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277B(); return; } /* je: equal / zero */

loc_001E24F6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* je: equal / zero */

loc_001E24FF: ;
    SET_LO8(edx, MEM8(edi + 0x7C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2573(); return; } /* jb: below (unsigned <) */

loc_001E2507: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 9), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2573(); return; } /* jne: not equal / not zero */

loc_001E250D: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E251Du); RECOMP_ABI_CALL(0x001E1E10u, sub_001E1E10); /* call 0x001E1E10 */

loc_001E251D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E2527: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 9), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E25D0(); return; } /* jne: not equal / not zero */

loc_001E2531: ;
    eax = MEM32(edi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E253F: ;
    ecx = MEM32(edi + 0xCC);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2771(); return; } /* jae: above or equal (unsigned >=) */

loc_001E254F: ;
    _fa = (uint32_t)(MEM32(edi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2771(); return; } /* je: equal / zero */

loc_001E255C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + 0x1D8));
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E256Eu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001E256E: ;
    g_seh_ebp = ebp; sub_001E277A(); return; /* tail jmp 0x001E277A */

}

/**
 * sub_001E2531
 * Original: 0x001E2531 - 0x001E2573 (66 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2531(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2531: ;
    eax = MEM32(edi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E253F: ;
    ecx = MEM32(edi + 0xCC);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2771(); return; } /* jae: above or equal (unsigned >=) */

loc_001E254F: ;
    _fa = (uint32_t)(MEM32(edi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2771(); return; } /* je: equal / zero */

loc_001E255C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + 0x1D8));
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E256Eu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001E256E: ;
    g_seh_ebp = ebp; sub_001E277A(); return; /* tail jmp 0x001E277A */

}

/**
 * sub_001E2573
 * Original: 0x001E2573 - 0x001E25D0 (93 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2573(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2573: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* je: equal / zero */

loc_001E257B: ;
    SET_LO8(ebx, MEM8(esi + 9));
    eax = ZX8(LO8(ebx));
    edx = ZX8(LO8(edx));
    ecx = eax;
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + 0x1B) = LO8(ebx);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E2706(); return; } /* je: equal / zero */

loc_001E2593: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E26A3(); return; } /* je: equal / zero */

loc_001E259A: ;
    ebx = MEM32(esi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = BSWAP32(ebx); /* bswap */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E25C2u); RECOMP_ABI_CALL(0x001E034Bu, sub_001E034B); /* call 0x001E034B */

loc_001E25C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E25DF(); return; } /* jne: not equal / not zero */

loc_001E25C6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1B), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2531(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E25D0(); return; /* fallthrough 0x001E25D0 */

}

/**
 * sub_001E25D0
 * Original: 0x001E25D0 - 0x001E25DF (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E25D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E25D0: ;
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x88) = MEM32(edi + 0x88) + 0x20000;
    _fa = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E2531(); return; /* tail jmp 0x001E2531 */

}

/**
 * sub_001E25DF
 * Original: 0x001E25DF - 0x001E25F8 (25 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E25DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E25DF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1B), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E25F8(); return; } /* je: equal / zero */

loc_001E25E5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E25F3u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E25F3: ;
    g_seh_ebp = ebp; sub_001E277A(); return; /* tail jmp 0x001E277A */

}

/**
 * sub_001E25E5
 * Original: 0x001E25E5 - 0x001E25F8 (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E25E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E25E5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E25F3u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

loc_001E25F3: ;
    g_seh_ebp = ebp; sub_001E277A(); return; /* tail jmp 0x001E277A */

}

/**
 * sub_001E25F8
 * Original: 0x001E25F8 - 0x001E2615 (29 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E25F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E25F8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1B), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2637(); return; } /* je: equal / zero */

loc_001E25FE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* jne: not equal / not zero */

loc_001E2607: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E2615u); RECOMP_ABI_CALL(0x001E0E06u, sub_001E0E06); /* call 0x001E0E06 */

    g_seh_ebp = ebp; sub_001E2615(); return; /* fallthrough 0x001E2615 */

}

/**
 * sub_001E2615
 * Original: 0x001E2615 - 0x001E2637 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2615(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2615: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* jne: not equal / not zero */

loc_001E2620: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2737(); return; } /* je: equal / zero */

loc_001E2628: ;
    esi = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = BSWAP32(esi); /* bswap */
    MEM8(ebp + 0x1C) = LO8(eax);
    g_seh_ebp = ebp; sub_001E2755(); return; /* tail jmp 0x001E2755 */

}

/**
 * sub_001E2637
 * Original: 0x001E2637 - 0x001E26A3 (108 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2637(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2637: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1B), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E2641: ;
    _fa = (uint32_t)(MEM8(edi + 0x7C)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x7C), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E266C; /* jne: not equal / not zero */

loc_001E2647: ;
    eax = MEM32(esi + 4);
    eax = BSWAP32(eax); /* bswap */
    ecx = eax;
    _fb = (uint32_t)(MEM32(edi + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* jle: less or equal (signed <=) */

loc_001E2658: ;
    _fb = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* jg: greater (signed >) */

loc_001E2662: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E266Cu); RECOMP_ABI_CALL(0x001E125Du, sub_001E125D); /* call 0x001E125D */

loc_001E266C: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E267Cu); RECOMP_ABI_CALL(0x001E1E10u, sub_001E1E10); /* call 0x001E1E10 */

loc_001E267C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E2686: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 9), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2531(); return; } /* je: equal / zero */

loc_001E2690: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E269Eu); RECOMP_ABI_CALL(0x001E1194u, sub_001E1194); /* call 0x001E1194 */

loc_001E269E: ;
    g_seh_ebp = ebp; sub_001E2531(); return; /* tail jmp 0x001E2531 */

}

/**
 * sub_001E26A3
 * Original: 0x001E26A3 - 0x001E26DC (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E26A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E26A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E26CA; /* je: equal / zero */

loc_001E26A7: ;
    eax = MEM32(esi + 4);
    eax = BSWAP32(eax); /* bswap */
    edx = eax;
    _fb = (uint32_t)(MEM32(edi + 0x9C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(edi + 0x9C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* jle: less or equal (signed <=) */

loc_001E26BC: ;
    _fb = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* jg: greater (signed >) */

loc_001E26CA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E26DC(); return; } /* je: equal / zero */

loc_001E26CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E26D7: ;
    g_seh_ebp = ebp; sub_001E25E5(); return; /* tail jmp 0x001E25E5 */

}

/**
 * sub_001E26DC
 * Original: 0x001E26DC - 0x001E26F9 (29 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E26DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E26DC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E26E5: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E26F9u); RECOMP_ABI_CALL(0x001E1883u, sub_001E1883); /* call 0x001E1883 */

    g_seh_ebp = ebp; sub_001E26F9(); return; /* fallthrough 0x001E26F9 */

}

/**
 * sub_001E26F9
 * Original: 0x001E26F9 - 0x001E2706 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E26F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E26F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* je: equal / zero */

loc_001E2701: ;
    g_seh_ebp = ebp; sub_001E2531(); return; /* tail jmp 0x001E2531 */

}

/**
 * sub_001E2706
 * Original: 0x001E2706 - 0x001E2737 (49 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2706(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2706: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* jne: not equal / not zero */

loc_001E270B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2615(); return; } /* jne: not equal / not zero */

loc_001E2713: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E277A(); return; } /* je: equal / zero */

loc_001E2718: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E2735u); RECOMP_ABI_CALL(0x001E23D3u, sub_001E23D3); /* call 0x001E23D3 */

loc_001E2735: ;
    g_seh_ebp = ebp; sub_001E26F9(); return; /* tail jmp 0x001E26F9 */

}

/**
 * sub_001E2737
 * Original: 0x001E2737 - 0x001E2755 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2737: ;
    ecx = MEM32(esi);
    eax = ZX8(LO8(eax));
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = BSWAP32(ecx); /* bswap */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + 0x1C) = 0x10;

    g_seh_ebp = ebp; sub_001E2755(); return; /* fallthrough 0x001E2755 */

}

/**
 * sub_001E2755
 * Original: 0x001E2755 - 0x001E2771 (28 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2755(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2755: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E276Fu); RECOMP_ABI_CALL(0x001E0FA4u, sub_001E0FA4); /* call 0x001E0FA4 */

loc_001E276F: ;
    g_seh_ebp = ebp; sub_001E277A(); return; /* tail jmp 0x001E277A */

}

/**
 * sub_001E2771
 * Original: 0x001E2771 - 0x001E277B (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2771: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E277Au); RECOMP_ABI_CALL(0x001E103Eu, sub_001E103E); /* call 0x001E103E */

loc_001E277A: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E277B(); return; /* fallthrough 0x001E277B */

}

/**
 * sub_001E277A
 * Original: 0x001E277A - 0x001E277B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E277A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E277A: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E277B(); return; /* fallthrough 0x001E277B */

}

/**
 * sub_001E277B
 * Original: 0x001E277B - 0x001E2781 (6 bytes, 4 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E277B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E277B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001E27A5
 * Original: 0x001E27A5 - 0x001E2809 (100 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E27A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E27A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E27B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E27AEu); } /* indirect call */
    }

loc_001E27B4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    edi = 0x8007274Au;
    if (TEST_Z(_fa, _fb)) goto loc_001E27D9; /* je: equal / zero */

loc_001E27C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E27D1u); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E27D1: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E27D9u); RECOMP_ABI_CALL(0x001CFED5u, sub_001CFED5); /* call 0x001CFED5 */

loc_001E27D9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E27EB; /* je: equal / zero */

loc_001E27DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E27EBu); RECOMP_ABI_CALL(0x001D0A12u, sub_001D0A12); /* call 0x001D0A12 */

loc_001E27EB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E27F7u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001E27F7: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E2800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E27FAu); } /* indirect call */
    }

loc_001E2800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E2809
 * Original: 0x001E2809 - 0x001E2843 (58 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E2809(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E2809: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001E2819u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E2813u); } /* indirect call */
    }

loc_001E2819: ;
    edx = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    eax = edx + 0x24;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2843(); return; } /* jne: not equal / not zero */

loc_001E2828: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E2834u); RECOMP_ABI_CALL(0x001D06C1u, sub_001D06C1); /* call 0x001D06C1 */

loc_001E2834: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E283Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E2839u); } /* indirect call */
    }

loc_001E283F: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001E28C2(); return; /* tail jmp 0x001E28C2 */

}

/**
 * sub_001E2843
 * Original: 0x001E2843 - 0x001E288B (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2843(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2843: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(ebp + -4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) - eax;
    _fa = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001E285Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E2856u); } /* indirect call */
    }

loc_001E285C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO16(edx, MEM16(ebx + 0x10));
    esi = MEM32(ebx + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001E2877; /* je: equal / zero */

loc_001E286D: ;
    MEM32(ecx + 4) = esi;
    ecx = MEM32(eax + 0x18);
    MEM16(ecx + 2) = LO16(edx);

loc_001E2877: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E288B(); return; } /* ja: above (unsigned >) */

loc_001E2881: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001E289B(); return; /* tail jmp 0x001E289B */

}

/**
 * sub_001E288B
 * Original: 0x001E288B - 0x001E289B (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E288B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E288B: ;
    ecx = edx;
    MEM32(eax + 8) = 0x8000;
    MEM32(ebp + 0xC) = 0x80072738u;

    g_seh_ebp = ebp; sub_001E289B(); return; /* fallthrough 0x001E289B */

}

/**
 * sub_001E289B
 * Original: 0x001E289B - 0x001E28C8 (45 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E289B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E289B: ;
    edx = MEM32(eax + 0xC);
    MEM32(edx) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x14;
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
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E28BEu); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001E28BE: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E28C2
 * Original: 0x001E28C2 - 0x001E28C8 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E28C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E28C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E28C8
 * Original: 0x001E28C8 - 0x001E28F4 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E28C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E28C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E28F4(); return; } /* je: equal / zero */

loc_001E28E0: ;
    edx = MEM32(eax + 4);
    SET_LO16(eax, MEM16(eax + 2));
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = edx;
    MEM16(ebp + -20) = LO16(eax);
    g_seh_ebp = ebp; sub_001E2908(); return; /* tail jmp 0x001E2908 */

}

/**
 * sub_001E28F4
 * Original: 0x001E28F4 - 0x001E2908 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E28F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E28F4: ;
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -12) = eax;
    SET_LO16(eax, MEM16(esi + 0x48));
    MEM16(ebp + -20) = LO16(eax);
    eax = esi + 0x4C;
    MEM32(ebp + -24) = eax;

    g_seh_ebp = ebp; sub_001E2908(); return; /* fallthrough 0x001E2908 */

}

/**
 * sub_001E2908
 * Original: 0x001E2908 - 0x001E291E (22 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2908: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x001E2910u); RECOMP_ABI_CALL(0x001D3195u, sub_001D3195); /* call 0x001D3195 */

loc_001E2910: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E291E(); return; } /* je: equal / zero */

loc_001E2914: ;
    eax = 0x80072751u;
    g_seh_ebp = ebp; sub_001E2B2C(); return; /* tail jmp 0x001E2B2C */

}

/**
 * sub_001E291E
 * Original: 0x001E291E - 0x001E293E (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E291E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E291E: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E2978(); return; } /* je: equal / zero */

loc_001E2939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2948(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001E293E(); return; /* fallthrough 0x001E293E */

}

/**
 * sub_001E293E
 * Original: 0x001E293E - 0x001E2948 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E293E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E293E: ;
    eax = 0x80072738u;
    g_seh_ebp = ebp; sub_001E2B2B(); return; /* tail jmp 0x001E2B2B */

}

/**
 * sub_001E2948
 * Original: 0x001E2948 - 0x001E2978 (48 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2948(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2948: ;
    PUSH32(esp, 2);
    eax = ebp + -2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x001E295Au); RECOMP_ABI_CALL(0x001CF876u, sub_001CF876); /* call 0x001CF876 */

loc_001E295A: ;
    ecx = ZX16(MEM16(ebp + -2));
    eax = MEM32(ebp + -8);
    edx = ecx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E293E(); return; } /* ja: above (unsigned >) */

loc_001E2968: ;
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ecx;

    g_seh_ebp = ebp; sub_001E2978(); return; /* fallthrough 0x001E2978 */

}

/**
 * sub_001E2978
 * Original: 0x001E2978 - 0x001E2992 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2978: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2992(); return; } /* je: equal / zero */

loc_001E297F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E2992(); return; } /* jne: not equal / not zero */

loc_001E2983: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001E29D5(); return; /* tail jmp 0x001E29D5 */

}

/**
 * sub_001E2992
 * Original: 0x001E2992 - 0x001E29A6 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2992: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E29C7(); return; } /* jne: not equal / not zero */

loc_001E2997: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E29A6(); return; } /* je: equal / zero */

loc_001E299D: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) | 0x10000003;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001E29D9(); return; /* tail jmp 0x001E29D9 */

}

/**
 * sub_001E29A6
 * Original: 0x001E29A6 - 0x001E29C7 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E29A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E29A6: ;
    eax = MEM32(0x10118);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xAC);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) | 7;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -36) = edx;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = 8;
    g_seh_ebp = ebp; sub_001E29D9(); return; /* tail jmp 0x001E29D9 */

}

/**
 * sub_001E29C7
 * Original: 0x001E29C7 - 0x001E29D5 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E29C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E29C7: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) | 3;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E29D5(); return; } /* je: equal / zero */

loc_001E29D1: ;
    MEM8(ebp + 0x13) = MEM8(ebp + 0x13) | 0x10;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E29D5(); return; /* fallthrough 0x001E29D5 */

}

/**
 * sub_001E29D5
 * Original: 0x001E29D5 - 0x001E29EC (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E29D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E29D5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E29EC(); return; } /* je: equal / zero */

loc_001E29D9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E29EC(); return; } /* jne: not equal / not zero */

loc_001E29DD: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x518) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x518 (32-bit) */
    g_seh_ebp = ebp; sub_001E29F9(); return; /* tail jmp 0x001E29F9 */

}
