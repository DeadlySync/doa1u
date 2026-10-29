/**
 * DOAU1 - Recompiled code chunk 74
 * Functions: 250 (0x001F133A - 0x001F4D3B)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F133A
 * Original: 0x001F133A - 0x001F1345 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F133A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F133A: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F1342u); RECOMP_ABI_CALL(0x001EF86Au, sub_001EF86A); /* call 0x001EF86A */

loc_001F1342: ;
    MEM32(ebp + 0xC) = edi;

    g_seh_ebp = ebp; sub_001F1345(); return; /* fallthrough 0x001F1345 */

}

/**
 * sub_001F1345
 * Original: 0x001F1345 - 0x001F134A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1345(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1345: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F138B(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F134A(); return; /* fallthrough 0x001F134A */

}

/**
 * sub_001F134A
 * Original: 0x001F134A - 0x001F134D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F134A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F134A: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001F134D(); return; /* fallthrough 0x001F134D */

}

/**
 * sub_001F134D
 * Original: 0x001F134D - 0x001F138B (62 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F134D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F134D: ;
    eax = MEM32(ebp + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F138B(); return; } /* je: equal / zero */

loc_001F1358: ;
    eax = MEM32(ebx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F136C; /* je: equal / zero */

loc_001F135F: ;
    PUSH32(esp, 0x8043);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F136Cu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F136C: ;
    eax = esi + 0xC8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F137E; /* jne: not equal / not zero */

loc_001F1376: ;
    MEM32(eax) = edi;
    MEM32(esi + 0xC4) = edi;

loc_001F137E: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F138Bu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_001F138B(); return; /* fallthrough 0x001F138B */

}

/**
 * sub_001F138B
 * Original: 0x001F138B - 0x001F138F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F138B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F138B: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F138F(); return; /* fallthrough 0x001F138F */

}

/**
 * sub_001F138F
 * Original: 0x001F138F - 0x001F1395 (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F138F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F138F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F1395
 * Original: 0x001F1395 - 0x001F1730 (923 bytes, 298 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1395(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1395: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001F13AC; /* jne: not equal / not zero */

loc_001F13A5: ;
    eax = 0x80150005u;
    goto loc_001F13FB;

loc_001F13AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x801A);
    PUSH32(esp, 0x414);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F13BFu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F13BF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001F1400; /* jne: not equal / not zero */

loc_001F13C8: ;
    edi = 0x80150008u;

loc_001F13CD: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F13F7; /* je: equal / zero */

loc_001F13D8: ;
    eax = esi + 0xCC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F13EA; /* jne: not equal / not zero */

loc_001F13E2: ;
    MEM32(eax) = ecx;
    MEM32(esi + 0xC4) = ecx;

loc_001F13EA: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F13F7u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F13F7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F13FB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_001F1400: ;
    edi = esi + 0xCC;
    MEM32(ebp + -12) = edi;
    eax = 0;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1422; /* je: equal / zero */

loc_001F141B: ;
    edi = 0x80150009u;
    goto loc_001F13CD;

loc_001F1422: ;
    eax = MEM32(edi);
    MEM32(esi + 0x6B8) = MEM32(esi + 0x6B8) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x50);
    MEM32(esi + 0xC4) = eax;
    POP32(esp, ecx);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x28C;
    PUSH32(esp, 0x10);
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
    eax = ebx + 0x29C;
    POP32(esp, ecx);

loc_001F144B: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + -4) = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F144B; /* jne: not equal / not zero */

loc_001F145B: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x70);
    edi = ebx + 0xCC;
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
    ecx = ebx + 0xD4;

loc_001F1473: ;
    eax = MEM32(ecx + -8);
    edx = MEM32(ecx + -4);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F14B9; /* je: equal / zero */

loc_001F147D: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F14B9; /* je: equal / zero */

loc_001F1483: ;
    eax = eax | 0x30000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 0xD4;

loc_001F1492: ;
    esi = MEM32(eax + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F14A7; /* jne: not equal / not zero */

loc_001F149A: ;
    esi = MEM32(eax + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F14A7; /* jne: not equal / not zero */

loc_001F14A2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F14B0; /* je: equal / zero */

loc_001F14A7: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1492; /* jl: less (signed <) */

loc_001F14B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1594; /* je: equal / zero */

loc_001F14B9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1473; /* jl: less (signed <) */

loc_001F14C5: ;
    esi = MEM32(ebp + -4);
    MEM32(esi + 0x594) = MEM32(esi + 0x594) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0xCC;
    MEM32(ebp + -16) = 4;

loc_001F14DC: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    edi = edx;
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F153B; /* je: equal / zero */

loc_001F14E7: ;
    ecx = MEM32(esi + 0x594);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F1526; /* jle: less or equal (signed <=) */

loc_001F14F8: ;
    ecx = esi + 0x598;
    MEM32(ebp + -12) = ecx;

loc_001F1501: ;
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1514; /* jne: not equal / not zero */

loc_001F150C: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1526; /* je: equal / zero */

loc_001F1514: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x594) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1501; /* jl: less (signed <) */

loc_001F1526: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F153B; /* jne: not equal / not zero */

loc_001F152E: ;
    MEM32(esi + ecx * 4 + 0x598) = eax;
    MEM32(esi + 0x594) = MEM32(esi + 0x594) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F153B: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F14DC; /* jne: not equal / not zero */

loc_001F1543: ;
    eax = MEM32(esi + 0x594);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F15CB; /* jle: less or equal (signed <=) */

loc_001F1551: ;
    edx = esi + 0x598;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = edx;

loc_001F155D: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001F15B3; /* jge: greater or equal (signed >=) */

loc_001F156B: ;
    eax = edx + 4;
    MEM32(ebp + -8) = eax;

loc_001F1571: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(edx);
    eax = MEM32(eax);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F159E; /* jb: below (unsigned <) */

loc_001F1580: ;
    if (CMP_A(_fa, _fb)) goto loc_001F1588; /* ja: above (unsigned >) */

loc_001F1582: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F159E; /* jbe: below or equal (unsigned <=) */

loc_001F1588: ;
    edx = MEM32(ebp + -16);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    goto loc_001F15A1;

loc_001F1594: ;
    edi = 0x80150004u;
    goto loc_001F16B3;

loc_001F159E: ;
    edx = MEM32(ebp + -16);

loc_001F15A1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1571; /* jl: less (signed <) */

loc_001F15B3: ;
    ecx = MEM32(esi + 0x594);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001F155D; /* jl: less (signed <) */

loc_001F15CB: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F15D3u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F15D3: ;
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = 0x1EF86A;
    MEM32(ebx + 4) = 0x1EF4F4;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x48) = edi;
    eax = esi + 0xC8;
    edx = MEM32(eax);
    MEM32(edx + 0xB8) = edi;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebx + 0x38) = edi;
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001F1617; /* jne: not equal / not zero */

loc_001F160D: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    goto loc_001F161A;

loc_001F1617: ;
    MEM32(ebx + 8) = edx;

loc_001F161A: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(ebx + 0x14) = edi;
    PUSH32(esp, 2);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F162Cu); RECOMP_ABI_CALL(0x001CEFCEu, sub_001CEFCE); /* call 0x001CEFCE */

loc_001F162C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F1653; /* jne: not equal / not zero */

loc_001F1634: ;
    eax = MEM32(ebx + 0x30);
    eax = eax & 0xFFFF927Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x9200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1649u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_001F1649: ;
    MEM32(ebx + 0x34) = eax;
    edi = 0x80150007u;
    goto loc_001F16B3;

loc_001F1653: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    ecx = ebp + -32;
    MEM16(ebp + -32) = 2;
    MEM16(ebp + -30) = 0xE904;
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1672u); RECOMP_ABI_CALL(0x001CF02Eu, sub_001CF02E); /* call 0x001CF02E */

loc_001F1672: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1634; /* jne: not equal / not zero */

loc_001F1676: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebx + 0x4C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F168Bu); RECOMP_ABI_CALL(0x001CEFFAu, sub_001CEFFA); /* call 0x001CEFFA */

loc_001F168B: ;
    ecx = ebx + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = ebx + 0xCC;
    PUSH32(esp, ecx);
    eax = esi + 0x214;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F16AAu); RECOMP_ABI_CALL(0x001FD3B1u, sub_001FD3B1); /* call 0x001FD3B1 */

loc_001F16AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F16BB; /* jge: greater or equal (signed >=) */

loc_001F16AE: ;
    edi = 0x80150008u;

loc_001F16B3: ;
    esi = MEM32(ebp + -4);
    goto loc_001F13CD;

loc_001F16BB: ;
    edx = esi + 0x3D4;
    PUSH32(esp, 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx + 0xD4;
    eax = esi + 0x214;
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 8) = 4;

loc_001F16E0: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F170D; /* jne: not equal / not zero */

loc_001F16E7: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F170D; /* jne: not equal / not zero */

loc_001F16EF: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F170D; /* jne: not equal / not zero */

loc_001F16F5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F170D; /* jne: not equal / not zero */

loc_001F16FA: ;
    PUSH32(esp, 0x1C);
    edi = eax + 0x1C0;
    POP32(esp, ecx);
    esi = eax;
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
    esi = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0x10);

loc_001F170D: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_001F16E0; /* jne: not equal / not zero */

loc_001F171B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0xD0) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1729u); RECOMP_ABI_CALL(0x001EF86Au, sub_001EF86A); /* call 0x001EF86A */

loc_001F1729: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F13F7;

}

/**
 * sub_001F1730
 * Original: 0x001F1730 - 0x001F17D5 (165 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x8C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F174A; /* jne: not equal / not zero */

loc_001F1740: ;
    eax = 0x80150005u;
    goto loc_001F17D0;

loc_001F174A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F174Fu); RECOMP_ABI_CALL(0x0015D690u, sub_0015D690); /* call 0x0015D690 */

loc_001F174F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F175B; /* jne: not equal / not zero */

loc_001F1754: ;
    eax = 0x80151080u;
    goto loc_001F17D0;

loc_001F175B: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -2244;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F176Du); RECOMP_ABI_CALL(0x001F2393u, sub_001F2393); /* call 0x001F2393 */

loc_001F176D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F17D0; /* jl: less (signed <) */

loc_001F1771: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F177E; /* jne: not equal / not zero */

loc_001F1777: ;
    eax = 0x80151081u;
    goto loc_001F17D0;

loc_001F177E: ;
    _fa = (uint32_t)(MEM8(ebp + -2216)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2216), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F178E; /* je: equal / zero */

loc_001F1787: ;
    eax = 0x80151082u;
    goto loc_001F17D0;

loc_001F178E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x70);
    POP32(esp, ecx);
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -452;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ebp + -2244;
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = ebp + -452;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -452;
    PUSH32(esp, MEM32(ebp + 8));
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
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F17C8u); RECOMP_ABI_CALL(0x001F0D97u, sub_001F0D97); /* call 0x001F0D97 */

loc_001F17C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_001F17D0; /* jl: less (signed <) */

loc_001F17CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F17D0: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F17D5
 * Original: 0x001F17D5 - 0x001F1837 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F17D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F17D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, 0x281770);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F17F4u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_001F17F4: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    POP32(esp, edi);
    esi = ebp + -300;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = 0x2F7AE8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001F1815: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1815; /* jne: not equal / not zero */

loc_001F181F: ;
    SET_LO16(edx, MEM16(ecx));
    eax = ZX16(LO16(edx));
    eax = ebp + eax + -300;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1837(); return; } /* je: equal / zero */

loc_001F1832: ;
    MEM8(eax) = 0x5C;
    g_seh_ebp = ebp; sub_001F183B(); return; /* tail jmp 0x001F183B */

}

/**
 * sub_001F1837
 * Original: 0x001F1837 - 0x001F183B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1837(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1837: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(edx);

    g_seh_ebp = ebp; sub_001F183B(); return; /* fallthrough 0x001F183B */

}

/**
 * sub_001F183B
 * Original: 0x001F183B - 0x001F18C8 (141 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F183B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F183B: ;
    eax = ZX16(MEM16(ecx));
    edx = ebp + -32;
    ecx = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + eax + -299;

loc_001F184C: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx + edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F184C; /* jne: not equal / not zero */

loc_001F1856: ;
    eax = ebp + -300;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x001F1867u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1861u); } /* indirect call */
    }

loc_001F1867: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80);
    eax = ebp + -20;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120117);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x001F189Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1895u); } /* indirect call */
    }

loc_001F189B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F18B4; /* jl: less (signed <) */

loc_001F18A1: ;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BBAC); PUSH32(esp, 0x001F18AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F18A8u); } /* indirect call */
    }

loc_001F18AE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F18D8(); return; } /* jge: greater or equal (signed >=) */

loc_001F18B4: ;
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F18BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F18BBu); } /* indirect call */
    }

loc_001F18BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F18C8(); return; } /* jg: greater (signed >) */

loc_001F18C2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F18C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F18C2u); } /* indirect call */
    }

loc_001F18C4: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_001F18D8(); return; /* tail jmp 0x001F18D8 */

}

/**
 * sub_001F18C8
 * Original: 0x001F18C8 - 0x001F18D8 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F18C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F18C8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F18CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F18C8u); } /* indirect call */
    }

loc_001F18CA: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x80070000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001F18D8(); return; /* fallthrough 0x001F18D8 */

}

/**
 * sub_001F18D8
 * Original: 0x001F18D8 - 0x001F18E1 (9 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F18D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F18D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F18E1
 * Original: 0x001F18E1 - 0x001F192C (75 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F18E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F18E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 8);
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ebp + -268;
    PUSH32(esp, 0x281778);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1903u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_001F1903: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -268;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x001F1917u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1911u); } /* indirect call */
    }

loc_001F1917: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBB8); PUSH32(esp, 0x001F1921u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F191Bu); } /* indirect call */
    }

loc_001F1921: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001F1928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1922u); } /* indirect call */
    }

loc_001F1928: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F192C
 * Original: 0x001F192C - 0x001F1942 (22 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F192C(void)
{

loc_001F192C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x2F7AE8);
    PUSH32(esp, 0x2F7AE0);
    PUSH32(esp, 0x001F193Fu); RECOMP_ABI_CALL(0x001F17D5u, sub_001F17D5); /* call 0x001F17D5 */

loc_001F193F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1942
 * Original: 0x001F1942 - 0x001F194A (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1942(void)
{

loc_001F1942: ;
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x001F1949u); RECOMP_ABI_CALL(0x001F18E1u, sub_001F18E1); /* call 0x001F18E1 */

loc_001F1949: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1969
 * Original: 0x001F1969 - 0x001F19D9 (112 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1969(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1969: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2F0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B0B(); return; } /* jne: not equal / not zero */

loc_001F1982: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1AC1(); return; } /* je: equal / zero */

loc_001F1990: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1AF3(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F199B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F19AD; /* jb: below (unsigned <) */

loc_001F19A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1AF3(); return; } /* jb: below (unsigned <) */

loc_001F19AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2F9;
    edi = ebx + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F19D9(); return; } /* jne: not equal / not zero */

loc_001F19BE: ;
    MEM32(ebx + 0x10) = 0x9FC;
    ecx = MEM32(0x9701A4);
    _fb = (uint32_t)(0x9FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x9FC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F19D7u); RECOMP_ABI_CALL(0x001ECA95u, sub_001ECA95); /* call 0x001ECA95 */

loc_001F19D7: ;
    g_seh_ebp = ebp; sub_001F19DD(); return; /* tail jmp 0x001F19DD */

}

/**
 * sub_001F19D9
 * Original: 0x001F19D9 - 0x001F19DD (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F19D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F19D9: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001F19DD(); return; /* fallthrough 0x001F19DD */

}

/**
 * sub_001F19DD
 * Original: 0x001F19DD - 0x001F1AC1 (228 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F19DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F19DD: ;
    eax = MEM32(0x10118);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1D4), 0x56525347 (32-bit) */
    edi = MEM32(0x22BB40);
    ebx = MEM32(0x22BB58);
    if (CMP_EQ(_fa, _fb)) goto loc_001F1A5B; /* je: equal / zero */

loc_001F19FE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1A0C; /* je: equal / zero */

loc_001F1A04: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001F1A0Cu); RECOMP_ABI_CALL(0x000AF587u, sub_000AF587); /* call 0x000AF587 */

loc_001F1A0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAA6A7C);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001F1A17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1A15u); } /* indirect call */
    }

loc_001F1A17: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -24;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x40;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001F1A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1A3Du); } /* indirect call */
    }

loc_001F1A3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F1A5B; /* jl: less (signed <) */

loc_001F1A46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = 0xAA6A6C;
    MEM32(ebp + 8) = 0xAA6A48;
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x001F1A5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1A55u); } /* indirect call */
    }

loc_001F1A5B: ;
    eax = MEM32(0x10118);
    _fa = (uint32_t)(MEM32(eax + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1D4), 0x56525347 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1A72; /* je: equal / zero */

loc_001F1A6C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F1ABE; /* jge: greater or equal (signed >=) */

loc_001F1A72: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAA6A20);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001F1A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1A7Bu); } /* indirect call */
    }

loc_001F1A7D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -24;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x40;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001F1AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1AA3u); } /* indirect call */
    }

loc_001F1AA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1ABE; /* jl: less (signed <) */

loc_001F1AA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = 0xAA6A6C;
    MEM32(ebp + 8) = 0xAA6A08;
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x001F1ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1AB8u); } /* indirect call */
    }

loc_001F1ABE: ;
    ebx = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001F1AC1(); return; /* fallthrough 0x001F1AC1 */

}

/**
 * sub_001F1AC1
 * Original: 0x001F1AC1 - 0x001F1AF3 (50 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1AC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1AC1: ;
    ecx = MEM32(0x9701A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1AD0; /* je: equal / zero */

loc_001F1ACB: ;
    PUSH32(esp, 0x001F1AD0u); RECOMP_ABI_CALL(0x001E54EDu, sub_001E54ED); /* call 0x001E54ED */

loc_001F1AD0: ;
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + eax + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F1AEEu); RECOMP_ABI_CALL(0x000AA23Fu, sub_000AA23F); /* call 0x000AA23F */

loc_001F1AEE: ;
    g_seh_ebp = ebp; sub_001F1C5F(); return; /* tail jmp 0x001F1C5F */

}

/**
 * sub_001F1AF3
 * Original: 0x001F1AF3 - 0x001F1B0B (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1AF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1AF3: ;
    eax = MEM32(0x10118);
    _fa = (uint32_t)(MEM32(eax + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1D4), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1AC1(); return; } /* jne: not equal / not zero */

loc_001F1B04: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = ecx;
    g_seh_ebp = ebp; sub_001F1AC1(); return; /* tail jmp 0x001F1AC1 */

}

/**
 * sub_001F1B0B
 * Original: 0x001F1B0B - 0x001F1B5C (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1B0B: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    MEM32(ebp + 8) = eax;
    edi = 0x168;
    PUSH32(esp, edi);
    eax = ebp + -752;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0x001F1B2Eu); RECOMP_ABI_CALL(0x000AF2EBu, sub_000AF2EB); /* call 0x000AF2EB */

loc_001F1B2E: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    SET_LO8(edx, 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_001F1B3A; /* je: equal / zero */

loc_001F1B36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B5C(); return; } /* jne: not equal / not zero */

loc_001F1B3A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B5C(); return; } /* jne: not equal / not zero */

loc_001F1B40: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B5C(); return; } /* jne: not equal / not zero */

loc_001F1B45: ;
    eax = esi + 3;
    esi = eax;
    ecx = ebp + -752;
    MEM32(ebp + -4) = 1;
    g_seh_ebp = ebp; sub_001F1BEA(); return; /* tail jmp 0x001F1BEA */

}

/**
 * sub_001F1B5C
 * Original: 0x001F1B5C - 0x001F1B95 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1B5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1B64; /* je: equal / zero */

loc_001F1B60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B64: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B6A: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B6F: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B75: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1B82; /* je: equal / zero */

loc_001F1B7D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B82: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1B95(); return; } /* jne: not equal / not zero */

loc_001F1B87: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x2F7AF0);
    g_seh_ebp = ebp; sub_001F1BCC(); return; /* tail jmp 0x001F1BCC */

}

/**
 * sub_001F1B95
 * Original: 0x001F1B95 - 0x001F1BCC (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1B95: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1C5C(); return; } /* je: equal / zero */

loc_001F1B9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1BAB; /* je: equal / zero */

loc_001F1BA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1C5C(); return; } /* jne: not equal / not zero */

loc_001F1BAB: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1C5C(); return; } /* jne: not equal / not zero */

loc_001F1BB5: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1C5C(); return; } /* jne: not equal / not zero */

loc_001F1BBE: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F7AC0);
    PUSH32(esp, 0x236394);

    g_seh_ebp = ebp; sub_001F1BCC(); return; /* fallthrough 0x001F1BCC */

}

/**
 * sub_001F1BCC
 * Original: 0x001F1BCC - 0x001F1BEA (30 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1BCC: ;
    eax = ebp + -392;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1BD9u); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_001F1BD9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F1C5C(); return; } /* jl: less (signed <) */

loc_001F1BE0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -392;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F1BEA(); return; /* fallthrough 0x001F1BEA */

}

/**
 * sub_001F1BEA
 * Original: 0x001F1BEA - 0x001F1BF5 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1BEA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1BF5(); return; } /* je: equal / zero */

loc_001F1BF0: ;
    edx = MEM32(ebp + 0x14);
    g_seh_ebp = ebp; sub_001F1BF8(); return; /* tail jmp 0x001F1BF8 */

}

/**
 * sub_001F1BF5
 * Original: 0x001F1BF5 - 0x001F1BF8 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1BF5: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001F1BF8(); return; /* fallthrough 0x001F1BF8 */

}

/**
 * sub_001F1BF8
 * Original: 0x001F1BF8 - 0x001F1C5C (100 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1BF8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1C07u); RECOMP_ABI_CALL(0x000AA0DBu, sub_000AA0DB); /* call 0x000AA0DB */

loc_001F1C07: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F1C15; /* je: equal / zero */

loc_001F1C10: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1C22; /* je: equal / zero */

loc_001F1C15: ;
    PUSH32(esp, esi);
    eax = ebp + -752;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1C22u); RECOMP_ABI_CALL(0x000AF37Du, sub_000AF37D); /* call 0x000AF37D */

loc_001F1C22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1C53; /* jl: less (signed <) */

loc_001F1C26: ;
    ecx = MEM32(0x9701A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1C35; /* je: equal / zero */

loc_001F1C30: ;
    PUSH32(esp, 0x001F1C35u); RECOMP_ABI_CALL(0x001E54EDu, sub_001E54ED); /* call 0x001E54ED */

loc_001F1C35: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1C4B; /* je: equal / zero */

loc_001F1C45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001F1C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1C48u); } /* indirect call */
    }

loc_001F1C4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x22BB30); PUSH32(esp, 0x001F1C53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1C4Du); } /* indirect call */
    }

loc_001F1C53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001F1C5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1C54u); } /* indirect call */
    }

loc_001F1C5A: ;
    g_seh_ebp = ebp; sub_001F1C5F(); return; /* tail jmp 0x001F1C5F */

}

/**
 * sub_001F1C5C
 * Original: 0x001F1C5C - 0x001F1C5F (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1C5C: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);

    g_seh_ebp = ebp; sub_001F1C5F(); return; /* fallthrough 0x001F1C5F */

}

/**
 * sub_001F1C5F
 * Original: 0x001F1C5F - 0x001F1C66 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1C5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F1C66
 * Original: 0x001F1C66 - 0x001F1CE6 (128 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1C66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1C66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F1CB2; /* je: equal / zero */

loc_001F1C7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -3072) = eax;
    MEM32(ebp + -3064) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + -3068) = ebx;
    MEM32(ebp + -3060) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1CB2u); RECOMP_ABI_CALL(0x000AA099u, sub_000AA099); /* call 0x000AA099 */

loc_001F1CB2: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    edi = 0xAA6AD0;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0xAA6AC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1CCBu); RECOMP_ABI_CALL(0x000AF3FEu, sub_000AF3FE); /* call 0x000AF3FE */

loc_001F1CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1CD4; /* jl: less (signed <) */

loc_001F1CCF: ;
    edi = 0xAA6AB0;

loc_001F1CD4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1CDDu); RECOMP_ABI_CALL(0x001F1969u, sub_001F1969); /* call 0x001F1969 */

loc_001F1CDD: ;
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
 * sub_001F1CE6
 * Original: 0x001F1CE6 - 0x001F1CFC (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1CE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1CE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1CFC(); return; } /* jne: not equal / not zero */

loc_001F1CF5: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F1D3D(); return; /* tail jmp 0x001F1D3D */

}

/**
 * sub_001F1CFC
 * Original: 0x001F1CFC - 0x001F1D3D (65 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F1CFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1CFC: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -3072) = eax;
    MEM32(ebp + -3064) = eax;
    MEM32(ebp + -3060) = eax;
    MEM32(ebp + -3052) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -3048) = eax;
    MEM32(ebp + -3068) = edx;
    edx = MEM32(ecx + 4);
    eax = ebp + -3072;
    PUSH32(esp, eax);
    MEM32(ebp + -3056) = edx;
    PUSH32(esp, 0x001F1D3Bu); RECOMP_ABI_CALL(0x001F1C66u, sub_001F1C66); /* call 0x001F1C66 */

loc_001F1D3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F1D3D(); return; /* fallthrough 0x001F1D3D */

}

/**
 * sub_001F1D3D
 * Original: 0x001F1D3D - 0x001F1D41 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1D3D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1D41
 * Original: 0x001F1D41 - 0x001F1D57 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1D41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1D41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1D57(); return; } /* jne: not equal / not zero */

loc_001F1D50: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F1DB8(); return; /* tail jmp 0x001F1DB8 */

}

/**
 * sub_001F1D57
 * Original: 0x001F1D57 - 0x001F1DB8 (97 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1D57: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBE4);
    PUSH32(esp, eax);
    MEM32(ebp + -3072) = edx;
    MEM32(ebp + -3064) = edx;
    MEM32(ebp + -3060) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    eax = ebp + -3044;
    PUSH32(esp, eax);
    MEM32(ebp + -3068) = esi;
    MEM32(ebp + -3056) = edx;
    MEM32(ebp + -3052) = 1;
    MEM32(ebp + -3048) = ecx;
    PUSH32(esp, 0x001F1DA6u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F1DA6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1DB5u); RECOMP_ABI_CALL(0x001F1C66u, sub_001F1C66); /* call 0x001F1C66 */

loc_001F1DB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F1DB8(); return; /* fallthrough 0x001F1DB8 */

}

/**
 * sub_001F1DB8
 * Original: 0x001F1DB8 - 0x001F1DBC (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1DB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1DB8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1DBC
 * Original: 0x001F1DBC - 0x001F1E2A (110 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1DBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1DBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1DD0; /* jne: not equal / not zero */

loc_001F1DC9: ;
    eax = 0x80150005u;
    goto loc_001F1E26;

loc_001F1DD0: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    MEM32(ebp + -3052) = MEM32(ebp + -3052) & 0;
    _fa = (uint32_t)(MEM32(ebp + -3052)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -3072) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -3068) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -3060) = eax;
    eax = MEM32(ecx + 4);
    MEM32(ebp + -3056) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0);
    MEM32(ebp + -3048) = eax;
    PUSH32(esp, 2);
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6AE0);
    MEM32(ebp + -3064) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1E24u); RECOMP_ABI_CALL(0x001F1969u, sub_001F1969); /* call 0x001F1969 */

loc_001F1E24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F1E26: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1E2A
 * Original: 0x001F1E2A - 0x001F1E38 (14 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E2A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1E2A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1E38
 * Original: 0x001F1E38 - 0x001F1E3B (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E38(void)
{

loc_001F1E38: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1E3B
 * Original: 0x001F1E3B - 0x001F1E46 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E3B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1E46(); return; } /* jne: not equal / not zero */

loc_001F1E3F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F1E4D(); return; /* tail jmp 0x001F1E4D */

}

/**
 * sub_001F1E46
 * Original: 0x001F1E46 - 0x001F1E4D (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E46: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001F1E4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1E4Bu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001F1E4D(); return; /* fallthrough 0x001F1E4D */

}

/**
 * sub_001F1E4D
 * Original: 0x001F1E4D - 0x001F1E50 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E4D(void)
{

loc_001F1E4D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1E50
 * Original: 0x001F1E50 - 0x001F1E5B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1E5B(); return; } /* jne: not equal / not zero */

loc_001F1E54: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F1E65(); return; /* tail jmp 0x001F1E65 */

}

/**
 * sub_001F1E5B
 * Original: 0x001F1E5B - 0x001F1E65 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F1E5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E5B: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001F1E63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1E60u); } /* indirect call */
    }

loc_001F1E63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F1E65(); return; /* fallthrough 0x001F1E65 */

}

/**
 * sub_001F1E65
 * Original: 0x001F1E65 - 0x001F1E68 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E65(void)
{

loc_001F1E65: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1E68
 * Original: 0x001F1E68 - 0x001F1E8F (39 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E68: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x72C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x72C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F1E99(); return; } /* jne: not equal / not zero */

loc_001F1E74: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0x001F1E81u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F1E81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1E74; /* je: equal / zero */

loc_001F1E85: ;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F1E8F(); return; } /* jge: greater or equal (signed >=) */

loc_001F1E87: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001ECBC4(); return; /* tail jmp 0x001ECBC4 */

}

/**
 * sub_001F1E8F
 * Original: 0x001F1E8F - 0x001F1E99 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1E8F: ;
    MEM32(esi + 0x72C) = 2;

    g_seh_ebp = ebp; sub_001F1E99(); return; /* fallthrough 0x001F1E99 */

}

/**
 * sub_001F1E99
 * Original: 0x001F1E99 - 0x001F1E9B (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E99(void)
{

loc_001F1E99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1E9B
 * Original: 0x001F1E9B - 0x001F1EC4 (41 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1E9B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B);
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
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_001F1EC1; /* jns: not sign (positive) */

loc_001F1EBE: ;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F1EC1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F1EC9
 * Original: 0x001F1EC9 - 0x001F1ED3 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1EC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001F1EC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB58)); return; /* indirect tail jmp */

}

/**
 * sub_001F1ED9
 * Original: 0x001F1ED9 - 0x001F1F65 (140 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1ED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1ED9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0xAA670C);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    esi = 0xAA6AF8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F0Fu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F1F0F: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F26u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F1F26: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F31u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001F1F31: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F43u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001F1F43: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F60u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001F1F60: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F1F65
 * Original: 0x001F1F65 - 0x001F1FF0 (139 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1F65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1F65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0xAA670C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    esi = 0xAA6AF8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1F9Cu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F1F9C: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1FB1u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F1FB1: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1FBCu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001F1FBC: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1FCEu); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001F1FCE: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1FEAu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001F1FEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F1FF0
 * Original: 0x001F1FF0 - 0x001F2053 (99 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F1FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2053(); return; } /* je: equal / zero */

loc_001F2013: ;
    PUSH32(esp, MEM32(0x22BB9C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F201Eu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F201E: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x22BB9C);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6978);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2047u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F2047: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_seh_ebp = ebp; sub_001F2090(); return; /* tail jmp 0x001F2090 */

}

/**
 * sub_001F2053
 * Original: 0x001F2053 - 0x001F2090 (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2053(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2053: ;
    PUSH32(esp, 0xAA6B0C);
    PUSH32(esp, 0x001F205Du); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F205D: ;
    eax = MEM32(0xAA670C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6AF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6978);
    PUSH32(esp, 0x001F2084u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F2084: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6AF8);

    g_seh_ebp = ebp; sub_001F2090(); return; /* fallthrough 0x001F2090 */

}

/**
 * sub_001F2090
 * Original: 0x001F2090 - 0x001F20E5 (85 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2090: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6964);
    PUSH32(esp, 0x001F209Bu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F209B: ;
    eax = ebp + -32;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F20A6u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001F20A6: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F20B8u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001F20B8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -436;
    PUSH32(esp, eax);
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F20D2u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001F20D2: ;
    eax = MEM32(ebp + -52);
    MEM32(ebx + 0x64) = eax;
    eax = MEM32(ebp + -48);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x68) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F20E5
 * Original: 0x001F20E5 - 0x001F218C (167 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F20E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F20E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F218C(); return; } /* je: equal / zero */

loc_001F20FE: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x22BB9C);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F212Du); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F212D: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2142u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F2142: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F214Du); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001F214D: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F215Fu); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001F215F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2175u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001F2175: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x22BB9C));
    g_seh_ebp = ebp; sub_001F2214(); return; /* tail jmp 0x001F2214 */

}

/**
 * sub_001F218C
 * Original: 0x001F218C - 0x001F2214 (136 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F218C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F218C: ;
    eax = MEM32(0xAA670C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    esi = 0xAA6AF8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    PUSH32(esp, 0x001F21B7u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F21B7: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    PUSH32(esp, 0x001F21CAu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F21CA: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F21D5u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001F21D5: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F21E7u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001F21E7: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -436;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F2203u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001F2203: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6B0C);

    g_seh_ebp = ebp; sub_001F2214(); return; /* fallthrough 0x001F2214 */

}

/**
 * sub_001F2214
 * Original: 0x001F2214 - 0x001F222B (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2214(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2214: ;
    PUSH32(esp, 0x001F2219u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001F2219: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = ebp + -52;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001F222F(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001F222B(); return; /* fallthrough 0x001F222B */

}

/**
 * sub_001F222B
 * Original: 0x001F222B - 0x001F222F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F222B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F222B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F2251(); return; /* tail jmp 0x001F2251 */

}

/**
 * sub_001F222F
 * Original: 0x001F222F - 0x001F2251 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F222F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F222F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F222B(); return; } /* jne: not equal / not zero */

loc_001F2238: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F222B(); return; } /* jne: not equal / not zero */

loc_001F223D: ;
    _fa = (uint32_t)(MEM8(eax + 0x1B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1B), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F222B(); return; } /* jne: not equal / not zero */

loc_001F2242: ;
    _fa = (uint32_t)(MEM8(eax + 0x37)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x37), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F222B(); return; } /* jne: not equal / not zero */

loc_001F2247: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x4F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4F), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;

    g_seh_ebp = ebp; sub_001F2251(); return; /* fallthrough 0x001F2251 */

}

/**
 * sub_001F2251
 * Original: 0x001F2251 - 0x001F2258 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2251(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2251: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F2258
 * Original: 0x001F2258 - 0x001F2374 (284 bytes, 116 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2258(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2258: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 8);
    ebx = ecx;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2271u); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F2271: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F236E; /* je: equal / zero */

loc_001F2279: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 0x724);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F22B3; /* je: equal / zero */

loc_001F228E: ;
    edi = ebp + -24;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esi);
    MEM32(ebp + -48) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebp + -44) = eax;
    eax = ebp + -48;
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F22B3u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F22B3: ;
    edi = MEM32(ebp + 0x1C);
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F22E5; /* jbe: below or equal (unsigned <=) */

loc_001F22BE: ;
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + 0xC) = edx;

loc_001F22C4: ;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F22DC; /* jne: not equal / not zero */

loc_001F22CD: ;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2374(); return; } /* je: equal / zero */

loc_001F22DC: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F22C4; /* jb: below (unsigned <) */

loc_001F22E5: ;
    ebx = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F2306; /* jbe: below or equal (unsigned <=) */

loc_001F22EE: ;
    eax = MEM32(ebx + edx * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F2306; /* jb: below (unsigned <) */

loc_001F22F7: ;
    if (CMP_A(_fa, _fb)) goto loc_001F2301; /* ja: above (unsigned >) */

loc_001F22F9: ;
    eax = MEM32(ebx + edx * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F2306; /* jb: below (unsigned <) */

loc_001F2301: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F22EE; /* jb: below (unsigned <) */

loc_001F2306: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F2349; /* jbe: below or equal (unsigned <=) */

loc_001F230A: ;
    eax = ebx + ecx * 8;
    MEM32(ebp + 0xC) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = ecx;

loc_001F231D: ;
    PUSH32(esp, 0x1C);
    esi = eax + -112;
    edi = eax;
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
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + -8);
    MEM32(ecx) = esi;
    esi = MEM32(ecx + -4);
    MEM32(ecx + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;
    if ((_fa != 0)) goto loc_001F231D; /* jne: not equal / not zero */

loc_001F2343: ;
    edi = MEM32(ebp + 0x1C);
    esi = MEM32(ebp + 8);

loc_001F2349: ;
    ecx = MEM32(ebp + -4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F235Eu); RECOMP_ABI_CALL(0x001F1E9Bu, sub_001F1E9B); /* call 0x001F1E9B */

loc_001F235E: ;
    eax = MEM32(ebp + -40);
    MEM32(ebx + edx * 8) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebx + edx * 8 + 4) = eax;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_001F236E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F236D
 * Original: 0x001F236D - 0x001F2374 (7 bytes, 5 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F236D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F236D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F2374
 * Original: 0x001F2374 - 0x001F2393 (31 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2374: ;
    ecx = MEM32(ebp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x60) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F236D(); return; } /* jae: above or equal (unsigned >=) */

loc_001F2384: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F2391u); RECOMP_ABI_CALL(0x001F1E9Bu, sub_001F1E9B); /* call 0x001F1E9B */

loc_001F2391: ;
    g_seh_ebp = ebp; sub_001F236D(); return; /* tail jmp 0x001F236D */

}

/**
 * sub_001F2393
 * Original: 0x001F2393 - 0x001F23AD (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2393: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F23AD(); return; } /* jne: not equal / not zero */

loc_001F23A3: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F250A(); return; /* tail jmp 0x001F250A */

}

/**
 * sub_001F23AD
 * Original: 0x001F23AD - 0x001F23D6 (41 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F23AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    PUSH32(esp, 0x001F23C8u); RECOMP_ABI_CALL(0x001F1E68u, sub_001F1E68); /* call 0x001F1E68 */

loc_001F23C8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F23D6(); return; } /* jne: not equal / not zero */

loc_001F23D1: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001F23D8(); return; /* tail jmp 0x001F23D8 */

}

/**
 * sub_001F23D6
 * Original: 0x001F23D6 - 0x001F23D8 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F23D6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F23D8(); return; /* fallthrough 0x001F23D8 */

}

/**
 * sub_001F23D8
 * Original: 0x001F23D8 - 0x001F2419 (65 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F23D8: ;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    edx = ebp + -596;
    PUSH32(esp, edx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F23F4u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F23F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2403; /* jne: not equal / not zero */

loc_001F23F8: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -596;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F2403: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    esi = ebp + -596;
    edi = ebp + -104;
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    esi = ebp + -100;

    g_seh_ebp = ebp; sub_001F2419(); return; /* fallthrough 0x001F2419 */

}

/**
 * sub_001F2419
 * Original: 0x001F2419 - 0x001F242C (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2419(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2419: ;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F247C(); return; } /* je: equal / zero */

loc_001F241E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F242C(); return; } /* jne: not equal / not zero */

loc_001F2427: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001F242E(); return; /* tail jmp 0x001F242E */

}

/**
 * sub_001F242C
 * Original: 0x001F242C - 0x001F242E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F242C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F242C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F242E(); return; /* fallthrough 0x001F242E */

}

/**
 * sub_001F242E
 * Original: 0x001F242E - 0x001F247C (78 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F242E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F242E: ;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    edx = ebp + -596;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -4);
    ecx = ecx + edx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F244Eu); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F244E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F245F; /* jne: not equal / not zero */

loc_001F2452: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -596;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F245F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -724;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebp + -596;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F247Cu); RECOMP_ABI_CALL(0x001F2258u, sub_001F2258); /* call 0x001F2258 */

    g_seh_ebp = ebp; sub_001F247C(); return; /* fallthrough 0x001F247C */

}

/**
 * sub_001F247C
 * Original: 0x001F247C - 0x001F250A (142 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F247C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F247C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2419(); return; } /* jb: below (unsigned <) */

loc_001F2488: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2506; /* je: equal / zero */

loc_001F2491: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2225E0);
    PUSH32(esp, 0x001F249Du); RECOMP_ABI_CALL(0x00223C51u, sub_00223C51); /* call 0x00223C51 */

loc_001F249D: ;
    MEM32(ebp + -8) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F24A2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = esi;

loc_001F24A7: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F24F6; /* je: equal / zero */

loc_001F24B6: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x50);
    eax = ebp + -596;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F24C8u); RECOMP_ABI_CALL(0x00223A83u, sub_00223A83); /* call 0x00223A83 */

loc_001F24C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F24F6; /* jl: less (signed <) */

loc_001F24CC: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -724;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, eax);
    eax = esi;
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -596;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F24F6u); RECOMP_ABI_CALL(0x001F2258u, sub_001F2258); /* call 0x001F2258 */

loc_001F24F6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F24A7; /* jb: below (unsigned <) */

loc_001F2500: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F24A2; /* jb: below (unsigned <) */

loc_001F2506: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F250A(); return; /* fallthrough 0x001F250A */

}

/**
 * sub_001F250A
 * Original: 0x001F250A - 0x001F250F (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F250A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F250A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F250F
 * Original: 0x001F250F - 0x001F2616 (263 bytes, 95 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F250F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F250F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x250) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x250;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2529; /* jne: not equal / not zero */

loc_001F251F: ;
    eax = 0x80150005u;
    goto loc_001F2611;

loc_001F2529: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F254B; /* jne: not equal / not zero */

loc_001F2546: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    goto loc_001F254D;

loc_001F254B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F254D: ;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    edx = ebp + -592;
    PUSH32(esp, edx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2569u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F2569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2578; /* jne: not equal / not zero */

loc_001F256D: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -592;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F2578: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    esi = ebp + -592;
    edi = ebp + -100;
    eax = ebp + -96;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = eax;

loc_001F258E: ;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2603; /* je: equal / zero */

loc_001F2598: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F25A4; /* jne: not equal / not zero */

loc_001F25A1: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);

loc_001F25A4: ;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    edx = ebp + -592;
    PUSH32(esp, edx);
    ecx = ecx + esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F25C1u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F25C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F25D0; /* jne: not equal / not zero */

loc_001F25C5: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -592;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F25D0: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -592;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F25E1u); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F25E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2603; /* je: equal / zero */

loc_001F25E5: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -592;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2601u); RECOMP_ABI_CALL(0x001F1E9Bu, sub_001F1E9B); /* call 0x001F1E9B */

loc_001F2601: ;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F2603: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F258E; /* jb: below (unsigned <) */

loc_001F260D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_001F2611: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F2616
 * Original: 0x001F2616 - 0x001F268C (118 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2616(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2616: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F262A; /* jne: not equal / not zero */

loc_001F2623: ;
    eax = 0x80150005u;
    goto loc_001F2688;

loc_001F262A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    PUSH32(esp, 0x6C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x50);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = 0x80150006u;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2650u); RECOMP_ABI_CALL(0x00223A83u, sub_00223A83); /* call 0x00223A83 */

loc_001F2650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F2683; /* jl: less (signed <) */

loc_001F2654: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -112;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2662u); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F2662: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2683; /* je: equal / zero */

loc_001F2666: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -4);
    esi = esi | 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -112;
    esi = esi << 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2681u); RECOMP_ABI_CALL(0x001F1E9Bu, sub_001F1E9B); /* call 0x001F1E9B */

loc_001F2681: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2683: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

loc_001F2688: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F268C
 * Original: 0x001F268C - 0x001F26A3 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F268C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F268C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0x80 (8-bit) */
    MEM32(ebp + -16) = ecx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F26A3(); return; } /* jne: not equal / not zero */

loc_001F269E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F2722(); return; /* tail jmp 0x001F2722 */

}

/**
 * sub_001F26A3
 * Original: 0x001F26A3 - 0x001F2722 (127 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F26A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F26A3: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2225E0);
    PUSH32(esp, 0x001F26B2u); RECOMP_ABI_CALL(0x00223C51u, sub_00223C51); /* call 0x00223C51 */

loc_001F26B2: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, edi);

loc_001F26BA: ;
    eax = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = eax;

loc_001F26C2: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F270A; /* je: equal / zero */

loc_001F26D1: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x50);
    eax = ebp + -124;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001F26E2u); RECOMP_ABI_CALL(0x00223A83u, sub_00223A83); /* call 0x00223A83 */

loc_001F26E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F270A; /* jl: less (signed <) */

loc_001F26E6: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    eax = ebp + -124;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F26F4u); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F26F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F270A; /* je: equal / zero */

loc_001F26F8: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x64;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esi = ebp + -24;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001F2726(); return; } /* je: equal / zero */

loc_001F270A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F26C2; /* jb: below (unsigned <) */

loc_001F2714: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F26BA; /* jb: below (unsigned <) */

loc_001F271D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F2722(); return; /* fallthrough 0x001F2722 */

}

/**
 * sub_001F271F
 * Original: 0x001F271F - 0x001F2722 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F271F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F271F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F2722(); return; /* fallthrough 0x001F2722 */

}

/**
 * sub_001F2722
 * Original: 0x001F2722 - 0x001F2726 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2722(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2722: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2726
 * Original: 0x001F2726 - 0x001F272B (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2726(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2726: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F271F(); return; /* tail jmp 0x001F271F */

}

/**
 * sub_001F272B
 * Original: 0x001F272B - 0x001F2745 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F272B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F272B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2745(); return; } /* jne: not equal / not zero */

loc_001F2740: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001F2747(); return; /* tail jmp 0x001F2747 */

}

/**
 * sub_001F2745
 * Original: 0x001F2745 - 0x001F2747 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2745: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F2747(); return; /* fallthrough 0x001F2747 */

}

/**
 * sub_001F2747
 * Original: 0x001F2747 - 0x001F27A3 (92 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2747(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2747: ;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1EC);
    edx = ebp + -492;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F2763u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F2763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2772; /* jne: not equal / not zero */

loc_001F2767: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -492;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F2772: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = ebx + 0x24;
    edi = ebp + -492;
    PUSH32(esp, 0xAA670C);
    eax = ebp + -492;
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
    ecx = ebx;
    PUSH32(esp, 0x001F2793u); RECOMP_ABI_CALL(0x001F1FF0u, sub_001F1FF0); /* call 0x001F1FF0 */

loc_001F2793: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0x56525347 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F27A3(); return; } /* jne: not equal / not zero */

loc_001F279E: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001F27A5(); return; /* tail jmp 0x001F27A5 */

}

/**
 * sub_001F27A3
 * Original: 0x001F27A3 - 0x001F27A5 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F27A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F27A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F27A5(); return; /* fallthrough 0x001F27A5 */

}

/**
 * sub_001F27A5
 * Original: 0x001F27A5 - 0x001F27C8 (35 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F27A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F27A5: ;
    ebx = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    ecx = ebp + -492;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F27BFu); RECOMP_ABI_CALL(0x001DFDCEu, sub_001DFDCE); /* call 0x001DFDCE */

loc_001F27BF: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001F27C8
 * Original: 0x001F27C8 - 0x001F27E9 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F27C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F27C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1164;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F27D5u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_001F27D5: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -24) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F27E9(); return; } /* jne: not equal / not zero */

loc_001F27DF: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F29B2(); return; /* tail jmp 0x001F29B2 */

}

/**
 * sub_001F27E9
 * Original: 0x001F27E9 - 0x001F281B (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F27E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F27E9: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0x56525347 (32-bit) */
    ecx = 0x3D8;
    edi = ebp + -4452;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = ebp + -516;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F281B(); return; } /* jne: not equal / not zero */

loc_001F2816: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001F281D(); return; /* tail jmp 0x001F281D */

}

/**
 * sub_001F281B
 * Original: 0x001F281B - 0x001F281D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F281B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F281B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F281D(); return; /* fallthrough 0x001F281D */

}

/**
 * sub_001F281D
 * Original: 0x001F281D - 0x001F284F (50 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F281D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F281D: ;
    ebx = 0x1EC;
    PUSH32(esp, ebx);
    ecx = ebp + -516;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, 0x001F2839u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F2839: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -4452;
    eax = ebp + -516;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = eax;

    g_seh_ebp = ebp; sub_001F284F(); return; /* fallthrough 0x001F284F */

}

/**
 * sub_001F284F
 * Original: 0x001F284F - 0x001F28A4 (85 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F284F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F284F: ;
    ecx = MEM32(ebp + -16);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F291B(); return; } /* je: equal / zero */

loc_001F285C: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2868; /* jne: not equal / not zero */

loc_001F2865: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);

loc_001F2868: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = eax + ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, 0x001F287Du); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F287D: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F288Cu); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F288C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F28A4(); return; } /* jne: not equal / not zero */

loc_001F2890: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2927(); return; } /* jne: not equal / not zero */

loc_001F289A: ;
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_001F2921(); return; /* tail jmp 0x001F2921 */

}

/**
 * sub_001F28A4
 * Original: 0x001F28A4 - 0x001F291B (119 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F28A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F28A4: ;
    ecx = MEM32(edi);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2927(); return; } /* jne: not equal / not zero */

loc_001F28AD: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2927(); return; } /* jne: not equal / not zero */

loc_001F28B5: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F29A6(); return; } /* je: equal / zero */

loc_001F28C5: ;
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1EC);
    PUSH32(esp, 0x1B);
    ebx = ebp + ebx + -4452;
    POP32(esp, ecx);
    esi = eax;
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
    esi = MEM32(ebp + -4);
    MEM8(ebx + 0x1F) = MEM8(ebx + 0x1F) & 0xF;
    _fa = (uint32_t)(MEM8(ebx + 0x1F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + esi * 2;
    eax = ebp + eax * 4 + -516;
    edi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x001F2901u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001F2901: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + -24);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001F290Du); RECOMP_ABI_CALL(0x001F1FF0u, sub_001F1FF0); /* call 0x001F1FF0 */

loc_001F290D: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2945(); return; } /* jne: not equal / not zero */

loc_001F2916: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001F2947(); return; /* tail jmp 0x001F2947 */

}

/**
 * sub_001F28BB
 * Original: 0x001F28BB - 0x001F291B (96 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F28BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F28BB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F29A6(); return; } /* je: equal / zero */

loc_001F28C5: ;
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1EC);
    PUSH32(esp, 0x1B);
    ebx = ebp + ebx + -4452;
    POP32(esp, ecx);
    esi = eax;
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
    esi = MEM32(ebp + -4);
    MEM8(ebx + 0x1F) = MEM8(ebx + 0x1F) & 0xF;
    _fa = (uint32_t)(MEM8(ebx + 0x1F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + esi * 2;
    eax = ebp + eax * 4 + -516;
    edi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x001F2901u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001F2901: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + -24);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001F290Du); RECOMP_ABI_CALL(0x001F1FF0u, sub_001F1FF0); /* call 0x001F1FF0 */

loc_001F290D: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2945(); return; } /* jne: not equal / not zero */

loc_001F2916: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001F2947(); return; /* tail jmp 0x001F2947 */

}

/**
 * sub_001F291B
 * Original: 0x001F291B - 0x001F2921 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F291B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F291B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2927(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F2921(); return; /* fallthrough 0x001F2921 */

}

/**
 * sub_001F2921
 * Original: 0x001F2921 - 0x001F2927 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2921(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2921: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_001F2927(); return; /* fallthrough 0x001F2927 */

}

/**
 * sub_001F2927
 * Original: 0x001F2927 - 0x001F2945 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2927(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2927: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    MEM32(ebp + -20) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F284F(); return; } /* jb: below (unsigned <) */

loc_001F293D: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001F28BB(); return; /* tail jmp 0x001F28BB */

}

/**
 * sub_001F2945
 * Original: 0x001F2945 - 0x001F2947 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2945(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2945: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F2947(); return; /* fallthrough 0x001F2947 */

}

/**
 * sub_001F2947
 * Original: 0x001F2947 - 0x001F296B (36 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2947: ;
    eax = MEM32(edi + 0x94);
    PUSH32(esp, 0x1EC);
    PUSH32(esp, ebx);
    ecx = ecx + esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F295Eu); RECOMP_ABI_CALL(0x001DFDCEu, sub_001DFDCE); /* call 0x001DFDCE */

loc_001F295E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F296B(); return; } /* jne: not equal / not zero */

loc_001F2962: ;
    MEM32(ebp + -12) = 0x80004005u;
    g_seh_ebp = ebp; sub_001F29AD(); return; /* tail jmp 0x001F29AD */

}

/**
 * sub_001F2962
 * Original: 0x001F2962 - 0x001F296B (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2962(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2962: ;
    MEM32(ebp + -12) = 0x80004005u;
    g_seh_ebp = ebp; sub_001F29AD(); return; /* tail jmp 0x001F29AD */

}

/**
 * sub_001F296B
 * Original: 0x001F296B - 0x001F2982 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F296B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F296B: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 0x56525347 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2982(); return; } /* jne: not equal / not zero */

loc_001F297D: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001F2984(); return; /* tail jmp 0x001F2984 */

}

/**
 * sub_001F2982
 * Original: 0x001F2982 - 0x001F2984 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F2982(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2982: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F2984(); return; /* fallthrough 0x001F2984 */

}

/**
 * sub_001F2984
 * Original: 0x001F2984 - 0x001F29A6 (34 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2984(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2984: ;
    edi = MEM32(edi + 0x94);
    PUSH32(esp, 0x1EC);
    ecx = ebp + -516;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F29A0u); RECOMP_ABI_CALL(0x001DFDCEu, sub_001DFDCE); /* call 0x001DFDCE */

loc_001F29A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F29AD(); return; } /* jne: not equal / not zero */

loc_001F29A4: ;
    g_seh_ebp = ebp; sub_001F2962(); return; /* tail jmp 0x001F2962 */

}

/**
 * sub_001F29A6
 * Original: 0x001F29A6 - 0x001F29B2 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F29A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F29A6: ;
    MEM32(ebp + -12) = 0x8007000Eu;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F29B2(); return; /* fallthrough 0x001F29B2 */

}

/**
 * sub_001F29AD
 * Original: 0x001F29AD - 0x001F29B2 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F29AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F29AD: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F29B2(); return; /* fallthrough 0x001F29B2 */

}

/**
 * sub_001F29B2
 * Original: 0x001F29B2 - 0x001F29B7 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F29B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F29B2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F29B7
 * Original: 0x001F29B7 - 0x001F2B84 (461 bytes, 158 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F29B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F29B7: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0x8F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8F0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 0x60) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F29D6; /* jne: not equal / not zero */

loc_001F29CC: ;
    eax = 0x80150005u;
    goto loc_001F2B7C;

loc_001F29D6: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x78);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, 0x281778);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F29EBu); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_001F29EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x001F29FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F29F6u); } /* indirect call */
    }

loc_001F29FC: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    eax = ebp + 0x44;
    MEM32(ebp + 0x50) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x78;
    PUSH32(esp, eax);
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x54) = 0x40;
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x001F2A29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A23u); } /* indirect call */
    }

loc_001F2A29: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F2A55; /* jge: greater or equal (signed >=) */

loc_001F2A2F: ;
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2A38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A36u); } /* indirect call */
    }

loc_001F2A38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001F2A44; /* jg: greater (signed >) */

loc_001F2A3D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A3Du); } /* indirect call */
    }

loc_001F2A3F: ;
    goto loc_001F2B7A;

loc_001F2A44: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2A46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A44u); } /* indirect call */
    }

loc_001F2A46: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F2B7A;

loc_001F2A55: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    eax = ebp + -2160;
    MEM32(ebp + 0x6C) = eax;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9411C);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x78));
    MEM32(ebp + 0x64) = esi;
    MEM32(ebp + 0x68) = 0xAC;
    { uint32_t _icall_target = MEM32(0x22BB70); PUSH32(esp, 0x001F2A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A7Fu); } /* indirect call */
    }

loc_001F2A85: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F2AA6; /* jge: greater or equal (signed >=) */

loc_001F2A8B: ;
    esi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A92u); } /* indirect call */
    }

loc_001F2A94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001F2B5F; /* jg: greater (signed >) */

loc_001F2A9D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2A9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2A9Du); } /* indirect call */
    }

loc_001F2A9F: ;
    esi = eax;
    goto loc_001F2B6F;

loc_001F2AA6: ;
    esi = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x1B);
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
    MEM8(ebp + -17) = MEM8(ebp + -17) & 0xF;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + -2160)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2160), LO16(ebx) (16-bit) */
    MEM32(ebp + -40) = ebx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2AEB; /* jne: not equal / not zero */

loc_001F2AC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2ACA: ;
    SET_LO8(ecx, MEM8(ebp + eax + -2084));
    SET_LO16(edx, SX8(LO8(ecx)));
    _fa = (uint32_t)(MEM16(ebp + eax * 2 + -2160)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2 + -2160), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2B01; /* jne: not equal / not zero */

loc_001F2ADF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2AEB; /* je: equal / zero */

loc_001F2AE3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F2ACA; /* jb: below (unsigned <) */

loc_001F2AE9: ;
    goto loc_001F2B01;

loc_001F2AEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2AED: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + eax + -36));
    MEM16(ebp + eax * 2 + -2160) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F2AED; /* jb: below (unsigned <) */

loc_001F2B01: ;
    eax = MEM32(ebp + -48);
    eax = eax | MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F2B16; /* je: equal / zero */

loc_001F2B09: ;
    ecx = MEM32(ebp + 0x60);
    PUSH32(esp, ebx);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F2B16u); RECOMP_ABI_CALL(0x001F1FF0u, sub_001F1FF0); /* call 0x001F1FF0 */

loc_001F2B16: ;
    PUSH32(esp, 0x1B);
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    eax = ebp + -2160;
    MEM32(ebp + 0x6C) = eax;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98120);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x78));
    esi = ebp + -48;
    edi = ebp + -2096;
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
    MEM32(ebp + 0x64) = 0x10;
    MEM32(ebp + 0x68) = 0xAC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB70); PUSH32(esp, 0x001F2B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2B52u); } /* indirect call */
    }

loc_001F2B58: ;
    edi = eax;
    goto loc_001F2A8B;

loc_001F2B5F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001F2B61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2B5Fu); } /* indirect call */
    }

loc_001F2B61: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F2B6F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x78));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x001F2B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F2B72u); } /* indirect call */
    }

loc_001F2B78: ;
    eax = esi;

loc_001F2B7A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F2B7C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F2B84
 * Original: 0x001F2B84 - 0x001F2CA9 (293 bytes, 103 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2B84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F2B84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3DC));
    esp = esp - 0x3DC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F2B9E; /* jne: not equal / not zero */

loc_001F2B94: ;
    eax = 0x80150005u;
    goto loc_001F2C58;

loc_001F2B9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0x56525347 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    edi = ebp + -496;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_NE(_fa, _fb)) goto loc_001F2BBB; /* jne: not equal / not zero */

loc_001F2BB6: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);
    goto loc_001F2BBD;

loc_001F2BBB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2BBD: ;
    ebx = 0x1EC;
    PUSH32(esp, ebx);
    ecx = ebp + -496;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2BD9u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F2BD9: ;
    eax = ebp + -496;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = eax;

loc_001F2BE4: ;
    eax = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F2C47; /* je: equal / zero */

loc_001F2BED: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0x56525347 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F2BF9; /* jne: not equal / not zero */

loc_001F2BF6: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);

loc_001F2BF9: ;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, ebx);
    edx = ebp + -988;
    PUSH32(esp, edx);
    ecx = ecx + edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2C12u); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001F2C12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2C47; /* je: equal / zero */

loc_001F2C16: ;
    ecx = MEM32(ebp + -988);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F2C47; /* jne: not equal / not zero */

loc_001F2C23: ;
    ecx = MEM32(ebp + -984);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F2C47; /* jne: not equal / not zero */

loc_001F2C2E: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -988;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2C43u); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001F2C43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F2C5D; /* jne: not equal / not zero */

loc_001F2C47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0xC)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001F2BE4; /* jb: below (unsigned <) */

loc_001F2C51: ;
    eax = 0x80150006u;

loc_001F2C56: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F2C58: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001F2C5D: ;
    ecx = edi + edi * 2;
    ecx = ebp + ecx * 4 + -496;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56525347) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0x56525347 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ecx + 4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_NE(_fa, _fb)) goto loc_001F2C7F; /* jne: not equal / not zero */

loc_001F2C7A: ;
    PUSH32(esp, 0xC);
    POP32(esp, eax);
    goto loc_001F2C81;

loc_001F2C7F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2C81: ;
    esi = MEM32(esi + 0x94);
    PUSH32(esp, ebx);
    ecx = ebp + -496;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2C99u); RECOMP_ABI_CALL(0x001DFDCEu, sub_001DFDCE); /* call 0x001DFDCE */

loc_001F2C99: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFBFFB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80004005u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80004005u)) >> 32) & 1);
    eax = eax + 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F2C56;

}

/**
 * sub_001F2CA9
 * Original: 0x001F2CA9 - 0x001F2CE8 (63 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2CA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2CA9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x180), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2CD5; /* jne: not equal / not zero */

loc_001F2CB8: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F2CC1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F2CC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2CD5; /* je: equal / zero */

loc_001F2CC5: ;
    MEM32(esi + 0x17C) = eax;
    MEM32(esi + 0x180) = 1;

loc_001F2CD5: ;
    _fa = (uint32_t)(MEM32(esi + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x180), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2CE4; /* jne: not equal / not zero */

loc_001F2CDE: ;
    eax = MEM32(esi + 0x17C);

loc_001F2CE4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2CE8
 * Original: 0x001F2CE8 - 0x001F2D0B (35 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2CE8(void)
{

loc_001F2CE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001F2CF9u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F2CF9: ;
    PUSH32(esp, 0x8004);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F2D06u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F2D06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2D0B
 * Original: 0x001F2D0B - 0x001F2D5D (82 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2D0B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), edi (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F2D46; /* jne: not equal / not zero */

loc_001F2D1E: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F2D27u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F2D27: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2D46; /* je: equal / zero */

loc_001F2D2D: ;
    MEM32(esi + 0x170) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001F2D3C; /* jl: less (signed <) */

loc_001F2D35: ;
    ecx = ebx;
    PUSH32(esp, 0x001F2D3Cu); RECOMP_ABI_CALL(0x001EF4C7u, sub_001EF4C7); /* call 0x001EF4C7 */

loc_001F2D3C: ;
    MEM32(esi + 0x174) = 1;

loc_001F2D46: ;
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2D55; /* jne: not equal / not zero */

loc_001F2D4F: ;
    edi = MEM32(esi + 0x170);

loc_001F2D55: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2D5D
 * Original: 0x001F2D5D - 0x001F2D80 (35 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D5D(void)
{

loc_001F2D5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001F2D6Eu); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F2D6E: ;
    PUSH32(esp, 0x8005);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F2D7Bu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F2D7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2D80
 * Original: 0x001F2D80 - 0x001F2DA0 (32 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D80(void)
{

loc_001F2D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001F2D91u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F2D91: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F2D9Bu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F2D9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2DA0
 * Original: 0x001F2DA0 - 0x001F2E26 (134 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = ebp + -8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2DC4u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F2DC4: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xA));
    MEM16(esi + 0x18C) = LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xB));
    MEM16(esi + 0x18E) = LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xC));
    MEM16(esi + 0x190) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x19C) = LO8(eax);
    eax = MEM32(edi + 4);
    MEM32(esi + 0x184) = eax;
    eax = ZX8(MEM8(edi + 8));
    MEM32(esi + 0x188) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0xF));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x198) = eax;
    eax = MEM32(edi + 0xD);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x194) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2E26
 * Original: 0x001F2E26 - 0x001F2EB8 (146 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2E26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2E26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2E38; /* jne: not equal / not zero */

loc_001F2E31: ;
    eax = 0x80150005u;
    goto loc_001F2EB3;

loc_001F2E38: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A4), 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F2E4F; /* je: equal / zero */

loc_001F2E47: ;
    eax = MEM32(eax + 0x1A0);
    goto loc_001F2EB3;

loc_001F2E4F: ;
    edx = MEM32(eax + 0xC0);
    ecx = MEM32(edx + 0x11);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x11)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x11), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F2E6C; /* je: equal / zero */

loc_001F2E65: ;
    ecx = edx + 0x15;
    MEM32(ebx) = ecx;
    goto loc_001F2E6E;

loc_001F2E6C: ;
    MEM32(ebx) = esi;

loc_001F2E6E: ;
    ecx = MEM32(edx);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    esi = eax + 0x184;
    edi = ebx + 0xC;
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
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x2C) = ecx;
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x30) = ecx;
    POP32(esp, edi);
    MEM32(eax + 0x1A4) = 3;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_001F2EB3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F2EB8
 * Original: 0x001F2EB8 - 0x001F2ED5 (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2EB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2EB8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2EC0; /* jne: not equal / not zero */

loc_001F2EBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F2ED2;

loc_001F2EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2ECD; /* jne: not equal / not zero */

loc_001F2EC8: ;
    eax = 0xEA60;

loc_001F2ECD: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F2ED2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2ED5
 * Original: 0x001F2ED5 - 0x001F2F1F (74 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2ED5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2ED5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F2EE7; /* je: equal / zero */

loc_001F2EE3: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F2EE7: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2EFA; /* je: equal / zero */

loc_001F2EEE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F2EF6u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F2EF6: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F2EFA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2F0D; /* je: equal / zero */

loc_001F2F01: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F2F09u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F2F09: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F2F0D: ;
    PUSH32(esp, 0x8007);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F2F1Au); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F2F1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2F1F
 * Original: 0x001F2F1F - 0x001F2F4F (48 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2F1F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F2F4F(); return; } /* jne: not equal / not zero */

loc_001F2F2D: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xD0) = 1;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x001F2F4Du); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F2F4D: ;
    g_seh_ebp = ebp; sub_001F2F57(); return; /* tail jmp 0x001F2F57 */

}

/**
 * sub_001F2F4F
 * Original: 0x001F2F4F - 0x001F2F57 (8 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2F4F: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001F2F57u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

    g_seh_ebp = ebp; sub_001F2F57(); return; /* fallthrough 0x001F2F57 */

}

/**
 * sub_001F2F57
 * Original: 0x001F2F57 - 0x001F2F6E (23 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2F57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F2F6A; /* jne: not equal / not zero */

loc_001F2F5E: ;
    MEM32(esi + 0xD0) = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F2F6A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F2F6E
 * Original: 0x001F2F6E - 0x001F3024 (182 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F2F6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2F6E: ;
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
    PUSH32(esp, 1);
    MEM32(ebp + -4) = 0x8015300Eu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2F85u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_001F2F85: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 0x34);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2F93u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_001F2F93: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2F9Du); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_001F2F9D: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebx + 0x34;
    esi = ebp + -32;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001F301A; /* jne: not equal / not zero */

loc_001F2FAC: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2FC2; /* je: equal / zero */

loc_001F2FB2: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F301A; /* jne: not equal / not zero */

loc_001F2FBA: ;
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F301A; /* jne: not equal / not zero */

loc_001F2FC2: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2FCBu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F2FCB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2FE3; /* je: equal / zero */

loc_001F2FD1: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2FDEu); RECOMP_ABI_CALL(0x000A977Cu, sub_000A977C); /* call 0x000A977C */

loc_001F2FDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F301A; /* je: equal / zero */

loc_001F2FE3: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2FFB; /* je: equal / zero */

loc_001F2FE9: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebx + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F2FF6u); RECOMP_ABI_CALL(0x000A977Cu, sub_000A977C); /* call 0x000A977C */

loc_001F2FF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F301A; /* je: equal / zero */

loc_001F2FFB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3013; /* je: equal / zero */

loc_001F3001: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F300Eu); RECOMP_ABI_CALL(0x000A977Cu, sub_000A977C); /* call 0x000A977C */

loc_001F300E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F301A; /* je: equal / zero */

loc_001F3013: ;
    MEM32(ebp + -4) = 0x1500F0;

loc_001F301A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F3024
 * Original: 0x001F3024 - 0x001F306B (71 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3024(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3024: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F306B(); return; } /* jne: not equal / not zero */

loc_001F3032: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x3C;
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x38);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esi + 0x74;
    PUSH32(esp, edx);
    MEM32(esi + 0xD0) = 5;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6B88);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x001F3069u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F3069: ;
    g_seh_ebp = ebp; sub_001F308C(); return; /* tail jmp 0x001F308C */

}

/**
 * sub_001F306B
 * Original: 0x001F306B - 0x001F308C (33 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F306B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F306B: ;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x001F3073u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F3073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F308C(); return; } /* jne: not equal / not zero */

loc_001F307A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xD0) = 6;
    MEM32(esi + 0xD4) = eax;

    g_seh_ebp = ebp; sub_001F308C(); return; /* fallthrough 0x001F308C */

}

/**
 * sub_001F308C
 * Original: 0x001F308C - 0x001F3090 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F308C(void)
{

loc_001F308C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3090
 * Original: 0x001F3090 - 0x001F3104 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 6 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3133(); return; } /* jne: not equal / not zero */

loc_001F30A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F30B1u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_001F30B1: ;
    PUSH32(esp, 0x34);
    edi = esi + 0x78;
    ebx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F30BFu); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_001F30BF: ;
    eax = esi + 0xAC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F30CCu); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_001F30CC: ;
    _fa = (uint32_t)(MEM8(esi + 0x88)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x88), 0x10 (8-bit) */
    ecx = MEM32(esi + 0x80);
    eax = esi + 0x14;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x84);
    MEM32(esi + 0xD0) = 7;
    MEM32(eax + 4) = ecx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3104(); return; } /* je: equal / zero */

loc_001F30F3: ;
    ecx = MEM32(esi + 0xA4);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esi + 0xA8);
    g_seh_ebp = ebp; sub_001F310D(); return; /* tail jmp 0x001F310D */

}

/**
 * sub_001F3104
 * Original: 0x001F3104 - 0x001F310D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3104(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3104: ;
    ecx = MEM32(esi + 0x4C);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esi + 0x50);

    g_seh_ebp = ebp; sub_001F310D(); return; /* fallthrough 0x001F310D */

}

/**
 * sub_001F310D
 * Original: 0x001F310D - 0x001F3133 (38 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F310D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F310D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0x20) = ecx;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x34) = 0x48;
    PUSH32(esp, 0x001F312Fu); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F312F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F314E(); return; /* tail jmp 0x001F314E */

}

/**
 * sub_001F3133
 * Original: 0x001F3133 - 0x001F3153 (32 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3133(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3133: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001F313Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F313B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F314E; /* jne: not equal / not zero */

loc_001F3142: ;
    MEM32(esi + 0xD0) = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F314E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F314E
 * Original: 0x001F314E - 0x001F3153 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F314E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F314E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3153
 * Original: 0x001F3153 - 0x001F3175 (34 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3153(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3153: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3175(); return; } /* jne: not equal / not zero */

loc_001F3161: ;
    PUSH32(esp, MEM32(esi + 0x24));
    MEM32(esi + 0xD0) = 9;
    PUSH32(esp, 0x001F3173u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F3173: ;
    g_seh_ebp = ebp; sub_001F317D(); return; /* tail jmp 0x001F317D */

}

/**
 * sub_001F3175
 * Original: 0x001F3175 - 0x001F317D (8 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3175(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3175: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001F317Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

    g_seh_ebp = ebp; sub_001F317D(); return; /* fallthrough 0x001F317D */

}

/**
 * sub_001F317D
 * Original: 0x001F317D - 0x001F3192 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F317D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F317D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F318E; /* jne: not equal / not zero */

loc_001F3184: ;
    MEM32(esi + 0xD0) = 0xA;

loc_001F318E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3192
 * Original: 0x001F3192 - 0x001F32E1 (335 bytes, 101 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3192(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3192: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001F31A7; /* jne: not equal / not zero */

loc_001F31A0: ;
    eax = 0x80150005u;
    goto loc_001F31F6;

loc_001F31A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8054;
    PUSH32(esp, edi);
    PUSH32(esp, 0x610);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F31BBu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F31BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F31CA; /* jne: not equal / not zero */

loc_001F31C1: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    goto loc_001F31F1;

loc_001F31CA: ;
    ecx = ebx;
    MEM32(esi + 0x180) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F31D7u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F31D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F31FB; /* jne: not equal / not zero */

loc_001F31DB: ;
    MEM32(ebp + 8) = 0x80150002u;

loc_001F31E2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F31EBu); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_001F31EB: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F31F1: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F31F6: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_001F31FB: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ebx = ecx + eax;
    eax = MEM32(ebx);
    edi = esi + 0x1A0;
    MEM32(edi) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    eax = eax | MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001F3224; /* jne: not equal / not zero */

loc_001F321B: ;
    MEM32(ebp + 8) = 0x80150003u;
    goto loc_001F31E2;

loc_001F3224: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F322Du); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_001F322D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F323A; /* jne: not equal / not zero */

loc_001F3231: ;
    MEM32(ebp + 8) = 0x8015000Du;
    goto loc_001F31E2;

loc_001F323A: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3249; /* je: equal / zero */

loc_001F3240: ;
    MEM32(ebp + 8) = 0x80150004u;
    goto loc_001F31E2;

loc_001F3249: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x1A8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3258u); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_001F3258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F31E2; /* jl: less (signed <) */

loc_001F325F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x1B0) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x1B4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x1B8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F329B; /* je: equal / zero */

loc_001F3283: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = esi + 0x1BE;
    PUSH32(esp, eax);
    eax = esi + 0x1BC;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F329Bu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_001F329B: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ebx;
    PUSH32(esp, 0xAA6B34);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F32ABu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_001F32AB: ;
    eax = ZX16(MEM16(esi + 0x1BC));
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x170) = eax;
    eax = esi + 0x209;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x178) = 0x400;
    MEM32(eax) = esi;
    goto loc_001F31F1;

}

/**
 * sub_001F32E1
 * Original: 0x001F32E1 - 0x001F33E6 (261 bytes, 76 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F32E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F32E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x19C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F33A6; /* je: equal / zero */

loc_001F32FD: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F331F; /* je: equal / zero */

loc_001F3300: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F3315; /* je: equal / zero */

loc_001F3303: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F33E0; /* jne: not equal / not zero */

loc_001F330A: ;
    eax = MEM32(esi + 0x198);
    goto loc_001F33E0;

loc_001F3315: ;
    eax = 0x1500F1;
    goto loc_001F33E0;

loc_001F331F: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3338u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F3338: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xA));
    MEM16(esi + 0x184) = LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xB));
    MEM16(esi + 0x186) = LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0xC));
    MEM16(esi + 0x188) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x194) = LO8(eax);
    eax = MEM32(edi + 4);
    MEM32(esi + 0x17C) = eax;
    eax = ZX8(MEM8(edi + 8));
    MEM32(esi + 0x180) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0xF));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x190) = eax;
    eax = MEM32(edi + 0xD);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18C) = eax;
    MEM32(esi + 0x19C) = 2;
    eax = 0x1500F1;
    POP32(esp, edi);
    goto loc_001F33E0;

loc_001F33A6: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F33AFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F33AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F33E0; /* je: equal / zero */

loc_001F33B3: ;
    ecx = 0x1500F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F33CE; /* je: equal / zero */

loc_001F33BC: ;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = 3;
    goto loc_001F33E0;

loc_001F33CE: ;
    MEM32(esi + 0x198) = ecx;
    MEM32(esi + 0x19C) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F33E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F33E6
 * Original: 0x001F33E6 - 0x001F3406 (32 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33E6(void)
{

loc_001F33E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001F33F7u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F33F7: ;
    PUSH32(esp, 0x62);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F3401u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F3401: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3406
 * Original: 0x001F3406 - 0x001F3498 (146 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3406: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3418; /* jne: not equal / not zero */

loc_001F3411: ;
    eax = 0x80150005u;
    goto loc_001F3493;

loc_001F3418: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x19C), 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F342F; /* je: equal / zero */

loc_001F3427: ;
    eax = MEM32(eax + 0x198);
    goto loc_001F3493;

loc_001F342F: ;
    edx = MEM32(eax + 0xC0);
    ecx = MEM32(edx + 0x11);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x11)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x11), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F344C; /* je: equal / zero */

loc_001F3445: ;
    ecx = edx + 0x15;
    MEM32(ebx) = ecx;
    goto loc_001F344E;

loc_001F344C: ;
    MEM32(ebx) = esi;

loc_001F344E: ;
    ecx = MEM32(edx);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    esi = eax + 0x17C;
    edi = ebx + 0xC;
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
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x2C) = ecx;
    ecx = MEM32(edx + 0xD);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x30) = ecx;
    POP32(esp, edi);
    MEM32(eax + 0x19C) = 3;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_001F3493: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3498
 * Original: 0x001F3498 - 0x001F34AF (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3498(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3498: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F34AF(); return; } /* jne: not equal / not zero */

loc_001F34A5: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F35F0(); return; /* tail jmp 0x001F35F0 */

}

/**
 * sub_001F34AF
 * Original: 0x001F34AF - 0x001F34C5 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F34AF: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001F34B7u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F34B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F34C5(); return; } /* jne: not equal / not zero */

loc_001F34BB: ;
    edi = 0x80150002u;
    g_seh_ebp = ebp; sub_001F35ED(); return; /* tail jmp 0x001F35ED */

}

/**
 * sub_001F34C5
 * Original: 0x001F34C5 - 0x001F34E8 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F34C5: ;
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(ebp + -12);
    ecx = ecx | MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F34E8(); return; } /* jne: not equal / not zero */

loc_001F34DE: ;
    edi = 0x80150003u;
    g_seh_ebp = ebp; sub_001F35EC(); return; /* tail jmp 0x001F35EC */

}

/**
 * sub_001F34E8
 * Original: 0x001F34E8 - 0x001F34FE (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F34E8: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F34F0u); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_001F34F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F34FE(); return; } /* jne: not equal / not zero */

loc_001F34F4: ;
    edi = 0x8015000Du;
    g_seh_ebp = ebp; sub_001F35EC(); return; /* tail jmp 0x001F35EC */

}

/**
 * sub_001F34FE
 * Original: 0x001F34FE - 0x001F350E (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F34FE: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F350E(); return; } /* je: equal / zero */

loc_001F3504: ;
    edi = 0x80150004u;
    g_seh_ebp = ebp; sub_001F35EC(); return; /* tail jmp 0x001F35EC */

}

/**
 * sub_001F350E
 * Original: 0x001F350E - 0x001F351E (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F350E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F350E: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F351E(); return; } /* je: equal / zero */

loc_001F3514: ;
    edi = 0x80153007u;
    g_seh_ebp = ebp; sub_001F35EC(); return; /* tail jmp 0x001F35EC */

}

/**
 * sub_001F351E
 * Original: 0x001F351E - 0x001F353F (33 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F351E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F351E: ;
    PUSH32(esp, 0x8004);
    PUSH32(esp, 0x588);
    ecx = ebx;
    PUSH32(esp, 0x001F352Fu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F352F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F353F(); return; } /* jne: not equal / not zero */

loc_001F3535: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F35D4(); return; /* tail jmp 0x001F35D4 */

}

/**
 * sub_001F353F
 * Original: 0x001F353F - 0x001F35D4 (149 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F353F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F353F: ;
    MEM32(esi + 0x180) = MEM32(esi + 0x180) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x180)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F354Eu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F354E: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -12);
    edi = esi + 0x160;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -8);
    MEM32(edi + 4) = eax;
    eax = esi + 0x168;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi) = 0x1F2CA9;
    MEM32(esi + 4) = 0x1F2CE8;
    PUSH32(esp, 0x001F3580u); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_001F3580: ;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x170) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x178) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebx;
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    eax = esi + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6BA4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001F35CEu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F35CE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F35E7(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001F35D4(); return; /* fallthrough 0x001F35D4 */

}

/**
 * sub_001F35D4
 * Original: 0x001F35D4 - 0x001F35E7 (19 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F35D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F35EC(); return; } /* je: equal / zero */

loc_001F35D8: ;
    PUSH32(esp, 0x8004);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F35E5u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F35E5: ;
    g_seh_ebp = ebp; sub_001F35EC(); return; /* tail jmp 0x001F35EC */

}

/**
 * sub_001F35E7
 * Original: 0x001F35E7 - 0x001F35EC (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F35E7: ;
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001F35EC(); return; /* fallthrough 0x001F35EC */

}

/**
 * sub_001F35EC
 * Original: 0x001F35EC - 0x001F35ED (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F35EC: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F35ED(); return; /* fallthrough 0x001F35ED */

}

/**
 * sub_001F35ED
 * Original: 0x001F35ED - 0x001F35F0 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F35ED: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F35F0(); return; /* fallthrough 0x001F35F0 */

}

/**
 * sub_001F35F0
 * Original: 0x001F35F0 - 0x001F35F5 (5 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F35F0: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F35F5
 * Original: 0x001F35F5 - 0x001F372F (314 bytes, 107 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F35F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F35F5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001F360F; /* jne: not equal / not zero */

loc_001F3605: ;
    eax = 0x80150005u;
    goto loc_001F372A;

loc_001F360F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8005);
    PUSH32(esp, 0x578);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3622u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F3622: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3632; /* jne: not equal / not zero */

loc_001F3628: ;
    edi = 0x8007000Eu;
    goto loc_001F3726;

loc_001F3632: ;
    MEM32(ebx + 0x174) = MEM32(ebx + 0x174) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x174)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3641u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F3641: ;
    eax = MEM32(ebp + 0x14);
    ecx = esi;
    MEM32(ebx) = 0x1F2D0B;
    MEM32(ebx + 4) = 0x1F2D5D;
    MEM32(ebx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F365Bu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F365B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3669; /* jne: not equal / not zero */

loc_001F365F: ;
    edi = 0x80150002u;
    goto loc_001F3711;

loc_001F3669: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + -12);
    ecx = esi;
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001F368F; /* jne: not equal / not zero */

loc_001F3685: ;
    edi = 0x80150003u;
    goto loc_001F3711;

loc_001F368F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3698u); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_001F3698: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F36A3; /* jne: not equal / not zero */

loc_001F369C: ;
    edi = 0x8015000Du;
    goto loc_001F3711;

loc_001F36A3: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F36B0; /* je: equal / zero */

loc_001F36A9: ;
    edi = 0x80150004u;
    goto loc_001F3711;

loc_001F36B0: ;
    _fa = (uint32_t)(MEM8(ebp + -6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F36BD; /* je: equal / zero */

loc_001F36B6: ;
    edi = 0x80153007u;
    goto loc_001F3711;

loc_001F36BD: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebx + 0x160;
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ebx + 0x168) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebx + 0x16C) = ecx;
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    MEM32(eax + 4) = edi;
    eax = ebx + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6BC0);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F370Bu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F370B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3721; /* je: equal / zero */

loc_001F3711: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8005);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F371Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F371F: ;
    goto loc_001F3726;

loc_001F3721: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ebx;

loc_001F3726: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F372A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F372F
 * Original: 0x001F372F - 0x001F37A6 (119 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F372F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F372F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x1A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F3768; /* je: equal / zero */

loc_001F3740: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F3751; /* je: equal / zero */

loc_001F3743: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F3761; /* je: equal / zero */

loc_001F3746: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F37A2; /* jne: not equal / not zero */

loc_001F3749: ;
    eax = MEM32(esi + 0x1A0);
    goto loc_001F37A2;

loc_001F3751: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3757u); RECOMP_ABI_CALL(0x001F2DA0u, sub_001F2DA0); /* call 0x001F2DA0 */

loc_001F3757: ;
    MEM32(esi + 0x1A4) = 2;

loc_001F3761: ;
    eax = 0x1500F1;
    goto loc_001F37A2;

loc_001F3768: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3771u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F3771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F37A2; /* je: equal / zero */

loc_001F3775: ;
    ecx = 0x1500F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3790; /* je: equal / zero */

loc_001F377E: ;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A4) = 3;
    goto loc_001F37A2;

loc_001F3790: ;
    MEM32(esi + 0x1A0) = ecx;
    MEM32(esi + 0x1A4) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F37A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F37A6
 * Original: 0x001F37A6 - 0x001F37F3 (77 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F37A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 3 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F37F0; /* jne: not equal / not zero */

loc_001F37B7: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001F37BFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F37BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3888(); return; } /* je: equal / zero */

loc_001F37C7: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3888(); return; } /* jl: less (signed <) */

loc_001F37CD: ;
    PUSH32(esp, MEM32(esi + 0x20));
    eax = esi + 0x78;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = ebx;
    PUSH32(esp, eax);
    MEM32(esi + 0xD0) = 2;
    PUSH32(esp, 0x001F37E8u); RECOMP_ABI_CALL(0x001F2F6Eu, sub_001F2F6E); /* call 0x001F2F6E */

loc_001F37E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3888(); return; } /* jge: greater or equal (signed >=) */

loc_001F37F0: ;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001F386E(); return; /* tail jmp 0x001F386E */

}

/**
 * sub_001F37F3
 * Original: 0x001F37F3 - 0x001F386E (123 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F37F3: ;
    ecx = ZX8(MEM8(esi + 0xCF));
    eax = MEM32(esi + ecx * 8 + 0x4C);
    ecx = MEM32(esi + ecx * 8 + 0x50);
    edx = eax;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F3868; /* je: equal / zero */

loc_001F3808: ;
    edi = esi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x24));
    MEM32(esi + 0x20) = ecx;
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001F381Cu); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F381C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3887(); return; } /* jl: less (signed <) */

loc_001F3820: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3868; /* je: equal / zero */

loc_001F3825: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3853; /* je: equal / zero */

loc_001F382B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + 0x24));
    MEM32(esi + 0xD0) = 3;
    PUSH32(esp, 0x001F3843u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001F3843: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3887(); return; } /* je: equal / zero */

loc_001F3847: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3887(); return; } /* jl: less (signed <) */

loc_001F3849: ;
    MEM32(esi + 0xD0) = 2;

loc_001F3853: ;
    PUSH32(esp, MEM32(esi + 0x20));
    eax = esi + 0x78;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3864u); RECOMP_ABI_CALL(0x001F2F6Eu, sub_001F2F6E); /* call 0x001F2F6E */

loc_001F3864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3887(); return; } /* jge: greater or equal (signed >=) */

loc_001F3868: ;
    MEM8(esi + 0xCF) = MEM8(esi + 0xCF) + 1;
    _fa = (uint32_t)(MEM8(esi + 0xCF)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001F386E(); return; /* fallthrough 0x001F386E */

}

/**
 * sub_001F386E
 * Original: 0x001F386E - 0x001F3887 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F386E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F386E: ;
    _fa = (uint32_t)(MEM8(esi + 0xCF)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCF), 5 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F37F3(); return; } /* jb: below (unsigned <) */

loc_001F387B: ;
    MEM32(esi + 0xD0) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F3887(); return; /* fallthrough 0x001F3887 */

}

/**
 * sub_001F3887
 * Original: 0x001F3887 - 0x001F3888 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3887(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3887: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F3888(); return; /* fallthrough 0x001F3888 */

}

/**
 * sub_001F3888
 * Original: 0x001F3888 - 0x001F388D (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3888(void)
{

loc_001F3888: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F388D
 * Original: 0x001F388D - 0x001F399B (270 bytes, 94 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F388D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F388D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F38A1; /* jne: not equal / not zero */

loc_001F3897: ;
    eax = 0x80150005u;
    goto loc_001F3996;

loc_001F38A1: ;
    eax = MEM32(ebp + 0x1C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x62);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1A0)) >> 32) & 1);
    eax = eax + 0x1A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F38BEu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F38BE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F38CE; /* jne: not equal / not zero */

loc_001F38C4: ;
    edi = 0x8007000Eu;
    goto loc_001F3992;

loc_001F38CE: ;
    PUSH32(esp, 0x68);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_NE(_fa, _fb)) goto loc_001F38E5; /* jne: not equal / not zero */

loc_001F38DC: ;
    eax = esi + 0x1A0;
    MEM32(ebp + 0x1C) = eax;

loc_001F38E5: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F38EDu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F38ED: ;
    eax = MEM32(ebp + 0x24);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x19C) = MEM32(esi + 0x19C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x19C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    edi = esi + 0x160;
    MEM8(edi) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x16D) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x171) = eax;
    MEM32(esi) = 0x1F32E1;
    MEM32(esi + 4) = 0x1F33E6;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x169) = eax;
    eax = esi + 0x161;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F393Bu); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_001F393B: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x175) = eax;
    SET_LO16(eax, MEM16(ebp + 0x14));
    MEM16(esi + 0x179) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = ebx;
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0xAA6BDC);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3979u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F3979: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001F398B; /* jge: greater or equal (signed >=) */

loc_001F397F: ;
    PUSH32(esp, 0x62);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3989u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F3989: ;
    goto loc_001F3992;

loc_001F398B: ;
    eax = MEM32(ebp + 0x28);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;

loc_001F3992: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F3996: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001F399B
 * Original: 0x001F399B - 0x001F39C5 (42 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F399B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F399B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F39A9; /* jne: not equal / not zero */

loc_001F39A2: ;
    eax = 0x80150005u;
    goto loc_001F39C1;

loc_001F39A9: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F39C1u); RECOMP_ABI_CALL(0x001F3498u, sub_001F3498); /* call 0x001F3498 */

loc_001F39C1: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F39C5
 * Original: 0x001F39C5 - 0x001F39DC (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F39C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F39C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F39DC(); return; } /* jne: not equal / not zero */

loc_001F39D2: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F3B11(); return; /* tail jmp 0x001F3B11 */

}

/**
 * sub_001F39DC
 * Original: 0x001F39DC - 0x001F39F2 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F39DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F39DC: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001F39E4u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F39E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F39F2(); return; } /* jne: not equal / not zero */

loc_001F39E8: ;
    edi = 0x80150002u;
    g_seh_ebp = ebp; sub_001F3B0E(); return; /* tail jmp 0x001F3B0E */

}

/**
 * sub_001F39F2
 * Original: 0x001F39F2 - 0x001F3A13 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F39F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F39F2: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(ebp + -12);
    eax = eax | MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F3A13(); return; } /* jne: not equal / not zero */

loc_001F3A09: ;
    edi = 0x80150003u;
    g_seh_ebp = ebp; sub_001F3B0D(); return; /* tail jmp 0x001F3B0D */

}

/**
 * sub_001F3A13
 * Original: 0x001F3A13 - 0x001F3A3E (43 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3A13: ;
    eax = MEM32(ebp + 0x20);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1A8)) >> 32) & 1);
    eax = eax + 0x1A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F3A2Eu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F3A2E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3A3E(); return; } /* jne: not equal / not zero */

loc_001F3A34: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F3AF6(); return; /* tail jmp 0x001F3AF6 */

}

/**
 * sub_001F3A3E
 * Original: 0x001F3A3E - 0x001F3AF6 (184 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3A3E: ;
    PUSH32(esp, 0x6A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), eax (32-bit) */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_NE(_fa, _fb)) goto loc_001F3A55; /* jne: not equal / not zero */

loc_001F3A4C: ;
    eax = esi + 0x1A8;
    MEM32(ebp + 0x20) = eax;

loc_001F3A55: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F3A5Du); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F3A5D: ;
    eax = MEM32(ebp + 0x28);
    MEM32(esi + 0x1A4) = MEM32(esi + 0x1A4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -12);
    edi = esi + 0x160;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -8);
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x178) = eax;
    MEM32(esi) = 0x1F372F;
    MEM32(esi + 4) = 0x1F2D80;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x170) = eax;
    eax = esi + 0x168;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F3AB1u); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_001F3AB1: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x17C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(esi + 0x180) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebx;
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x22);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0xAA6C00);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001F3AF0u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F3AF0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F3B06(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F3AF6(); return; /* fallthrough 0x001F3AF6 */

}

/**
 * sub_001F3AF6
 * Original: 0x001F3AF6 - 0x001F3B06 (16 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3AF6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3B0D(); return; } /* je: equal / zero */

loc_001F3AFA: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F3B04u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F3B04: ;
    g_seh_ebp = ebp; sub_001F3B0D(); return; /* tail jmp 0x001F3B0D */

}

/**
 * sub_001F3B06
 * Original: 0x001F3B06 - 0x001F3B0D (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B06: ;
    eax = MEM32(ebp + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001F3B0D(); return; /* fallthrough 0x001F3B0D */

}

/**
 * sub_001F3B0D
 * Original: 0x001F3B0D - 0x001F3B0E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B0D: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F3B0E(); return; /* fallthrough 0x001F3B0E */

}

/**
 * sub_001F3B0E
 * Original: 0x001F3B0E - 0x001F3B11 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B0E: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F3B11(); return; /* fallthrough 0x001F3B11 */

}

/**
 * sub_001F3B11
 * Original: 0x001F3B11 - 0x001F3B16 (5 bytes, 3 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B11: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001F3B16
 * Original: 0x001F3B16 - 0x001F3B32 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B16: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0xD0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    eax = 0x1500F0;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3B64(); return; } /* ja: above (unsigned >) */

loc_001F3B2B: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x1F3B78)); return; /* indirect tail jmp */

}

/**
 * sub_001F3B32
 * Original: 0x001F3B32 - 0x001F3B3A (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3B38u); RECOMP_ABI_CALL(0x001F2F1Fu, sub_001F2F1F); /* call 0x001F2F1F */

loc_001F3B38: ;
    g_seh_ebp = ebp; sub_001F3B60(); return; /* tail jmp 0x001F3B60 */

}

/**
 * sub_001F3B3A
 * Original: 0x001F3B3A - 0x001F3B42 (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3B40u); RECOMP_ABI_CALL(0x001F37A6u, sub_001F37A6); /* call 0x001F37A6 */

loc_001F3B40: ;
    g_seh_ebp = ebp; sub_001F3B60(); return; /* tail jmp 0x001F3B60 */

}

/**
 * sub_001F3B42
 * Original: 0x001F3B42 - 0x001F3B4A (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3B48u); RECOMP_ABI_CALL(0x001F3024u, sub_001F3024); /* call 0x001F3024 */

loc_001F3B48: ;
    g_seh_ebp = ebp; sub_001F3B60(); return; /* tail jmp 0x001F3B60 */

}

/**
 * sub_001F3B4A
 * Original: 0x001F3B4A - 0x001F3B52 (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3B50u); RECOMP_ABI_CALL(0x001F3090u, sub_001F3090); /* call 0x001F3090 */

loc_001F3B50: ;
    g_seh_ebp = ebp; sub_001F3B60(); return; /* tail jmp 0x001F3B60 */

}

/**
 * sub_001F3B52
 * Original: 0x001F3B52 - 0x001F3B5A (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3B58u); RECOMP_ABI_CALL(0x001F3153u, sub_001F3153); /* call 0x001F3153 */

loc_001F3B58: ;
    g_seh_ebp = ebp; sub_001F3B60(); return; /* tail jmp 0x001F3B60 */

}

/**
 * sub_001F3B5A
 * Original: 0x001F3B5A - 0x001F3B78 (30 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3B5A: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3B74; /* je: equal / zero */

loc_001F3B64: ;
    MEM32(esi + 0xD0) = 0xA;
    MEM32(esi + 0xD4) = eax;

loc_001F3B74: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3B60
 * Original: 0x001F3B60 - 0x001F3B78 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3B74; /* je: equal / zero */

loc_001F3B64: ;
    MEM32(esi + 0xD0) = 0xA;
    MEM32(esi + 0xD4) = eax;

loc_001F3B74: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3B64
 * Original: 0x001F3B64 - 0x001F3B78 (20 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B64(void)
{

loc_001F3B64: ;
    MEM32(esi + 0xD0) = 0xA;
    MEM32(esi + 0xD4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3BA4
 * Original: 0x001F3BA4 - 0x001F3BD8 (52 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3BA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3BA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3BB2; /* jne: not equal / not zero */

loc_001F3BAB: ;
    eax = 0x80150005u;
    goto loc_001F3BD4;

loc_001F3BB2: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3BD4u); RECOMP_ABI_CALL(0x001F39C5u, sub_001F39C5); /* call 0x001F39C5 */

loc_001F3BD4: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001F3BD8
 * Original: 0x001F3BD8 - 0x001F3D2F (343 bytes, 105 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3BD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3BD8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3BEC; /* jne: not equal / not zero */

loc_001F3BE2: ;
    eax = 0x80150005u;
    goto loc_001F3D2A;

loc_001F3BEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8007);
    PUSH32(esp, 0xD8);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3BFEu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F3BFE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3C10; /* jne: not equal / not zero */

loc_001F3C04: ;
    MEM32(ebp + 0x10) = 0x8007000Eu;
    goto loc_001F3D26;

loc_001F3C10: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3C19u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F3C19: ;
    eax = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = 0x1F3B16;
    MEM32(esi + 4) = 0x1F2ED5;
    MEM32(esi + 0x3C) = 0x38;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x74) = 0x57;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3C5Bu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F3C5B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3C72; /* je: equal / zero */

loc_001F3C61: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3C72; /* jne: not equal / not zero */

loc_001F3C67: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x58) = ecx;

loc_001F3C72: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3C8C; /* je: equal / zero */

loc_001F3C7A: ;
    _fa = (uint32_t)(MEM8(eax + 0x78)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x78), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3C8C; /* jne: not equal / not zero */

loc_001F3C80: ;
    edx = MEM32(eax + 0x70);
    MEM32(esi + 0x5C) = edx;
    edx = MEM32(eax + 0x74);
    MEM32(esi + 0x60) = edx;

loc_001F3C8C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3CAD; /* je: equal / zero */

loc_001F3C92: ;
    _fa = (uint32_t)(MEM8(eax + 0xE8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xE8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3CAD; /* jne: not equal / not zero */

loc_001F3C9B: ;
    edx = MEM32(eax + 0xE0);
    MEM32(esi + 0x64) = edx;
    edx = MEM32(eax + 0xE4);
    MEM32(esi + 0x68) = edx;

loc_001F3CAD: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3CCE; /* je: equal / zero */

loc_001F3CB3: ;
    _fa = (uint32_t)(MEM8(eax + 0x158)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x158), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3CCE; /* jne: not equal / not zero */

loc_001F3CBC: ;
    edx = MEM32(eax + 0x150);
    MEM32(esi + 0x6C) = edx;
    eax = MEM32(eax + 0x154);
    MEM32(esi + 0x70) = eax;

loc_001F3CCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0xD0) = eax;
    eax = esi + 0x14;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edi;
    MEM32(esi + 0x30) = eax;
    eax = esi + 0x78;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x4C) = 0x17;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3D09u); RECOMP_ABI_CALL(0x001F2F1Fu, sub_001F2F1F); /* call 0x001F2F1F */

loc_001F3D09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x18);
    MEM32(ebp + 0x10) = eax;
    MEM32(edi) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001F3D25; /* jge: greater or equal (signed >=) */

loc_001F3D15: ;
    PUSH32(esp, 0x8007);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3D22u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F3D22: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F3D25: ;
    POP32(esp, edi);

loc_001F3D26: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, esi);

loc_001F3D2A: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F3D2F
 * Original: 0x001F3D2F - 0x001F3D77 (72 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3D2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3D2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = eax + 8;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3D51; /* je: equal / zero */

loc_001F3D4F: ;
    MEM32(ecx) = edx;

loc_001F3D51: ;
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = edx;
    edi = 0xAA6CC8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3D77(); return; } /* jne: not equal / not zero */

loc_001F3D62: ;
    esi = 0xAA6CC0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3D6Du); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F3D6D: ;
    POP32(esp, ecx);
    ebx = eax + eax + 2;
    g_seh_ebp = ebp; sub_001F3F0C(); return; /* tail jmp 0x001F3F0C */

}

/**
 * sub_001F3D67
 * Original: 0x001F3D67 - 0x001F3D77 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3D67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3D67: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3D6Du); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F3D6D: ;
    POP32(esp, ecx);
    ebx = eax + eax + 2;
    g_seh_ebp = ebp; sub_001F3F0C(); return; /* tail jmp 0x001F3F0C */

}

/**
 * sub_001F3D77
 * Original: 0x001F3D77 - 0x001F3D8F (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3D77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3D77: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6CB8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3D8F(); return; } /* jne: not equal / not zero */

loc_001F3D88: ;
    esi = 0xAA6CAC;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3D8F
 * Original: 0x001F3D8F - 0x001F3DA7 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3D8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3D8F: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6CA4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3DA7(); return; } /* jne: not equal / not zero */

loc_001F3DA0: ;
    esi = 0xAA6C9C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3DA7
 * Original: 0x001F3DA7 - 0x001F3DBF (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DA7: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C94;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3DBF(); return; } /* jne: not equal / not zero */

loc_001F3DB8: ;
    esi = 0xAA6C8C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3DBF
 * Original: 0x001F3DBF - 0x001F3DE6 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DBF: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C84;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3DED(); return; } /* jne: not equal / not zero */

loc_001F3DD0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3DE6(); return; } /* je: equal / zero */

loc_001F3DD6: ;
    ecx = 0x20AC;
    esi = MEM32(ebp + -8);
    PUSH32(esp, 2);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F3F0F(); return; /* tail jmp 0x001F3F0F */

}

/**
 * sub_001F3DDB
 * Original: 0x001F3DDB - 0x001F3DE6 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DDB: ;
    esi = MEM32(ebp + -8);
    PUSH32(esp, 2);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F3F0F(); return; /* tail jmp 0x001F3F0F */

}

/**
 * sub_001F3DE6
 * Original: 0x001F3DE6 - 0x001F3DED (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DE6: ;
    esi = 0xAA6C84;
    g_seh_ebp = ebp; sub_001F3E5A(); return; /* tail jmp 0x001F3E5A */

}

/**
 * sub_001F3DED
 * Original: 0x001F3DED - 0x001F3E0B (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DED: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C7C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3E12(); return; } /* jne: not equal / not zero */

loc_001F3DFE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3E0B(); return; } /* je: equal / zero */

loc_001F3E04: ;
    ecx = 0xA3;
    g_seh_ebp = ebp; sub_001F3DDB(); return; /* tail jmp 0x001F3DDB */

}

/**
 * sub_001F3E0B
 * Original: 0x001F3E0B - 0x001F3E12 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E0B: ;
    esi = 0xAA6C7C;
    g_seh_ebp = ebp; sub_001F3E5A(); return; /* tail jmp 0x001F3E5A */

}

/**
 * sub_001F3E12
 * Original: 0x001F3E12 - 0x001F3E30 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E12: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C74;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3E37(); return; } /* jne: not equal / not zero */

loc_001F3E23: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3E30(); return; } /* je: equal / zero */

loc_001F3E29: ;
    ecx = 0xA5;
    g_seh_ebp = ebp; sub_001F3DDB(); return; /* tail jmp 0x001F3DDB */

}

/**
 * sub_001F3E30
 * Original: 0x001F3E30 - 0x001F3E37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E30: ;
    esi = 0xAA6C74;
    g_seh_ebp = ebp; sub_001F3E5A(); return; /* tail jmp 0x001F3E5A */

}

/**
 * sub_001F3E37
 * Original: 0x001F3E37 - 0x001F3E55 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E37: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C6C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3E63(); return; } /* jne: not equal / not zero */

loc_001F3E48: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3E55(); return; } /* je: equal / zero */

loc_001F3E4E: ;
    ecx = 0x20A9;
    g_seh_ebp = ebp; sub_001F3DDB(); return; /* tail jmp 0x001F3DDB */

}

/**
 * sub_001F3E55
 * Original: 0x001F3E55 - 0x001F3E5A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E55: ;
    esi = 0xAA6C6C;

    g_seh_ebp = ebp; sub_001F3E5A(); return; /* fallthrough 0x001F3E5A */

}

/**
 * sub_001F3E5A
 * Original: 0x001F3E5A - 0x001F3E63 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E5A: ;
    MEM8(eax + 0x18) = MEM8(eax + 0x18) | 4;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3E63
 * Original: 0x001F3E63 - 0x001F3E7E (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E63: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C64;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3E7E(); return; } /* jne: not equal / not zero */

loc_001F3E74: ;
    esi = 0xAA6C5C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3E7E
 * Original: 0x001F3E7E - 0x001F3E99 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E7E: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C54;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3E99(); return; } /* jne: not equal / not zero */

loc_001F3E8F: ;
    esi = 0xAA6C4C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3E99
 * Original: 0x001F3E99 - 0x001F3EB4 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E99: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C44;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3EB4(); return; } /* jne: not equal / not zero */

loc_001F3EAA: ;
    esi = 0xAA6C3C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3EB4
 * Original: 0x001F3EB4 - 0x001F3ED5 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3EB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3EB4: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C34;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3EDF(); return; } /* jne: not equal / not zero */

loc_001F3EC5: ;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x18), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3ED5(); return; } /* je: equal / zero */

loc_001F3ECB: ;
    esi = 0xAA6C30;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3ED5
 * Original: 0x001F3ED5 - 0x001F3EDF (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3ED5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3ED5: ;
    esi = 0xAA6C28;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3EDF
 * Original: 0x001F3EDF - 0x001F3EFA (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3EDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3EDF: ;
    esi = MEM32(ebp + 8);
    ecx = edx;
    edi = 0xAA6C20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001F3EFA(); return; } /* jne: not equal / not zero */

loc_001F3EF0: ;
    esi = 0xAA6C1C;
    g_seh_ebp = ebp; sub_001F3D67(); return; /* tail jmp 0x001F3D67 */

}

/**
 * sub_001F3EFA
 * Original: 0x001F3EFA - 0x001F3F0C (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3EFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3EFA: ;
    eax = MEM32(ebp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3F09; /* je: equal / zero */

loc_001F3F03: ;
    MEM32(eax) = 1;

loc_001F3F09: ;
    PUSH32(esp, 6);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F3F0C(); return; /* fallthrough 0x001F3F0C */

}

/**
 * sub_001F3F0C
 * Original: 0x001F3F0C - 0x001F3F32 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F0C: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3F4D(); return; } /* jb: below (unsigned <) */

loc_001F3F16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3F32(); return; } /* je: equal / zero */

loc_001F3F1A: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F3F24u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_001F3F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3F2Au); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F3F2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + eax * 2;
    g_seh_ebp = ebp; sub_001F3F50(); return; /* tail jmp 0x001F3F50 */

}

/**
 * sub_001F3F0F
 * Original: 0x001F3F0F - 0x001F3F32 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F0F: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3F4D(); return; } /* jb: below (unsigned <) */

loc_001F3F16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3F32(); return; } /* je: equal / zero */

loc_001F3F1A: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F3F24u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_001F3F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3F2Au); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F3F2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + eax * 2;
    g_seh_ebp = ebp; sub_001F3F50(); return; /* tail jmp 0x001F3F50 */

}

/**
 * sub_001F3F32
 * Original: 0x001F3F32 - 0x001F3F40 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F3F40(); return; } /* je: equal / zero */

loc_001F3F39: ;
    MEM16(eax) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F3F50(); return; /* tail jmp 0x001F3F50 */

}

/**
 * sub_001F3F40
 * Original: 0x001F3F40 - 0x001F3F4D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F40: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F3F50(); return; /* tail jmp 0x001F3F50 */

}

/**
 * sub_001F3F4D
 * Original: 0x001F3F4D - 0x001F3F50 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F4D: ;
    eax = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001F3F50(); return; /* fallthrough 0x001F3F50 */

}

/**
 * sub_001F3F50
 * Original: 0x001F3F50 - 0x001F3F5C (12 bytes, 7 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F50: ;
    ecx = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F3F5C
 * Original: 0x001F3F5C - 0x001F41CA (622 bytes, 246 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3F5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F3F5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F3F73; /* jne: not equal / not zero */

loc_001F3F69: ;
    eax = 0x80150005u;
    goto loc_001F41C5;

loc_001F3F73: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F3F93u); RECOMP_ABI_CALL(0x001F3D2Fu, sub_001F3D2F); /* call 0x001F3D2F */

loc_001F3F93: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F3F9E; /* jne: not equal / not zero */

loc_001F3F98: ;
    _fa = (uint32_t)(MEM8(ebx + 0x18)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x18), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F3FA2; /* je: equal / zero */

loc_001F3F9E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3FA2: ;
    _fa = (uint32_t)(MEM8(ebx + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x18), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F3FAC; /* je: equal / zero */

loc_001F3FA8: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(6)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 6;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3FAC: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F3FCC; /* jbe: below or equal (unsigned <=) */

loc_001F3FB2: ;
    MEM32(ebp + -4) = 1;

loc_001F3FB9: ;
    PUSH32(esp, 0xA);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F3FC9; /* jbe: below or equal (unsigned <=) */

loc_001F3FC4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F3FB9;

loc_001F3FC9: ;
    esi = MEM32(ebp + -4);

loc_001F3FCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebp + -8);
    edi = eax + esi * 2;
    if (CMP_BE(_fa, _fb)) goto loc_001F3FEC; /* jbe: below or equal (unsigned <=) */

loc_001F3FD7: ;
    PUSH32(esp, 3);
    eax = esi + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -12) = eax;
    eax = edi + eax * 2;
    MEM32(ebp + -8) = eax;
    edi = eax;

loc_001F3FEC: ;
    ecx = MEM32(ebp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_001F4002; /* jae: above or equal (unsigned >=) */

loc_001F3FF8: ;
    eax = 0x8007007Au;
    goto loc_001F41C1;

loc_001F4002: ;
    _fa = (uint32_t)(MEM8(ebx + 0x18)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x18), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F4034; /* je: equal / zero */

loc_001F4008: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4017u); RECOMP_ABI_CALL(0x001F3D2Fu, sub_001F3D2F); /* call 0x001F3D2F */

loc_001F4017: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax;
    MEM32(ebp + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001F4028; /* jne: not equal / not zero */

loc_001F4022: ;
    _fa = (uint32_t)(MEM8(ebx + 0x18)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x18), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F4037; /* je: equal / zero */

loc_001F4028: ;
    MEM16(edi) = 0x20;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_001F4037;

loc_001F4034: ;
    edi = MEM32(ebp + 0xC);

loc_001F4037: ;
    SET_LO8(ecx, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F40F6; /* je: equal / zero */

loc_001F4043: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F40D3; /* jbe: below or equal (unsigned <=) */

loc_001F404C: ;
    PUSH32(esp, 3);
    eax = esi;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    PUSH32(esp, MEM32(ebx + 4));
    eax = MEM32(ebp + -12);
    eax = edi + eax * 2;
    MEM32(ebp + 8) = eax;
    esi = edx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    if (1) _cf = (int)(((LO8(ecx)) >> (8 - (1))) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, ~LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0xAA6CD8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4080u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_001F4080: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F40BF;

loc_001F4085: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 3);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F40AB; /* jne: not equal / not zero */

loc_001F4093: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F40AB; /* jne: not equal / not zero */

loc_001F4097: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F40AB: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F40BF: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001F4085; /* ja: above (unsigned >) */

loc_001F40C5: ;
    esi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(ebp + 0xC);
    goto loc_001F4185;

loc_001F40D3: ;
    PUSH32(esp, MEM32(ebx + 4));
    if (1) _cf = (int)(((LO8(ecx)) >> (8 - (1))) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, ~LO8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0xAA6CD8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F40EEu); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_001F40EE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F4185;

loc_001F40F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F4175; /* jbe: below or equal (unsigned <=) */

loc_001F40FB: ;
    PUSH32(esp, 3);
    eax = esi;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, MEM32(ebx));
    eax = MEM32(ebp + -12);
    eax = edi + eax * 2;
    PUSH32(esp, 0xAA6CD0);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    esi = edx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4124u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_001F4124: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F416D;

loc_001F4129: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 3);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F4154; /* jne: not equal / not zero */

loc_001F4137: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F4154; /* jne: not equal / not zero */

loc_001F413B: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    ecx = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);

loc_001F4154: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(eax);

loc_001F416D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001F4129; /* ja: above (unsigned >) */

loc_001F4173: ;
    goto loc_001F4185;

loc_001F4175: ;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0xAA6CD0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4182u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_001F4182: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F4185: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F418Bu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F418B: ;
    edi = edi + eax * 2;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_001F41B9; /* jne: not equal / not zero */

loc_001F4196: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F41A1; /* jne: not equal / not zero */

loc_001F419D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F41A8; /* je: equal / zero */

loc_001F41A1: ;
    MEM16(edi) = 0x20;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F41A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F41B6u); RECOMP_ABI_CALL(0x001F3D2Fu, sub_001F3D2F); /* call 0x001F3D2F */

loc_001F41B6: ;
    MEM16(eax) = LO16(esi);

loc_001F41B9: ;
    edi = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F41C1: ;
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F41C5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F41CA
 * Original: 0x001F41CA - 0x001F423C (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F41CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F41CA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x21C0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2160);
    edx = 0x1F4C;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F41EA; /* jb: below (unsigned <) */

loc_001F41E8: ;
    edx = ecx;

loc_001F41EA: ;
    esi = MEM32(eax + 0x21BC);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + eax + 0x1EC;
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
    PUSH32(esp, 0xC);
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
    SET_LO16(edi, MEM16(eax + 0x1EC));
    POP32(esp, ebx);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F4219; /* jbe: below or equal (unsigned <=) */

loc_001F4216: ;
    ebx = ZX16(LO16(edi));

loc_001F4219: ;
    esi = MEM32(eax + 0x2160);
    ecx = esi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F423C(); return; } /* jae: above or equal (unsigned >=) */

loc_001F4226: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x21BC) = MEM32(eax + 0x21BC) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x21BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x21C0) = MEM32(eax + 0x21C0) - edx;
    _fa = (uint32_t)(MEM32(eax + 0x21C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x2160) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F42A6(); return; /* tail jmp 0x001F42A6 */

}

/**
 * sub_001F423C
 * Original: 0x001F423C - 0x001F429C (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F423C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F423C: ;
    MEM32(eax + 0x2160) = MEM32(eax + 0x2160) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x2160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax + 0x21A);
    edi = ZX16(LO16(edi));
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x21BC) = MEM32(eax + 0x21BC) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x21BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x21C0) = MEM32(eax + 0x21C0) - ecx;
    _fa = (uint32_t)(MEM32(eax + 0x21C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x216);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F40 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F429C(); return; } /* ja: above (unsigned >) */

loc_001F426A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F429C(); return; } /* jb: below (unsigned <) */

loc_001F426F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F429C(); return; } /* jae: above or equal (unsigned >=) */

loc_001F4273: ;
    esi = ecx + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F429C(); return; } /* ja: above (unsigned >) */

loc_001F427A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F42A3(); return; } /* je: equal / zero */

loc_001F427F: ;
    esi = edx + eax + 0x1EC;
    edi = eax + 0x21E;
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
    g_seh_ebp = ebp; sub_001F42A3(); return; /* tail jmp 0x001F42A3 */

}

/**
 * sub_001F429C
 * Original: 0x001F429C - 0x001F42A3 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F429C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F429C: ;
    MEM32(eax + 0x216) = MEM32(eax + 0x216) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x216)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001F42A3(); return; /* fallthrough 0x001F42A3 */

}

/**
 * sub_001F42A3
 * Original: 0x001F42A3 - 0x001F42A6 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F42A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001F42A6(); return; /* fallthrough 0x001F42A6 */

}

/**
 * sub_001F42A6
 * Original: 0x001F42A6 - 0x001F42AC (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42A6(void)
{

loc_001F42A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F42AC
 * Original: 0x001F42AC - 0x001F4384 (216 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F42AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F42AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    MEM32(ebp + -4) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F42CE; /* je: equal / zero */

loc_001F42C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F430D; /* jne: not equal / not zero */

loc_001F42CE: ;
    PUSH32(esp, MEM32(ebx + 0x164));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F42D9u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F42D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4302; /* jne: not equal / not zero */

loc_001F42E0: ;
    ecx = MEM32(ebx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F42F7; /* jne: not equal / not zero */

loc_001F42EB: ;
    MEM32(ebx + 0x16C) = 2;
    goto loc_001F430D;

loc_001F42F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F430D; /* jne: not equal / not zero */

loc_001F42FC: ;
    MEM32(ebx + 0x16C) = esi;

loc_001F4302: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F430A: ;
    PUSH32(esp, 6);
    POP32(esp, esi);

loc_001F430D: ;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4327; /* je: equal / zero */

loc_001F4318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4327; /* je: equal / zero */

loc_001F431D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4327; /* je: equal / zero */

loc_001F4322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* jne: not equal / not zero */

loc_001F4327: ;
    PUSH32(esp, MEM32(ebx + 0x170));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4335u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F4335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F437C; /* jne: not equal / not zero */

loc_001F433C: ;
    ecx = MEM32(ebx + 0x178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4353; /* jne: not equal / not zero */

loc_001F4347: ;
    MEM32(ebx + 0x178) = 2;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

loc_001F4353: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4364; /* jne: not equal / not zero */

loc_001F4358: ;
    MEM32(ebx + 0x178) = 4;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

loc_001F4364: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4371; /* jne: not equal / not zero */

loc_001F4369: ;
    MEM32(ebx + 0x178) = esi;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

loc_001F4371: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* jne: not equal / not zero */

loc_001F4376: ;
    MEM32(ebx + 0x178) = esi;

loc_001F437C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001F4384(); return; /* fallthrough 0x001F4384 */

}

/**
 * sub_001F4384
 * Original: 0x001F4384 - 0x001F439C (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4384(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4384: ;
    eax = MEM32(ebx + 0x160);
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A60(); return; } /* ja: above (unsigned >) */

loc_001F4395: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1F4A80)); return; /* indirect tail jmp */

}

/**
 * sub_001F439C
 * Original: 0x001F439C - 0x001F443D (161 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F439C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F439C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x16C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F43A9: ;
    SET_LO8(eax, MEM8(ebx + 0x21D0));
    edx = MEM32(ebp + -4);
    MEM8(ebx + 0x194) = LO8(eax);
    eax = MEM32(edx + 4);
    ecx = ebx + 0x190;
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -48;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x168));
    MEM32(ebp + -40) = ecx;
    ecx = edx;
    PUSH32(esp, 0x001F43E1u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F43E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F43E9: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4896(); return; } /* je: equal / zero */

loc_001F43F3: ;
    eax = MEM32(ebx + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x216C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x216C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4896(); return; } /* jne: not equal / not zero */

loc_001F4405: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F440Eu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F440E: ;
    eax = MEM32(ebx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F487E(); return; } /* jb: below (unsigned <) */

loc_001F441D: ;
    if (CMP_A(_fa, _fb)) goto loc_001F442E; /* ja: above (unsigned >) */

loc_001F441F: ;
    eax = MEM32(ebx + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F487E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F442E: ;
    MEM32(ebx + 0x160) = 5;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F443D
 * Original: 0x001F443D - 0x001F44A2 (101 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F443D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F443D: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4449u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F4449: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* je: equal / zero */

loc_001F4451: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F4457: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15FFFD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15FFFD (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4501(); return; } /* jne: not equal / not zero */

loc_001F4462: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    esi = ebx + 0x21C0;
    PUSH32(esp, esi);
    edi = ebx + 0x21BC;
    PUSH32(esp, edi);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4485u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F4485: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F448D: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F44A2(); return; } /* jne: not equal / not zero */

loc_001F4493: ;
    MEM32(ebx + 0x160) = 2;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F44A2
 * Original: 0x001F44A2 - 0x001F4501 (95 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F44A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F44A2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A59(); return; } /* je: equal / zero */

loc_001F44AC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A59(); return; } /* jne: not equal / not zero */

loc_001F44B9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x21AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21AC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F44F2; /* jne: not equal / not zero */

loc_001F44C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A59(); return; } /* jb: below (unsigned <) */

loc_001F44CB: ;
    esi = eax;
    edi = ebx + 0x21A0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x21AC) = 1;
    MEM32(ebx + 0x21BC) = eax;
    MEM32(ebx + 0x21C0) = ecx;

loc_001F44F2: ;
    MEM32(ebx + 0x160) = 3;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F4501
 * Original: 0x001F4501 - 0x001F450C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4501(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4501: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F450C(); return; /* fallthrough 0x001F450C */

}

/**
 * sub_001F450C
 * Original: 0x001F450C - 0x001F451B (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F450C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F450C: ;
    MEM32(ebx + 0x160) = 4;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F451B
 * Original: 0x001F451B - 0x001F454B (48 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F451B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F451B: ;
    eax = MEM32(ebx + 0x178);
    PUSH32(esp, 2);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4531; /* je: equal / zero */

loc_001F4528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F4531: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F453Cu); RECOMP_ABI_CALL(0x001F41CAu, sub_001F41CA); /* call 0x001F41CA */

loc_001F453C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F454B(); return; } /* jne: not equal / not zero */

loc_001F4540: ;
    MEM32(ebx + 0x160) = edi;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F454B
 * Original: 0x001F454B - 0x001F45ED (162 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F454B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F454B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x21B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21B0), 0x200 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F450C(); return; } /* jae: above or equal (unsigned >=) */

loc_001F4557: ;
    ecx = MEM32(esi + 4);
    eax = ebx + 0x1B0;
    MEM32(eax) = ecx;
    SET_LO8(ecx, MEM8(ebx + 0x21D0));
    MEM8(ebx + 0x1B4) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebx + 0x21B0));
    MEM16(ebx + 0x1B6) = LO16(ecx);
    ecx = MEM32(ebx + 0x1F8);
    MEM32(ebx + 0x21B0) = MEM32(ebx + 0x21B0) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x21B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x1B8) = ecx;
    ecx = MEM32(ebx + 0x1FC);
    MEM32(ebx + 0x1BC) = ecx;
    ecx = MEM32(ebx + 0x1F0);
    MEM32(ebx + 0x1C0) = ecx;
    ecx = MEM32(ebx + 0x1F4);
    MEM32(ebx + 0x1C4) = ecx;
    ecx = MEM32(ebx + 0x210);
    PUSH32(esp, 0);
    MEM32(ebx + 0x1C8) = ecx;
    ecx = ebx + 0x1CC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x170));
    ecx = esi;
    PUSH32(esp, MEM32(ebx + 0x174));
    PUSH32(esp, 0x001F45DBu); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F45DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F45E3: ;
    MEM32(ebx + 0x178) = 3;

    g_seh_ebp = ebp; sub_001F45ED(); return; /* fallthrough 0x001F45ED */

}

/**
 * sub_001F45ED
 * Original: 0x001F45ED - 0x001F45F8 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F45ED: ;
    eax = MEM32(ebx + 0x21C4);
    g_seh_ebp = ebp; sub_001F4A65(); return; /* tail jmp 0x001F4A65 */

}

/**
 * sub_001F45F8
 * Original: 0x001F45F8 - 0x001F463A (66 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F45F8: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4604u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F4604: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x21D4) = eax;
    MEM32(ebx + 0x21D8) = eax;
    MEM32(ebx + 0x21DC) = eax;
    eax = MEM32(ebx + 0x21B4);
    MEM32(ebx + 0x21BC) = eax;
    eax = MEM32(ebx + 0x21B8);
    MEM32(ebx + 0x21C0) = eax;
    MEM32(ebx + 0x160) = 6;

    g_seh_ebp = ebp; sub_001F463A(); return; /* fallthrough 0x001F463A */

}

/**
 * sub_001F463A
 * Original: 0x001F463A - 0x001F4660 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F463A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F463A: ;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F464F; /* je: equal / zero */

loc_001F4645: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F464F; /* je: equal / zero */

loc_001F464A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F464F: ;
    eax = ZX16(MEM16(ebx + 0x196));
    esi = MEM32(ebx + 0x21D4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F466F(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001F4660(); return; /* fallthrough 0x001F4660 */

}

/**
 * sub_001F4660
 * Original: 0x001F4660 - 0x001F466F (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4660: ;
    MEM32(ebx + 0x160) = 0xA;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F466F
 * Original: 0x001F466F - 0x001F4721 (178 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F466F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F466F: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(edx + 4);
    ecx = ebx + 0x1B0;
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebx + 0x21D0));
    MEM8(ebx + 0x1B4) = LO8(eax);
    SET_LO16(eax, MEM16(ebx + 0x21D4));
    MEM16(ebx + 0x1B6) = LO16(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x21D4) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x17C;
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0x174));
    MEM32(ebx + 0x184) = ecx;
    eax = ebx + 0x1CC;
    ecx = edx;
    MEM32(ebx + 0x18C) = eax;
    MEM32(ebx + 0x188) = 0x1F94;
    PUSH32(esp, 0x001F46D7u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F46D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F46DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4721(); return; } /* jne: not equal / not zero */

loc_001F46E5: ;
    _fa = (uint32_t)(MEM32(ebx + 0x21AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21AC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4660(); return; } /* jne: not equal / not zero */

loc_001F46F1: ;
    _fa = (uint32_t)(MEM16(ebx + 0x1B6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x1B6), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4660(); return; } /* jne: not equal / not zero */

loc_001F46FE: ;
    MEM32(ebx + 0x218C) = 0x1C16D68;
    MEM32(ebx + 0x2188) = 0x9BBD8600u;
    MEM32(ebx + 0x160) = 1;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F4721
 * Original: 0x001F4721 - 0x001F478E (109 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4721: ;
    eax = MEM32(ebx + 0x2164);
    _fa = (uint32_t)(MEM32(ebx + 0x1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x1B8), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* je: equal / zero */

loc_001F4733: ;
    eax = MEM32(ebx + 0x2168);
    _fa = (uint32_t)(MEM32(ebx + 0x1BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x1BC), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* je: equal / zero */

loc_001F4745: ;
    PUSH32(esp, 0x001F474Au); RECOMP_ABI_CALL(0x000B188Cu, sub_000B188C); /* call 0x000B188C */

loc_001F474A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* jb: below (unsigned <) */

loc_001F4756: ;
    edx = ZX16(MEM16(ebx + 0x2170));
    eax = ebx + 0x21D8;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    esi = ecx + 1;
    MEM32(eax) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4384(); return; } /* jb: below (unsigned <) */

loc_001F4772: ;
    _fa = (uint32_t)(MEM32(ebx + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x180), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F49C6(); return; } /* jne: not equal / not zero */

loc_001F477F: ;
    MEM32(ebx + 0x160) = 9;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F478E
 * Original: 0x001F478E - 0x001F47B1 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F478E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F478E: ;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F47A7; /* je: equal / zero */

loc_001F4799: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F47A7; /* je: equal / zero */

loc_001F479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F47A7: ;
    MEM32(ebx + 0x160) = 9;

    g_seh_ebp = ebp; sub_001F47B1(); return; /* fallthrough 0x001F47B1 */

}

/**
 * sub_001F47B1
 * Original: 0x001F47B1 - 0x001F487E (205 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F47B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F47B1: ;
    SET_LO16(eax, MEM16(ebx + 0x2172));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F47CC; /* je: equal / zero */

loc_001F47BD: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM32(ebx + 0x21DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21DC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A02(); return; } /* jae: above or equal (unsigned >=) */

loc_001F47CC: ;
    eax = MEM32(ebx + 0x216);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F40 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4660(); return; } /* ja: above (unsigned >) */

loc_001F47DD: ;
    _fa = (uint32_t)(MEM32(ebx + 0x21DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21DC), 0x200 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A02(); return; } /* jae: above or equal (unsigned >=) */

loc_001F47ED: ;
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + 0x21C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21C0), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4A02(); return; } /* jb: below (unsigned <) */

loc_001F47FC: ;
    edi = MEM32(ebx + 0x21BC);
    eax = edi + 0x2E;
    MEM32(ebx + 0x21A) = eax;
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    esi = ebx + 0x1F0;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = MEM32(ebx + 0x21BC);
    eax = MEM32(ebx + 0x21DC);
    MEM32(ebx + eax * 4 + 0x21E0) = ecx;
    ecx = MEM32(ebx + 0x216);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x21BC) = MEM32(ebx + 0x21BC) + 0x2E;
    _fa = (uint32_t)(MEM32(ebx + 0x21BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebx + 0x21BC);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x21E;
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
    eax = MEM32(ebx + 0x216);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x21BC) = MEM32(ebx + 0x21BC) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x21BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFD2u);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x21C0) = MEM32(ebx + 0x21C0) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x21C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x21DC) = MEM32(ebx + 0x21DC) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x21DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x160) = 6;
    g_seh_ebp = ebp; sub_001F4384(); return; /* tail jmp 0x001F4384 */

}

/**
 * sub_001F487E
 * Original: 0x001F487E - 0x001F4896 (24 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F487E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F487E: ;
    eax = MEM32(ebx + 0x19C);
    MEM32(ebx + 0x2188) = eax;
    eax = MEM32(ebx + 0x1A0);
    MEM32(ebx + 0x218C) = eax;

    g_seh_ebp = ebp; sub_001F4896(); return; /* fallthrough 0x001F4896 */

}

/**
 * sub_001F4896
 * Original: 0x001F4896 - 0x001F4900 (106 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4896(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4896: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = ebx + 0x2174;
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xB4));
    MEM32(ebp + -28) = 0x400000;
    PUSH32(esp, MEM32(eax + 0xB0));
    PUSH32(esp, 0xAA6CEC);
    PUSH32(esp, MEM32(ebx + 0x21CC));
    PUSH32(esp, MEM32(ebx + 0x21C8));
    PUSH32(esp, 0x001F48E9u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F48E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F48F1: ;
    MEM32(ebx + 0x160) = 2;
    g_seh_ebp = ebp; sub_001F45ED(); return; /* tail jmp 0x001F45ED */

}

/**
 * sub_001F4900
 * Original: 0x001F4900 - 0x001F49C6 (198 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4900: ;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F4914; /* je: equal / zero */

loc_001F490B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F4914: ;
    _fa = (uint32_t)(MEM32(ebx + 0x21AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x21AC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4975; /* je: equal / zero */

loc_001F491D: ;
    PUSH32(esp, MEM32(ebx + 0x170));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0x174));
    PUSH32(esp, 0x001F4931u); RECOMP_ABI_CALL(0x0020A63Au, sub_0020A63A); /* call 0x0020A63A */

loc_001F4931: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F4939: ;
    SET_LO16(eax, MEM16(ebx + 0x21B0));
    MEM16(ebx + 0x196) = LO16(eax);
    eax = MEM32(ebx + 0x216C);
    MEM32(ebx + 0x198) = eax;
    eax = MEM32(ebx + 0x21A4);
    MEM32(ebx + 0x19C) = eax;
    eax = MEM32(ebx + 0x21A8);
    MEM32(ebx + 0x178) = 5;
    MEM32(ebx + 0x1A0) = eax;

loc_001F4975: ;
    edi = ebx + 0x1A4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F4981u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F4981: ;
    _fb = (uint32_t)(0x254D3800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(0x254D3800)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 0x254D3800;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(0x19) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0);
    eax = ebx + 0x190;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x164));
    PUSH32(esp, MEM32(ebx + 0x168));
    PUSH32(esp, 0x001F49AAu); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F49AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F49B2: ;
    PUSH32(esp, 5);
    POP32(esp, eax);
    MEM32(ebx + 0x16C) = eax;
    MEM32(ebx + 0x160) = eax;
    g_seh_ebp = ebp; sub_001F45ED(); return; /* tail jmp 0x001F45ED */

}

/**
 * sub_001F49C6
 * Original: 0x001F49C6 - 0x001F4A02 (60 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F49C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F49C6: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x17C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x170));
    PUSH32(esp, MEM32(ebx + 0x174));
    PUSH32(esp, 0x001F49E1u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001F49E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A69(); return; } /* jl: less (signed <) */

loc_001F49E9: ;
    MEM32(ebx + 0x178) = 7;
    MEM32(ebx + 0x160) = 8;
    g_seh_ebp = ebp; sub_001F45ED(); return; /* tail jmp 0x001F45ED */

}

/**
 * sub_001F4A02
 * Original: 0x001F4A02 - 0x001F4A17 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A02: ;
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x21C4) = 0x1500F1;
    g_seh_ebp = ebp; sub_001F45ED(); return; /* tail jmp 0x001F45ED */

}

/**
 * sub_001F4A17
 * Original: 0x001F4A17 - 0x001F4A59 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A17: ;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A30; /* je: equal / zero */

loc_001F4A22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A30; /* je: equal / zero */

loc_001F4A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F4A30: ;
    eax = MEM32(ebx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A44; /* je: equal / zero */

loc_001F4A3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F45ED(); return; } /* jne: not equal / not zero */

loc_001F4A44: ;
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x21C4) = 0x1500F0;
    g_seh_ebp = ebp; sub_001F45ED(); return; /* tail jmp 0x001F45ED */

}

/**
 * sub_001F4A59
 * Original: 0x001F4A59 - 0x001F4A60 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A59: ;
    eax = 0x80150007u;
    g_seh_ebp = ebp; sub_001F4A69(); return; /* tail jmp 0x001F4A69 */

}

/**
 * sub_001F4A60
 * Original: 0x001F4A60 - 0x001F4A69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A60: ;
    eax = 0x80150007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A79(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F4A69(); return; /* fallthrough 0x001F4A69 */

}

/**
 * sub_001F4A65
 * Original: 0x001F4A65 - 0x001F4A69 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4A79(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F4A69(); return; /* fallthrough 0x001F4A69 */

}

/**
 * sub_001F4A69
 * Original: 0x001F4A69 - 0x001F4A79 (16 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A69: ;
    MEM32(ebx + 0x21C4) = eax;
    MEM32(ebx + 0x160) = 0xB;

    g_seh_ebp = ebp; sub_001F4A79(); return; /* fallthrough 0x001F4A79 */

}

/**
 * sub_001F4A79
 * Original: 0x001F4A79 - 0x001F4A80 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4A79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4AB0
 * Original: 0x001F4AB0 - 0x001F4ACB (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F4AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4AB0: ;
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
 * sub_001F4ACB
 * Original: 0x001F4ACB - 0x001F4B3A (111 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4ACB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4ACB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F4AE3; /* je: equal / zero */

loc_001F4ADD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4AE3u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F4AE3: ;
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4AF5; /* je: equal / zero */

loc_001F4AED: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4AF5u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F4AF5: ;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4B07; /* je: equal / zero */

loc_001F4AFF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4B07u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F4B07: ;
    eax = MEM32(esi + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4B19; /* je: equal / zero */

loc_001F4B11: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4B19u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F4B19: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4B24u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F4B24: ;
    MEM32(edi + 0x1398) = MEM32(edi + 0x1398) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x1398)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F4B33u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F4B33: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4B3A
 * Original: 0x001F4B3A - 0x001F4B53 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F4B3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4B3A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4B53(); return; } /* jne: not equal / not zero */

loc_001F4B49: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F4D3F(); return; /* tail jmp 0x001F4D3F */

}

/**
 * sub_001F4B53
 * Original: 0x001F4B53 - 0x001F4B8E (59 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4B53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4B53: ;
    eax = MEM32(ebp + 0x24);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2009);
    _fb = (uint32_t)(0x29E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x29E0)) >> 32) & 1);
    eax = eax + 0x29E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4B7Bu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F4B7B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4B8E(); return; } /* jne: not equal / not zero */

loc_001F4B84: ;
    eax = 0x80150008u;
    g_seh_ebp = ebp; sub_001F4D3D(); return; /* tail jmp 0x001F4D3D */

}

/**
 * sub_001F4B8E
 * Original: 0x001F4B8E - 0x001F4BBD (47 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4B8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4B8E: ;
    eax = edi + 0x1398;
    MEM32(ebp + -8) = eax;
    eax = 0;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x18);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F4BBD(); return; } /* je: equal / zero */

loc_001F4BAB: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001F4BB3u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F4BB3: ;
    eax = 0x80150009u;
    g_seh_ebp = ebp; sub_001F4D3D(); return; /* tail jmp 0x001F4D3D */

}

/**
 * sub_001F4BBD
 * Original: 0x001F4BBD - 0x001F4C9A (221 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4BBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4BBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(edi + 0x139C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F4BCD; /* jne: not equal / not zero */

loc_001F4BC7: ;
    esi = ebx + 0x29E0;

loc_001F4BCD: ;
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x21C4) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001F4BE1u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F4BE1: ;
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 0x21C8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x21CC) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx) = 0x1F42AC;
    MEM32(ebx + 4) = 0x1F4ACB;
    MEM32(ebx + 0xC4) = eax;
    MEM32(ebx + 0xC0) = esi;
    MEM32(ebx + 0x21B8) = eax;
    MEM32(ebx + 0x21B4) = esi;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x2184) = MEM32(ebx + 0x2184) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x2184)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    MEM32(ebx + 0x217C) = eax;
    MEM32(ebx + 0x2180) = 0x7FFFFFFF;
    MEM32(ebx + 0x218C) = 0x1C16D68;
    MEM32(ebx + 0x2188) = 0x9BBD8600u;
    PUSH32(esp, 0x001F4C56u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F4C56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C82; /* je: equal / zero */

loc_001F4C5A: ;
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4C82; /* jne: not equal / not zero */

loc_001F4C68: ;
    ecx = MEM32(eax);
    MEM32(ebx + 0x2174) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x2178) = ecx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ebx + 0x21D0) = LO8(eax);

loc_001F4C82: ;
    eax = MEM32(ebx + 0x2174);
    eax = eax | MEM32(ebx + 0x2178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F4C9A(); return; } /* jne: not equal / not zero */

loc_001F4C90: ;
    esi = 0x80150006u;
    g_seh_ebp = ebp; sub_001F4D24(); return; /* tail jmp 0x001F4D24 */

}

/**
 * sub_001F4C9A
 * Original: 0x001F4C9A - 0x001F4D24 (138 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4C9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4C9A: ;
    eax = MEM32(ebp + 0x14);
    esi = eax;
    edi = ebx + 0x2164;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(ebp + -4);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x2194) = MEM32(ebx + 0x2194) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x2194)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x2190) = MEM32(ebx + 0x2190) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x2190)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x2198) = eax;
    eax = ebx + 0x164;
    PUSH32(esp, eax);
    eax = ebx + 0x168;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM16(ebx + 0x219C) = LO16(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    MEM16(ebx + 0x219E) = 0x200;
    PUSH32(esp, 0x001F4CEFu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F4CEF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4D21; /* jl: less (signed <) */

loc_001F4CF5: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x170;
    PUSH32(esp, eax);
    eax = ebx + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x20));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    MEM32(ebx + 0x16C) = edi;
    PUSH32(esp, 0x001F4D1Bu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F4D1B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F4D2E(); return; } /* jge: greater or equal (signed >=) */

loc_001F4D21: ;
    edi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001F4D24(); return; /* fallthrough 0x001F4D24 */

}

/**
 * sub_001F4D24
 * Original: 0x001F4D24 - 0x001F4D2E (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4D24: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001F4D2Cu); RECOMP_ABI_CALL(0x001F4ACBu, sub_001F4ACB); /* call 0x001F4ACB */

loc_001F4D2C: ;
    g_seh_ebp = ebp; sub_001F4D3B(); return; /* tail jmp 0x001F4D3B */

}

/**
 * sub_001F4D2E
 * Original: 0x001F4D2E - 0x001F4D3B (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4D2E: ;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0x178) = edi;
    MEM32(eax) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F4D3B(); return; /* fallthrough 0x001F4D3B */

}

/**
 * sub_001F4D3B
 * Original: 0x001F4D3B - 0x001F4D3D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4D3B: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001F4D3D(); return; /* fallthrough 0x001F4D3D */

}
